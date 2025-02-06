import LAMR

/-
Resolution proof in Lean
-/

namespace Resolution

/--
The resolution Step.

C ∨ p
D ∨ ¬ p
------- RES
C ∨ D
-/

def resolve (c₁ c₂ : Clause) (var : String) : Clause :=
  (c₁.erase (Lit.pos var)).union' (c₂.erase (Lit.neg var))

/--
A line of a resolution proof is either a hypothesis or the result of a
resolution step.
-/
inductive Step where
  | hyp (clause : Clause) : Step
  | res (var : String) (pos neg : Nat) : Step
deriving Inhabited, Repr

def Proof := Array Step deriving Inhabited, Repr

-- Ignore this: it is boilerplate to make the `p[i]` notation work.
instance : GetElem Proof Nat Step (fun xs i => i < xs.size) :=
  inferInstanceAs (GetElem (Array Step) _ _ _)

-- determines whether a proof is well-formed
def Proof.wellFormed (p : Proof) : Bool := Id.run do
  for i in [:p.size] do
    match p[i]! with
      | Step.hyp _ => continue
      | Step.res _ pos neg =>
          if i ≤ pos ∨ i ≤ neg then
            return false
  true

-- prints out the proof
def Proof.show (p : Proof) : IO Unit := do
  if ¬ p.wellFormed then
    IO.println "Proof is not well-formed."
    return
  let mut clauses : Array Clause := #[]
  for i in [:p.size] do
    match p[i]! with
      | Step.hyp c =>
          clauses := clauses.push c
          IO.println s!"{i}: hypothesis: {c}"
      | Step.res var pos neg =>
          let resolvent := resolve clauses[pos]! clauses[neg]! var
          clauses := clauses.push resolvent
          IO.println s!"{i}: resolve {pos}, {neg} on {var}: {resolvent}"

end Resolution

section
open Resolution

def example0 : Proof := #[
  .hyp clause!{-p -q r}, -- 0
  .hyp clause!{-r},      -- 1
  .hyp clause!{p -q},    -- 2
  .hyp clause!{-s q},    -- 3
  .hyp clause!{s},       -- 4
  .res "r" 0 1,          -- 5 -p -q
  .res "s" 4 3,          -- 6 q
  .res "q" 6 2,          -- 7 p
  .res "p" 7 5,          -- 8 -q
  .res "q" 6 8           -- 9 ⊥
]

#eval example0.wellFormed
#eval example0.show

def example1 : Proof := #[
  .hyp clause!{p q}, -- 0
  .hyp clause!{-p},  -- 1
  .hyp clause!{-q},  -- 2
  .res "p" 0 1,      -- 3 q
  .res "q" 3 2       -- 4 ⊥
]

#eval example1.wellFormed
#eval example1.show

def example2 : Proof := #[
  .hyp clause!{ p q r}, -- 0
  .hyp clause!{-p s},   -- 1
  .hyp clause!{-q s},   -- 2
  .hyp clause!{-r s},   -- 3
  .hyp clause!{-s},     -- 4
  .res "p" 0 1,         -- 5 q r s
  .res "q" 5 2,         -- 6 r s
  .res "r" 6 3,         -- 7 s
  .res "s" 7 4          -- 8 ⊥
]

#eval example2.wellFormed
#eval example2.show

-- Homework: Finish this to get a proof of ⊥.
def example3 : Proof := #[
  .hyp clause!{ p  q -r},  -- 0
  .hyp clause!{-p -q  r},  -- 1
  .hyp clause!{ q  r -s},  -- 2
  .hyp clause!{-q -r  s},  -- 3
  .hyp clause!{ p  r  s},  -- 4
  .hyp clause!{-p -r -s},  -- 5
  .hyp clause!{-p  q  s},  -- 6
  .hyp clause!{ p -q -s}   -- 7
]

#eval example3.wellFormed
#eval example3.show

end
