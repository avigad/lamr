import LAMR.Util.Propositional.Transformations
import LAMR.Util.Propositional.DRAT
import Std
open Std
open Lean
open List
open Nat
open HashMap

def SNH := HashMap String Nat
def NSH := HashMap Nat String
def HH := SNH × NSH

-- TODO: better handling of true and false
def litVar : Lit → String
| Lit.tr    => "⊤"
| Lit.fls   => "⊥"
| Lit.pos s => s
| Lit.neg s => s

def addLiteral : HH → Lit → HH
| (sn, ns), l =>
let s := litVar l
if sn.contains s
then (sn, ns)
else let k := sn.size + 1
     (sn.insert s k, ns.insert k s)

def addCla : HH → Clause → HH
| h, c => foldl addLiteral h c

def addCnfForm : CnfForm → HH
| c => foldl addCla (empty, empty) c

def charToNat : Char → Option Nat
| '0' => some 0
| '1' => some 1
| '2' => some 2
| '3' => some 3
| '4' => some 4
| '5' => some 5
| '6' => some 6
| '7' => some 7
| '8' => some 8
| '9' => some 9
| _ => none

protected partial def String.toNatCore : Nat → String → Option Nat
| k, ⟨[]⟩ => some k
| k, ⟨c :: s⟩ =>
  match charToNat c with
  | some m => String.toNatCore ((k * 10) + m) ⟨s⟩
  | none   => none

protected def String.toNat (s : String) : Option Nat := String.toNatCore 0 s

def Lit.toDimacs (h : SNH) : Lit → String
| tr    => ""  -- should not happen
| fls   => ""
| pos s => toString (h.findD s 0)
| neg s => "-" ++ toString (h.findD s 0)

protected def Clause.toDimacs (h : SNH) : Clause → String
| [] => "0"
| [l] => l.toDimacs h ++ " 0"
| l0 :: l1 :: ls => l0.toDimacs h ++ " " ++ Clause.toDimacs h (l1 :: ls)

protected def CnfForm.toDimacsCore (h : SNH) (acc : String) : CnfForm → String
| [] => acc
| [c] => acc ++ c.toDimacs h
| c0 :: c1 :: cs => CnfForm.toDimacsCore h (acc ++ c0.toDimacs h ++ "\n") (c1 :: cs)

protected def CnfForm.toDimacs (c : CnfForm) : SNH × NSH × String :=
let (sn, ns) := addCnfForm c
let emptyStr := ""
(sn, ns, s!"p cnf {sn.size} {c.length}\n{c.toDimacsCore sn emptyStr}")

def runCadical : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/cadical"
  args := #["LAMR/bin/temp.cnf", "LAMR/bin/temp.drat"] }

-- Same as IO.Process.run, but does not require exitcode = 0
def run' (args : IO.Process.SpawnArgs) : IO String := do
  let out ← IO.Process.output args
  pure out.stdout

inductive SatResult
| Sat : List Lit → SatResult
| Unsat : CnfForm → SatResult
deriving Inhabited, Repr, DecidableEq
open SatResult

def String.toLit (h : NSH) : String → Option Lit
| ⟨'-' :: cs⟩ =>
  match String.toNat ⟨cs⟩ with
  | some n => Lit.neg (h.findD n "ERROR")
  | none => none
| s =>
  match String.toNat s with
  | some n => Lit.pos (h.findD n "ERROR")
  | none => none

/-- Given a list of solver output lines containing a model, returns the model. -/
private def parseModel (h : NSH) (lns : List String) : Except String (List Lit) :=
  go [] lns |>.map List.reverse
where
  -- called on every line
  go (acc : List Lit) : List String → Except String (List Lit)
    | ln :: lns =>
      match ln.splitOn " " with
      | "v" :: litSs => do
        let (done, lits) ← goLits acc litSs
        if done then lits
        else go lits lns
      | _ => go acc lns
    | [] =>
      if acc.length > 0 then
        throw s!"model does not end with \"0\", literals so far:\n{acc}"
      else
        throw "expected model, got no literals"
  -- called on every literal in a line
  goLits (acc : List Lit) : List String → Except String (Bool × List Lit)
    | litS :: litSs =>
      if litS == "0" then (true, acc) -- model ends at "0"
      else do
        let some lit ← String.toLit h litS
          | throw s!"expected literal, got '{litS}'"
        goLits (lit :: acc) litSs
    | [] => (false, acc)

def formatResult : SatResult → String
| Sat ls => "Satisfying assignment : " ++ toString ls
| Unsat m => "Unsat proof : \n" ++ toString m

def is_odd : Nat → Bool
| k + 2 => is_odd k
| 1 => Bool.true
| 0 => Bool.false

def natToLit (h : NSH) (k : Nat) : Option Lit :=
if is_odd k
then match k with
     | k' + 1 =>
       let k'' := k' / 2
       some $ Lit.neg (h.findD k'' $ toString k'')
     | _ => none
else some $ Lit.pos (h.findD (k / 2) $ toString (k / 2))

def natsToLits (h : NSH) : List Nat → Option (List Lit)
| [] => some []
| k :: ks =>
  match natToLit h k, natsToLits h ks with
  | some l, some ls => some (l :: ls)
  | _, _ => none

-- https://satcompetition.github.io/2021/certificates.html
def decode : Nat → Nat → List Nat → Option (List Nat)
| 0, 0, (0 :: ns) =>
    match decode 0 0 ns with
    | some ks => some (0 :: ks)
    | none => none
| k, o, (n :: ns) =>
  if n < 128
  then match decode 0 0 ns with
       | some ks => some $ (((2 ^ o) * n) + k) :: ks
       | none => none
  else decode (((2 ^ o) * (n - 128)) + k) (o + 1) ns
| 0, 0, [] => some []
| _, _, _ => none

def clausify (h : NSH) : Clause → List Nat → Option CnfForm
| _, [] => some []
| c, 0 :: ns =>
  match clausify h [] ns with
  | some m => some (c.reverse :: m)
  | none => none
| c, n :: ns => Id.run do
  match natToLit h n with
  | some l => clausify h (l :: c) ns
  | none => none

/-- Parses the output of a SAT solver given as a list of lines.
Returns `some lits` if SATISFIABLE, `none` if UNSATISFIABLE, otherwise describes a parsing error.
See http://www.satcompetition.org/2004/format-solvers2004.html -/
private def parseSatOutputAux (h : NSH) : List String → Except String (Option (List Lit))
  | ("s SATISFIABLE" :: lns) => do
    let lits ← parseModel h lns
    some lits
  | ("s UNSATISFIABLE" :: lns) => none
  | ("s UNKNOWN" :: lns) =>
    throw "solver returned 'UNKNOWN' satisfiability"
  | _ :: lns => parseSatOutputAux h lns
  | [] => throw "expected satisfiability status, saw none"

def parseSatOutput (h : NSH) (ss : List String) : IO SatResult :=
  match parseSatOutputAux h ss with
  | Except.error e =>
    throw <| IO.userError <| s!"{e}; CaDiCaL output:\n" ++ "\n".intercalate ss
  | Except.ok (some lits) => SatResult.Sat lits
  | Except.ok none => do
    -- TODO(WN): convert DRAT ints to `Lit`s via NSH;
    -- also the DRAT decoder is slow and buggy
    return SatResult.Unsat []
    -- let bs ← IO.FS.readBinFile "LAMR/bin/temp.drat"
    -- match DRAT.decodeDrat bs with

def callCadical (cnf : CnfForm) : IO (String × SatResult) := do
  let (sn, ns, cnfs) ← CnfForm.toDimacs cnf
  IO.FS.writeFile "LAMR/bin/temp.cnf" cnfs
  let s ← run' runCadical
  let ss ← String.splitOn s "\n"
  let rst ← parseSatOutput ns ss
  pure (s, rst)
