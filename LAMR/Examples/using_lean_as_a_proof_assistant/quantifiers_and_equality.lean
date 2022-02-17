import LAMR

example (a b c : Int) : (a * b) * c = b * (a * c) := by
  rw [mul_comm a b, mul_assoc b a c]

example (a b c d e f : Int) (h : a * b = c * d) (h' : e = f) :
    a * (b * e) = c * (d * f) := by
  rw [h', ←mul_assoc, h, mul_assoc]

example (a b c d e f : Int) (h : b * c = e * f) :
    a * b * c * d = a * e * f * d := by
  admit

variable {R : Type} [CommRing R]

theorem eq_sub_of_add_eq_zero {a b : R} (h : a + b = 0) : a = -b := by
  have : a = a + b - b := by
    rw [Ring.sub_eq_add_neg, add_assoc, add_right_neg b, add_zero]
  rw [this, h, Ring.sub_eq_add_neg, zero_add]

theorem sub_self (a : R) : a - a = 0 := by
  rw [Ring.sub_eq_add_neg, add_comm, Ring.add_left_neg]

example (a b c d : R) (hyp : c = b * a - d) (hyp' : d = a * b) : c = 0 := by
  rw [hyp, mul_comm b a, hyp', sub_self]

theorem neg_add (a b : R) : -(a + b) = -a + -b := by
  apply Eq.symm
  apply eq_sub_of_add_eq_zero
  rw [add_assoc, add_comm a, ←(add_assoc (-b)), add_left_neg b, zero_add,
    add_left_neg a]

theorem sub_sub (a b c : R) : a - b - c = a - (b + c) := by
  rw [Ring.sub_eq_add_neg, Ring.sub_eq_add_neg, Ring.sub_eq_add_neg,
   neg_add, add_assoc]

example (P Q : α → Prop) (h : ∃ x, P x ∧ Q x) : (∃ x, P x) ∧ (∃ x, Q x) := by
  match h with
    | ⟨a, Pa, Qa⟩ => exact ⟨⟨a, Pa⟩, ⟨a, Qa⟩⟩
