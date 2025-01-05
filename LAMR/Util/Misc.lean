import Lean
open Lean

/-
Misc utilities.
-/

-- This is called `List.getI` in Mathlib, but here we avoid the dependence
-- on Mathlib.
/-- Return a list element if within bounds, otherwise `Inhabited.default`.
-/
def List.getA {α} [Inhabited α] (as : List α) (i : Nat) : α :=
  if h : i < as.length then List.get as ⟨i, h⟩ else default

@[specialize]
def List.mapDep : (as : List α) → (f : (a : α) → a ∈ as → β) → List β
  | [],    _ => []
  | a::as, f => f a (List.mem_cons_self ..) :: mapDep as (fun a h => f a (List.mem_cons_of_mem _ h))

@[specialize]
def List.foldlDep {α : Type u} {β : Type v} : (bs : List β) → (α → (b : β) → b ∈ bs → α) → α → α
  | nil,       _, a => a
  | cons b bs, f, a => foldlDep bs (fun a b h => f a b (List.mem_cons_of_mem _ h)) (f a b (List.mem_cons_self ..))

def Lean.AssocList.getD [BEq α] [Inhabited β] (l : AssocList α β) (a : α) : β :=
  match l.find? a with
    | some x => x
    | none   => default

deriving instance DecidableEq, BEq, Repr for AssocList

instance [ToString α] [ToString β] : ToString (AssocList α β) :=
  ⟨fun l => toString l.toList⟩

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
