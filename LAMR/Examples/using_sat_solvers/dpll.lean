import Init.System.IO
import LAMR.Util.Propositional.Syntax

/-! A very basic DPLL SAT solver. -/

def PropAssignment.evalClause (τ : PropAssignment) (c : Clause) : Bool :=
  (c : List Lit).foldl (init := false) (fun v l => v ∨ (τ.evalLit? l |>.get!))

def PropAssignment.evalCnf (τ : PropAssignment) (φ : CnfForm) : Bool :=
  (φ : List Clause).foldl (init := true) (fun v c => v ∧ τ.evalClause c)

/-- Erases all elements equal to the argument from the list. -/
protected def List.eraseAll {α} [BEq α] : List α → α → List α
  | [],    b => []
  | a::as, b => match a == b with
    | true  => List.eraseAll as b
    | false => a :: List.eraseAll as b

/-- Simplifies the CNF assuming `x` is true. `x` must not be a constant. -/
-- textbook: simplify
def simplify (x : Lit) (φ : CnfForm) : CnfForm :=
  assert! x != lit!{⊥} && x != lit!{⊤}
  match φ with
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
  | []       => false
  | [] :: cs => true
  | c :: cs  => hasEmpty cs

/-- Finds a unit clause, if there are any. -/
def CnfForm.findUnit : CnfForm → Option Lit
  | []        => none
  | [x] :: cs => some x
  | c :: cs   => findUnit cs

/-- Performs a round of unit propagation on `φ` under the assignment `τ`.
Returns an updated assignment and a simplified formula.

Assumes no additions to `τ` since last `simplify _ φ` call.
NB: If branching in DPLL, call `simplify` first. -/
-- textbook: propagateUnits
partial def propagateUnits (τ : PropAssignment) (φ : CnfForm) : PropAssignment × CnfForm :=
  -- If `φ` is unsat, we're done.
  if φ.hasEmpty then ⟨τ, φ⟩
  else match φ.findUnit with
    -- If there are no unit clauses, we're done.
    | none   => ⟨τ, φ⟩
    | some x =>
      -- If there is a unit clause `x`, simplify the formula
      -- assuming `x` is true and continue propagating.
      let φ' := simplify x φ
      if τ.mem x.name
      then panic! s!"'{x}' has already been assigned and should not appear in the formula."
      else propagateUnits (τ.withLit x) φ'
-- end: propagateUnits

/-- Assign (previously unassigned) `x` to true and peform unit propagation. -/
-- textbook: propagateWithNew
def propagateWithNew (x : Lit) (τ : PropAssignment) (φ : CnfForm) :
    PropAssignment × CnfForm :=
  propagateUnits (τ.withLit x) (simplify x φ)
-- end: propagateWithNew

#eval toString <| propagateUnits [] cnf!{p, q, q -q}
#eval toString <| propagateUnits [] cnf!{p, q, -q -q}
#eval toString <| propagateUnits [] cnf!{p q, p -q}

/-- Picks which literal to split on. The parity (whether it's negated) returned should
be tried first, and then the opposite. -/
-- TODO which heuristics could be used here?
-- textbook: pickSplit?
def pickSplit? : CnfForm → Option Lit
  | []      => none
  | c :: cs => match c with
    | x :: xs => x
    | _       => pickSplit? cs
-- end: pickSplit?

-- textbook: dpllSat
partial def dpllSatAux (τ : PropAssignment) (φ : CnfForm) :
    Option (PropAssignment × CnfForm) :=
  if φ.hasEmpty then none
  else match pickSplit? φ with
  -- No variables left to split on, we found a solution.
  | none => some (τ, φ)
  -- Split on `x`.
  -- `<|>` is the "or else" operator, which tries one action and if that fails
  -- tries the other.
  | some x => goWithNew x τ φ <|> goWithNew (-x) τ φ

where
  /-- Assigns `x` to true and continues out DPLL. -/
  goWithNew (x : Lit) (τ : PropAssignment) (φ : CnfForm) :
      Option (PropAssignment × CnfForm) :=
    let (τ', φ') := propagateWithNew x τ φ
    dpllSatAux τ' φ'

/-- Solve `φ` using DPLL. Return a satisfying assignment if found, otherwise `none`. -/
def dpllSat (φ : CnfForm) : Option PropAssignment :=
  let ⟨τ, φ⟩ := propagateUnits [] φ
  (dpllSatAux τ φ).map fun ⟨τ, _⟩ => τ
-- end: dpllSat

namespace hidden

-- Solve a formula.

def ϕ := cnf!{p q -r, -p q r, -p -q r, p r, -p -r}
def τ := dpllSat ϕ |>.get!
#eval τ
#eval τ.evalCnf ϕ

-- Find no assignment for unsat formulas.

#eval dpllSat cnf!{p q, -q, -p}
#eval dpllSat cnf!{-p q, -q p, p q, -p -q}

end hidden

theorem dpllSatYesSpec : ∀ ϕ, ∀ τ, dpllSat ϕ = some τ ↔ τ.evalCnf ϕ = true := by
  admit -- TODO
theorem dpllSatNoSpec : ∀ ϕ, dpllSat ϕ = none ↔ ∀ (τ : PropAssignment), τ.evalCnf ϕ = false := by
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
    let vars := ln.splitOn' " "
    let vars := vars.take (vars.length - 1) -- drop "0"
    let vars := vars.map Lit.ofDimacs?
    if vars.any (·.isNone) then
      throw <| IO.userError s!"cannot parse line '{ln}'"
    cnf := (vars.map Option.get!) :: cnf

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
