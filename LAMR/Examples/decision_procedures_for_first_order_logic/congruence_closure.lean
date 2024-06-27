import LAMR

/-! An implementation of congruence closure
based on ch. 4.4. of John Harrison's handbook [1].

Suppose `s₁, t₁, …, sₙ, tₙ, s, t` are ground terms
of a first-order language,
meaning they do not contain variables.

It turns out that it is then decidable
whether `s₁ ∼ t₁, …, sₙ ∼ tₙ ⊨ s ∼ t` semantically,
and that this is the case if and only if
there exists a proof of `s₁ ∼ t₁, …, sₙ ∼ tₙ ⊢ s ∼ t`
using a quite restricted set of inference rules
due to Birkhoff.
(Here `∼` means equality in the first-order language
to disambiguate from Lean's own equality `=`.)

Congruence closure provides a decision procedure
for this problem.
It starts by storing all the subterms of `sᵢ, tᵢ`,
and then merges them into equivalence classes
implied by the assumed equalities
and Birkhoff's rules
until a fixpoint is reached.
It is described well in the handbook [1].

[1] Harrison J. *Handbook of Practical Logic and Automated Reasoning.* Cambridge University Press, 2009. -/

open Lean (HashSet)
open Lean (HashMap)

def HashSet.union [BEq α] [Hashable α] (a b : HashSet α) : HashSet α :=
  a.fold (init := b) fun acc x => acc.insert x

/-- Compute all the subterms of a term,
including the term itself. -/
partial def subterms : FOTerm → HashSet FOTerm :=
  go HashSet.empty
where
  go (acc : HashSet FOTerm) : FOTerm → HashSet FOTerm
    | tm@(FOTerm.app _ args) => args.foldl (init := acc.insert tm) go
    | tm => acc.insert tm

/-- State of the congruence closure algorithm. -/
structure CCState where
  /-- The equivalence relation on terms
  recognized at the current stage of the algorithm. -/
  eqv : DisjointSet FOTerm
  /-- The predecessor function
  maps each canonical representative `s`
  to the subset of terms appearing in the original problem
  which have some `s'` s.t. `[s'] = s` as an immediate subterm. -/
  pfn : HashMap FOTerm (HashSet FOTerm)

/-- Stateful wrapper around `DisjointSet.canonize`. -/
def canonize (s : FOTerm) : StateM CCState FOTerm := do
  let st ← get
  let (eqv', s') := st.eqv.canonize s
  set { st with eqv := eqv' }
  return s'

/-- Stateful wrapper around `DisjointSet.equivalent`. -/
def equivalent (s t : FOTerm) : StateM CCState Bool := do
  let s' ← canonize s
  let t' ← canonize t
  return s' == t'

/-- Stateful wrapper around `DisjointSet.union`. -/
def equate (s t : FOTerm) : StateM CCState Unit := do
  let st ← get
  let eqv' := st.eqv.union s t
  set { st with eqv := eqv' }

/-- Return the predecessors of `s`. See `pfn`. -/
def preds (s : FOTerm) : StateM CCState (HashSet FOTerm) := do
  let st ← get
  return st.pfn.findD s HashSet.empty

/-- Set the predecessors of `s`. See `pfn`. -/
def setPreds (s : FOTerm) (ts : HashSet FOTerm) : StateM CCState Unit :=
  modify fun st => { st with pfn := st.pfn.insert s ts }

/-- Add a predecessor `p` of `s`, inserting `s` into `pfn` if needed. See `pfn`. -/
def addPred (p s : FOTerm) : StateM CCState Unit :=
  modify fun st => { st with pfn := st.pfn.insert s (st.pfn.findD s HashSet.empty |>.insert p) }

/-- Add `p` as an immediate predecessor
of each of its arguments to `pfn`. -/
def initPreds : FOTerm → StateM CCState Unit
  | p@(FOTerm.app _ args) =>
    for s in args do
      addPred p s
  | _ => return ()

/-- Given two function application terms `fn₁(args₁)` and `fn₂(args₂)`,
return `true` if the current equivalence relation
together with one application of the congruence rule
imply that `fn₁(args₁)` and `fn₂(args₂)` are equivalent.
Otherwise return `false`. -/
def congruent : FOTerm → FOTerm → StateM CCState Bool
  | FOTerm.app fn₁ args₁, FOTerm.app fn₂ args₂ =>
    pure (fn₁ == fn₂) <&&>
    pure (args₁.length == args₂.length) <&&>
    (args₁.zip args₂ |>.allM fun (a, b) => equivalent a b)
  | _, _ => return false

/-- Update the congruence closure state
to the least congruent relation containing the current one
and the new equivalence `s ∼ t`. -/
partial def emerge (s t : FOTerm) : StateM CCState Unit := do
  let s' ← canonize s
  let t' ← canonize t
  if s' == t' then return
  else
    let sp ← preds s'
    let tp ← preds t'
    equate s t
    let st' ← canonize s'
    let newPreds :=(sp.fold (init := tp) fun acc r => acc.insert r)
    setPreds st' newPreds
    for u in sp do
      for v in tp do
        if ← congruent u v then
          emerge u v

/-- Execute the congruence closure algorithm
assuming an empty initial state. -/
def computeCC (eqs : List (FOTerm × FOTerm)) (goal : FOTerm × FOTerm) : StateM CCState Unit := do
  for (s, t) in eqs do
    for st in subterms t do
      initPreds st
    for ss in subterms s do
      initPreds ss
  for ss in subterms goal.fst do
    initPreds ss
  for st in subterms goal.snd do
    initPreds st
  for (s, t) in eqs do
    emerge s t

/-- Run the congruence closure algorithm. -/
def runCC (eqs : List (FOTerm × FOTerm)) (goal : FOTerm × FOTerm) : CCState :=
  let st : CCState := {
    eqv := DisjointSet.singletons FOTerm
    pfn := HashMap.empty
  }
  computeCC eqs goal |>.run st |>.snd

/-- Prove that `s₁ ∼ t₁, s₂ ∼ t₂, … ⊨ s ∼ t` if true,
otherwise return `none`.
All terms involved must be ground terms. -/
def decideCondEq (eqs : List (FOTerm × FOTerm)) (goal : FOTerm × FOTerm) : Bool :=
  let { eqv, .. } := runCC eqs goal
  eqv.equivalent goal.fst goal.snd |>.snd

-- Should be true
#eval decideCondEq [(term!{f(f(f(f(f(c)))))}, term!{c}), (term!{f(f(f(c)))}, term!{c})] (term!{f(c)}, term!{c})
-- Should be true
#eval decideCondEq [(term!{f(c)}, term!{c})] (term!{f(f(c))}, term!{f(c)})
-- Should be false
#eval decideCondEq [(term!{f(f(f(f(c))))}, term!{c}), (term!{f(f(c))}, term!{c})] (term!{f(c)}, term!{c})
