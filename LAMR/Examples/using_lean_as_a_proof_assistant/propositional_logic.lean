-- textbook: imports
import Mathlib.Data.Real.Basic
import Mathlib.Tactic
-- end textbook

-- textbook: Prop
variable (P Q R S : Prop)

#check True
#check False
#check P ∧ Q
#check P ∨ Q
#check P → Q
#check P ↔ Q
#check ¬ P
-- end textbook

-- textbook: id proof
theorem easy : P → P := by
  intro h
  apply h
-- end textbook

-- textbook: id proof 2
example : P → P := by
  intro h
  apply h
-- end textbook

-- textbook: id proof 3
example : P → P := by
  intro h
  exact h
-- end textbook

-- textbook: id proof 4
example : P → P := by
  intro h
  exact h
  done
-- end textbook

-- textbook: apply
example (h1 : P → Q) (h2 : P) : Q := by
  apply h1
  exact h2
-- end textbook

-- textbook: and example
example : P → Q → P ∧ Q := by
  intro hP hQ
  constructor
  . exact hP
  . exact hQ
-- end textbook

-- textbook: another and example
example : P ∧ Q → Q ∧ P := by
  intro h
  rcases h with ⟨hP, hQ⟩
  constructor
  . exact hQ
  . exact hP
-- end textbook

-- textbook: or example
example : P ∨ Q → Q ∨ P := by
  intro h
  rcases h with hP | hQ
  . right
    exact hP
  . left
    exact hQ
-- end textbook

-- textbook: negation
example (h : P → Q) : ¬ Q → ¬ P := by
  intro hnQ
  intro hP
  apply hnQ
  apply h
  exact hP
-- end textbook

-- textbook: ex falso
example (h : False) : P := by
  contradiction

example (h : False) : P := by
  rcases h
-- end textbook

-- textbook: contradiction
example (h1 : P) (h2 : ¬ P) : Q := by
  contradiction

example (h1 : P ∨ Q) (h2 : ¬ P) : Q := by
  rcases h1 with hP | hQ
  . contradiction
  . exact hQ
-- end textbook

-- textbook: by_cases
example (h1 : P → Q) : ¬ P ∨ Q := by
  by_cases hP : P
  . right
    apply h1
    exact hP
  . left
    exact hP

example : ¬ ¬ P → P := by
  intro hnnP
  by_cases hP : P
  . exact hP
  . contradiction
-- end textbook

-- textbook: by_contra
example : ¬ ¬ P → P := by
  intro hnnP
  by_contra hnP
  apply hnnP
  exact hnP
-- end textbook

-- textbook: iff
example (h1 : P ↔ Q) (h2 : P) : Q := by
  rcases h1 with ⟨hpq, _⟩
  apply hpq
  exact h2

example (h1 : P ↔ Q) : Q ↔ P := by
  rcases h1 with ⟨h2, h3⟩
  constructor
  . exact h3
  . exact h2
-- end textbook

-- textbook: tauto
example (h1 : P → Q) : ¬ P ∨ Q := by
  tauto
-- end textbook
