import Init

-- textbook: showSums
def showSums : IO Unit := do
  let mut sum := 0
  for i in [0:100] do
    sum := sum + i
    IO.println s!"i: {i}, sum: {sum}"

#eval showSums
-- end textbook: showSums


-- textbook: isPrime
def isPrime (n : Nat) : Bool := do
  if n < 2 then false else
    for i in [2:n] do
      if n % i = 0 then
        return false
      if i * i > n then
        return true
    true
-- end textbook: isPrime


-- textbook: list of primes
#eval (List.range 10000).filter isPrime
-- end textbook: list of primes


-- textbook: primes
def primes (n : Nat) : Array Nat := do
  let mut result := #[]
  for i in [2:n] do
    if isPrime i then
      result := result.push i
  result

#eval (primes 10000).size
-- end textbook: primes


-- textbook: mulTable
def mulTable (n : Nat) : Array (Array Nat) := do
  let mut table := #[]
  for i in [:n] do
    let mut row := #[]
    for j in [:n] do
      row := row.push ((i + 1) * (j + 1))
    table := table.push row
  table

#eval mulTable 10

def printMulTable (n : Nat) : IO Unit := do
  let t := mulTable n
  for i in [:n] do
    for j in [:n] do
      IO.print s!"{t[i][j]} "
    IO.println ""

#eval printMulTable 10
-- end textbook: mulTable