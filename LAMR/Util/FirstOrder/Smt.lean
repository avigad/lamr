import Init
import Lean.Parser
import Lean.PrettyPrinter

section
open Lean.Parser
open Lean.PrettyPrinter

/-- Like `ident` but with no splitting on dots and accepts anything that's not whitespace
or parentheses. So e.g. `<=` works. -/
def generalIdent : Parser :=
  withAntiquot (mkAntiquot "generalIdent" `generalIdent) {
    fn := fun c s =>
      let startPos := s.pos
      let s := takeWhile1Fn (fun c => !("(){}[].".contains c) ∧ !c.isWhitespace) "expected generalized identifier" c s
      mkNodeToken `generalIdent startPos c s }

def Lean.TSyntax.getGeneralId : TSyntax `generalIdent → String
  | ⟨Syntax.node _ `generalIdent args⟩ => args[0]!.getAtomVal!
  | s => panic! s!"unexpected syntax '{s}'"

@[combinatorFormatter generalIdent] def generalIdent.formatter : Formatter := pure ()
@[combinatorParenthesizer generalIdent] def generalIdent.parenthesizer : Parenthesizer := pure ()
end

inductive Sexp where
  | atom : String → Sexp
  | expr : List Sexp → Sexp
  deriving Repr, BEq, Inhabited

namespace Sexp

instance : Coe String Sexp :=
  ⟨Sexp.atom⟩

declare_syntax_cat sexp

syntax generalIdent : sexp
syntax "(" sexp* ")" : sexp
syntax "(" sexp* "...{" term "}" sexp* ")" : sexp
syntax "{" term "}" : sexp

-- This coercion is justified by the macro expansions below.
instance : Coe (Lean.TSyntax `sexp) (Lean.TSyntax `term) where
  coe a := ⟨a.raw⟩

macro_rules
  | `(sexp| $a:generalIdent) => `(Sexp.atom $(Lean.quote a.getGeneralId))
  | `(sexp| ( $ss:sexp* )) => `(Sexp.expr [ $ss,* ])
  | `(sexp| ( $ss:sexp* ...{ $t:term } $ts:sexp* )) => `(Sexp.expr <| [ $ss,* ] ++ ($t : List Sexp) ++ [ $ts,* ])
  | `(sexp| { $t:term }) => `($t)

syntax "sexp!{" sexp "}" : term
macro_rules
  | `(sexp!{ $s:sexp }) => `($s)

syntax "sexps!{" sexp* "}" : term
syntax "sexps!{" sexp* "...{" term "}" sexp* "}" : term
macro_rules
  | `(sexps!{ $ss:sexp* }) => do
    let ss ← ss.mapM fun s => `(sexp!{ $s })
    `([ $[$ss],* ])
  | `(sexps!{ $ss:sexp* ...{ $t:term } $ts:sexp* }) =>
    `([ $[$ss],* ] ++ ($t : List Sexp) ++ [ $[$ts],* ])

partial def serialize : Sexp → String
  | atom s  => s
  | expr ss => s!"({" ".intercalate <| ss.map serialize})"

partial def serializeMany (ss : List Sexp) : String :=
  ss.map serialize |> "\n".intercalate

instance : ToString Sexp :=
  ⟨serialize⟩

instance : Repr Sexp where
  reprPrec s _ := s!"sexp!\{{toString s}}"

partial def parse (s : String) : Except String (List Sexp) :=
  let tks := tokenize #[] s.toSubstring
  parseMany #[] tks.toList |>.map Prod.fst |>.map Array.toList
where
  tokenize (stk : Array Substring) (s : Substring) : Array Substring :=
    if s.isEmpty then stk
    else
      let c := s.front
      if c == ')' || c == '(' then
        tokenize (stk.push <| s.take 1) (s.drop 1)
      else if c.isWhitespace then tokenize stk (s.drop 1)
      else
        let tk := s.takeWhile fun c => !c.isWhitespace && c != '(' && c != ')'
        if tk.bsize > 0 then tokenize (stk.push tk) (s.extract ⟨tk.bsize⟩ ⟨s.bsize⟩)
        else unreachable!

  parseOne : List Substring → Except String (Sexp × List Substring)
    | tk :: tks => do
      if tk.front == ')' then
        throw "mismatched parentheses"
      if tk.front == '(' then
        let (ss, tks) ← parseMany #[] tks
        return (expr ss.toList, tks)
      else
        return  (atom tk.toString, tks)
    | [] => throw "expected input, got none"

  parseMany (stk : Array Sexp) : List Substring → Except String (Array Sexp × List Substring)
    | tk :: tks => do
      if tk.front == ')' then .ok (stk, tks)
      else
        let (e, tks) ← parseOne (tk :: tks)
        parseMany (stk.push e) tks
    | [] => .ok (stk, [])

end Sexp

private def argsCvc4 : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/cvc4"
  args := #["--lang", "smt", "LAMR/bin/temp.smt"] }

private def argsCvc5 : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/cvc5"
  args := #["--lang", "smt", "LAMR/bin/temp.smt"] }

private def argsZ3 : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/z3"
  args := #["-smt2", "LAMR/bin/temp.smt"] }

private def argsBoolector : IO.Process.SpawnArgs := {
  cmd := "LAMR/bin/boolector"
  args := #["--smt2", "LAMR/bin/temp.smt"] }

-- Same as IO.Process.run, but does not require exitcode = 0
private def run' (args : IO.Process.SpawnArgs) : IO String := do
  let out ← IO.Process.output args
  pure out.stdout

/-- Executes the solver with the provided list of commands in SMT-LIB s-expression format.
Returns the solver output as s-expressions. -/
private def callSolver (args : IO.Process.SpawnArgs) (commands : List Sexp) (verbose : Bool := false)
    : IO (List Sexp) := do
  let cmdStr := Sexp.serializeMany commands
  if verbose then
    IO.println "Sending SMT-LIB problem:"
    IO.println cmdStr
  IO.FS.writeFile "LAMR/bin/temp.smt" cmdStr
  let out ← run' args
  if verbose then
    IO.println "\nSolver replied:"
    IO.println out
  let out ← IO.ofExcept (Sexp.parse out)
  return out

def callCvc4 := @callSolver argsCvc4
def callCvc5 := @callSolver argsCvc5
def callZ3 := @callSolver argsZ3
def callBoolector := @callSolver argsBoolector

private def hexdigits : Array Char :=
  #[ '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f' ]

private def enhexByte (x : UInt8) : String :=
  ⟨[hexdigits.get! $ UInt8.toNat $ (x.land 0xf0).shiftRight 4,
    hexdigits.get! $ UInt8.toNat $ x.land 0xf ]⟩

/-- Convert a little-endian (LSB first) list of bytes to hexadecimal. -/
private def enhexLE : List UInt8 → String
  | [] => ""
  | b::bs => enhexLE bs ++ enhexByte b

/-- Converts a number `n` to its hexadecimal SMT-LIB representation as a `nBits`-bit vector.
For example `toBVConst 32 0xf == "#x0000000f"`. -/
def toBVConst (nBits : Nat) (n : Nat) : String :=
  assert! nBits % 8 == 0
  let nBytes := nBits/8
  let bytes := List.range nBytes |>.map fun i => UInt8.ofNat ((n >>> (i*8)) &&& 0xff)
  "#x" ++ enhexLE bytes

open Std (AssocList)

/-- Extracts constants assigned in a model returned from an SMT solver.
The model is expected to be a single s-expression representing a list,
with constant expressions represented by `(define-fun <name> () <type> <body>)`. -/
def decodeModelConsts : Sexp → AssocList String Sexp
  | Sexp.expr ss =>
    ss.foldl (init := AssocList.empty) fun
      | acc, sexp!{(define-fun {Sexp.atom x} () {_} {body})} =>
        acc.insert x body
      | acc, _ => acc
  | _ => AssocList.empty

/-- Evaluates an SMT-LIB constant numeral such as `0` or `#b01` or `#x02`. -/
def evalNumConst : Sexp → Option Nat
  | Sexp.atom s =>
    let s' :=
      if s.startsWith "#b" then "0" ++ s.drop 1
      else if s.startsWith "#x" then "0" ++ s.drop 1
      else s
    Lean.Syntax.decodeNatLitVal? s'
  | Sexp.expr _ => none