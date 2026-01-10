import Mathlib.Data.Real.Basic
import Mathlib.Tactic

section
variable (a b c d : Int)
variable (f : Int → Int)

-- textbook: rfl and rw
example : f (a + b) = f (a + b) := by
  rfl

example (h : b = c) : f (a + b) = f (a + c) := by
  rw [h]
-- end textbook

-- textbook: more rw
example (h1 : a = c) (h2 : b = d) : f (a + b) = f (c + d) := by
  rw [h1, h2]

example (h1 : a = c) (h2 : d = c + b) (h3 : d = e) :
    f (a + b) = f (e) := by
  rw [h1, ←h2, h3]
-- end textbook

-- textbook: symmetry and transitivity
example (h : a = b) : b = a := by
  rw [h]

example (h1 : a = b) (h2 : b = c) : a = c := by
  rw [h1, h2]
-- end textbook

-- textbook: moving parentheses around
#check (mul_assoc : ∀ a b c, (a * b) * c = a * (b * c))
#check (mul_comm : ∀ a b, a * b = b * a)
#check (mul_left_comm : ∀ a b c, a * (b * c) = b * (a * c))

example : (c * b) * a = b * (a * c) := by
  rw [mul_assoc, mul_comm, ←mul_assoc]
-- end textbook

-- textbook: rewriting with arguments
example : (a * b) * c = b * (a * c) := by
  rw [mul_comm a b, mul_assoc b a c]

example : (a * b) * c = b * (a * c) := by
  rw [mul_comm a, mul_assoc]

example (a b c d e : ℕ) (h1 : a = b + 1)
    (h2 : d = c + a) (h3 : e = b + c) :
  d = e + 1 := by
  rw [h2, h3, h1, add_comm b c, add_assoc]
-- end textbook

-- textbook: rewriting at a hypothesis
example (a b c d e : ℕ) (h1 : a = b + 1) (h2 : d = c + a) (h3 : e = b + c) : d = e + 1 := by
  rw [h1] at h2
  rw [h2, h3, ←add_assoc, add_comm c]
-- end textbook

-- textbook: using nth_rw
example (h : a = a * a) : b * a = b * (a * a) := by
  nth_rw 1 [h]
-- end textbook

-- textbook: specialized calculations
example : 123 * 345 = 42435 := by
  norm_num

example : (a + b)^2 = a^2 + 2*a*b + b^2 := by
  ring

example : a^2 - b^2 = (a + b) * (a - b) := by
  ring
-- end textbook

-- textbook: rewriting with a function name
def fib : Nat → Nat
  | 0 => 0
  | 1 => 1
  | (n + 2) => fib (n + 1) + fib n

example : fib (n + 3) = 2 * fib (n + 1) + fib n := by
  rw [fib, fib]
  ring
-- end textbook

section
variable (P Q : Prop)

-- textbook: propositional equivalences
#check (not_and_or : ¬ (P ∧ Q) ↔ ¬ P ∨ ¬ Q)
#check (not_not : ¬ ¬ P ↔ P)

example : ¬ (P ∧ ¬ Q) ↔ ¬ P ∨ Q := by
  rw [not_and_or, not_not]
-- end textbook
end

-- textbook: definitional equality
example (n : Nat) : n + 0 = n := by
  rfl
-- end textbook

-- textbook: simp
example : fib 8 = 21 := by
  simp [fib]

example : a + b - b = a := by
  simp

example : P ↔ P ∧ P := by
  simp
-- end textbook
