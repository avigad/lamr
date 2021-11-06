import LAMR.Util.Misc
open Std
open Lean

/-
First-order terms.
-/

inductive FOTerm
  | var : String → FOTerm
  | app : String → List FOTerm → FOTerm
  deriving Repr, Inhabited, BEq

namespace FOTerm

declare_syntax_cat foterm

syntax "term!{" foterm "}" : term
syntax "%" ident : foterm
syntax ident : foterm
syntax num : foterm
syntax ident "(" foterm,+ ")" : foterm

macro_rules
  | `(term!{ % $x:ident })              => `(var $(quote x.getId.toString))
  | `(term!{ $x:ident })                => `(app $(quote x.getId.toString) [])
  | `(term!{ $n:numLit })                => `(app $(quote <| toString n.isNatLit?.get!) [])
  | `(term!{ $x:ident ( $[$args],* ) }) => do
      let args ← args.mapM fun x => `(term!{ $x })
      `(app $(quote x.getId.toString) [ $args,* ])

private partial def toString : FOTerm → String
  | var x => "%"++x
  | app c [] => c
  | app f ts => f ++ "(" ++ (String.join $ (ts.map toString).intersperse ", ") ++ ")"

instance : ToString FOTerm := ⟨toString⟩

instance : Repr FOTerm where
  reprPrec l _ := s!"term!\{{toString l}}"

end FOTerm

/-
Assignment to first-order variables.
-/

def FOAssignment α := String → α

-- We can also define an assignment using an association list.

-- syntax borrowed from `BoolExpr.lean`
syntax entry := ident " ↦ " term:max

declare_syntax_cat assign

syntax "assign!{" entry,* "}" : term

macro_rules
  | `( assign!{ $[$xs:ident ↦ $vs:term],* } ) =>
    let xs := xs.map fun x => quote x.getId.toString
    `((List.toAssocList [$[( $xs , $vs )],*]))

-- for a term assignment, the default is the identity
instance : Coe (AssocList String FOTerm) (FOAssignment FOTerm) :=
  ⟨fun l x => if l.contains x then l.getA x else FOTerm.var x⟩

instance [Inhabited α] : Coe (AssocList String α) (FOAssignment α) := ⟨fun l => l.getA⟩

namespace FOTerm

/-- Perform substitution `σ` on a term. -/
partial def subst (σ : FOAssignment FOTerm) : FOTerm → FOTerm
  | var x   => σ x
  | app f l => app f (l.map (subst σ))

end FOTerm

/-
First order formulas.
-/

inductive FOForm
  | eq     : FOTerm → FOTerm → FOForm
  | rel    : String → List FOTerm → FOForm
  | tr     : FOForm
  | fls    : FOForm
  | neg    : FOForm → FOForm
  | conj   : FOForm → FOForm → FOForm
  | disj   : FOForm → FOForm → FOForm
  | impl   : FOForm → FOForm → FOForm
  | biImpl : FOForm → FOForm → FOForm
  | all    : String → FOForm → FOForm
  | ex     : String → FOForm → FOForm

  deriving Repr, BEq, Inhabited

namespace FOForm

declare_syntax_cat foform

syntax "fo!{" foform "}"  : term

syntax     "⊤"                       : foform
syntax     "⊥"                       : foform
syntax:50  foterm:51 " = " foterm:50 : foform
syntax:max "¬" foform:40             : foform
syntax:35  foform:36 " ∧ " foform:35 : foform
syntax:30  foform:31 " ∨ " foform:30 : foform
syntax:20  foform:21 " → " foform:20 : foform
syntax:20  foform:21 " ↔ " foform:20 : foform
syntax:max "(" foform ")"            : foform
syntax     ident "(" foterm,+ ")"    : foform
syntax:max "∀" ident "."  foform     : foform
syntax:max "∃" ident "."  foform     : foform

macro_rules
  | `(fo!{⊤})              => `(FOForm.tr)
  | `(fo!{⊥})              => `(FOForm.fls)
  | `(fo!{$s:foterm = $t}) => `(FOForm.eq term!{$s} term!{$t})
  | `(fo!{¬$p})            => `(FOForm.neg fo!{$p})
  | `(fo!{$p ∧ $q})        => `(FOForm.conj fo!{$p} fo!{$q})
  | `(fo!{$p ∨ $q})        => `(FOForm.disj fo!{$p} fo!{$q})
  | `(fo!{$p → $q})        => `(FOForm.impl fo!{$p} fo!{$q})
  | `(fo!{$p ↔ $q})        => `(FOForm.biImpl fo!{$p} fo!{$q})
  | `(fo!{($p:foform)})    => `(fo!{$p})
  | `(fo!{ $x:ident ( $[$args],* ) }) => do
      let args ← args.mapM fun x => `(term!{ $x })
      `(rel $(quote x.getId.toString) [ $args,* ])
  | `(fo!{ ∀ $x:ident . $p:foform }) => `(all $(quote x.getId.toString) fo!{$p})
  | `(fo!{ ∃ $x:ident . $p:foform }) => `(ex $(quote x.getId.toString) fo!{$p})

private partial def toString : FOForm → String
  | eq s t   => s.toString ++ " = " ++ t.toString
  | rel r ts => r ++ "(" ++ (String.join $ (ts.map FOTerm.toString).intersperse ", ") ++ ")"
  | tr       => "⊤"
  | fls      => "⊥"
  | neg p    => "(¬" ++ toString p ++ ")"
  | conj p q => "(" ++ toString p ++ " ∧ " ++ toString q ++ ")"
  | disj p q => "(" ++ toString p ++ " ∨ " ++ toString q ++ ")"
  | impl p q => "(" ++ toString p ++ " → " ++ toString q ++ ")"
  | biImpl p q => "(" ++ toString p ++ " ↔ " ++ toString q ++ ")"
  | all x p  => "∀ " ++ x ++ "." ++ toString p
  | ex x p  => "∃ " ++ x ++ "." ++ toString p

instance : ToString FOForm := ⟨FOForm.toString⟩

instance : Repr FOForm where
  reprPrec p _ := s!"fo!\{{toString p}}"

end FOForm