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
def isPrime (n : Nat) : Bool := Id.run do
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
def primes (n : Nat) : Array Nat := Id.run do
  let mut result := #[]
  for i in [2:n] do
    if isPrime i then
      result := result.push i
  result

#eval (primes 10000).size
-- end textbook: primes

-- textbook: mulTable
def mulTable : Array (Array Nat) := Id.run do
  let mut table := #[]
  for i in [:10] do
    let mut row := #[]
    for j in [:10] do
      row := row.push ((i + 1) * (j + 1))
    table := table.push row
  table

#eval mulTable
-- end textbook: mulTable

-- textbook: mulTable'
def mulTable' : Array (Array Nat) := Id.run do
  let mut s : Array (Array Nat) := mkArray 10 (mkArray 10 0)
  for i in [:10] do
    for j in [:10] do
      s := s.set! i $ s[i].set! j ((i + 1) * (j + 1))
  s
-- end textbook: mulTable'

/-
The `show T from t` declares the type.
Writing `@Id T t` has the same effect.
-/

-- textbook: show mulTable
#eval show IO Unit from do
  for i in [:10] do
    for j in [:10] do
      let numstr := toString mulTable[i][j]
      -- print 1-3 spaces
      IO.print $ " ".pushn ' ' (3 - numstr.length)
      IO.print numstr
    IO.println ""
-- end textbook: show mulTable