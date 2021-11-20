import LAMR.Util.FirstOrder

-- textbook: asylum eight hypotheses
def asylum_eight_hypotheses : List FOForm := [
  fo!{∀ x. ∃ y. Teaches(%y, %x)},
  fo!{∀ x. ∀ y. Teaches(%x, %y) → (Sane(%x) ↔ Trusts(%y, %y))},
  fo!{∀ x. ∃ y. ∀ z. Trusts(%y, %z) ↔ ∃ w. Teaches(%w, %z) ∧ Trusts(%x, %w)},
  fo!{∃ x. ∀ y. ¬ Doctor(%y) ↔ Trusts(%x, %y)}
]
-- end

-- textbook: asylum eight conclusion
def asylum_eight_conclusion :=
  fo!{∃ x. Doctor(%x) ↔ ¬ Sane(%x)}

#eval (do
  discard <| callVampireTptp asylum_eight_hypotheses asylum_eight_conclusion
    (verbose := true)
  : IO Unit)
-- end