import Mathlib
import LAMR.Util.Misc

/-
Propositional formulas.
-/

inductive PropForm
  | var    : String → PropForm
  | tr     : PropForm
  | fls    : PropForm
  | neg    : PropForm → PropForm
  | conj   : PropForm → PropForm → PropForm
  | disj   : PropForm → PropForm → PropForm
  | impl   : PropForm → PropForm → PropForm
  | biImpl : PropForm → PropForm → PropForm
  deriving Repr, DecidableEq, Inhabited

namespace PropForm

declare_syntax_cat propform

syntax "prop!{" propform "}"  : term

syntax:max ident                        : propform
syntax "⊤"                              : propform
syntax "⊥"                              : propform
syntax:35 propform:36 " ∧ " propform:35 : propform
syntax:30 propform:31 " ∨ " propform:30 : propform
syntax:20 propform:21 " → " propform:20 : propform
syntax:20 propform:21 " ↔ " propform:20 : propform
syntax:max "¬ " propform:40             : propform
syntax:max "(" propform ")"             : propform

macro_rules
  | `(prop!{$p:ident}) => `(PropForm.var $(Lean.quote p.getId.toString))
  | `(prop!{⊤})        => `(ProfForm.tr)
  | `(prop!{⊥})        => `(ProfForm.fls)
  | `(prop!{¬ $p})     => `(PropForm.neg prop!{$p})
  | `(prop!{$p ∧ $q})  => `(PropForm.conj prop!{$p} prop!{$q})
  | `(prop!{$p ∨ $q})  => `(PropForm.disj prop!{$p} prop!{$q})
  | `(prop!{$p → $q})  => `(PropForm.impl prop!{$p} prop!{$q})
  | `(prop!{$p ↔ $q})  => `(PropForm.biImpl prop!{$p} prop!{$q})
  | `(prop!{($p:propform)}) => `(prop!{$p})

private def toString : PropForm → String
  | var s    => s
  | tr       => "⊤"
  | fls      => "⊥"
  | neg p    => "(¬ " ++ toString p ++ ")"
  | conj p q => "(" ++ toString p ++ " ∧ " ++ toString q ++ ")"
  | disj p q => "(" ++ toString p ++ " ∨ " ++ toString q ++ ")"
  | impl p q => "(" ++ toString p ++ " → " ++ toString q ++ ")"
  | biImpl p q => "(" ++ toString p ++ " ↔ " ++ toString q ++ ")"

instance : ToString PropForm := ⟨PropForm.toString⟩

end PropForm

/-
Literals.
-/

inductive Lit
  | tr  : Lit
  | fls : Lit
  | pos : String → Lit
  | neg : String → Lit
  deriving Repr, DecidableEq, Inhabited

namespace Lit

declare_syntax_cat varlit

syntax ident : varlit
syntax "-" ident : varlit

declare_syntax_cat proplit

syntax "lit!{" proplit "}" : term
syntax "⊤" : proplit
syntax "⊥" : proplit
syntax varlit : proplit

macro_rules
  | `(lit!{ ⊤ })           => `(tr)
  | `(lit!{ ⊥ })           => `(fls)
  | `(lit!{ - $x:ident })  => `(neg $(Lean.quote x.getId.toString))
  | `(lit!{ $x:ident })    => `(pos $(Lean.quote x.getId.toString))

instance : ToString Lit :=
  ⟨fun
    | tr    => "⊤"
    | fls   => "⊥"
    | pos s => s
    | neg s => "-" ++ s ⟩

instance : Repr Lit where
  reprPrec l _ := s!"lit!\{{toString l}}"

def negate : Lit → Lit
  | tr   => fls
  | fls  => tr
  | pos s => neg s
  | neg s => pos s

instance : Neg Lit :=
  ⟨negate⟩

def name : Lit → String
  | tr => "⊤"
  | fls => "⊥"
  | pos s => s
  | neg s => s

def ofDimacs? (s : String) : Option Lit :=
  if s.isEmpty then none
  else if s.get! ⟨0⟩ == '-' then neg (s.drop 1)
  else pos s

instance : Hashable Lit where
  hash l := hash (toString l)

end Lit

/-
Formulas in Negation-normal form.
-/

inductive NnfForm :=
  | lit  (l : Lit)       : NnfForm
  | conj (p q : NnfForm) : NnfForm
  | disj (p q : NnfForm) : NnfForm
  deriving Repr, DecidableEq, Inhabited

namespace NnfForm

declare_syntax_cat nnfform

syntax "nnf!{" nnfform "}"  : term

syntax:max ident                        : nnfform
syntax "⊤"                              : nnfform
syntax "⊥"                              : nnfform
syntax:35 nnfform:36 " ∧ " nnfform:35   : nnfform
syntax:30 nnfform:31 " ∨ " nnfform:30   : nnfform
syntax:max "(" nnfform ")"              : nnfform
syntax:max "¬ " ident                   : nnfform

macro_rules
  | `(nnf!{$p:ident})   => `(NnfForm.lit (Lit.pos $(Lean.quote p.getId.toString)))
  | `(nnf!{¬ $p:ident}) => `(NnfForm.lit (Lit.neg $(Lean.quote p.getId.toString)))
  | `(nnf!{⊤})          => `(NnfForm.tr)
  | `(nnf!{⊥})          => `(NnfForm.fls)
  | `(nnf!{$p ∧ $q})    => `(NnfForm.conj nnf!{$p} nnf!{$q})
  | `(nnf!{$p ∨ $q})    => `(NnfForm.disj nnf!{$p} nnf!{$q})
  | `(nnf!{($p:nnfform)}) => `(nnf!{$p})

private def toString : NnfForm → String
  | lit (Lit.pos s)  => s
  | lit (Lit.neg s)  => "(¬ " ++ s ++ ")"
  | lit Lit.tr       => "⊤"
  | lit Lit.fls      => "⊥"
  | conj p q         => "(" ++ toString p ++ " ∧ " ++ toString q ++ ")"
  | disj p q         => "(" ++ toString p ++ " ∨ " ++ toString q ++ ")"

instance : ToString NnfForm := ⟨toString⟩

instance : Repr NnfForm where
  reprPrec f _ := s!"nnf!\{{toString f}}"

def neg : NnfForm → NnfForm
  | lit l    => lit l.negate
  | conj p q => disj (neg p) (neg q)
  | disj p q => conj (neg p) (neg q)

end NnfForm

/-
Clauses.
-/

def Clause := List Lit

namespace Clause

instance : DecidableEq Clause := inferInstanceAs (DecidableEq (List Lit))
instance : Repr Clause := inferInstanceAs (Repr (List Lit))
instance : Inhabited Clause := inferInstanceAs (Inhabited (List Lit))

def mk (ls : List Lit) : Clause := ls

declare_syntax_cat clause

syntax "clause!{" clause "}" : term

syntax proplit* : clause

macro_rules
  | `(clause!{ $[$args]* }) => do
      let args ← args.mapM fun x => `(lit!{ $x })
      `(Clause.mk [ $args,* ])

instance : Repr Clause :=
  ⟨fun c _ => "clause!{" ++ String.intercalate " " (List.map toString c) ++ "}"⟩

instance : ToString Clause :=
  ⟨fun
    | [] => "⊥"
    | c  => "(" ++ " ∨ ".intercalate (List.map toString c) ++ ")"⟩

instance : Hashable Clause :=
  inferInstanceAs (Hashable (List Lit))

end Clause

/- Formulas in CNF. -/

def CnfForm := List Clause

namespace CnfForm

instance : DecidableEq CnfForm := inferInstanceAs (DecidableEq (List Clause))
instance : Repr CnfForm := inferInstanceAs (Repr (List Clause))
instance : Inhabited CnfForm := inferInstanceAs (Inhabited (List Clause))

def mk (cs : List Clause) : CnfForm := cs

declare_syntax_cat cnf

syntax clause,* : cnf

syntax "cnf!{" cnf "}" : term
syntax clause,+ : cnf

macro_rules
  | `(cnf!{ $[$args],* }) => do
      let args ← args.mapM fun x => `(clause!{ $x })
      `(CnfForm.mk [ $args,* ])

instance : Repr CnfForm :=
  ⟨fun cnf _ => "cnf!{" ++ String.intercalate ", " (List.map (toString ∘ repr) cnf) ++ "}"⟩

instance : ToString CnfForm :=
  ⟨fun
    | [] => "⊤"
    | cs => " ∧ ".intercalate (cs.map toString)⟩

instance : Append CnfForm :=
  inferInstanceAs (Append (List Clause))

def disj (cnf1 cnf2 : CnfForm) : CnfForm :=
  (cnf1.map (fun cls => cnf2.map cls.union')).Union

def conj (cnf1 cnf2 : CnfForm) : CnfForm :=
  cnf1.union' cnf2

instance : ForIn m CnfForm (List Lit) :=
  inferInstanceAs (ForIn m (List (List Lit)) (List Lit))

end CnfForm

/-
Assignment to propositional variables
-/

/-- A partial truth assignment. -/
def PropAssignment := List (String × Bool)

instance : Inhabited PropAssignment :=
  inferInstanceAs (Inhabited (List _))

def PropAssignment.mk (vars : List (String × Bool)) : PropAssignment :=
  vars

syntax "propassign!{" varlit,* "}" : term
macro_rules
  | `( propassign!{ $[$vars:varlit],* }) => do
    let vals ← vars.mapM fun
      | `(varlit| $x:ident) => `(($(Lean.quote x.getId.toString), true))
      | `(varlit| -$x:ident) => `(($(Lean.quote x.getId.toString), false))
      | s => panic! s!"unexpected syntax '{s}'"
    `(PropAssignment.mk [$[$vals],*])

instance : Repr PropAssignment where
  reprPrec τ _ :=
    let vars := ", ".intercalate (τ.map fun (x, v) => if v then x else "-" ++ x)
    s!"propassign!\{{vars}}"

instance : ToString PropAssignment where
  toString τ :=
    let mapping := ", ".intercalate <|
      List.map (fun (x, v) => x ++ " ↦ " ++ if v then "⊤" else "⊥") τ
    s!"\{{mapping}}"

def PropAssignment.mem (τ : PropAssignment) (x : String) : Bool :=
  List.any τ (fun (y, _) => x == y)

def PropAssignment.withLit (τ : PropAssignment) : Lit → PropAssignment
  | Lit.pos x => (x, true) :: τ
  | Lit.neg x => (x, false) :: τ
  | _ => panic! "cannot extend assignment with constant"

/-- Return the truth value of `x` at `τ` if assigned, otherwise `none`. -/
def PropAssignment.eval? (τ : PropAssignment) (x : String) : Option Bool := Id.run do
  let τ : List _ := τ
  for (y, v) in τ do
    if y == x then return some v
  return none

/-- Evaluate the total assignment extending `τ` with `⊥` for unassigned variables at `x`. -/
def PropAssignment.eval (τ : PropAssignment) (x : String) : Bool :=
  τ.eval? x |>.getD false

open Lit in
def PropAssignment.evalLit? (τ : PropAssignment) : Lit → Option Bool
  | tr => true
  | fls => false
  | pos x => τ.eval? x
  | neg x => τ.eval? x |>.map (!·)

open Lit in
def PropAssignment.evalLit (τ : PropAssignment) : Lit → Bool
  | tr => true
  | fls => false
  | pos x => τ.eval x
  | neg x => !(τ.eval x)
