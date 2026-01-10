/-
Copyright (c) 2018-2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Nawrocki, Leonardo de Moura
-/
import Std.Data.HashMap
import LAMR.Util.Paths

/-! # Disjoint-set data structure -/

open Std (HashMap)

/-- A node in the forest of equivalence-class-trees. -/
inductive DisjointSetWithProofs.Node (α : Type u) (ρ : Type v) where
  /-- A pointer to the parent node in the tree. -/
  | ptr (parent : α) (path : ρ)
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
`DisjointSetWithProofs` has to compress paths while performing "read-only" operations,
so these operations actually return a new version of the structure
which should be used instead from then on.
`DisjointSetWithProofs` should be used linearly, i.e.,
it should have a reference count of 1 at all times.

The behaviour is unspecified if `BEq α` is not a `LawfulBEq α`. -/
def DisjointSetWithProofs (α : Type u) [BEq α] [Hashable α] (ρ : Type v) : Type (max u v) :=
  /- We use a hashmap representation rather than an ADT
  in order to enable efficient local rewrites in the forest. -/
  HashMap α (DisjointSetWithProofs.Node α ρ)

namespace DisjointSetWithProofs

/-- Return the discrete equivalence relation on `α`,
i.e., every element is only equivalent to itself. -/
def singletons [BEq α] [Hashable α] : DisjointSetWithProofs α ρ :=
  ({} : HashMap α _)

variable {α : Type u} [BEq α] [Hashable α]

open Node

/-- Find the representative element of `a`'s equivalence class and its rank,
performing path compression along the way. -/
private def findRoot [IsPathOf α ρ] (d : DisjointSetWithProofs α ρ) (a : α) : DisjointSetWithProofs α ρ × α × ρ × Nat :=
  /- Leo's trick: use the size of the hashmap as fuel for termination. -/
  go d a d.size
where go (d : DisjointSetWithProofs α ρ) (a : α) : Nat → DisjointSetWithProofs α ρ × α × ρ × Nat
  | 0   => (d, a, IsPathOf.refl a, 0)
  | n+1 =>
    match d.getD a root with
    | root rank  => (d, a, IsPathOf.refl a, rank)
    | ptr parent path =>
      let (d₁, rootA, pathA, rankA) := go d parent n
      let path' := IsPathOf.trans α path pathA
      (d₁.insert a (ptr rootA path'), rootA, path', rankA)

/-- Return the representative of `a`'s equivalence class. -/
def canonize [IsPathOf α ρ] (d : DisjointSetWithProofs α ρ) (a : α) : DisjointSetWithProofs α ρ × α × ρ :=
  let (d, a, p, _) := d.findRoot a; (d, a, p)

/-- Return `true` iff the two elements are in the same equivalence class. -/
def equivalent [IsPathOf α ρ] (d : DisjointSetWithProofs α ρ) (a b : α) : DisjointSetWithProofs α ρ × Option ρ :=
  let (d₁, rootA, p) := d.canonize a
  let (d₂, rootB, q) := d₁.canonize b
  if rootA == rootB then
    (d₂, some (IsPathOf.trans α p (IsPathOf.symm α q)))
  else
    (d₂, none)

/-- Return a new `DisjointSetWithProofs` with equivalence classes of the two elements merged. -/
def union [IsPathOf α ρ] (d : DisjointSetWithProofs α ρ) (a b : α) (path : ρ) : DisjointSetWithProofs α ρ :=
  let (d₁, rootA, pathA, rankA) := d.findRoot a
  let (d₂, rootB, pathB, rankB) := d₁.findRoot b
  if rootA == rootB then d₂
  else if rankA < rankB then
    let path' := IsPathOf.trans α (IsPathOf.symm α pathA) (IsPathOf.trans α path pathB)
    d₂.insert rootA (ptr rootB path')
  else if rankA = rankB then
    let path' := IsPathOf.trans α (IsPathOf.symm α pathA) (IsPathOf.trans α path pathB)
    d₂.insert rootA (ptr rootB path') |>.insert rootB (root <| rankB + 1)
  else /- rankA > rankB -/
    let path' := IsPathOf.trans α (IsPathOf.symm α pathB) (IsPathOf.trans α (IsPathOf.symm α path) pathA)
    d₂.insert rootB (ptr rootA path')

end DisjointSetWithProofs
