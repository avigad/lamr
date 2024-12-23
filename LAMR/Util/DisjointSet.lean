/-
Copyright (c) 2018-2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Nawrocki, Leonardo de Moura
-/
import Std
/-! # Disjoint-set data structure -/

open Std (HashMap)

/-- A node in the forest of equivalence-class-trees. -/
inductive DisjointSet.Node (α : Type u) where
  /-- A pointer to the parent node in the tree. -/
  | ptr (parent : α)
  /-- A root is the canonical representative of its equivalence class.
  `rank` is an upper bound on the height of the tree rooted here. -/
  | root (rank : Nat := 0)
  deriving Repr

/-- Keeps track of an equivalence relation on a type `α`,
or equivalently a partition of `α` into disjoint subsets,
using Tarjan's union-find algorithm.
Any two equivalence classes can be merged into a larger one,
and for any `a : α` it is possible to find the canonical representative of `[a]`.
Thus equivalence of two elements `a b : α` can be checked easily
by reducing it to a comparison on the representatives of `[a]` and `[b]`.
There can be at most finitely many non-singleton equivalence classes.

Note that to achieve the desired amortized time complexity,
`DisjointSet` has to compress paths while performing "read-only" operations,
so these operations actually return a new version of the structure
which should be used instead from then on.
`DisjointSet` should be used linearly, i.e.,
it should have a reference count of 1 at all times.

The behaviour is unspecified if `BEq α` is not a `LawfulBEq α`. -/
def DisjointSet (α : Type u) [BEq α] [Hashable α] : Type u :=
  /- We use a hashmap representation rather than an ADT
  in order to enable efficient local rewrites in the forest. -/
  HashMap α (DisjointSet.Node α)

namespace DisjointSet

/-- Return the discrete equivalence relation on `α`,
i.e., every element is only equivalent to itself. -/
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
    match d.getD a root with
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

/-- Return a new `DisjointSet` with equivalence classes of the two elements merged. -/
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
