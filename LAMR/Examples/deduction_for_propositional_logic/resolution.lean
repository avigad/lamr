import LAMR.Util.Propositional

/--
Gets some variable occuring in the clause.
-/
def Clause.getVar? : Clause → Option String
  | []             => none
  | Lit.pos v :: _ => some v
  | Lit.neg v :: _ => some v
  | _ :: lits      => getVar? lits

/--
Gets some variable occurring in the formula.
-/
def CnfForm.getVar? : CnfForm → Option String
  | []      => none
  | c :: cs =>
      match c.getVar? with
        | some v => some v
        | none   => getVar? cs

#eval Clause.getVar? clause!{ p q -r }
#eval Clause.getVar? clause!{}
#eval CnfForm.getVar? cnf!{ p q -r, p s, s q }

/--
The resolution rule.
-/
-- textbook: the resolution rule
def resolve (c₁ c₂ : Clause) (var : String) : Clause :=
  (c₁.erase (Lit.pos var)).union' (c₂.erase (Lit.neg var))
-- end

/--
Determines whether a clause is a tautology.
-/
def IsTautology (c : Clause) : Bool := aux c {}
  where
aux : Clause -> Lean.HashSet Lit -> Bool
  | [],          _    => false
  | lit :: lits, seen =>
      if seen.contains (-lit) then true else aux lits (seen.insert lit)

#eval IsTautology [Lit.pos "a", Lit.neg "a", Lit.pos "b"]
#eval IsTautology clause!{ a b -a }
#eval IsTautology clause!{ a b c -d -e -f }

/--
Given a clause `c` and a variable `v`, returns a list of clauses in which `v`
occurs as a positive literal, a list of clauses in which `v` occurs as a negative
literal, and the remaining clauses.
-/
-- textbook: get positive and negative clauses
def getPosNegClauses (var : String) :
    List Clause → List Clause × List Clause × List Clause
  | [] => ([], [], [])
  | (c :: cs) =>
    let (pos, neg, rest) := getPosNegClauses var cs
    if Lit.pos var ∈ c then
      (c :: pos, neg, rest)
    else if Lit.neg var ∈ c then
      (pos, c :: neg, rest)
    else
      (pos, neg, c :: rest)
-- end

/--
A naive resolution refutation procedure. It assumes that the clauses don't
contain `fls` or `tr`. Returns true if there is a resolution refutation of
the formula, i.e. the formula is unsatisfiable.
-/
-- textbook: search for a resolution refutation
partial def refute (cnf : CnfForm) : Bool := Id.run do
  if cnf.contains [] then  -- the empty clause
    true
  else
    match cnf.getVar? with
      | none     => false
      | some var => Id.run do
          let (pos, neg, rest) := getPosNegClauses var cnf
          let mut new_clauses : List Clause := []
          for c₁ in pos do
            for c₂ in neg do
              let c := resolve c₁ c₂ var
              if ¬ IsTautology c then
                new_clauses := c :: new_clauses
          refute (new_clauses ++ rest)
-- end

/-
Try it out.
-/

#eval refute cnf!{}    -- parsed as cnf!{clause!{}}
#eval refute []
#eval refute cnf!{p, q, -p -q}
#eval refute cnf!{p, q, -p -r}
#eval refute cnf!{-p q, -q r, -r s, s p}
#eval refute cnf!{-p q, -q r, -r s, p, -s}

-- textbook: debugging the search for a resolution refutation
partial def refute' (cnf : CnfForm) : Bool := Id.run do
  if cnf.contains [] then  -- the empty clause
    dbg_trace f!"derived the empty clause"
    true
  else
    dbg_trace f!"cnf: {cnf}"
    match cnf.getVar? with
      | none     =>
          dbg_trace f!"failed; nothing left to split on"
          false
      | some var => Id.run do
          dbg_trace f!"split on {var}"
          let (pos, neg, rest) := getPosNegClauses var cnf
          let mut new_clauses : List Clause := []
          for c₁ in pos do
            for c₂ in neg do
              let c := resolve c₁ c₂ var
              if ¬ IsTautology c then
                new_clauses := c :: new_clauses
          refute' (new_clauses ++ rest)
-- end

/-
Try it out.
-/
#eval refute' cnf!{}    -- parsed as cnf!{clause!{}}
#eval refute' []
#eval refute' cnf!{p, q, -p -q}
#eval refute' cnf!{p, q, -p -r}
#eval refute' cnf!{-p q, -q r, -r s, s p}
#eval refute' cnf!{-p q, -q r, -r s, p, -s}

/-
Resolution proofs.
-/

namespace Resolution

/--
Each step in a resolution proof is either a hypothesis or the result of a
resolution inference.
-/
-- textbook: resolution proofs
inductive Step where
  | hyp (clause : Clause) : Step
  | res (var : String) (pos neg : Nat) : Step
deriving Inhabited, Repr

def Proof := Array Step deriving Inhabited, Repr

instance : GetElem Proof Nat Step (fun xs i => i < xs.size) :=
  inferInstanceAs (GetElem (Array Step) _ _ _)
-- end

-- textbook: check a resolution proof is well formed
def Proof.wellFormed (p : Proof) : Bool := Id.run do
  for i in [:p.size] do
    match p[i]! with
      | .hyp _ => continue
      | .res _ pos neg =>
          if i ≤ pos ∨ i ≤ neg then
            return false
  true
-- end

-- textbook: pretty-print a resolution proof
def Proof.show (p : Proof) : IO Unit := do
  if ¬ p.wellFormed then
    IO.println "Proof is not well-formed."
    return
  let mut clauses : Array Clause := #[]
  for i in [:p.size] do
    match p[i]! with
      | Step.hyp c =>
          clauses := clauses.push c
          IO.println s!"{i}: hypothesis: {c}"
      | Step.res var pos neg =>
          let resolvent := resolve clauses[pos]! clauses[neg]! var
          clauses := clauses.push resolvent
          IO.println s!"{i}: resolve {pos}, {neg} on {var}: {resolvent}"
-- end

-- textbook: resolution examples
def example1 : Proof := #[
  .hyp clause!{p q},
  .hyp clause!{-p},
  .hyp clause!{-q},
  .res "p" 0 1,
  .res "q" 3 2
]

#eval example1.wellFormed
#eval example1.show

def example2 : Proof := #[
  .hyp clause!{p q r},
  .hyp clause!{-p s},
  .hyp clause!{-q s},
  .hyp clause!{-r s},
  .hyp clause!{-s},
  .res "p" 0 1,
  .res "q" 5 2,
  .res "r" 6 3,
  .res "s" 7 4
]

#eval example2.wellFormed
#eval example2.show
-- end

-- textbook: a verbose form of the resolution proof
inductive VerboseStep where
  | hyp (clause : Clause) : VerboseStep
  | res (var : String) (pos neg : Nat) (clause : Clause): VerboseStep
deriving Inhabited, Repr

def VerboseProof := Array VerboseStep deriving Inhabited, Repr
-- end

instance : GetElem VerboseProof Nat VerboseStep (fun xs i => i < xs.size) :=
  inferInstanceAs (GetElem (Array VerboseStep) _ _ _)

def VerboseStep.clause : VerboseStep → Clause
  | .hyp clause => clause
  | .res _ _ _ clause => clause

def VerboseProof.wellFormed (vp : VerboseProof) : Bool := Id.run do
  for i in [:vp.size] do
    match vp[i]! with
      | .hyp _ => continue
      | .res _ pos neg _ =>
          if i ≤ pos ∨ i ≤ neg then
            return false
  true

def VerboseProof.show (vp : VerboseProof) : IO Unit := do
  if ¬ vp.wellFormed then
    IO.println "Proof is not well-formed."
    return
  for i in [:vp.size] do
    match vp[i]! with
      | .hyp c =>
          IO.println s!"{i}: hypothesis: {c}"
      | .res var pos neg c =>
          IO.println s!"{i}: resolve {pos}, {neg} on {var}: {c}"

end Resolution
