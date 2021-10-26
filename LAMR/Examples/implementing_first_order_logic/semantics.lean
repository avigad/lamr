import LAMR.Util.FirstOrder.Syntax
open Std

-- an interpretation of the function symbols
def Model α := FOAssignment (List α → α)

instance [Inhabited α] : Coe (AssocList String (List α → α)) (Model α) := ⟨fun l => l.getA⟩

namespace FOTerm

/-- Evaluate a term in a model relative to a variable assignment -/
partial def eval {α} [Inhabited α] (mdl : Model α) (σ : FOAssignment α) : FOTerm → α
  | var x   => σ x
  | app f l => mdl f (l.map (eval mdl σ))

end FOTerm

/- examples -/

-- later, we'll add values to the language

def arithModel : Model Nat
  | "plus"  => fun l => l.getA 0 + l.getA 1
  | "times" => fun l => l.getA 0 * l.getA 1
  | "zero"  => fun l => 0
  | "one"   => fun l => 1
  | "two"   => fun l => 2
  | "three" => fun l => 3
  | _       => fun l => arbitrary

-- alternatively:
def arithModel' : Model Nat :=
assign!{
  plus ↦ fun l : List Nat => l.getA 0 + l.getA 1,
  times ↦ fun l => l.getA 0 * l.getA 1,
  zero ↦ fun l => 0,
  one ↦ fun l => 1,
  two ↦ fun l => 2,
  three ↦ fun l => 3 }


/-
Substitution
-/

def arith_ex1 := term!{ plus(times(%x, two), plus(%y, three)) }

#eval arith_ex1.eval arithModel assign!{ x ↦ 3, y ↦ 5 }
#eval arith_ex1.eval arithModel assign!{ x ↦ 7, y ↦ 11 }

/-
Substitution and evaluation
-/

def arith_ex2 := term!{ plus(one, times(three, %z))}

def arith_ex3 := term!{ plus(%z, two) }

def arith_ex4 := arith_ex1.subst assign!{ x ↦ arith_ex2, y ↦ arith_ex3  }

-- these two should give the same result!

#eval arith_ex4.eval arithModel assign!{z ↦ 7}

#eval arith_ex1.eval arithModel
  assign!{ x ↦ (arith_ex1.eval arithModel assign!{z ↦ 7}),
           y ↦ (arith_ex2.eval arithModel assign!{z ↦ 7}) }

/-
Another view on substitution: evaluation in the term model.
-/

def TermModel : Model FOTerm := FOTerm.app

def FOTerm.subst' := eval TermModel

def arith_ex4' := arith_ex1.subst' assign!{ x ↦ arith_ex2, y ↦ arith_ex3  }

#eval arith_ex4
#eval arith_ex4'  -- the same!
