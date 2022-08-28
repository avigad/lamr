import LAMR.Util.Propositional

-- textbook: PropForm
namespace hidden

inductive PropForm
  | tr     : PropForm
  | fls    : PropForm
  | var    : String → PropForm
  | conj   : PropForm → PropForm → PropForm
  | disj   : PropForm → PropForm → PropForm
  | impl   : PropForm → PropForm → PropForm
  | neg    : PropForm → PropForm
  | biImpl : PropForm → PropForm → PropForm
  deriving Repr, DecidableEq

end hidden

#print PropForm

open PropForm

#check (impl (conj (var "p") (var "q")) (var "r"))
-- end: PropForm


-- textbook: prop!
#check prop!{p ∧ q → (r ∨ ¬ p) → q}
#check prop!{p ∧ q ∧ r → p}

def propExample := prop!{p ∧ q → r ∧ p ∨ ¬ s1 → s2 }

#print propExample
#eval propExample

#eval toString propExample

-- end: prop!

/-
Some examples of structural recursion.
-/

-- textbook: PropForm rec
namespace PropForm

def complexity : PropForm → Nat
  | var _ => 0
  | tr => 0
  | fls => 0
  | neg A => complexity A + 1
  | conj A B => complexity A + complexity B + 1
  | disj A B => complexity A + complexity B + 1
  | impl A B => complexity A + complexity B + 1
  | biImpl A B => complexity A + complexity B + 1

def depth : PropForm → Nat
  | var _ => 0
  | tr => 0
  | fls => 0
  | neg A => depth A + 1
  | conj A B => Nat.max (depth A) (depth B) + 1
  | disj A B => Nat.max (depth A) (depth B) + 1
  | impl A B => Nat.max (depth A) (depth B) + 1
  | biImpl A B => Nat.max (depth A) (depth B) + 1

def vars : PropForm → List String
  | var s => [s]
  | tr => []
  | fls => []
  | neg A => vars A
  | conj A B => (vars A).union' (vars B)
  | disj A B => (vars A).union' (vars B)
  | impl A B => (vars A).union' (vars B)
  | biImpl A B => (vars A).union' (vars B)

#eval complexity propExample
#eval depth propExample
#eval vars propExample

end PropForm

#eval PropForm.complexity propExample
#eval propExample.complexity
-- end: PropForm rec

/-
Truth table semantics.
-/

-- textbook: PropForm.eval
def PropForm.eval (v : PropAssignment) : PropForm → Bool
  | var s => v.eval s
  | tr => true
  | fls => false
  | neg A => !(eval v A)
  | conj A B => (eval v A) && (eval v B)
  | disj A B => (eval v A) || (eval v B)
  | impl A B => !(eval v A) || (eval v B)
  | biImpl A B => (!(eval v A) || (eval v B)) && (!(eval v B) || (eval v A))

-- try it out
#eval let v := PropAssignment.mk [("p", true), ("q", true), ("r", true)]
      propExample.eval v
-- end: PropForm.eval


-- textbook: propassign
#check propassign!{p, q, r}

#eval propExample.eval propassign!{p, q, r}
-- end: propassign


-- textbook: allSublists
def allSublists : List α → List (List α)
  | [] => [[]]
  | (a :: as) =>
      let recval := allSublists as
      recval.map (a :: .) ++ recval

#eval allSublists propExample.vars
-- end: allSublists


-- textbook: truthTable
def truthTable (A : PropForm) : List (List Bool × Bool) :=
  let vars := A.vars
  let assignments := (allSublists vars).map (fun l => PropAssignment.mk (l.map (., true)))
  let evalLine := fun v : PropAssignment => (vars.map v.eval, A.eval v)
  assignments.map evalLine

#eval truthTable propExample
-- end: truthTable


-- textbook: isValid
def PropForm.isValid (A : PropForm) : Bool := List.all (truthTable A) Prod.snd
def PropForm.isSat(A : PropForm) : Bool := List.any (truthTable A) Prod.snd

#eval propExample.isValid
#eval propExample.isSat
-- end: isValid

namespace hidden
-- textbook: NnfForm
inductive Lit
  | tr  : Lit
  | fls : Lit
  | pos : String → Lit
  | neg : String → Lit

inductive NnfForm :=
  | lit  (l : Lit)       : NnfForm
  | conj (p q : NnfForm) : NnfForm
  | disj (p q : NnfForm) : NnfForm
-- end: NnfForm
end hidden


namespace hidden
-- textbook: toNnfForm

def Lit.negate : Lit → Lit
  | tr   => fls
  | fls  => tr
  | pos s => neg s
  | neg s => pos s

def NnfForm.neg : NnfForm → NnfForm
  | lit l    => lit l.negate
  | conj p q => disj (neg p) (neg q)
  | disj p q => conj (neg p) (neg q)

namespace PropForm

def toNnfForm : PropForm → NnfForm
  | tr         => NnfForm.lit Lit.tr
  | fls        => NnfForm.lit Lit.fls
  | var n      => NnfForm.lit (Lit.pos n)
  | neg p      => p.toNnfForm.neg
  | conj p q   => NnfForm.conj p.toNnfForm q.toNnfForm
  | disj p q   => NnfForm.disj p.toNnfForm q.toNnfForm
  | impl p q   => NnfForm.disj p.toNnfForm.neg q.toNnfForm
  | biImpl p q => NnfForm.conj (NnfForm.disj p.toNnfForm.neg q.toNnfForm)
                               (NnfForm.disj q.toNnfForm.neg p.toNnfForm)

end PropForm
-- end: toNnfForm
end hidden


-- textbook: toNnfForm test
#eval propExample.toNnfForm
#eval toString propExample.toNnfForm
-- end: toNnfForm test


namespace hidden₂
-- textbook: Clause and CnfForm

def Clause := List Lit

def CnfForm := List Clause
-- end: Clause and CnfForm

end hidden₂


#print Lit
#print Clause
#print CnfForm


-- textbook: syntax for literals, etc.
def exLit0 := lit!{ p }
def exLit1 := lit!{ -q }

#print exLit0
#print exLit1

def exClause0 := clause!{ p }
def exClause1 := clause!{ p -q r }
def exClause2 := clause!{ r -s }

#print exClause0
#print exClause1
#print exClause2

def exCnf0 := cnf!{
  p,
  -p q -r,
  -p q
}

def exCnf1 := cnf!{
  p -q,
  p q,
  -p -r,
  -p r
}

def exCnf2 := cnf!{
  p q,
  -p,
  -q
}

#print exCnf0
#print exCnf1
#print exCnf2

#eval toString exClause1
#eval toString exCnf2
-- end: syntax for literals, etc.

-- textbook: operations on clauses
#eval List.insert lit!{ r } exClause0

#eval exClause0.union' exClause1

#eval List.Union [exClause0, exClause1, exClause2]
-- end: operations on clauses


-- textbook: disjunction of a clause and a CNF formula
#eval exCnf1.map exClause0.union'
-- end: disjunction of a clause and a CNF formula

namespace hidden₃

-- textbook: CNF disjunction
def CnfForm.disj (cnf1 cnf2 : CnfForm) : CnfForm :=
(cnf1.map (fun cls => cnf2.map cls.union')).Union

#eval cnf!{p, q, u -v}.disj cnf!{r1 r2, s1 s2, t1 t2 t3}
#eval toString $ cnf!{p, q, u -v}.disj cnf!{r1 r2, s1 s2, t1 t2 t3}
-- end: CNF disjunction

-- textbook: toCnfForm
def NnfForm.toCnfForm : NnfForm → CnfForm
  | NnfForm.lit (Lit.pos s) => [ [Lit.pos s] ]
  | NnfForm.lit (Lit.neg s) => [ [Lit.neg s] ]
  | NnfForm.lit Lit.tr      => []
  | NnfForm.lit Lit.fls     => [ [] ]
  | NnfForm.conj A B        => A.toCnfForm.conj B.toCnfForm
  | NnfForm.disj A B        => A.toCnfForm.disj B.toCnfForm

def PropForm.toCnfForm (A : PropForm) : CnfForm := A.toNnfForm.toCnfForm
-- end: toCnfForm

end hidden₃

-- textbook: CnfForm test
#eval propExample.toCnfForm

#eval prop!{(p1 ∧ p2) ∨ (q1 ∧ q2)}.toCnfForm.toString

#eval prop!{(p1 ∧ p2) ∨ (q1 ∧ q2) ∨ (r1 ∧ r2) ∨ (s1 ∧ s2)}.toCnfForm.toString
-- end: CnfForm test
