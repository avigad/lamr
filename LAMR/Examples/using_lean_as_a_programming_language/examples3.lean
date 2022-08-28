-- textbook: BinTree
import Init

inductive BinTree
  | empty : BinTree
  | node  : BinTree → BinTree → BinTree
  deriving Repr, DecidableEq, Inhabited

open BinTree
-- end: BinTree

-- textbook: deriving
#eval node empty (node empty empty)

#eval empty == node empty empty  -- evaluates to false

#eval (default : BinTree)  -- BinTree.empty
-- end: deriving

-- textbook: recursion on BinTree
def size : BinTree → Nat
  | empty    => 0
  | node a b => 1 + size a + size b

def depth : BinTree → Nat
  | empty    => 0
  | node a b => 1 + Nat.max (depth a) (depth b)

def example_tree := node (node empty empty) (node empty (node empty empty))

#eval size example_tree
#eval depth example_tree
-- end: recursion on BinTree

-- textbook: match syntax
def foo (b : BinTree) : Nat :=
  match b with
  | empty    => 0
  | node _ _ => 1

#eval foo (node empty empty)
-- end: match syntax

-- textbook: List
#print List
-- end: List

-- textbook: Option
#print Option

def bar (n? : Option Nat) : Nat :=
  match n? with
  | some n => n
  | none   => 0

#eval bar (some 5)
#eval bar none
-- end: Option

-- textbook: more on Option
#eval (some 5).getD 0
#eval none.getD 0
-- end: more on Option


