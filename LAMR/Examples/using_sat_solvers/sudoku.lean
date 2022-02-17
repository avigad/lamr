import LAMR.Util.Propositional

inductive SudokuTile
  | val (n : Nat)
  | empty
  deriving Repr, Inhabited, DecidableEq

open SudokuTile in
instance : ToString SudokuTile :=
  ⟨fun
    | val n => toString (n+1)
    | empty => " "⟩

structure Sudoku where
  /-- E.g. `3` for a standard 3x3 sudoku. -/
  dim : Nat
  rows : List (List SudokuTile)
  deriving Repr, Inhabited, DecidableEq

namespace Sudoku

def empty (dim : Nat) : Sudoku :=
  let sz := dim*dim
  let row := List.replicate sz SudokuTile.empty
  let rows := List.replicate sz row
  { dim, rows : Sudoku }

def allOnes (dim : Nat) : Sudoku :=
  let sz := dim*dim
  let row := List.replicate sz (SudokuTile.val 1)
  let rows := List.replicate sz row
  { dim, rows : Sudoku }

private def groupN (n : Nat) : List α → List (List α) :=
  go [] n
where go (acc : List α) : Nat → List α → List (List α)
  | k+1, a::as => go (a :: acc) k as
  | 0, a::as => acc.reverse :: go [a] (n-1) as
  | _, [] => [acc.reverse]

instance : ToString Sudoku :=
  ⟨fun { dim, rows : Sudoku } =>
    assert! 0 < dim
    let sz := dim*dim
    let dashes := "-".pushn '-' (2*dim)
    let spacer := "+" ++ "+".intercalate (List.replicate dim dashes) ++ "+"
    let border := "+" ++ "-".intercalate (List.replicate dim dashes) ++ "+"
    let groupFn (g : List SudokuTile) :=
      " ".intercalate <| g.map toString
    let rowFn (row : List SudokuTile) :=
      "| " ++ " | ".intercalate (groupN dim row |>.map groupFn) ++ " |"
    let rows := rows.map rowFn |> groupN dim
    let rows := List.intercalate [spacer] rows
    border ++ "\n" ++ "\n".intercalate rows ++ "\n" ++ border⟩

private def mkLit (row col val : Nat) :=
  Lit.pos s!"p_{row}_{col}_{val}"

/-- Encodes the non-empty tiles as unit clauses. -/
def cnfEncodeTiles : Sudoku → CnfForm
  | { dim, rows : Sudoku} => Id.run do
    let mut cnf : CnfForm := []
    for (i, row) in rows.enum do
      for (j, t) in row.enum do
       if let SudokuTile.val v := t then
        cnf := [mkLit i j v] :: cnf
    return cnf

/-- Encodes the given Sudoku as CNF. -/
def cnfEncode : Sudoku → CnfForm
  | s@{ dim, rows : Sudoku } => Id.run do
    let mut cnf : CnfForm := []
    let sz := dim*dim

    -- Each cell contains at least one number
    for i in [:sz] do
      for j in [:sz] do
        cnf := (List.range sz).map (mkLit i j ·) :: cnf

    -- Each number appears at most once in each row
    for i in [:sz] do
        for j₁ in [:sz] do
          for j₂ in [:j₁] do
            for k in [:sz] do
              cnf := [-(mkLit i j₁ k), -(mkLit i j₂ k)] :: cnf

    -- Ditto column
    for j in [:sz] do
        for i₁ in [:sz] do
          for i₂ in [:i₁] do
            for k in [:sz] do
              cnf := [-(mkLit i₁ j k), -(mkLit i₂ j k)] :: cnf

    -- Ditto subgrid
    for iSq in [:dim] do
      for jSq in [:dim] do
        for v in [:sz] do
          let mut slots := #[]
          for i in [:dim] do
            for j in [:dim] do
              slots := slots.push (dim*iSq + i, dim*jSq + j)
          for (k, (i₁, j₁)) in slots.toList.enum do
            for (i₂, j₂) in slots[:k] do
              cnf := [-(mkLit i₁ j₁ v), -(mkLit i₂ j₂ v)] :: cnf

    -- Assert the starting position
    return cnf ++ cnfEncodeTiles s

/-- Decodes a satisfying assignment to a Sudoku-CNF into a Sudoku. -/
def decodeSolution (dim : Nat) (τ : List Lit) : Except String Sudoku := do
  let mut s := empty dim
  for l in τ do
    if let Lit.pos x := l then
      let [_,i,j,k] ← x.splitOn "_"
        | throw s!"unexpected variable {x}"
      let [some i, some j, some k] ← [i,j,k].map String.toNat?
        | throw s!"cannot decode numbers in {x}"
      let row := s.rows.get! i
      let row := row.take j ++ [SudokuTile.val k] ++ row.drop (j+1)
      s := { s with rows := s.rows.take i ++ [row] ++ s.rows.drop (i+1) }
  return s

def units := [[(mkLit 0 1 3)],
              [(mkLit 0 3 2)],
              [(mkLit 1 6 6)],
              [(mkLit 1 7 8)],
              [(mkLit 2 3 5)],
              [(mkLit 3 3 0)],
              [(mkLit 3 4 3)],
              [(mkLit 3 6 4)],
              [(mkLit 4 0 8)],
              [(mkLit 4 7 0)],
              [(mkLit 5 0 1)],
              [(mkLit 5 8 5)],
              [(mkLit 6 4 6)],
              [(mkLit 6 5 1)],
              [(mkLit 7 1 4)],
              [(mkLit 7 6 7)],
              [(mkLit 8 4 8)]]

-- Solve a 3-Sudoku.
#eval (do
  let dim := 3
  let cnf: List (List Lit) := empty dim |>.cnfEncode
  let cnf2 := cnf ++ units
  let (out, result) ← callCadical cnf2
  match result with
    | SatResult.Unsat _ => IO.println "Sudoku unsat."
    | SatResult.Sat τ  =>
         match decodeSolution dim τ with
    | Except.error e => throwThe IO.Error e
    | Except.ok s => IO.println (toString s)
  : IO Unit)

end Sudoku
