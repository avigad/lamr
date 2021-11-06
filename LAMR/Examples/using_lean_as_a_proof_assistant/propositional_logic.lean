import Init

-- textbook: Prop
variable (p q r s : Prop)

#check True
#check False
#check p ∧ q
#check p ∨ q
#check p → q
#check p ↔ q
#check ¬ p
-- end textbook

-- textbook: proof terms
theorem foo : p → q → p ∧ q :=
  fun hp hq => And.intro hp hq

theorem bar : p ∧ q → q ∧ p :=
  fun ⟨hp, hq⟩ => ⟨hq, hp⟩
-- end textbook

-- textbook: id proof
example : p → p := by
  intro h
  apply h
-- end textbook

-- textbook: apply
example (h1 : p → q) (h2 : p) : q := by
  apply h1
  exact h2
-- end textbook

-- textbook: have
example (h1 : p → q) (h2 : p) : q := by
  have h3 : q := h1 h2
  exact h3
-- end textbook

-- textbook: have again
example (h1 : p → q) (h2 : p) : q := by
  have h3 := h1 h2
  exact h3
-- end textbook

-- textbook: application
example (h1 : p → q) (h2 : p) : q := by
  exact h1 h2

example (h1 : p → q) (h2 : p) : q := h1 h2
-- end textbook


-- textbook: and example
theorem and_example : p → q → p ∧ q := by
  intro hp
  intro hq
  apply And.intro
  . exact hp
  . exact hq

#print and_example

example : p → q → p ∧ q :=
  fun hp hq => And.intro hp hq
-- end textbook

-- textbook: and proof variants
example : p → q → p ∧ q := by
  intro hp
  intro hq
  apply And.intro hp hq
-- end textbook

-- textbook: and intro
example : p → q → p ∧ q := And.intro
-- end textbook

-- textbook: another and proof
example : p ∧ q → q ∧ p := by
  intro h
  have ⟨hp, hq⟩ := h
  apply And.intro
  . exact hq
  . exact hp
-- end textbook

-- textbook: and proof with cases
example : p ∧ q → q ∧ p := by
  intro h
  cases h with
  | intro hp hq =>
    exact And.intro hq hp

example : p ∧ q → q ∧ p := by
  intro h
  cases h
  case intro hp hq =>
    exact And.intro hq hp
-- end textbook

-- textbook: have
  example (h1 : p ∧ q) (h2 : q → r) : p ∧ r := by
  have ⟨hp, hq⟩ := h1
  have hr : r := h2 hq
  exact And.intro hp hr

  example (h1 : p ∧ q) (h2 : q → r) : p ∧ r := by
  have ⟨hp, hq⟩ := h1
  have hr := h2 hq
  exact And.intro hp hr

  example (h1 : p ∧ q) (h2 : q → r) : p ∧ r := by
  have ⟨hp, hq⟩ := h1
  have hr : r := by
    apply h2
    exact hq
  exact And.intro hp hr
-- end textbook

-- textbook: have and let
example (h1 : p ∧ q) (h2 : q → r) : p ∧ r := by
  let ⟨hp, hq⟩ := h1
  let hr : r := by
    apply h2
    exact hq
  exact And.intro hp hr

example (h1 : p ∧ q) (h2 : q → r) : p ∧ r := by
  let ⟨hp, hq⟩ := h1
  exact And.intro hp (h2 hq)
-- end textbook

-- textbook: or proofs
example : p ∨ q → q ∨ p := by
  intro h
  apply Or.elim h
  . intro hp
    apply Or.inr
    exact hp
  . intro hq
    apply Or.inl
    exact hq

example : p ∨ q → q ∨ p := by
  intro h
  cases h with
  | inl hp =>
    exact Or.inr hp
  | inr hq =>
    exact Or.inl hq

example : p ∨ q → q ∨ p := by
  intro h
  cases h
  case inl hp =>
    exact Or.inr hp
  case inr hq =>
    exact Or.inl hq
-- end textbook

-- textbook: negation
example (h : p → q) : ¬ q → ¬ p := by
  intro hnq hp
  apply hnq
  apply h
  apply hp
-- end textbook

-- textbook: contradiction
example (h1 : p) (h2 : ¬ p) : q := by
  contradiction

example (h1 : p ∨ q) (h2 : ¬ p) : q := by
  apply Or.elim h1
  . intro hp
    contradiction
  . intro hq
    exact hq
-- end textbook

-- textbook: absurd
example (h1 : p) (h2 : ¬ p) : q := by
  exact absurd h1 h2

example (h1 : p) (h2 : ¬ p) : q := absurd h1 h2

example (h1 : p ∨ q) (h2 : ¬ p) : q := by
  apply Or.elim h1
  . intro hp
    exact absurd hp h2
  . intro hq
    exact hq
-- end textbook

-- textbook: ex falso
example (h : False) : p := by
  contradiction

example (h : False) : p := by
  cases h
-- end textbook


-- textbook: excluded middle
example (h1 : p → q) : ¬ p ∨ q := by
  apply Or.elim (Classical.em p)
  . intro hp
    apply Or.inr
    apply h1
    exact hp
  . intro hnp
    apply Or.inl
    exact hnp

example : ¬ ¬ p → p := by
  intro hnnp
  apply Or.elim (Classical.em p)
  . intro hp; exact hp
  . intro hnp
    contradiction
-- end textbook

-- textbook: classical principles
example : ¬ ¬ p → p := by
  intro hnnp
  apply Classical.byCases
  . intro (hp : p)
    exact hp
  . intro (hnp : ¬ p)
    exact absurd hnp hnnp

example : ¬ ¬ p → p := by
  intro hnnp
  apply Classical.byContradiction
  intro (hnp : ¬ p)
  exact hnnp hnp
-- end textbook

-- textbook: iff
example (h1 : p ↔ q) (h2 : p) : q := by
  have ⟨h3, h4⟩ := h1
  apply h3
  exact h2

example (h1 : p ↔ q) : q ↔ p := by
  have ⟨h2, h3⟩ := h1
  apply Iff.intro
  . exact h3
  . exact h2
-- end textbook

-- textbook: more proof terms
example : p ∨ q → q ∨ p :=
  fun h => Or.elim h (fun hp => Or.inr hp) (fun hq => Or.inl hq)

example (h1 : p → q) : ¬ q → ¬ p :=
  fun hnq hp => hnq (h1 hp)
-- end textbook

