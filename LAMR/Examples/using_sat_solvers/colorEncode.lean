import LAMR.Util.Propositional

def String.splitOnNonEmpty (s : String) (sep : String) : List String :=
  (s.splitOn sep).filter fun c => !c.isEmpty

structure Graph where
  nVerts: Nat
  edges: Array (Nat × Nat)
  deriving Repr, BEq, Inhabited

/-- Parses the `lines` of a <graph.edge> file into a graph. -/
def parseEdgeFile (lines : Array String) : Except String Graph := do
  let lines := lines.filter (fun ln => ln ≠ "" ∧ ln.front ≠ 'c')

  let header := lines.get! 0
  let ["p", "edge", nVerts, nEdges] ← .ok <| header |>.splitOnNonEmpty " "
    | throw s!"Invalid EDGE header: {header}"
  let (some nVerts, some nEdges) ← .ok (nVerts.toNat?, nEdges.toNat?)
    | throw s!"Invalid vert/edge counts: {header}"

  let lines := lines[1:] |>.toArray
  if lines.size ≠ nEdges then
    throw s!"Inconsistent edge count: {nEdges} in header but {lines.size} lines"
  let mut edges := #[]
  for ln in lines do
    let ["e", u, v] ← .ok <| ln.splitOnNonEmpty " "
      | throw s!"Invalid line: {ln}"
    let (some u, some v) ← .ok <| (u.toNat, v.toNat?)
      | throw s!"Invalid vertices: {ln}"
    edges := edges.push (u, v)

  return { nVerts, edges : Graph }

def readEdgeFile (graphFname : String) : IO Graph := do
  let lns ← IO.FS.lines graphFname
  match parseEdgeFile lns with
  | Except.error e =>
    throwThe IO.Error s!"Error parsing EDGE file: {e}"
  | Except.ok g => .ok g

/-- Encodes the proposition "`g` is `nColours`-colourable" as CNF. -/
def graphColourable (g : Graph) (nColours : Nat) : CnfForm := Id.run do
  let mut cnf : CnfForm := []
  for i in [0:g.nVerts] do
    let clause : Clause :=
      List.range (nColours) |>.map fun j => Lit.pos s!"p_{i}_{j+1}"
    cnf := clause :: cnf

  for (u,v) in g.edges do
    for j in [1:nColours + 1] do
      cnf := [Lit.neg s!"p_{u-1}_{j}", Lit.neg s!"p_{v-1}_{j}"] :: cnf

  return cnf

/-- Checks whether `g` is `nColours`-colourable using CaDiCaL. Returns `some vs` where
`vs` is a satisfying assignment if yes, otherwise `none`. -/
def checkColourable (g : Graph) (nColours : Nat) : IO (Option (List Lit)) := do
  let cnf := graphColourable g nColours
  let (_, result) ← callCadical cnf
  match result with
  | SatResult.Sat vs  => .ok <| some vs
  | SatResult.Unsat _ => .ok <| none

def main (args : List String) : IO Unit := do
  let graphFname :: nColours :: _ ← .ok <| args
    | do
      IO.println "Usage: <graph.edge> <colors>"
      return ()
  let some nColours := nColours.toNat?
    | throwThe IO.Error s!"Invalid colour count: {nColours}"
  let g ← readEdgeFile graphFname
  match (← checkColourable g nColours) with
  | some vs =>
    IO.println s!"The graph is {nColours}-colourable! Satisfying assignment: {vs}"
  | none =>
    IO.println s!"The graph is not {nColours}-colourable."
