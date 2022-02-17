import Std
open Std

/-
Misc utilities.
-/

/-- Return a list element if within bounds, otherwise `Inhabited.default`. -/
def List.getA {α} [Inhabited α] (as : List α) (i : Nat) : α :=
  if h : i < as.length then List.get as i h else default

def Std.AssocList.getA [BEq α] [Inhabited β] (l : AssocList α β) (a : α) : β :=
  match l.find? a with
    | some x => x
    | none   => default

deriving instance DecidableEq, BEq, Repr for AssocList

instance [ToString α] [ToString β] : ToString (AssocList α β) := ⟨fun l => toString l.toList⟩