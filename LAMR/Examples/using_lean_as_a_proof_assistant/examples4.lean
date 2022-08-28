
-- textbook: List
import Init

open List

variable {α : Type}
variable (as bs cs : List α)
variable (a b c : α)

#check a :: as
#check as ++ bs

example : [] ++ as = as := nil_append as

example : (a :: as) ++ bs = a :: (as ++ bs) := cons_append a as bs
-- end: List


-- textbook: append_nil'
theorem append_nil' : as ++ [] = as := by
  induction as with
  | nil => rw [nil_append]
  | cons a as ih => rw [cons_append, ih]
-- end: append_nil'


-- textbook: append_assoc'
theorem append_assoc' : as ++ bs ++ cs = as ++ (bs ++ cs) := by
  induction as with
  | nil => rw [nil_append, nil_append]
  | cons a as ih => rw [cons_append, cons_append, ih, ←cons_append]
-- end: append_assoc'


-- textbook: reverse
theorem reverse_def : reverse as = reverseAux as [] := rfl

theorem reverseAux_nil : reverseAux [] as = as := rfl

theorem reverseAux_cons : reverseAux (a :: as) bs = reverseAux as (a :: bs) := rfl
-- end: reverse

theorem reverse_nil : reverse ([] : List α) = [] := rfl


-- textbook: reverse identities
theorem reverseAux_append : reverseAux (as ++ bs) cs = reverseAux bs (reverseAux as cs) := by
  induction as generalizing cs with
  | nil => rw [nil_append, reverseAux_nil]
  | cons a as ih => rw [cons_append, reverseAux_cons, reverseAux_cons, ih]

theorem reverseAux_append' : reverseAux as (bs ++ cs) = reverseAux as bs ++ cs := by
  induction as generalizing bs with
  | nil => rw [reverseAux_nil, reverseAux_nil]
  | cons a as ih => rw [reverseAux_cons, reverseAux_cons, ←cons_append, ih]
-- end: reverse identities


-- textbook: reverse_append
theorem reverse_append : reverse (as ++ bs) = reverse bs ++ reverse as := by
  rw [reverse_def, reverseAux_append, reverse_def, ←reverseAux_append', nil_append,
      reverse_def]
-- end: reverse_append