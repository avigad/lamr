

/-
Sorts
-/

section fol

-- textbook: propositional logic and first-order logic
variable (P Q R : Prop)

#check P ∧ Q
#check P ∨ Q
#check P → Q
#check True
#check False
#check ¬ P
#check P ↔ Q

variable (U : Type)

-- function symbols
variable (f : U → U) (g : U → U → U)

-- a unary predicate and a binary relation
variable (S : U → Prop) (T : U → U → Prop)

#check ∀ x, S x → ∃ y z, y ≠ z ∧ T y (g x z)
-- end: propositional logic and first-order logic

end fol

section sorts
-- textbook: sorts
variable (U1 U2 U3 : Type)
variable (h : U1 → U1 → U2)
variable (Q : U1 → U3 → Prop)
-- end: sorts

-- textbook: geometry with sorts
variable (Point Line Plane : Type)
variable (onl : Point → Line → Prop)

variable (ax1 : ∀ p q : Point, ∃ L : Line, onl p L ∧ onl q L)
variable (ax2 : ∀ p q : Point, ∀ L M : Line, p ≠ q → onl p L ∧ onl q L →
  onl p M → onl q M → L = M)
-- end: geometry with sorts

end sorts

/-
Function types and product types
-/

section

-- textbook: function types
#check Nat → Bool
#check (Nat → Nat) → Nat

variable (f : Nat → Nat) (g : Nat → Bool) (h : (Nat → Nat) → Nat)
-- end: function types

-- textbook: function abstraction and application
-- function abstraction
#check fun x : Nat => x
#check λ x : Nat => x    -- alternate notation

-- function application
#check f 3
#check h f
-- end: function abstraction and application

-- textbook: beta reduction
example : (fun x => f (f x)) (f 3) = f (f (f 3)) := rfl
-- end: beta reduction

-- textbook: product types
variable (p : Nat × Nat)

#check (3, 5)
#check p.1
#check p.2

example : (3, 5).1 = 3 := rfl
-- end: product types

/-
Higher-order logic
-/

section higher_order_logic

-- textbook: quantifiers as predicates
variable (U : Type) (P : U → Prop)

#check (Exists : (U → Prop) → Prop)

example : (∃ x, P x) = Exists P := rfl
-- end: quantifiers as predicates

-- textbook: comprehension as abstraction
variable (f g : U → U) (h : U → U → U)

#check (fun x : U => ∀ y, ∃ z, f (f y) = h x (g z) : U → Prop)
-- end: comprehension as abstraction

end higher_order_logic

/-
Inductive types
-/

namespace inductive_types

-- textbook: definition of Nat
inductive Nat : Type where
  | zero : Nat
  | succ : Nat → Nat
-- end: definition of Nat

-- textbook: definition of BinaryTree
inductive BinaryTree where
  | empty : BinaryTree
  | node : BinaryTree → BinaryTree → BinaryTree
-- end: definition of BinaryTree

-- textbook: definition of List
inductive List (α : Type) where
  | nil : List α
  | cons : α → List α → List α
-- end: definition of List

-- textbook: definition of CBTree
inductive CBTree where
  | leaf : CBTree
  | sup : (Nat → CBTree) → CBTree
-- end: definition of CBTree

end inductive_types

/-
Dependent type theory: types can depend on parameters

So a function can return a type, and we may then have elements of that type
-/

section dependent_type_theory

-- textbook: instances of List
#check List Nat
#check List (Nat × Nat)
#check List (List Nat)
-- end: instances of List

-- textbook: dependence on parameters
variable (n : Nat)

#check Vector (List Nat) 5
#check Vector Nat (n + 3)
#check Fin n
#check Fin (2*n + 5)
-- end: dependence on parameters
