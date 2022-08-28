import LAMR.Util.FirstOrder.Syntax
open Std

/-
Interpreting functions.
-/

-- textbook: FnInterp
/-- an interpretation of function symbols -/
def FnInterp α := FOAssignment (List α → α)

-- coerces an association list to a function
instance [Inhabited α] : Coe (AssocList String (List α → α)) (FnInterp α) :=
⟨fun l => l.getA⟩
-- end

/- examples -/

-- textbook: arithFnInterp
def arithFnInterp : FnInterp Nat
  | "plus"  => fun l => l.getA 0 + l.getA 1
  | "times" => fun l => l.getA 0 * l.getA 1
  | "zero"  => fun _ => 0
  | "one"   => fun _ => 1
  | "two"   => fun _ => 2
  | "three" => fun _ => 3
  | _       => fun _ => default
-- end

-- textbook: arithFnInterp'
def arithFnInterp' : FnInterp Nat :=
assign!{
  plus ↦ fun l : List Nat => l.getA 0 + l.getA 1,
  times ↦ fun l => l.getA 0 * l.getA 1,
  zero ↦ fun _ => 0,
  one ↦ fun _ => 1,
  two ↦ fun _ => 2,
  three ↦ fun _ => 3 }
-- end

namespace FOTerm

-- textbook: term eval
/-- evaluate a term relative to a variable assignment -/
partial def eval {α} [Inhabited α] (fn : FnInterp α) (σ : FOAssignment α) : FOTerm → α
  | var x   => σ x
  | app f l => fn f (l.map (eval fn σ))
-- end

end FOTerm

/- examples -/

-- textbook: arith_ex1
def arith_ex1 := term!{ plus(times(%x, two), plus(%y, three)) }

#eval arith_ex1.eval arithFnInterp assign!{ x ↦ 3, y ↦ 5 }
#eval arith_ex1.eval arithFnInterp assign!{ x ↦ 7, y ↦ 11 }
-- end

/-
Substitution and evaluation
-/

-- textbook: substitution and evaluation
def arith_ex2 := term!{ plus(one, times(three, %z))}

def arith_ex3 := term!{ plus(%z, two) }

-- these two should give the same result!

#eval (arith_ex1.subst
        assign!{ x ↦ arith_ex2, y ↦ arith_ex3 }).eval
        arithFnInterp assign!{z ↦ 7}

#eval arith_ex1.eval arithFnInterp
  assign!{ x ↦ (arith_ex2.eval arithFnInterp assign!{z ↦ 7}),
           y ↦ (arith_ex3.eval arithFnInterp assign!{z ↦ 7}) }
-- end

/-
Another view on substitution: evaluation in the term FnInterp.
-/

-- textbook: substitution as evaluation
def TermFnInterp : FnInterp FOTerm := FOTerm.app

def FOTerm.subst' := eval TermFnInterp

-- the same!
#eval arith_ex1.subst assign!{ x ↦ arith_ex2, y ↦ arith_ex3 }
#eval arith_ex1.subst' assign!{ x ↦ arith_ex2, y ↦ arith_ex3  }
-- end

/-
First-order semantics.

To handle the quantifiers, we only allow them to range over a fixed list
of elements.
-/

-- textbook: FOModel
/-- an interpretation of relation symbols -/
def RelInterp α := FOAssignment (List α → Bool)

structure FOModel (α : Type) where
  (univ : List α)
  (fn : FnInterp α)
  (rel : RelInterp α)
-- end

-- coerces an association list to a function
instance [Inhabited α] : Coe (AssocList String (List α → Bool)) (RelInterp α) :=
⟨fun l => l.getA⟩

-- textbook: FOAssignment.update
def FOAssignment.update (σ : FOAssignment α) (x : String) (v : α) : FOAssignment α
  | y => if y == x then v else σ y
-- end

-- textbook: FOForm.eval
def FOForm.eval {α} [Inhabited α] [BEq α]
    (M : FOModel α) (σ : FOAssignment α) : FOForm → Bool
  | eq t1 t2 => t1.eval M.fn σ == t2.eval M.fn σ
  | rel r ts =>  M.rel r (ts.map $ FOTerm.eval M.fn σ)
  | tr => true
  | fls => false
  | neg A => !(eval M σ A)
  | conj A B => (eval M σ A) && (eval M σ B)
  | disj A B => (eval M σ A) || (eval M σ B)
  | impl A B => !(eval M σ A) || (eval M σ B)
  | biImpl A B => (!(eval M σ A) || (eval M σ B)) && (!(eval M σ B) || (eval M σ A))
  | ex x A => M.univ.any fun val => eval M (σ.update x val) A
  | all x A => M.univ.all fun val => eval M (σ.update x val) A
-- end

-- textbook: babyArithMdl
def babyArithMdl : FOModel Nat where
  univ := List.range 10  /- 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 -/
  fn   := arithFnInterp
  rel  := assign!{
            lt ↦ fun l : List Nat => if l.getA 0 < l.getA 1 then true else false,
            even ↦ fun l : List Nat => l.getA 0 % 2 == 0 }

def trivAssignment : FOAssignment Nat := fun _ => 0
-- end

-- don't forget the % in front of variables!

-- textbook: FOForm eval examples
#eval fo!{even(%x)}.eval babyArithMdl assign!{x ↦ 5}
#eval fo!{even(%x)}.eval babyArithMdl assign!{x ↦ 6}
#eval fo!{∃ y. lt(%x, %y)}.eval babyArithMdl assign!{x ↦ 8}
#eval fo!{∃ y. lt(%x, %y)}.eval babyArithMdl assign!{x ↦ 9}
-- end

-- textbook: more FOForm eval examples
def FOForm.testeval (A : FOForm) : Bool := A.eval babyArithMdl trivAssignment

#eval fo!{even(two)}.testeval
#eval fo!{even(three)}.testeval
#eval fo!{∃ x. even(%x)}.testeval
#eval fo!{∀ x. even(%x)}.testeval

#eval fo!{∃ x. lt(%x, two) ∧ even(%x)}.testeval
#eval fo!{∃ x. ∃ y. lt(%x, %y) ∧ lt(%y, two) ∧ even(%x) ∧ even(%y)}.testeval
#eval fo!{∀ x. even(%x) ∧ lt(%x,two) → %x = zero}.testeval
#eval fo!{∀ x. even(%x) ∧ lt(%x,three) → %x = zero}.testeval
#eval fo!{∀ x. even(%x) ∧ lt(%x,three) → %x = zero ∨ %x = two}.testeval

#eval fo!{∀ x. ∃ y. lt(%x, %y)}.testeval
#eval fo!{∀ x. even(%x) → ∃ y. lt(%x, %y)}.testeval
#eval fo!{∀ x. ¬ even(%x) → ∃ y. lt(%x, %y)}.testeval
-- end

