import LAMR.Util.FirstOrder.Smt
open Std

/-- Encode the magic square of size `n` as a SMT-LIB problem in the QF_BV logic. -/
def magicSquareToBvSmt (n : Nat) : List Sexp := Id.run do
  let sq := toBVConst 32 (n^2)
  -- https://en.wikipedia.org/wiki/Magic_constant
  let magic := toBVConst 32 ((n^3 + n) / 2)

  let mut consts: Array Sexp := #[]

  -- Declare a 32-bit bitvector variable for each cell
  -- textbook: declare variables
  for i in [:n] do
    for j in [:n] do
      consts := consts.push sexp!{(declare-const {s!"m_{i}_{j}"} (_ BitVec 32))}
  -- end

  let mut asserts: Array Sexp := #[]

  -- Each cell is non-zero
  -- textbook: bvugt
  for i in [:n] do
    for j in [:n] do
      asserts := asserts.push sexp!{(bvugt {s!"m_{i}_{j}"} {toBVConst 32 0})}
  -- end

  -- Each cell is less than n²
  for i in [:n] do
    for j in [:n] do
      asserts := asserts.push sexp!{(bvule {s!"m_{i}_{j}"} {sq})}

  -- Each cell has a unique value
  -- The `...{ }` syntax splices a list of s-expressions into an s-expression.
  -- For example. `(foo ...{List.range 3 |>.map (toString ·)})` becomes `(foo 0 1 2)`.
  asserts := asserts.push sexp!{(distinct ...{List.join (List.range n |>.map fun i =>
    List.range n |>.map fun j => s!"m_{i}_{j}")})}

  -- Every row and column sums up to the magic constant
  for i in [:n] do
    asserts := asserts ++ sexps!{
      (= {magic} (bvadd ...{List.range n |>.map fun j => s!"m_{i}_{j}"}))
      (= {magic} (bvadd ...{List.range n |>.map fun j => s!"m_{j}_{i}"}))
    }

  -- Both diagonals sum up to the magic constant
  asserts := asserts ++ sexps!{
    (= {magic} (bvadd ...{List.range n |>.map fun j => s!"m_{j}_{n-j-1}"}))
    (= {magic} (bvadd ...{List.range n |>.map fun j => s!"m_{j}_{j}"}))
  }

  -- Wrap all assertions in `(assert ..)`
  -- textbook: wrap
  asserts := asserts.map fun c => sexp!{(assert {c})}

  -- Use the theory of quantifier-free bitvector expressions, and find a model if SAT
  sexps!{
    (set-logic QF_BV)
    (set-option :produce-models true)
    ...{(consts ++ asserts).toList}
    (check-sat)
    (get-model)
  }
  -- end

def decodeVar (x : String) : Except String (Nat × Nat) := do
  let [_,i,j] := x.splitOn "_"
    | throw s!"unexpected variable {x}"
  let [some i, some j] := [i,j].map String.toNat?
    | throw s!"cannot decode numbers in {x}"
  .ok (i, j)

def String.ljust n s :=
  s ++ "".pushn ' ' (n - s.length)

def printMagicSquare (n : Nat) (model : Sexp) : IO Unit := do
  let mut grid := Array.mkArray n (Array.mkArray n 0)
  for (x, b) in decodeModelConsts model do
    let (i, j) ← IO.ofExcept (decodeVar x)
    let some v := evalNumConst b
      | throwThe IO.Error s!"unexpected value {b}"
    grid := grid.set! i (grid.get! i |>.set! j v)

  let maxWidth := (toString <| n*n).length + 1
  for ln in grid do
    for x in ln do
      IO.print <| (toString x).ljust maxWidth
    IO.println ""

-- textbook: call SMT
#eval (do
  let cmds := magicSquareToBvSmt 3
  -- Set `verbose := false` to hide SMT-LIB communications
  let out ← callCvc5 cmds (verbose := true)
  match out with
  | Sexp.atom "sat" :: m :: _ =>
    IO.println "SAT with assignment:"
    for (x, b) in decodeModelConsts m do
      IO.println s!"{x} ↦ {evalNumConst b |>.get!}"
    IO.println "\nSquare:"
    printMagicSquare 3 m
  | ss =>
    IO.println "Not SAT. Solver output:"
    IO.println ss

  : IO Unit)
-- end
