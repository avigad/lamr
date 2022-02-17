import LAMR.Util.Misc
import Std.Data.HashSet
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

def mkConst (c : String) : FOTerm :=
  app c []

declare_syntax_cat foterm

syntax "term!{" foterm "}" : term
syntax "%" ident : foterm
syntax ident : foterm
syntax "s!" interpolatedStr(term) : foterm
syntax "{" term "}" : foterm
syntax num : foterm
syntax ident "(" foterm,+ ")" : foterm
syntax ident "[" term "]" : foterm
syntax "-" foterm : foterm
syntax foterm " - " foterm : foterm
syntax foterm " + " foterm : foterm
syntax foterm " * " foterm : foterm

macro_rules
  | `(term!{ % $x:ident })              => `(var $(quote x.getId.toString))
  | `(term!{ $x:ident })                => `(mkConst $(quote x.getId.toString))
  | `(term!{ { $t:term } })             => `(mkConst (toString $t))
  | `(term!{ s!$s })                    => `(mkConst s!$s)
  | `(term!{ $n:numLit })               => `(mkConst $(quote <| toString n.isNatLit?.get!))
  | `(term!{ $x:ident ( $[$args],* ) }) => do
      let args ← args.mapM fun x => `(term!{ $x })
      `(app $(quote x.getId.toString) [ $args,* ])
  | `(term!{ $x:ident [ $t:term ] }) => do
      `(app $(quote x.getId.toString) $t)
  | `(term!{ - $t:foterm }) => do
      `(app "-" [ term!{ $t } ])
  | `(term!{ $t:foterm - $u:foterm }) => do
      `(app "-" [ term!{ $t }, term!{ $u } ])
  | `(term!{ $t:foterm + $u:foterm }) => do
      `(app "+" [ term!{ $t }, term!{ $u } ])
  | `(term!{ $t:foterm * $u:foterm }) => do
      `(app "*" [ term!{ $t }, term!{ $u } ])

private partial def toString : FOTerm → String
  | var x    => "%" ++ x
  | app c [] => c
  | app "-" [t] => s!"-({toString t})"
  | app "-" [t, u] => s!"({toString t} - {toString u})"
  | app "+" [t, u] => s!"({toString t} + {toString u})"
  | app "*" [t, u] => s!"({toString t} * {toString u})"
  | app f ts => f ++ "(" ++ (String.join $ (ts.map toString).intersperse ", ") ++ ")"

instance : ToString FOTerm := ⟨toString⟩

instance : Repr FOTerm where
  reprPrec l _ := s!"term!\{{toString l}}"

partial def hash : FOTerm → UInt64
  | app fn args =>
    let _ : Hashable FOTerm := ⟨hash⟩
    mixHash 2 <| mixHash (Hashable.hash fn) (Hashable.hash args)
  | var x => mixHash 3 (Hashable.hash x)

instance : Hashable FOTerm := ⟨hash⟩

/-- Returns a list of all free variable occurrences in the term. -/ 
partial def freeVars : FOTerm → List String :=
  go []
where go (acc : List String) : FOTerm → List String
  | var s => s :: acc
  | app _ ts => ts.foldl go acc

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

syntax     "⊤"                        : foform
syntax     "⊥"                        : foform
syntax:50  foterm:51 " = " foterm:50  : foform
syntax:max "¬" foform:40              : foform
syntax:35  foform:36 " ∧ " foform:35  : foform
syntax:30  foform:31 " ∨ " foform:30  : foform
syntax:20  foform:21 " → " foform:20  : foform
syntax:20  foform:21 " ↔ " foform:20  : foform
syntax:max "(" foform ")"             : foform
syntax     ident "(" foterm,+ ")"     : foform
syntax     ident "[" term "]"         : foform
syntax:50  foterm:51 " <= " foterm:50 : foform
syntax:50  foterm:51 " < "  foterm:50 : foform
syntax:50  foterm:51 " >= " foterm:50 : foform
syntax:50  foterm:51 " > "  foterm:50 : foform
syntax:max "∀" ident "."  foform      : foform
syntax:max "∃" ident "."  foform      : foform

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
  | `(fo!{ $x:ident [ $t:term ] }) => do
      `(rel $(quote x.getId.toString) $t)
  | `(fo!{ $t:foterm <= $u:foterm }) => do
      `(rel "<=" [ term!{ $t }, term!{ $u } ])
  | `(fo!{ $t:foterm < $u:foterm }) => do
      `(rel "<" [ term!{ $t }, term!{ $u } ])
  | `(fo!{ $t:foterm >= $u:foterm }) => do
      `(rel ">=" [ term!{ $t }, term!{ $u } ])
  | `(fo!{ $t:foterm > $u:foterm }) => do
      `(rel ">" [ term!{ $t }, term!{ $u } ])
  | `(fo!{ ∀ $x:ident . $p:foform }) => `(all $(quote x.getId.toString) fo!{$p})
  | `(fo!{ ∃ $x:ident . $p:foform }) => `(ex $(quote x.getId.toString) fo!{$p})

private partial def toString : FOForm → String
  | eq s t   => s.toString ++ " = " ++ t.toString
  | rel "<=" [t, u] => s!"({FOTerm.toString t} <= {FOTerm.toString u})"
  | rel "<" [t, u]  => s!"({FOTerm.toString t} < {FOTerm.toString u})"
  | rel ">=" [t, u] => s!"({FOTerm.toString t} >= {FOTerm.toString u})"
  | rel ">" [t, u]  => s!"({FOTerm.toString t} > {FOTerm.toString u})"
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

/-- Returns a list of all free variable occurrences in the formula. -/ 
def freeVars : FOForm → List String :=
  go HashSet.empty
where go (bound : HashSet String) : FOForm → List String
  | eq s t => (s.freeVars ++ t.freeVars).filter fun x => !bound.contains x
  | rel _ ts => ts.map FOTerm.freeVars |>.join.filter fun x => !bound.contains x
  | neg φ => go bound φ
  | conj φ ψ => go bound φ
  | disj φ ψ => go bound φ ++ go bound ψ
  | impl φ ψ => go bound φ ++ go bound ψ
  | biImpl φ ψ => go bound φ ++ go bound ψ
  | all x φ => go (bound.insert x) φ 
  | ex x φ => go (bound.insert x) φ
  | _ => []

/-- Returns the bound variable of the first quantifier found if there is one,
otherwise `none`. -/
def quantifier? : FOForm → Option String :=
  go
where go : FOForm → Option String
  | neg φ => go φ
  | conj φ ψ => go φ <|> go ψ
  | disj φ ψ => go φ <|> go ψ
  | impl φ ψ => go φ <|> go ψ
  | biImpl φ ψ => go φ <|> go ψ
  | all x _ => some x
  | ex x _ => some x
  | _ => none

/-- Returns `true` iff the formula contains no quantifiers and no free variables. -/
def isClosedQuantifierFree (φ : FOForm) : Bool :=
  φ.freeVars.isEmpty ∧ φ.quantifier?.isNone

end FOForm