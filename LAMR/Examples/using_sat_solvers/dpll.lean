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

-- textbook: simplify
/-- Simplifies the CNF assuming `x` is true. `x` must not be a constant. -/
def simplify (x : Lit) (φ : CnfForm) : CnfForm :=
  assert! x != lit!{⊥} && x != lit!{⊤}
  match φ with
  | []      => []
  | c :: cs =>
               let cs' := simplify x cs
               -- Clause becomes satisfied
               if c.elem x then cs'
               -- Some literals in the clause become falsified
               else if c.elem x.negate then c.eraseAll x.negate :: cs'
               else c :: cs'

#eval simplify lit!{x₁} cnf!{x₁ -y₁ x₁ -x₁, x₁, y₁ y₁, -y₁ -x₁, -x₁}
-- end textbook: simplify

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

-- textbook: propagateUnits
/-- Assumes no additions to `α` since last `simplify _ F` call.
NB: If branching, call `simplify` first. -/
partial def propagateUnits : PropAssignment → CnfForm → PropAssignment × CnfForm
  | τ, [] => ⟨τ, []⟩
  | τ, φ  =>
    if φ.hasEmpty then ⟨τ, φ⟩
    else match φ.findUnit with
      | none   => ⟨τ, φ⟩
      | some x => if τ.mem x.name
                  then panic! "Forgot to simplify -- no literal that has already been assigned should appear in the formula."
                  else propagateUnits (τ.withLit x) (simplify x φ)
-- end textbook: propagateUnits

def propagateWithNew : Lit → PropAssignment → CnfForm → PropAssignment × CnfForm
  | x, τ, φ => let φ := simplify x φ
               propagateUnits (τ.withLit x) φ

#eval toString $ propagateUnits [] cnf!{x₁, y₁, y₁ -y₁}
#eval toString $ propagateUnits [] cnf!{x₁, y₁, -y₁ -y₁}

/-- Picks which literal to split on. The parity (whether it's negated) returned should
be tried first, and then the opposite. -/
-- TODO which heuristics could be used here?
def pickSplit : CnfForm → Option Lit
  | []      => none
  | c :: cs => match c with
    | x :: xs => x
    | _       => pickSplit cs

-- textbook: dpllSat
partial def dpllSatAux : Nat → PropAssignment → CnfForm → Option (PropAssignment × CnfForm)
  | lvl, τ, φ => match pickSplit φ with
    | none   => some ⟨τ, φ⟩
    | some x => let dpllSatAux := dpllSatAux (lvl+1)
                let (τ₂, φ₂) := propagateWithNew x τ φ
                if φ₂.hasEmpty then
                  let x' := x.negate
                  let (τ₃, φ₃) := propagateWithNew x' τ φ
                  if φ₃.hasEmpty then
                    none
                  else dpllSatAux τ₃ φ₃
                else (dpllSatAux τ₂ φ₂).orElse (
                  let x' := x.negate
                  let (τ₄, φ₄) := propagateWithNew x' τ φ
                  if φ₄.hasEmpty then
                    none
                  else dpllSatAux τ₄ φ₄)

def dpllSat (F : CnfForm) : Option PropAssignment :=
  let ⟨τ, φ⟩ := propagateUnits [] F
  (dpllSatAux 0 τ φ).map (fun ⟨τ, _⟩ => τ)
-- end textbook: dpllSat

def ϕ := cnf!{x₁ x₂ -x₃, -x₁ x₂ x₃, -x₁ -x₂ x₃, x₁ x₃, -x₁ -x₃}
#eval (dpllSat ϕ).get! |>.evalCnf ϕ

theorem dpllSatYesSpec : ∀ ϕ, ∀ τ, dpllSat ϕ = some τ ↔ τ.evalCnf ϕ = true := by
  admit
theorem dpllSatNoSpec : ∀ ϕ, dpllSat ϕ = none ↔ ∀ (τ : PropAssignment), τ.evalCnf ϕ = false := by
  admit

def String.splitOn' (s : String) (sep : String) : List String :=
  (s.splitOn sep).filter (fun c => !c.isEmpty)

def readDimacs (fname : String) : IO CnfForm := do
  let lns ← IO.FS.lines fname
  let lns := lns.filter (fun ln => ln ≠ "" ∧ ln.front ≠ 'c')
  let header := (lns.get! 0).splitOn' " "
  let ["p", "cnf", n, m] ← header
    | throw $ IO.userError "Invalid DIMACS header."
  let (some nVars, some nClauses) ← (n.toNat?, m.toNat?)
    | throw $ IO.userError "Invalid var/clause count in header."

  let lns := lns.extract 1 lns.size
  if lns.size ≠ nClauses then throw $ IO.userError "Inconsistent clause count." else pure ()

  let mut cnf : CnfForm := []
  for ln in lns do
    let vars := ln.splitOn' " "
    let vars := vars.take (vars.length - 1) -- drop "0"
    let vars := vars.map Lit.ofDimacs?
    if vars.any (·.isNone) then
      throw $ IO.userError s!"cannot parse line '{ln}'"
    cnf := (vars.map Option.get!) :: cnf

  return cnf

def main (args : List String) : IO UInt32 :=
  match args with
  | fname :: _ => do
    let cnf ← readDimacs fname
    --IO.println $ "c Formula:\nc " ++ toString cnf;
    let result := match dpllSat cnf with
      | none   => "s UNSATISFIABLE"
      | some τ => "c " ++ toString τ ++
                  "\ns SATISFIABLE\nv " ++
                  " ".intercalate (τ.map fun (x, v) => if v then x else "-" ++ x) ++
                  " 0"
    IO.println result
    pure 0
  | _ => do
    IO.println ("Usage: " ++ "dpll" ++ " <problem.cnf>")
    pure 1