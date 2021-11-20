import LAMR.Util.FirstOrder

-- textbook: aunt agatha hypotheses
def aunt_agatha_hypotheses : List FOForm := [
  fo!{∃ x. lives_at_dreadbury(%x) ∧ killed(%x, agatha)},
  fo!{∀ x. lives_at_dreadbury(%x) ↔ (%x = agatha ∨ %x = butler ∨ %x = charles)},
  fo!{∀ x. ∀ y. killed(%x, %y) → hates(%x, %y)},
  fo!{∀ x. ∀ y. killed(%x, %y) → ¬ richer(%x, %y)},
  fo!{∀ x. hates(charles, %x) → ¬ hates(agatha, %x)},
  fo!{∀ x. ¬ hates(agatha, %x) ↔ %x = butler},
  fo!{∀ x. ¬ richer(%x, agatha) → hates(butler, %x)},
  fo!{∀ x. hates(agatha, %x) → hates(butler, %x)},
  fo!{∀ x. ∃ y. ¬ hates(%x, %y)},
  fo!{¬ agatha = butler}
]
-- end

-- textbook: aunt agatha guess
def aunt_agatha_guess :=
  fo!{killed(butler, agatha)}

-- Termination reason: Satisfiable
#eval (do
  discard <| callVampireTptp aunt_agatha_hypotheses aunt_agatha_guess (verbose := true)
  : IO Unit)
-- end

-- textbook: aunt agatha conclusion
def aunt_agatha_conclusion :=
  fo!{killed(agatha, agatha)}

-- Termination reason: Refutation
#eval (do
  discard <| callVampireTptp aunt_agatha_hypotheses aunt_agatha_conclusion (verbose := true)
  : IO Unit)
-- end