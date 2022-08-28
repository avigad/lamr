import Std
open Std

/-
Misc utilities.
-/

/-- Return a list element if within bounds, otherwise `Inhabited.default`. -/
def List.getA {α} [Inhabited α] (as : List α) (i : Nat) : α :=
  if h : i < as.length then List.get as ⟨i, h⟩ else default

def Std.AssocList.getA [BEq α] [Inhabited β] (l : AssocList α β) (a : α) : β :=
  match l.find? a with
    | some x => x
    | none   => default

deriving instance DecidableEq, BEq, Repr for AssocList

instance [ToString α] [ToString β] : ToString (AssocList α β) := ⟨fun l => toString l.toList⟩

/-
These avoid the quadratic behavior of `List.union`.
-/

namespace List

protected def union' [DecidableEq α] [Hashable α]
    (l₁ l₂ : List α) : List α := Id.run do
  let mut s := Std.HashSet.empty
  for x in l₁ do
    s := s.insert x
  for x in l₂ do
    s := s.insert x
  return s.toList

def Union [DecidableEq α] [Hashable α] : List (List α) → List α
  | [] => []
  | (l ::ls) => l.union' (ls.Union)

end List

instance [Hashable α] : Hashable (List α) :=
  ⟨fun l => l.foldl (init := 42) fun acc x => mixHash acc (hash x)⟩
