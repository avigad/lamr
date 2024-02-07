/-
Copyright (c) 2024 Wojciech Nawrocki. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Wojciech Nawrocki
-/

import LAMR.Util.FirstOrder.Syntax
import LAMR.Util.Misc

/-- The type `ρ` is a type of paths between elements of `α`. -/
class IsPathOf (α : Type u) (ρ : Type v) where
  refl : α → ρ
  symm : ρ → ρ
  trans : ρ → ρ → ρ

/-- A path between two first-order terms built up using Birkhoff's rules. -/
inductive Path where
  /-- An axiom proving `a ∼ b`. -/
  | ax (a b : FOTerm)
  /-- Reflexivity proving `a ∼ a`. -/
  | refl (a : FOTerm)
  /-- Symmetry proving `b ∼ a` given `a ∼ b`. -/
  | symm (p : Path)
  /-- Transitivity proving `a ∼ c` given `a ∼ b` and `b ∼ c`. -/
  | trans (p q : Path)
  /-- Congruence proving `fn(a₁, …, aₙ) ∼ fn(b₁, …, bₙ)`
  given `[a₁ ∼ b₁, …, aₙ ∼ bₙ]`. -/
  | congr (fn : String) (ps : List Path)

instance : IsPathOf FOTerm Path where
  refl := .refl
  symm := .symm
  trans := .trans

inductive NormalPath where
  /-- An axiom proving `a ∼ b`. -/
  | ax (a b : FOTerm)
  /-- An axiom that has been reversed so that it's proving `b ∼ a`. -/
  | symmAx (a b : FOTerm)
  /-- A concatenation of paths by transitivity.
  The list is in-order, e.g. a path `a ∼ b` could be `[a ∼ c, c ∼ b]`.
  An empty list denotes the identity path.

  The list must never:
  - be a singleton; or
  - contain `ax` and `symmAx` with equal `a`,`b` next to each other; or
  - contain two `congr` with equal `fn` next to each other; or
  - contain a `path`.

  Thus the list must either:
  - be empty; or
  - contain at least two elements, all of which are `ax`/`symmAx`/`congr`. -/
  | path (a b : FOTerm) (ps : List NormalPath)
  | congr (fn : String) (ps : List NormalPath)
  deriving Inhabited, Repr

def NormalPath.src : NormalPath → FOTerm
  | ax a _      => a
  | symmAx _ b  => b
  | path a ..   => a
  | congr fn ps => .app fn (ps.mapDep fun a _ => a.src)

def NormalPath.tgt : NormalPath → FOTerm
  | ax _ b      => b
  | symmAx a _  => a
  | path _ b .. => b
  | congr fn ps => .app fn (ps.mapDep fun a _ => a.tgt)

def NormalPath.size : NormalPath → Nat
  | ax ..       => 2
  | symmAx ..   => 2
  | path _ _ ps => ps.foldlDep (fun acc p _ => acc + p.size) 1
  | congr _ ps  => ps.foldlDep (fun acc p _ => acc + p.size) 1

/-- Merge two reduced paths by transitivity
and reduce them further if needed. -/
partial def NormalPath.trans : NormalPath → NormalPath → NormalPath :=
  go
where
  go : NormalPath → NormalPath → NormalPath
    | path _ _ [], q => q
    | p, path _ _ [] => p
    | path a _ ps'@(_ :: _), path _ b (q :: qs) =>
      let (ps, p) := (ps'.take (ps'.length - 1), ps'.getLast!)
      match merge? p q with
      | some (path _ _ []) => go (path a p.src ps) (path p.src b qs)
      | some r             => go (path a p.src ps) (go r (path q.tgt b qs))
      | none               => path a b (ps' ++ (q :: qs))
    | p, path _ b (q :: qs) =>
      match merge? p q with
      | some (path _ _ []) =>
        match qs with
        | [r] => r
        | _   => path p.src b qs
      | some r => path p.src b (r :: qs)
      | none => path p.src b (p :: q :: qs)
    | path a _ ps'@(_ :: _), q =>
      let (ps, p) := (ps'.take (ps'.length - 1), ps'.getLast!)
      match merge? p q with
      | some (path _ _ []) =>
        match ps with
        | [r] => r
        | _   => path a q.tgt ps
      | some r => path a q.tgt (ps ++ [r])
      | none => path a q.tgt (ps' ++ [q])
    | p, q =>
      match merge? p q with
      | some r => r
      | none => path p.src q.tgt [p, q]
  /-- If `p*q = r` for some simpler `r` then return `some r`, otherwise `none`.
  Assumes that `p`/`q` are not `path`s. -/
  merge? : NormalPath → NormalPath → Option NormalPath
    | ax a b, symmAx c d => if a == c && b == d then some (path a a []) else none
    | symmAx a b, ax c d => if a == c && b == d then some (path b b []) else none
    | congr fn ps, congr fn' qs => if fn == fn' then some (congr fn (List.zipWith go ps qs)) else none
    | _, _ => none

def Path.normalize (p : Path) : NormalPath :=
  go false none p
where
  /--
  - `go true acc p = p⁻¹ * acc`
  - `go false acc p = acc * p` -/
  go (inv : Bool) (acc? : Option NormalPath) : Path → NormalPath
    | ax a b => merge inv acc? (if inv then .symmAx a b else .ax a b)
    | refl a => merge inv acc? (.path a a [])
    | symm p =>
      -- if inv then `p⁻¹⁻¹ * acc = p * acc`
      -- else `acc * p⁻¹`
      merge inv acc? (go (!inv) none p)
    | trans p q =>
      -- if inv then `(p*q)⁻¹ * acc = q⁻¹ * (p⁻¹ * acc)`
      -- else `acc * (p*q) = (acc * p) * q`
      let r := go inv acc? p
      go inv (some r) q
    | congr fn ps =>
      -- `(congr fn ps)⁻¹ = congr fn (ps.map (·⁻¹))`
      merge inv acc? (.congr fn (ps.mapDep fun p _ => go inv none p))
  merge (left : Bool) (acc? : Option NormalPath) (p : NormalPath) : NormalPath :=
    acc?.map (fun acc => if left then p.trans acc else acc.trans p) |>.getD p
