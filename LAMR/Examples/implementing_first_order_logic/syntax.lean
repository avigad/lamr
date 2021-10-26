import LAMR.Util.FirstOrder

/-
First-order terms.
-/

namespace hidden

inductive FOTerm
  | var : String → FOTerm
  | app : String → List FOTerm → FOTerm
  deriving Repr, Inhabited, BEq

end hidden

def ex1 := term!{ %x }
def ex2 := term!{ c }
def ex3 := term!{ f(a, %x, g(c, %y, d), b) }

#print ex1
#print ex2
#print ex3

#eval ex1
#eval ex2
#eval ex3

/-
Assignments
-/

def assign1Raw := assign!{x ↦ 3, y ↦ 5, z ↦ 2}

#check assign1Raw
#print assign1Raw
#eval assign1Raw

def assign1 : FOAssignment Nat := assign!{x ↦ 3, y ↦ 5, z ↦ 2}

#eval  assign1 "x"

/-
Substitution.
-/

namespace hidden
open FOTerm

partial def subst (σ : FOAssignment FOTerm) : FOTerm → FOTerm
  | var x   => σ x
  | app f l => app f (l.map (subst σ))

end hidden

#eval ex3.subst assign!{x ↦ term!{h(a)}, y ↦ term!{f(a, h(a), d)}}

/-
First-order formulas
-/

#check fo!{ r(x, y) ∧ r(x, z) → p(z) ∨ ⊤ }
#check fo!{ ∀ x. ∃ y. r (x, y) ∨ p(x) }

#eval fo!{ r(x, y) ∧ r(x, z) → p(z) ∨ ⊤ }
#eval fo!{ ∀ x. ∃ y. r (x, y) ∨ p(x) }



