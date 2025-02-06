import Init.System.IO
import LAMR.Util.Propositional.Syntax

/-! A very basic DPLL SAT solver. -/

def PropAssignment.evalClause (τ : PropAssignment) (c : Clause) : Bool :=
  (c : List Lit).foldl (init := false) (fun v l => v ∨ τ.evalLit l)
--  (c : List Lit).foldl (init := false) (fun v l => v ∨ (τ.evalLit? l |>.get!))

def PropAssignment.evalCnf (τ : PropAssignment) (Γ : CnfForm) : Bool :=
  (Γ : List Clause).foldl (init := true) (fun v c => v ∧ τ.evalClause c)

/-- Erases all elements equal to the argument from the list. -/
def List.eraseAll {α} [BEq α] : List α → α → List α
  | [],      _ => []
  | a :: as, b => match a == b with
    | true     => List.eraseAll as b
    | false    => a :: List.eraseAll as b

/-- Simplifies the CNF assuming `x` is true. `x` must not be a constant. -/
-- textbook: simplify
def simplify (x : Lit) (Γ : CnfForm) : CnfForm :=
  assert! x != lit!{⊥} && x != lit!{⊤}
  match Γ with
  | []      => []
  | c :: cs =>
               let cs' := simplify x cs
               -- If clause became satisfied, erase it from the CNF
               if c.elem x then cs'
               -- Otherwise erase any falsified literals
               else c.eraseAll x.negate :: cs'

#eval toString <| simplify lit!{p} cnf!{p -q p -p, p, q q, -q -p, -p}
-- end: simplify

/-- Returns `true` iff the CNF contains an empty clause. -/
def CnfForm.hasEmpty : CnfForm → Bool
  | []      => false
  | [] :: _ => true
  | _ :: cs => hasEmpty cs

/-- Finds a unit clause, if there are any. -/
def CnfForm.findUnit : CnfForm → Option Lit
  | []       => none
  | [x] :: _ => some x
  | _ :: cs  => findUnit cs

/-- Performs a round of unit propagation on `Γ` under the assignment `τ`.
Returns an updated assignment and a simplified formula.

Assumes no additions to `τ` since last `simplify _ φ` call.
NB: If branching in DPLL, call `simplify` first. -/
-- textbook: propagateUnits
partial def propagateUnits (τ : PropAssignment) (Γ : CnfForm) : PropAssignment × CnfForm :=
  -- If `Γ` is unsat, we're done.
  if Γ.hasEmpty then ⟨τ, Γ⟩
  else match Γ.findUnit with
    -- If there are no unit clauses, we're done.
    | none   => ⟨τ, Γ⟩
    | some x =>
      -- If there is a unit clause `x`, simplify the formula
      -- assuming `x` is true and continue propagating.
      let Γ' := simplify x Γ
      if τ.mem x.name
      then panic! s!"'{x}' has already been assigned and should not appear in the formula."
      else propagateUnits (τ.withLit x) Γ'
-- end: propagateUnits

#eval toString <| propagateUnits [] cnf!{p, q, q -q}
#eval toString <| propagateUnits [] cnf!{p, q, -q -q}
#eval toString <| propagateUnits [] cnf!{p q, p -q}

/-- Assign (previously unassigned) `x` to true and perform unit propagation. -/
-- textbook: propagateWithNew
def propagateWithNew (x : Lit) (τ : PropAssignment) (Γ : CnfForm) :
    PropAssignment × CnfForm :=
  propagateUnits (τ.withLit x) (simplify x Γ)
-- end: propagateWithNew

/-- Picks which literal to split on. The parity (whether it's negated) returned should
be tried first, and then the opposite. -/
-- TODO which heuristics could be used here?
-- textbook: pickSplit?
def pickSplit? : CnfForm → Option Lit
  | []       => none
  | c :: cs  => match c with
    | x :: _ => x
    | _      => pickSplit? cs
-- end: pickSplit?

-- textbook: dpllSat
partial def dpllSatAux (τ : PropAssignment) (Γ : CnfForm) :
    Option (PropAssignment × CnfForm) :=
  if Γ.hasEmpty then none
  else match pickSplit? Γ with
  -- No variables left to split on, we found a solution.
  | none => some (τ, Γ)
  -- Split on `x`.
  -- `<|>` is the "or else" operator, which tries one action and if that fails
  -- tries the other.
  | some x => goWithNew x τ Γ <|> goWithNew (-x) τ Γ

where
  /-- Assigns `x` to true and continues out DPLL. -/
  goWithNew (x : Lit) (τ : PropAssignment) (Γ : CnfForm) :
      Option (PropAssignment × CnfForm) :=
    let (τ', Γ') := propagateWithNew x τ Γ
    dpllSatAux τ' Γ'

/-- Solve `Γ` using DPLL. Return a satisfying assignment if found, otherwise `none`. -/
def dpllSat (Γ : CnfForm) : Option PropAssignment :=
  let ⟨τ, Γ⟩ := propagateUnits [] Γ
  (dpllSatAux τ Γ).map fun ⟨τ, _⟩ => τ
-- end: dpllSat

namespace hidden

-- Solve a formula.

def Γ  := cnf!{p q -r, -p q r, -p -q r, p r, -p -r}
def τ := dpllSat Γ |>.get!
#eval τ
#eval τ.evalCnf Γ

-- Find no assignment for unsat formulas.

#eval dpllSat cnf!{p q, -q, -p}
#eval dpllSat cnf!{-p q, -q p, p q, -p -q}

end hidden

theorem dpllSatYesSpec : ∀ Γ, ∀ τ, dpllSat Γ = some τ ↔ τ.evalCnf Γ = true := by
  admit -- TODO
theorem dpllSatNoSpec : ∀ Γ, dpllSat Γ = none ↔ ∀ (τ : PropAssignment), τ.evalCnf Γ = false := by
  admit -- TODO

def String.splitOn' (s : String) (sep : String) : List String :=
  (s.splitOn sep).filter fun c => !c.isEmpty

/-- Parse a DIMACS CNF file. -/
def readDimacs (fname : String) : IO CnfForm := do
  let lns ← IO.FS.lines fname
  let lns := lns.filter (fun ln => ln ≠ "" ∧ ln.front ≠ 'c')
  let header := (lns.get! 0).splitOn' " "
  let ["p", "cnf", n, m] ← .ok header
    | throw <| IO.userError "Invalid DIMACS header."
  let (some nVars, some nClauses) ← .ok (n.toNat?, m.toNat?)
    | throw <| IO.userError "Invalid var/clause count in header."

  let lns := lns.extract 1 lns.size
  if lns.size ≠ nClauses then throw <| IO.userError "Inconsistent clause count." else pure ()

  let mut cnf : CnfForm := []
  for ln in lns do
    let lits := ln.splitOn' " "
    let lits := lits.take (lits.length - 1) -- drop "0"
    let lits := lits.map Lit.ofDimacs?
    if lits.any (·.isNone) then
      throw <| IO.userError s!"cannot parse line '{ln}'"
    cnf := (lits.map Option.get!) :: cnf

  return cnf

def main (args : List String) : IO UInt32 :=
  match args with
  | fname :: _ => do
    let cnf ← readDimacs fname
    --IO.println <| "c Formula:\nc " ++ toString cnf
    match dpllSat cnf with
      | none   => IO.println "s UNSATISFIABLE"
                  return 20
      | some τ => IO.println s!"c {τ}"
                  IO.println "s SATISFIABLE"
                  IO.println <| "v " ++ " ".intercalate (τ.map fun (x, v) => if v then x else "-" ++ x) ++ " 0"
                  return 10
  | _ => do
    IO.println ("Usage: dpll <problem.cnf>")
    return 1

--#eval main ()
