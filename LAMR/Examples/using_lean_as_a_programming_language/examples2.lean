-- textbook: defining functions
def foo n := 3 * n + 7

#eval foo 3
#eval foo (foo 3)

def bar n := foo (foo n) + 3

#eval bar 3
#eval bar (bar 3)
-- end textbook: defining functions

-- textbook: hello world
def printExample : IO Unit:= do
  IO.println "hello"
  IO.println "world"

#eval printExample
-- end textbook: hello world


-- textbook: factorial
def factorial : Nat → Nat
  | 0       => 1
  | (n + 1) => (n + 1) * factorial n

#eval factorial 10
#eval factorial 100
-- end textbook: factorial


-- textbook: hanoi
def hanoi (numPegs start finish aux : Nat) : IO Unit :=
  match numPegs with
  | 0     => pure ()
  | n + 1 => do
      hanoi n start aux finish
      IO.println s!"Move disk {n + 1} from peg {start} to peg {finish}"
      hanoi n aux finish start

#eval hanoi 7 1 2 3
-- end textbook: hanoi


-- textbook: recursion on lists
def addNums : List Nat → Nat
  | []    => 0
  | a::as => a + addNums as

#eval addNums [0, 1, 2, 3, 4, 5, 6]
-- end textbook: recursion on lists


-- textbook: list functions
#eval List.range 7

section
open List

#eval range 7
#eval addNums $ range 7
#eval map (fun x => x + 3) $ range 7
#eval foldl (. + .) 0 $ range 7

end
-- end textbook: list functions


-- textbook: projection notation
def myRange := List.range 7
#eval myRange.map fun x => x + 3
-- end textbook: projection notation


-- textbook: reverse and append
namespace hidden

def reverseAux : List α → List α → List α
  | [],   r => r
  | a::l, r => reverseAux l (a::r)

def reverse (as : List α) :List α :=
  reverseAux as []

protected def append (as bs : List α) : List α :=
  reverseAux as.reverse bs

end hidden
-- end textbook: reverse and append


-- textbook: gcd
partial def gcd m n :=
  if n = 0 then m else gcd n (m % n)

#eval gcd 45 30
#eval gcd 37252 49824
-- end textbook: gcd


-- textbook: bad definition
partial def bad (n : Nat) : Nat := bad (n + 1)
-- end textbook: bad definition


-- textbook: inefficient Fibonacci
def fib' : Nat → Nat
  | 0 => 0
  | 1 => 1
  | n + 2 => fib' (n + 1) + fib' n
-- end textbook: inefficient Fibonacci


-- textbook: efficient Fibonacci
def fibAux : Nat → Nat × Nat
  | 0     => (0, 1)
  | n + 1 => let p := fibAux n
             (p.2, p.1 + p.2)

def fib n := (fibAux n).1

#eval (List.range 20).map fib
-- end textbook: efficient Fibonacci