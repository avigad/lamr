import Std
open Std

/-
We will represent a linear expression as a mapping from variables (represented as strings)
to integers.

For simplicity, we'll ignore the constant term. We can always represent a constant b as
the expression `b * one`, for a special variable named "one".

A HashMap is a more efficient representation than an AssocList. If you ctrl-click on
HashMap, you can see some of the functions available.
-/

#check AssocList
#check HashMap

def List.toHashMap [BEq α] [Hashable α]: List (α × β) → HashMap α β
  | []          => HashMap.empty
  | (a, b) :: l => HashMap.insert l.toHashMap a b

/--
Linear expressions.

We'll maintain (but not check) the invariant that the coefficients are not zero.
-/
def LinearExp := HashMap String Int

def List.toLinearExp (l : List (String × Int)) : LinearExp := l.toHashMap

-- coerce a list of pairs to a linear expression
instance : Coe (List (String × Int)) LinearExp := ⟨List.toLinearExp⟩

instance : ToString LinearExp := ⟨fun linexp =>
  String.intercalate " + " $ linexp.toList.map (fun (s, i) => (ToString.toString i ++ "*" ++ s))⟩

def ex1 : LinearExp := [("x", 3), ("y", -2), ("z", 4)]
def ex2 : LinearExp := [("x", 4), ("y", 2), ("w", -1), ("v", 3)]

#eval toString $ ex1
#eval toString $ ex2


/--
Computes `a * u + b * v` .
Assumes `a` and `b` are not zero.
Note that this might result in an empty HashMap, which represents the expression `0`.
-/
def linearCombination (a : Int) (u : LinearExp) (b : Int) (v : LinearExp) : LinearExp := Id.run do
  let mut result := HashMap.empty
  for (s, i) in u.toList do
    let j := v.findD s 0    -- if not there, return 0
    let newval := a * i + b * j
    if newval != 0 then
      result := result.insert s newval
  -- add the terms in v whose variables are not in u
  for (t, j) in v.toList do
    if !u.contains t then
      result := result.insert t (b * j)
  result

#eval toString $ linearCombination 1 ex1 1 ex2
#eval toString $ linearCombination 1 ex1 (-1) ex1
#eval toString $ linearCombination 2 ex1 (-3) ex2

-- checks whether an expression is empty
#eval ex1.isEmpty
#eval HashMap.isEmpty $ linearCombination 1 ex1 (-1) ex1

-- you can erase a term from an expression
#eval let ex' : LinearExp := ex1.erase "x"
      toString ex'

-- you can find the coefficient a term in an expression
#eval ex1.find! "x"

/-- Returns some term in the expression, which is assumed to be nonempty. -/
def LinearExp.getTerm (e : LinearExp) : String × Int := e.toList.head!

/-
To implement the Fourier-Motzkin satisfiability test, we will use two lists of constraints,

  `eqzero : List LinearExp`
  `gtzero : List LinearExp`

The first are interpreted as constraints `e = 0`, and the second are constraints `e > 0`.

Because we are using integer coeffients, we will scale constraints as we eliminate variables.
Assuming `a != 0`, the constraint `e = 0` is the same as `a * e = 0`.
Assuming `a > 0`, the constraint `e > 0` is the same as `a * e > 0`.

In principle, we should also scale down equations by dividing through by the gcd of the
coefficients. For now, we won't worry about that.
-/

/--
Given an equality constraint `a * x + u = 0`, we can eliminate `x` from `v = 0`
by writing `v = 0` as `b * x + v' = 0`, multiplying the first by `-b`, and
multiplying the second `a`, and adding them.

If `x` doesn't appear in `v`, we do nothing.

The same method works to eliminate `x` from a constraint `v > 0` if `a` is positive.
-/
def elimEq (a : Int) (x : String) (u v : LinearExp) : LinearExp :=
  if v.contains x then
    let b := v.findD x 0
    linearCombination (-b) u a (v.erase x)
  else
    v

/--
For constraints `v > 0` if `a` is negative, switch `a`/`-a` and `-b`/`b`.
-/
def elimEq' (a : Int) (x : String) (u v : LinearExp) : LinearExp :=
  if v.contains x then
    let b := v.findD x 0
    linearCombination b u (-a) (v.erase x)
  else
    v

/--
Eliminates the equality constraint `a * x + u = 0` from a list of equations,
throwing away any equations that reduce to `0 = 0`.
-/
def substituteEqConstraints (a : Int) (x : String) (u : LinearExp) (eqs : List LinearExp) :
    List LinearExp := Id.run do
  let mut result : List LinearExp := []
  for eq in eqs do
    let newEq := elimEq a x u eq
    if !newEq.isEmpty then
      result := newEq :: result
  result

/--
Eliminates the equality constraint `a * x + u = 0` from a list of constraints `v > 0`,
returning `none` if we ever find a constraint `0 > 0`
-/
def substituteGtConstraints (a : Int) (x : String) (u : LinearExp) (eqs : List LinearExp) :
    Option (List LinearExp) := Id.run do
  let mut result : List LinearExp := []
  let elim := if a > 0 then elimEq else elimEq'
  for eq in eqs do
    let newEq := elim a x u eq
    if newEq.isEmpty then
      return none
    else
      result := newEq :: result
  some result

/--
Given a list of expressions and a variable, `x`, sort them into three lists:
- constraints in which `x` does not appear
- constraints in which `x` has a positive coefficient
- constraints in which `x` has a negative coefficient
-/
def sortGtConstraints (x : String)  (exps : List LinearExp) :
    List LinearExp × List LinearExp × List LinearExp :=
  -- Replace this!
  ([], [], [])

/--
Given a list of gtzero constraints and a variable, eliminate the variable
from the constraints.

Do this by sorting the constraints into three lists, as above.
For each pair of the form

  `a * x + u > 0`  and  `b * x + v > 0`

where `a` is positive and `b` is negative, we can multiply the first by `-b` and the second by a
to conclude

  `-b * u + a * v > 0`.

But be careful: if `-b * u + a * v` is the empty expression, we should return `none`
to indicate that the constraints are unsatisfiable.
-/
def elimVarGtConstraints (x : String) (gtzeros : List LinearExp) : Option (List LinearExp) :=
  -- Replace this!
  none

/-
Tests.
-/

-- https://en.wikipedia.org/wiki/Fourier%E2%80%93Motzkin_elimination,
def wikipedia_constraints : List LinearExp :=
  [ [("one", 10), ("x", -2), ("y",  5), ("z", -4)],
    [("one",  9), ("x", -3), ("y",  6), ("z",  3)],
    [("one", -7), ("x",  1), ("y", -5), ("z",  2)],
    [("one", 12), ("x",  3), ("y", -2), ("z", -6)] ]

#eval toString $ sortGtConstraints "x" wikipedia_constraints
#eval toString $ elimVarGtConstraints "x" wikipedia_constraints

/-
Given a pair `eq, gts`, we want to eliminate all the variables to determine whether it is
satisfiable.
-/

-- first, eliminate all the equations
partial def elimEqConstraints : List LinearExp → List LinearExp → Option (List LinearExp)
  | []       , gts => some gts
  | eq :: eqs, gts => Id.run do
    let (x, a) := eq.getTerm
    let u      := eq.erase x
    let newEqs := substituteEqConstraints a x u eqs
    match substituteGtConstraints a x u gts with
      | some newGts => elimEqConstraints newEqs newGts
      | none        => none

-- then eliminate variables from the `e > 0` constraints
partial def elimGtConstraints : List LinearExp → Bool
  | []        => true
  | gt :: gts => Id.run do
      let x := gt.getTerm.1
      match elimVarGtConstraints x (gt :: gts) with
        | some gts => elimGtConstraints gts
        | none     => false

def FourierMotzkin (eqs gts : List LinearExp) : Bool :=
match elimEqConstraints eqs gts with
  | some gts => elimGtConstraints gts
  | none     => false


/-
Tests.
-/

-- should be false
#eval FourierMotzkin
  [ [("x", 1), ("one", -5)] ]   -- x = 5 * one
  [ [("one", (1 : Int))],       -- one > 0
    [("x", 2), ("one", -10)] ]  -- 2 * x > 10 * one

-- should be true
#eval FourierMotzkin
  [ [("x", 1), ("one", -5)] ]   -- x = 5 * one
  [ [("one", (1 : Int))],       -- one > 0
    [("x", 2), ("one", -8)] ]   -- 2 * x > 8 * one

-- should be true
#eval FourierMotzkin
  [ ]                           -- no equations
  wikipedia_constraints

-- should be false
#eval FourierMotzkin
  [ ]
  [ [("x", 1), ("y", -1)],
    [("y", 1), ("z", -1)],
    [("z", 1), ("w", -1)],
    [("w", 1), ("x", -1)] ]