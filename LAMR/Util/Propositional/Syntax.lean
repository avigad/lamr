import Mathlib

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
  deriving Repr, DecidableEq

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
Formulas in Negation-normal form.
-/

inductive NnfForm :=
  | var (s : String)     : NnfForm
  | negVar (s : String)  : NnfForm
  | tr                   : NnfForm
  | fls                  : NnfForm
  | conj (p q : NnfForm) : NnfForm
  | disj (p q : NnfForm) : NnfForm
  deriving Repr, DecidableEq

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
  | `(nnf!{$p:ident})   => `(Nnf.var $(Lean.quote p.getId.toString))
  | `(nnf!{¬ $p:ident}) => `(Nnf.negVar $(Lean.quote p.getId.toString))
  | `(nnf!{⊤})          => `(NnfForm.tr)
  | `(nnf!{⊥})          => `(NnfForm.fls)
  | `(nnf!{$p ∧ $q})    => `(Nnf.conj nnf!{$p} nnf!{$q})
  | `(nnf!{$p ∨ $q})    => `(Nnf.disj nnf!{$p} nnf!{$q})
  | `(nnf!{($p:nnfform)}) => `(nnf!{$p})

private def toString : NnfForm → String
  | var s    => s
  | negVar s  => "(¬ " ++ s ++ ")"
  | tr       => "⊤"
  | fls      => "⊥"
  | conj p q => "(" ++ toString p ++ " ∧ " ++ toString q ++ ")"
  | disj p q => "(" ++ toString p ++ " ∨ " ++ toString q ++ ")"

instance : ToString NnfForm := ⟨toString⟩

end NnfForm

/-
Literals.
-/

inductive Lit
  | pos : String → Lit
  | neg : String → Lit
  deriving Repr, DecidableEq

namespace Lit

declare_syntax_cat proplit

syntax "lit!{" proplit "}" : term
syntax ident : proplit
syntax "-" ident : proplit

macro_rules
  | `(lit!{ - $x:ident })  => `(neg $(Lean.quote x.getId.toString))
  | `(lit!{ $x:ident })    => `(pos $(Lean.quote x.getId.toString))

private def toString : Lit → String
  | pos s => s
  | neg s => "-" ++ s

instance : ToString Lit := ⟨toString⟩

end Lit

/-
Clauses.
-/

def Clause := List Lit

namespace Clause

instance : DecidableEq Clause := inferInstanceAs (DecidableEq (List Lit))
instance : Repr Clause := inferInstanceAs (Repr (List Lit))

def mk (ls : List Lit) : Clause := ls

declare_syntax_cat clause

syntax "clause!{" clause "}" : term

syntax proplit*  : clause

macro_rules
  | `(clause!{ $[$args]* }) => do
      let args ← args.mapM fun x => `(lit!{ $x })
      `(Clause.mk [ $args,* ])

private def toString (lits : List Lit) : String :=
  String.intercalate " " (lits.map Lit.toString)

instance : ToString Clause :=
  ⟨toString⟩

end Clause

/- Formulas in CNF. -/

def CnfForm := List Clause

namespace CnfForm

instance : DecidableEq CnfForm := inferInstanceAs (DecidableEq (List Clause))
instance : Repr CnfForm := inferInstanceAs (Repr (List Clause))

def mk (cs : List Clause) : CnfForm := cs

declare_syntax_cat cnf

syntax clause,* : cnf

syntax "cnf!{" cnf "}" : term
syntax clause,+ : cnf

macro_rules
  | `(cnf!{ $[$args],* }) => do
      let args ← args.mapM fun x => `(clause!{ $x })
      `(CnfForm.mk [ $args,* ])

private def toString (cnf : CnfForm) : String :=
  String.intercalate ", " (cnf.map Clause.toString)

instance : ToString CnfForm :=
  ⟨toString⟩

end CnfForm

/-
Assignment to propositional variables
-/

def PropAssignment := String → Bool

def PropAssignment.mk (vars : List String) : PropAssignment :=
fun s => if s ∈ vars then true else false

syntax "propassign!{" ident,* "}" : term
macro_rules
  | `( propassign!{ $[$vars:ident],* }) =>
    let varnames := vars.map fun i => Lean.quote i.getId.toString
    `(PropAssignment.mk [$[( $varnames )],*])
