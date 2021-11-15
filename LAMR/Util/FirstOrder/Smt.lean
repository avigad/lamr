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
    
def Lean.Syntax.getGeneralId : Syntax → String
  | Syntax.node _ `generalIdent args => args[0].getAtomVal!
  | s => panic! s!"unexpected syntax '{s}'"

@[combinatorFormatter generalIdent] def generalIdent.formatter : Formatter := pure ()
@[combinatorParenthesizer generalIdent] def generalIdent.parenthesizer : Parenthesizer := pure ()
end

inductive Sexp where
  | atom : String → Sexp
  | expr : List Sexp → Sexp
  deriving Repr, BEq, Inhabited

namespace Sexp

declare_syntax_cat sexp

syntax generalIdent : sexp
syntax "(" sexp* ")" : sexp
syntax "(" sexp* "...{" term "}" sexp* ")" : sexp
syntax "{" term "}" : sexp

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
    `(#[ $[$ss],* ] ++ ($t : Array Sexp) ++ #[ $[$ts],* ])

partial def serialize : Sexp → String
  | atom s  => s
  | expr ss => s!"({" ".intercalate <| ss.map serialize})"

partial def serializeMany (ss : List Sexp) : String :=
  ss.map serialize |> "\n".intercalate
 
partial def parse : String → Sexp :=
  fun _ => atom "" -- TODO use the generated parser ?

instance : Coe String Sexp :=
  ⟨Sexp.atom⟩

instance : ToString Sexp :=
  ⟨serialize⟩

instance : Repr Sexp where
  reprPrec s _ := s!"sexp!\{{toString s}}"

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

-- Same as IO.Process.run, but does not require exitcode = 0
private def run' (args : IO.Process.SpawnArgs) : IO String := do
  let out ← IO.Process.output args
  pure out.stdout

/-- Executes the solver with the provided list of commands in SMT-LIB s-expression format. -/
private def callSolver (args : IO.Process.SpawnArgs) (commands : List Sexp) (verbose : Bool := false)
    : IO String := do
  let cmdStr := Sexp.serializeMany commands
  if verbose then
    IO.println "Sending SMT-LIB problem:"
    IO.println cmdStr
  IO.FS.writeFile "LAMR/bin/temp.smt" cmdStr
  let out ← run' args
  if verbose then
    IO.println "\nSolver replied:"
    IO.println out
  return out

def callCvc4 := @callSolver argsCvc4
def callCvc5 := @callSolver argsCvc5
def callZ3 := @callSolver argsZ3

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