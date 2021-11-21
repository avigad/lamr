import LAMR.Examples.implementing_first_order_logic.TarskisWorld

open Shape
open Size

/-
Create a world with at most three objects in which all the following sentences are true.
-/

def ockham : World := []

-- Tip: You can pin this display open using the 📌 icon in the Lean Infoview
#eval ockham.show

#eval ockham.eval fo!{∀ x. ∀ y. (SameRow(%x, %y) ∧ SameCol(%x, %y)) → %x = %y}
#eval ockham.eval fo!{∃ x. Tet(%x) ∧ Large(%x)}
#eval ockham.eval fo!{∃ x. ∃ y. Larger(%x, %y) ∧ ¬ Large(%x)}
#eval ockham.eval fo!{∀ x. ∀ y. Dodec(%x) ∧ Dodec(%y) → x = y}
#eval ockham.eval fo!{¬ ∀ y. Cube(%y) → Small(%y)}
#eval ockham.eval fo!{∀ x. Large(%x) ↔ Tet(%x)}
#eval ockham.eval fo!{∀ x. ∀ y. Larger(%x, %y) → BackOf(%x, %y)}
#eval ockham.eval fo!{∃ x. ∃ y. Cube(%x) ∧ Tet(%y) ∧ LeftOf(%x, %y) ∧ Smaller(%x, %y)}
#eval ockham.eval fo!{∃ x. ∃ y. Small(%x) ∧ Large(%y) ∧ ∀ z. Between(%z, %x, %y) ↔ Cube(%z)}
#eval ockham.eval fo!{∀ x. Small(%x) ↔ (∀ y. ¬ %y = %x → LeftOf(%x, %y))}

/-
Create as world (with as many objects as you like) in which all the following sentences are true.
-/

def arnault : World := []

-- Tip: You can pin this display open using the 📌 icon in the Lean Infoview
#eval arnault.show

#eval arnault.eval fo!{∀ x. ∀ y. (SameRow(%x, %y) ∧ SameCol(%x, %y)) → %x = %y}
#eval arnault.eval fo!{∃ x. ∃ y. ∃ z. Cube(%x) ∧ Dodec(%y) ∧ Tet(%z)}
#eval arnault.eval fo!{¬ ∃ x. Large(%x)}
#eval arnault.eval fo!{∀ x. Dodec(%x) → ∃ y. Cube(%y) ∧ BackOf(%x, %y)}
#eval arnault.eval fo!{∀ x. Tet(%x) → ∃ y. ∃ z. Between(%x, %y, %z)}
#eval arnault.eval fo!{∀ x. ∀ y. ∀ z. Between(%x, %y, %z) → Larger(%x, %y)}
#eval arnault.eval fo!{∃ x. ∃ y. ¬ %x = %y ∧ ∀ w. %w = %x ∨ %w = %y → ∀ z. ¬ BackOf(%y, %x)}
#eval arnault.eval fo!{∀ x. ∀ y. Larger(%x, %y) → ∃ z. Between(%x, %y, %z)}
#eval arnault.eval fo!{∀ x. Cube(%x) ↔ ∃ y. Tet(%y) ∧ BackOf(%y, %x)}
#eval arnault.eval fo!{¬ ∀ x. ∀ y. LeftOf(%x, %y) ∨ RightOf(%x, %y)}
#eval arnault.eval fo!{∃ x. ∃ y. ¬ (FrontOf(%x, %y) ∨ BackOf(%x, %y))}
