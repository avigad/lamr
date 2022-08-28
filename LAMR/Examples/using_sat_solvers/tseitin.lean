import LAMR.Util.Propositional

namespace hidden

open NnfForm

-- textbook: mkDefs

def defLit (n : Nat) := Lit.pos s!"def_{n}"

def mkDefs : NnfForm → Array NnfForm → Lit × Array NnfForm
  | lit l, defs    => (l, defs)
  | conj A B, defs =>
      let ⟨fA, defs1⟩ := mkDefs A defs
      let ⟨fB, defs2⟩ := mkDefs B defs1
      add_def conj (lit fA) (lit fB) defs2
  | disj A B, defs =>
      let ⟨fA, defs1⟩ := mkDefs A defs
      let ⟨fB, defs2⟩ := mkDefs B defs1
      add_def disj (lit fA) (lit fB) defs2
where
  add_def (op : NnfForm → NnfForm → NnfForm) (fA fB : NnfForm) (defs : Array NnfForm) :=
    match defs.findIdx? ((. == op fA fB)) with
    | some n => (defLit n, defs)
    | none   => let newdefs := defs.push (op fA fB)
                (defLit (newdefs.size - 1), newdefs)

-- end: mkDefs

end hidden

-- textbook: ex1
def ex1 := prop!{¬ (p ∧ q ↔ r) ∧ (s → p ∧ t)}.toNnfForm

#eval toString ex1
-- end: ex1

/-
removing extra parentheses, we get

  (p ∧ q ∧ ¬ r) ∨ (r ∧ (¬ p ∨ ¬ q)) ∧ (¬ s ∨ (p ∧ t))
-/

-- textbook: ex1 defs
#eval  ex1.mkDefs #[]

def printDefs (A : NnfForm) : IO Unit := do
  let ⟨fm, defs⟩ := A.mkDefs #[]
  IO.println s!"{fm}, where"
  for i in [:defs.size] do
    IO.println s!"def_{i} := {defs[i]!}"

#eval printDefs ex1

/-
output:

def_7, where
def_0 := (p ∧ q)
def_1 := (def_0 ∧ (¬ r))
def_2 := ((¬ p) ∨ (¬ q))
def_3 := (r ∧ def_2)
def_4 := (def_1 ∨ def_3)
def_5 := (p ∧ t)
def_6 := ((¬ s) ∨ def_5)
def_7 := (def_4 ∧ def_6)
-/
-- end: ex1 defs

namespace hidden

open NnfForm

-- This shows how to turn an if-and-only-if into a CNF formula.

def iffToCnf (A B : NnfForm) : CnfForm :=
  (conj (disj A.neg B) (disj B.neg A)).toCnfForm

def defsToCnf (defs : Array NnfForm) : CnfForm := aux defs.toList 0
  where aux : List NnfForm → Nat → CnfForm
  | [],          n => []
  | nnf :: nnfs, n => iffToCnf (lit (defLit n)) nnf ++ aux nnfs (n + 1)

-- With the Plaisted-Greenbaum optimization, we only need implications.

-- textbook: implToCnf
def implToCnf (A B : NnfForm) : CnfForm :=
  (disj A.neg B).toCnfForm

def defsImplToCnf (defs : Array NnfForm) : CnfForm := aux defs.toList 0
  where aux : List NnfForm → Nat → CnfForm
  | [],          n => []
  | nnf :: nnfs, n => implToCnf (lit (defLit n)) nnf ++ aux nnfs (n + 1)
-- end: implToCnf

-- textbook: toCnf
def orToCnf : NnfForm → Clause → Array NnfForm → Clause × Array NnfForm
  | lit Lit.tr,  cls, defs  => ([Lit.tr], defs)
  | lit Lit.fls, cls, defs  => (cls, defs)
  | lit l, cls, defs        => (l :: cls, defs)
  | disj A B, cls, defs =>
      let ⟨cls1, defs1⟩ := orToCnf A cls defs
      let ⟨cls2, defs2⟩ := orToCnf B cls1 defs1
      (cls1.union' cls2, defs2)
  | A, cls, defs =>
      let ⟨l, defs1⟩ := A.mkDefs defs
      (l::cls, defs1)

def andToCnf : NnfForm → Array NnfForm → CnfForm × Array NnfForm
  | conj A B, defs =>
    let ⟨fA, defs1⟩ := andToCnf A defs
    let ⟨fB, defs2⟩ := andToCnf B defs1
    (fA.union' fB, defs2)
  | A, defs =>
    let ⟨cls, defs1⟩ := orToCnf A [] defs
    ([cls], defs1)

def toCnf (A : NnfForm) : CnfForm :=
  let ⟨cnf, defs⟩ := andToCnf A #[]
  cnf.union' (defsImplToCnf defs)
-- end: toCnf

end hidden

-- textbook: ex1.toCnf
#eval toString ex1.toCnf

/-
Here is ex1:

((p ∧ q ∧ ¬ r) ∨ (r ∧ (¬ p ∨ ¬ q)) ∧ (¬ s ∨ (p ∧ t))

Here is the CNF formula:

def_3 def_1,
def_4 -s,
-def_0 p,
-def_0 q,
-def_1 def_0,
-def_1 -r,
-def_2 -p -q,
-def_3 r,
-def_3 def_2,
-r -def_2 def_3,
-def_4 p,
-def_4 t,

Here we check to make sure it works:

def_0 := p ∧ q
def_1 := p ∧ q ∧ ¬ r
def_2 := ¬ p ∨ ¬ q
def_3 := r ∧ (¬ p ∨ ¬ q)
def_4 := p ∧ t

def_3 def_1 := (p ∧ q ∧ ¬ r) ∨ (p ∧ q ∧ ¬ r)
def_4 -s    := ¬ s ∨ (p ∧ t)

Each ':=' is really an implication.
-/
-- end: ex1.toCnf