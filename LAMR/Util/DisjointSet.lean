/-
Copyright (c) 2018-2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Nawrocki, Leonardo de Moura
-/
import Std.Data.HashMap

open Std (HashMap)

/-- A node in the disjoint-set forest. A node is either a root and represents an equivalence class,
or a pointer to a parent node.  We represent pointers between nodes as entries in a hashmap
in order to enable purely functional updates to paths through the forest. -/
inductive DisjointSet.Node (α : Type u) where
  | ptr (parent : α)
  /- Rank is an upper bound on the subtree height. -/
  | root (rank : Nat := 0)
  deriving Repr

/-- Implements Tarjan's union-find algorithm. Most of the "read-only" methods return a new version
of the `DisjointSet` with the same equivalence classes, but with internal paths possibly compressed
for amortised performance. Implemented using a non-persistent `HashMap` and should therefore be used
linearly. -/
def DisjointSet (α : Type u) [BEq α] [Hashable α] : Type u :=
  HashMap α (DisjointSet.Node α)

namespace DisjointSet

/-- Return the equivalence relation on `α` given by `BEq`, i.e. the disjoint-set
of all singletons. -/
def singletons (α : Type u) [BEq α] [Hashable α] : DisjointSet α :=
  HashMap.empty

variable {α : Type u} [BEq α] [Hashable α]

open Node

/-- Find the representative element of `a`'s equivalence class and its rank,
performing path compression along the way. -/
private def findRoot (d : DisjointSet α) (a : α) : DisjointSet α × α × Nat :=
  /- Leo's trick: use the size of the hashmap as fuel for termination. -/
  go d a d.size
where go (d : DisjointSet α) (a : α) : Nat → DisjointSet α × α × Nat
  | 0   => (d, a, 0)
  | n+1 =>
    match d.findD a root with
    | root rank  => (d, a, rank)
    | ptr parent =>
      let (d₁, rootA, rankA) := go d parent n
      (d₁.insert a (ptr rootA), rootA, rankA)

/-- Return the representative of `a`'s equivalence class. -/
def canonize (d : DisjointSet α) (a : α) : DisjointSet α × α :=
  let (d, a, _) := d.findRoot a; (d, a)

/-- Return `true` iff the two elements are in the same equivalence class. -/
def equivalent (d : DisjointSet α) (a b : α) : DisjointSet α × Bool :=
  let (d₁, rootA) := d.canonize a
  let (d₂, rootB) := d₁.canonize b
  (d₂, rootA == rootB)

/-- Return a new set with equivalence classes of the two elements collapsed. -/
def union (d : DisjointSet α) (a b : α) : DisjointSet α :=
  let (d₁, rootA, rankA) := d.findRoot a
  let (d₂, rootB, rankB) := d₁.findRoot b
  if rootA == rootB then d₂
  else if rankA < rankB then
    d₂.insert rootA (ptr rootB)
  else if rankA = rankB then
    d₂.insert rootA (ptr rootB) |>.insert rootB (root <| rankB + 1)
  else /- rankA > rankB -/
    d₂.insert rootB (ptr rootA)

end DisjointSet