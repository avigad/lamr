import LAMR.Util.FirstOrder.Smt
import LAMR.Util.FirstOrder.Syntax
import LAMR.System
import Batteries

def FOTerm.toSmtLib : FOTerm → Sexp
  | var s => s
  | app const [] => const
  | app fn args => sexp!{({Sexp.atom fn} ...{args.pmap (fun a _ => a.toSmtLib) fun _ => id})}

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

def FOTerm.toTptp : FOTerm → String
  | var s => s.toUpper
  | app const [] => const.toLower
  | app fn args => s!"{fn}({",".intercalate <| args.pmap  (fun a _ => a.toTptp) fun _ => id})"

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

def FOTerm.checkWf (ctx : Lean.HashMap String String) : FOTerm → Except String Unit
  | var x => do
    let some x' := ctx.find? x.toLower
      | .error s!"unbound variable '{x}'"
    if x != x' then
      throw s!"unbound variable '{x}' ('{x'}' is bound)"
    return ()
  | app c [] =>
    if ctx.contains c.toLower then
      .error s!"constant symbol '{c}' has the same name as a bound variable"
    else .ok ()
  | app f args =>
    if ctx.contains f.toLower then
      .error s!"function symbol '{f}' has the same name as a bound variable"
    else
      args.attach.foldlM (init := ()) (fun _ ⟨a, _⟩ => a.checkWf ctx)

/-- Carry out a lightweight, strict well-formedness check
on the provided formula in variable context `ctx`.
We check that:
- each mentioned variable is bound; and
- no binder shadows (re-binds) a previously bound variable; and
- no relation, constant, or function occurrence has the same name as a bound variable.

For maximum strictness,
shadowing checks are _case-insensitive_ (so e.g. `fo!{∀ x. X = X}` is not allowed)
whereas well-scopedness checks are _case-sensitive_ (`fo!{∀ x. %X = %X}` is rejected).

Return `.error e` in case of an error,
otherwise `.ok ()`. -/
def FOForm.checkWf (ctx : Lean.HashMap String String) : FOForm → Except String Unit
  | eq s t => s.checkWf ctx >>= fun _ => t.checkWf ctx
  | rel R ts =>
    if ctx.contains R.toLower then
      .error s!"relation symbol '{R}' has the same name as a bound variable"
    else
      ts.attach.foldlM (init := ()) (fun _ ⟨a, _⟩ => a.checkWf ctx)
  | tr | fls => .ok ()
  | neg φ => φ.checkWf ctx
  | conj φ ψ | disj φ ψ | impl φ ψ | biImpl φ ψ =>
    φ.checkWf ctx >>= fun _ => ψ.checkWf ctx
  | all x φ | ex x φ =>
    if ctx.contains x.toLower then
      .error s!"variable '{x}' is shadowed (re-bound)"
    else
      φ.checkWf (ctx.insert x.toLower x)

-- Same as IO.Process.run, but does not require exitcode = 0
private def run' (args : IO.Process.SpawnArgs) : IO String := do
  let out ← IO.Process.output args
  pure <| out.stdout ++ out.stderr

private def callSolver (args : IO IO.Process.SpawnArgs) (encodeProblem : List FOForm → FOForm → String)
    (axioms : List FOForm) (goal : FOForm) (verbose : Bool := false)
    : IO (List Sexp) := do
  for ax in axioms do
    if let .error e := ax.checkWf ∅ then
      throwThe IO.Error s!"{e} in axiom\n  {ax}"
  if let .error e := goal.checkWf ∅ then
    throwThe IO.Error s!"{e} in axiom\n  {goal}"
  let cmds := encodeProblem axioms goal
  if verbose then
    IO.println "Sending problem:"
    IO.println cmds
  IO.FS.writeFile "LAMR/bin/temp.atp" cmds
  let out ← run' (← args)
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

private def argsVampireSmt : IO IO.Process.SpawnArgs := return {
  cmd := "LAMR/bin/vampire"
  args := #["--input_syntax", "smtlib2", "--mode", "casc", "LAMR/bin/temp.atp"] }

-- TODO(Jeremy): this will fail on anything other than Linux.
-- They are there in case we get other binaries.
private def argsVampireTptp : IO IO.Process.SpawnArgs := do
  let sys ← getSystem
  pure {
    cmd := match sys with
      | .linux => "LAMR/bin/vampire"
      | .osx => "LAMR/bin/vampire"
      | .osxArm => "LAMR/bin/vampire"
      | .windows => "LAMR/bin/vampire"
      | .windowsArm => "LAMR/bin/vampire"
    args :=#["--mode", "casc", "LAMR/bin/temp.atp"] }

def callVampireSmt := @callSolver argsVampireSmt problemToSmtLib
def callVampireTptp := @callSolver argsVampireTptp problemToTptp
