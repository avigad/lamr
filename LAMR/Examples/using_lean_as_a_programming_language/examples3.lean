-- textbook: BinTree
import Init

inductive BinTree
  | empty : BinTree
  | node  : BinTree → BinTree → BinTree
  deriving Repr, DecidableEq, Inhabited

open BinTree
-- end textbook: BinTree

-- textbook: deriving
#eval node empty (node empty empty)

#eval empty == node empty empty  -- evaluates to false

#eval (default : BinTree)  -- BinTree.empty
-- end textbook: deriving

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
-- end textbook: recursion on BinTree

-- textbook: List
#print List
-- end textbook: List
