import LAMR.Util.FirstOrder.Smt
import LAMR.Util.FirstOrder.Syntax

partial def FOTerm.toSmtLib : FOTerm → Sexp
  | var s => s
  | app const [] => const
  | app fn args => sexp!{({Sexp.atom fn} ...{args.map toSmtLib})}

/-- Encodes a first-order formula in SMT-LIB using the sort `Dom` for all variables. -/
def FOForm.toSmtLib : FOForm → Sexp
  | eq s t => sexp!{(= {s.toSmtLib} {t.toSmtLib})}
  | rel R ts => sexp!{({Sexp.atom R} ...{ts.map FOTerm.toSmtLib})}
  | tr => sexp!{true}
  | fls => sexp!{false}
  | neg φ => sexp!{(not {φ.toSmtLib})}
  | conj φ ψ => sexp!{(and {φ.toSmtLib} {ψ.toSmtLib})}
  | disj φ ψ => sexp!{(or {φ.toSmtLib} {ψ.toSmtLib})}
  | impl φ ψ => sexp!{(=> {φ.toSmtLib} {ψ.toSmtLib})}
  | biImpl φ ψ => sexp!{(and (=> {φ.toSmtLib} {ψ.toSmtLib}) (=> {ψ.toSmtLib} {φ.toSmtLib}))}
  | all x φ => sexp!{(forall (({x} Dom)) {φ.toSmtLib})}
  | ex x φ => sexp!{(exists (({x} Dom)) {φ.toSmtLib})}

partial def FOTerm.toTptp : FOTerm → String
  | var s => s.toUpper
  | app const [] => const.toLower
  | app fn args => s!"{fn}({",".intercalate <| args.map toTptp})"

/-- Encodes a first-order formula in TPTP format. -/
def FOForm.toTptp : FOForm → String
  | eq s t => s!"{s.toTptp} = {t.toTptp}"
  | rel R ts => s!"{R.toLower}({",".intercalate <| ts.map FOTerm.toTptp})"
  | tr => "true"
  | fls => "false"
  | neg φ => s!"~({φ.toTptp})"
  | conj φ ψ => s!"({φ.toTptp}) & ({ψ.toTptp})"
  | disj φ ψ => s!"({φ.toTptp}) | ({ψ.toTptp})"
  | impl φ ψ => s!"({φ.toTptp}) => ({ψ.toTptp})"
  | biImpl φ ψ => s!"({φ.toTptp}) <=> ({ψ.toTptp})"
  | all x φ => s!"![{x.toUpper}] : ({φ.toTptp})"
  | ex x φ => s!"?[{x.toUpper}] : ({φ.toTptp})"

def FOForm.toTptpAxiom (nm : String) (φ : FOForm) : String :=
  s!"fof({nm},axiom,{φ.toTptp})."

def FOForm.toTptpGoal (nm : String) (φ : FOForm) : String :=
  s!"fof({nm},conjecture,{φ.toTptp})."

-- Same as IO.Process.run, but does not require exitcode = 0
private def run' (args : IO.Process.SpawnArgs) : IO String := do
  let out ← IO.Process.output args
  pure <| out.stdout ++ out.stderr

private def callSolver (args : IO.Process.SpawnArgs) (encodeProblem : List FOForm → FOForm → String)
    (axioms : List FOForm) (goal : FOForm) (verbose : Bool := false)
    : IO (List Sexp) := do
  let cmds := encodeProblem axioms goal
  if verbose then
    IO.println "Sending problem:"
    IO.println cmds
  IO.FS.writeFile "LAMR/bin/temp.atp" cmds
  let out ← run' args
  if verbose then
    IO.println "\nSolver replied:"
    IO.println out
  return []

def problemToSmtLib (axioms : List FOForm) (goal : FOForm) : String :=
  let axioms := axioms.map (sexp!{(assert {·.toSmtLib})})
  let goal := sexp!{(assert (not {goal.toSmtLib}))}
  let cmds := sexps!{
    (declare-sort Dom 0)
    -- hack: hardcode the right constants
    (declare-const Tarr Dom)
    (declare-const Fether Dom)
    (declare-fun Sane (Dom) Bool)
    (declare-fun Insane (Dom) Bool)
    (declare-fun Doctor (Dom) Bool)
    (declare-fun Patient (Dom) Bool)
    (declare-fun Peculiar (Dom) Bool)
    (declare-fun Special (Dom) Bool)
    (declare-fun bf (Dom) Dom)
    ...{axioms}
    {goal}
    (check-sat)
  }
  Sexp.serializeMany cmds

def problemToTptp (axioms : List FOForm) (goal : FOForm) : String :=
  let axioms := axioms.enum.map fun (i, φ) => φ.toTptpAxiom s!"ax{i}"
  let goal := goal.toTptpGoal "c1"
  "\n".intercalate (axioms ++ [goal])

private def argsVampireSmt : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/vampire"
  args := #["--input_syntax", "smtlib2", "--mode", "casc", "LAMR/bin/temp.atp"] }

private def argsVampireTptp : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/vampire"
  args := #["--mode", "casc", "LAMR/bin/temp.atp"] }

def callVampireSmt := @callSolver argsVampireSmt problemToSmtLib
def callVampireTptp := @callSolver argsVampireTptp problemToTptp
