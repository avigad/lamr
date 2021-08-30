import LAMR.Util.Propositional.Syntax

namespace NnfForm

def neg : NnfForm → NnfForm
  | tr       => fls
  | fls      => tr
  | var n    => negVar n
  | negVar n => var n
  | conj p q => disj (neg p) (neg q)
  | disj p q => conj (neg p) (neg q)

end NnfForm

namespace PropForm

def toNnfForm : PropForm → NnfForm
  | tr  => NnfForm.tr
  | fls => NnfForm.fls
  | var n => NnfForm.var n
  | neg p => p.toNnfForm.neg
  | conj p q => NnfForm.conj p.toNnfForm q.toNnfForm
  | disj p q => NnfForm.disj p.toNnfForm q.toNnfForm
  | impl p q => NnfForm.disj p.toNnfForm.neg q.toNnfForm
  | biImpl p q => NnfForm.conj (NnfForm.disj p.toNnfForm.neg q.toNnfForm)
                               (NnfForm.disj q.toNnfForm.neg p.toNnfForm)

end PropForm

/-
Translation to CNF.
-/

def List.Union [DecidableEq α]: List (List α) → List α
  | [] => []
  | (l ::ls) => l.union (ls.Union)

def CnfForm.disj (cnf1 cnf2 : CnfForm) : CnfForm :=
(cnf1.map (fun cls => cnf2.map cls.union)).Union

def NnfForm.toCnfForm : NnfForm → CnfForm
  | NnfForm.var s => [ [Lit.pos s] ]
  | NnfForm.negVar s => [ [Lit.neg s] ]
  | NnfForm.tr => []
  | NnfForm.fls => [ [] ]
  | NnfForm.conj A B => A.toCnfForm.union B.toCnfForm
  | NnfForm.disj A B => A.toCnfForm.disj B.toCnfForm

def PropForm.toCnfForm (A : PropForm) : CnfForm := A.toNnfForm.toCnfForm