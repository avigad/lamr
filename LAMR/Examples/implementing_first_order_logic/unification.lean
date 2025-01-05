import LAMR.Util.FirstOrder
open Lean (AssocList)
open FOTerm

/-
A unification algorithm, from John Harrison's book.

-/

-- textbook: checkAssignment
inductive checkResult where
  | ok | trivial | cycle
deriving Inhabited

partial def checkAssignment (env : AssocList String FOTerm) (x : String) :
    FOTerm → checkResult
  | var y      => if y = x then .trivial
                   else if !env.contains y then .ok
                   else checkAssignment env x (env.getD y)
  | app _ l    => loop l
where
  loop : List FOTerm → checkResult
    | []    => .ok
    | a::as => match checkAssignment env x a with
                  | .trivial => .cycle
                  | .ok      => loop as
                  | .cycle   => .cycle
-- end

-- textbook: unify?
partial def unify? (env : AssocList String FOTerm) : List (FOTerm × FOTerm) →
                                                      Option (AssocList String FOTerm)
  | [] => some env
  | (app f1 l1, app f2 l2) :: eqs =>
      if f1 = f2 ∧ l1.length = l2.length then
        unify? env ((l1.zip l2) ++ eqs)
      else none
  | (var x, t) :: eqs =>
      if env.contains x then unify? env (eqs.cons (env.getD x, t))
      else match checkAssignment env x t with
        | .trivial  => unify? env eqs
        | .ok => unify? (env.cons x t) eqs
        | .cycle  => none
  | (t, var x) :: eqs => unify? env ((var x, t) :: eqs)
-- end

-- textbook: fullUnify
partial def usolve (env : AssocList String FOTerm) : AssocList String FOTerm := Id.run do
  let env' := env.mapVal (subst env)
  if env' == env then env else usolve env'

partial def fullUnify (eqs : List (FOTerm × FOTerm)) : Option (AssocList String FOTerm) :=
  match unify? AssocList.nil eqs with
    | some l => usolve l
    | none   => none
-- end

-- textbook: unify examples
partial def unifyAndApply (eqs : List (FOTerm × FOTerm)) : Option (List (FOTerm × FOTerm)) :=
  match fullUnify eqs with
    | some l => let σ : FOAssignment FOTerm := l
                eqs.map (fun (s, t) => (subst σ s, subst σ t))
    | none   => none

def unify_ex1 := [ (term!{ f(%x, g(%y))}, term!{ f(f(%z), %w) }) ]

#eval toString <| fullUnify unify_ex1
#eval toString <| unifyAndApply unify_ex1

def unify_ex2 := [ (term!{ f(%x, %y) }, term!{ f(%y, %x) }) ]

#eval toString <| fullUnify unify_ex2
#eval toString <| unifyAndApply unify_ex2

def unify_ex3 := [ (term!{ f(%x, g(%y)) }, term!{ f(%y, %x) }) ]

#eval toString <| fullUnify unify_ex3

def unify_ex4 := [ (term!{ %x0 }, term!{ f(%x1, %x1) } ),
                   (term!{ %x1 }, term!{ f(%x2, %x2) } ),
                   (term!{ %x2 }, term!{ f(%x3, %x3) } ),
                   (term!{ %x3 }, term!{ f(%x4, %x4) } )]

#eval toString <| fullUnify unify_ex4
#eval toString <| unifyAndApply unify_ex4
-- end
