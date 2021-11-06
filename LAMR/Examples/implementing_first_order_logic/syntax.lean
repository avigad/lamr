import LAMR.Util.FirstOrder

/-
First-order terms.
-/

namespace hidden

-- textbook: FOTerm
inductive FOTerm
  | var : String → FOTerm
  | app : String → List FOTerm → FOTerm
  deriving Repr, Inhabited, BEq
-- end

end hidden

-- textbook: FOTerm syntax
def ex1 := term!{ %x }
def ex2 := term!{ c }
def ex3 := term!{ f(f(a, %x), f(g(c, f(%y, d)), b)) }

#print ex1
#print ex2
#print ex3

#eval ex1
#eval ex2
#eval ex3
-- end

/-
Assignments
-/

namespace hidden

-- textbook: FOAssignment
def FOAssignment α := String → α
-- end

end hidden

-- textbook: assign syntax
#eval assign!{x ↦ 3, y ↦ 5, z ↦ 2}
-- end

-- textbook: assign syntax as FOAssignment
def assign1 : FOAssignment Nat := assign!{x ↦ 3, y ↦ 5, z ↦ 2}
#check assign1
#eval  assign1 "x"

#check (assign!{x ↦ 3, y ↦ 5, z ↦ 2} : FOAssignment Nat)

#check @id (FOAssignment Nat) assign!{x ↦ 3, y ↦ 5, z ↦ 2}

#check show FOAssignment Nat from assign!{x ↦ 3, y ↦ 5, z ↦ 2}

#check let this : FOAssignment Nat := assign!{x ↦ 3, y ↦ 5, z ↦ 2}
       this
-- end


/-
Substitution.
-/

namespace hidden
open FOTerm

-- textbook: subst
partial def subst (σ : FOAssignment FOTerm) : FOTerm → FOTerm
  | var x   => σ x
  | app f l => app f (l.map (subst σ))
-- end

end hidden

-- textbook: subst example
#eval ex3.subst assign!{x ↦ term!{h(a)}, y ↦ term!{f(a, h(a), d)}}
-- end

/-
First-order formulas
-/

#check fo!{ r(x, y) ∧ r(x, z) → p(z) ∨ ⊤ }
#check fo!{ ∀ x. ∃ y. r (x, y) ∨ p(x) }

#eval fo!{ r(x, y) ∧ r(x, z) → p(z) ∨ ⊤ }
#eval fo!{ ∀ x. ∃ y. r (x, y) ∨ p(x) }



