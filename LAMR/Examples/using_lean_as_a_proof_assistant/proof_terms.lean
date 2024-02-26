import Mathlib.Data.Real.Basic
import Mathlib.Tactic

-- textbook: proof terms
def prod_swap (α β : Type) : α × β → β × α :=
  fun p => Prod.mk (Prod.snd p) (Prod.fst p)

theorem and_swap (P Q : Prop) : P ∧ Q → Q ∧ P :=
  fun h => And.intro (And.right h) (And.left h)

def sum_swap (α β : Type) : Sum α β → Sum β α :=
  fun s => match s with
    | Sum.inl a => Sum.inr a
    | Sum.inr b => Sum.inl b

theorem or_swap (P Q : Prop) : P ∨ Q → Q ∨ P :=
  fun h => match h with
    | Or.inl hp => Or.inr hp
    | Or.inr hq => Or.inl hq
-- end textbook

-- textbook: exploding proof terms
#explode and_swap
#explode or_swap
-- end textbook

variable (P Q R : Prop)

-- textbook: implication
example : P → P ∧ P := fun h => And.intro h h

example (h1 : P → Q) (h2 : P) : Q := h1 h2
-- end textbook

-- textbook: negation and false
example : P → ¬ P → Q := fun h1 h2 => False.elim (h2 h1)
-- end textbook

-- textbook: anonymous constructors
example : P ∧ Q → Q ∧ P :=
  fun h => ⟨h.right, h.left⟩
-- end textbook

-- textbook: tactics and proof terms
example : P → Q → (P ∧ Q) ∨ R := by
  intro h1 h2
  exact Or.inl (And.intro h1 h2)
-- end textbook

-- textbook: more tactics and proof terms
theorem and_swap' : P ∧ Q → Q ∧ P := by
  intro h
  rcases h with ⟨h1, h2⟩
  constructor
  . exact h2
  . exact h1

theorem or_swap' : P ∨ Q → Q ∨ P := by
  intro h
  rcases h with h1 |  h2
  . right; exact h1
  . left; exact h2

#print and_swap'
#explode and_swap'
#print or_swap'
#explode or_swap'
-- end textbook

-- textbook: show_term
example (P Q : Prop) : P ∧ Q → Q ∧ P := by
  intro h
  show_term {
  rcases h with ⟨h1, h2⟩
  constructor
  . exact h2
  . exact h1}
-- end textbook

-- textbook: have
example (h1 : P → Q) (h2 : Q → R) (h3 : P) : R := by
  have hQ : Q := by
    apply h1
    exact h3
  apply h2
  exact hQ
-- end textbook

-- textbook: have again
example (h1 : P → Q) (h2 : Q → R) (h3 : P) : R := by
  have hQ : Q := h1 h3
  exact h2 hQ
-- end textbook

-- textbook: inlining the result
example (h1 : P → Q) (h2 : Q → R) (h3 : P) : R := by
  exact h2 (h1 h3)

example (h1 : P → Q) (h2 : Q → R) (h3 : P) : R := h2 (h1 h3)
-- end textbook

-- textbook: have and show
example (h1 : P → Q) (h2 : Q → R) (h3 : P) : R := by
  have hQ : Q := h1 h3
  show R
  exact h2 hQ

example (h1 : P ∧ Q) (h2 : Q → R) : P ∧ R := by
  rcases h1 with ⟨hP, hQ⟩
  have hR : R := h2 hQ
  show P ∧ R
  exact ⟨hP, hR⟩
-- end textbook
