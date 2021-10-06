import LAMR

variable (p q r s : Prop)

#check p ∧ q
#check p ∨ q
#check p → q
#check p ↔ q
#check ¬ p

example : p → q → p ∧ q := by
  intro hp
  intro hq
  apply And.intro
  . exact hp
  . exact hq

example : p → q → p ∧ q := by
  intro hp
  intro hq
  apply And.intro hp hq

example : p ∧ q → q ∧ p := by
  intro h
  let ⟨hp, hq⟩ := h
  apply And.intro
  . exact hq
  . exact hp

example : p ∨ q → q ∨ p := by
  intro h
  apply Or.elim h
  . intro hp
    apply Or.inr
    exact hp
  . intro hq
    apply Or.inl
    exact hq

example (h1 : p ∧ q) (h2 : q → r) : r := by
  let ⟨hp, hq⟩ := h1
  have hr := h2 hq
  exact hr

example (h1 : p ∧ q) (h2 : q → r) : r := by
  let ⟨hp, hq⟩ := h1
  apply h2
  apply hq

example (h1 : p ↔ q) (h2 : p) : q := by
  let ⟨h3, h4⟩ := h1
  apply h3
  exact h2

example (h1 : p ↔ q) : q ↔ p := by
  let ⟨h2, h3⟩ := h1
  apply Iff.intro
  . exact h3
  . exact h2

example (h1 : p) (h2 : ¬ p) : q := by
  contradiction

example (h1 : p → q) : ¬ q → ¬ p := by
  intro hnq
  intro hp
  apply hnq
  apply h1
  apply hp

example (h1 : p ∨ q) (h2 : ¬ p) : q := by
  apply Or.elim h1
  . intro hp
    contradiction
  . intro hq
    exact hq

example (h1 : p → q) : ¬ p ∨ q := by
  apply Or.elim (em p)
  . intro hp
    apply Or.inr
    apply h1
    exact hp
  . intro hnp
    apply Or.inl
    exact hnp

example : ¬ ¬ p → p := by
  intro hnnp
  apply Or.elim (em p)
  . intro hp; exact hp
  . intro hnp
    contradiction



example : p → q → p ∧ q := by
  intro hp hq
  apply And.intro hp hq

example : p → q → p ∧ q :=
  fun hp hq => And.intro hp hq

example : p → q → p ∧ q :=
  fun hp hq => ⟨hp, hq⟩

example : p ∧ q → q ∧ p :=
  fun ⟨hp, hq⟩ => ⟨hq, hp⟩

example : p ∨ q → q ∨ p :=
  fun h => Or.elim h (fun hp => Or.inr hp) (fun hq => Or.inl hq)

example (h1 : p → q) : ¬ q → ¬ p :=
  fun hnq hp => hnq (h1 hp)









  --apply And.elim _ h1 <;> intro hp hq



