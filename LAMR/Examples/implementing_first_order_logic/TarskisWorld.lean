import LAMR.Examples.implementing_first_order_logic.semantics

inductive Shape where
  | tet
  | cube
  | dodec
deriving Repr, Inhabited, DecidableEq

inductive Size where
  | small
  | medium
  | large
deriving Repr, Inhabited, DecidableEq

def Size.lt : Size → Size → Bool
  | small, medium => true
  | small, large  => true
  | medium, large => true
  | _, _          => false

/-
Objects are placed on an 8 x 8 grid, but we won't check the range.
-/

structure Object :=
  (shape : Shape)
  (size : Size)
  (row : Nat)
  (col : Nat)
deriving Repr, Inhabited, DecidableEq

/-
Predicates
-/

open Shape Size

namespace Object

def isTet : Object → Bool
  | ⟨tet, _, _, _⟩ => true
  | _              => false

def isCube : Object → Bool
  | ⟨cube, _, _, _⟩ => true
  | _               => false

def isDodec : Object → Bool
  | ⟨dodec, _, _, _⟩ => true
  | _                => false

def isSmall : Object → Bool
  | ⟨_, small, _, _⟩ => true
  | _                => false

def isMedium : Object → Bool
  | ⟨_, medium, _, _⟩ => true
  | _                 => false

def isLarge : Object → Bool
  | ⟨_, large, _, _⟩ => true
  | _                 => false

def sameShape (x y : Object) : Bool := x.shape == y.shape

def sameSize (x y : Object) : Bool := x.size == y.size

def sameRow (x y : Object) : Bool := x.row == y.row

def sameCol (x y : Object) : Bool := x.col == y.col

def leftOf (x y : Object) : Bool := x.col < y.col

def rightOf (x y : Object) : Bool := y.col < x.col

def frontOf (x y : Object) : Bool := x.row < y.row

def backOf (x y : Object) : Bool := y.row < x.row

def smaller (x y : Object) : Bool := x.size.lt y.size

def larger (x y : Object) : Bool := y.size.lt x.size

def adjoins (x y : Object) : Bool :=
  (x.row = y.row - 1 || x.row = y.row || x.row = y.row + 1) &&
  (x.col = y.col - 1 || x.col = y.col || x.col = y.col + 1)

-- x is between y and z
def between (x y z : Object) : Bool :=
  -- same row
  (x.row == y.row && y.row == z.row &&
    ((y.col < x.col && x.col < z.col) || (z.col < x.col && x.col < y.col))) ||
  -- same column
  (x.col == y.col && y.col == z.col &&
    ((y.row < x.row && x.row < z.row) || (z.row < x.row && x.row < y.row))) ||
  -- same diagonal
  ( ((x.row + y.col == y.row + x.col && z.row + y.col == y.row + z.col) ||
      (x.row + x.col == y.row + y.col && z.row + z.col == y.row + y.col)) &&
    ((y.col < x.col && x.col < z.col) || (z.col < x.col && x.col < y.col)) &&
    ((y.row < x.row && x.row < z.row) || (z.row < x.row && x.row < y.row)))

end Object

def World := List Object

instance : ForIn m World Object := inferInstanceAs (ForIn m (List Object) Object)

/-
To print it out.
-/

instance : ToString Shape :=
  ⟨fun
    | tet =>   "T"
    | cube =>  "C"
    | dodec => "D"⟩

instance : ToString Size :=
  ⟨fun
    | small  => "-"
    | medium => " "
    | large  => "+"⟩

instance : ToString Object := ⟨fun obj : Object => (toString obj.shape) ++ (toString obj.size)⟩

instance : ToString (Option Object) :=
  ⟨fun
    | some obj => toString obj
    | none     => "  "⟩

def World.toArray (world : World) : Array (Array (Option Object)) := Id.run do
  let mut arr : Array (Array (Option Object)) := mkArray 8 (mkArray 8 none)
  for obj in world do
    assert! obj.row < 8
    assert! obj.col < 8
    arr := arr.set! obj.row $ arr[obj.row].set! obj.col (some obj)
  arr

instance : ToString World :=
  ⟨fun world => Id.run do
    let arr := world.toArray
    let rowDashes : String := "".pushn '-' 41
    let mut s := rowDashes ++ "\n"
    for i in [:8] do
      s := s ++ "| "
      for j in [:8] do
        s := s ++ toString arr[7-i][j] ++ " | "
      s := s ++ "\n" ++ rowDashes ++ "\n"
    s⟩

def World.show (world : World) : IO Unit := do IO.print $ toString world

/-
Implement the language
-/

open Object in
def tWRelInterp : RelInterp Object :=
assign!{
  Tet       ↦ fun l : List Object => isTet (l.getA 0),
  Cube      ↦ fun l : List Object => isCube (l.getA 0),
  Dodec     ↦ fun l : List Object => isDodec (l.getA 0),
  Small     ↦ fun l : List Object => isSmall (l.getA 0),
  Medium    ↦ fun l : List Object => isMedium (l.getA 0),
  Large     ↦ fun l : List Object => isLarge (l.getA 0),
  SameShape ↦ fun l : List Object => sameShape (l.getA 0) (l.getA 1),
  SameSize  ↦ fun l : List Object => sameSize (l.getA 0) (l.getA 1),
  SameRow   ↦ fun l : List Object => sameRow (l.getA 0) (l.getA 1),
  SameCol   ↦ fun l : List Object => sameCol (l.getA 0) (l.getA 1),
  LeftOf    ↦ fun l : List Object => leftOf (l.getA 0) (l.getA 1),
  RightOf   ↦ fun l : List Object => rightOf (l.getA 0) (l.getA 1),
  FrontOf   ↦ fun l : List Object => frontOf (l.getA 0) (l.getA 1),
  BackOf    ↦ fun l : List Object => backOf (l.getA 0) (l.getA 1),
  Smaller   ↦ fun l : List Object => smaller (l.getA 0) (l.getA 1),
  Larger    ↦ fun l : List Object => larger (l.getA 0) (l.getA 1),
  Adjoins   ↦ fun l : List Object => adjoins (l.getA 0) (l.getA 1),
  Between   ↦ fun l : List Object => between (l.getA 0) (l.getA 1) (l.getA 2)
}

def World.eval (world : World) (A : FOForm) : Bool :=
  A.eval { univ := world, fn := fun f l => default, rel := tWRelInterp } (fun x => default)

/-
Try it out.
-/

-- textbook: myWorld
def myWorld : World := [
  ⟨tet, medium, 0, 2⟩,
  ⟨tet, small, 0, 4⟩,
  ⟨cube, small, 4, 4⟩,
  ⟨cube, medium, 5, 6⟩,
  ⟨dodec, small, 7, 0⟩,
  ⟨dodec, large, 7, 4⟩ ]

#eval myWorld.show

/-
-----------------------------------------
| D- |    |    |    | D+ |    |    |    |
-----------------------------------------
|    |    |    |    |    |    |    |    |
-----------------------------------------
|    |    |    |    |    |    | C  |    |
-----------------------------------------
|    |    |    |    | C- |    |    |    |
-----------------------------------------
|    |    |    |    |    |    |    |    |
-----------------------------------------
|    |    |    |    |    |    |    |    |
-----------------------------------------
|    |    |    |    |    |    |    |    |
-----------------------------------------
|    |    | T  |    | T- |    |    |    |
-----------------------------------------
-/
-- end

-- Don't forget to put % before variables!

-- textbook: examples
#eval myWorld.eval fo!{∃ x. ∃ y. ∃ z. Between(%x, %y, %z)}
#eval myWorld.eval fo!{∃ x. ∃ y. ∃ z. Cube(%x) ∧ Between(%x, %y, %z)}
#eval myWorld.eval fo!{∃ x. ∃ y. ∃ z. Dodec(%x) ∧ Between(%x, %y, %z)}
#eval myWorld.eval fo!{∃ x. Small(%x)}
#eval myWorld.eval fo!{∃ x. Small(%x) ∧ Cube(%x) }
#eval myWorld.eval fo!{∀ x. ∀ y. Cube(%x) ∧ Tet(%y) → FrontOf(%x, %y)}
#eval myWorld.eval fo!{∀ x. ∀ y. Cube(%x) ∧ Dodec(%y) → FrontOf(%x, %y)}
#eval myWorld.eval fo!{∀ x. Tet(%x) → ∃ y. Cube(%y) ∧ RightOf(%y, %x) }
#eval myWorld.eval fo!{∀ x. Dodec(%x) → ∃ y. Tet(%y) ∧ RightOf(%y, %x) }
-- end
