import LAMR.Util.Propositional.Syntax

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

/-
Translation to CNF.
-/

def NnfForm.toCnfForm : NnfForm → CnfForm
  | NnfForm.lit (Lit.pos s) => [ [Lit.pos s] ]
  | NnfForm.lit (Lit.neg s) => [ [Lit.neg s] ]
  | NnfForm.lit Lit.tr      => []
  | NnfForm.lit Lit.fls     => [ [] ]
  | NnfForm.conj A B        => A.toCnfForm.conj B.toCnfForm
  | NnfForm.disj A B        => A.toCnfForm.disj B.toCnfForm

def PropForm.toCnfForm (A : PropForm) : CnfForm := A.toNnfForm.toCnfForm

/-
Tseitin.
-/

namespace NnfForm

def defLit (n : Nat) := Lit.pos s!"def_{n}"

def mkDefs : NnfForm → Array NnfForm → Lit × Array NnfForm
  | lit l, defs    => (l, defs)
  | conj A B, defs =>
      let ⟨fA, defs1⟩ := mkDefs A defs
      let ⟨fB, defs2⟩ := mkDefs B defs1
      add_def conj (lit fA) (lit fB) defs2
  | disj A B, defs =>
      let ⟨fA, defs1⟩ := mkDefs A defs
      let ⟨fB, defs2⟩ := mkDefs B defs1
      add_def disj (lit fA) (lit fB) defs2
where
  add_def (op : NnfForm → NnfForm → NnfForm) (fA fB : NnfForm) (defs : Array NnfForm) :=
    match defs.findIdx? ((. == op fA fB)) with
    | some n => (defLit n, defs)
    | none   => let newdefs := defs.push (op fA fB)
                (defLit (newdefs.size - 1), newdefs)

def iffToCnf (A B : NnfForm) : CnfForm :=
  (conj (disj A.neg B) (disj B.neg A)).toCnfForm

def defsToCnf (defs : Array NnfForm) : CnfForm := aux defs.toList 0
  where aux : List NnfForm → Nat → CnfForm
  | [],          n => []
  | nnf :: nnfs, n => iffToCnf (lit (defLit n)) nnf ++ aux nnfs (n + 1)

def implToCnf (A B : NnfForm) : CnfForm :=
  (disj A.neg B).toCnfForm

def defsImplToCnf (defs : Array NnfForm) : CnfForm := aux defs.toList 0
  where aux : List NnfForm → Nat → CnfForm
  | [],          n => []
  | nnf :: nnfs, n => implToCnf (lit (defLit n)) nnf ++ aux nnfs (n + 1)

def orToCnf : NnfForm → Clause → Array NnfForm → Clause × Array NnfForm
  | lit Lit.tr,  cls, defs  => ([Lit.tr], defs)
  | lit Lit.fls, cls, defs  => (cls, defs)
  | lit l, cls, defs        => (l :: cls, defs)
  | disj A B, cls, defs =>
      let ⟨cls1, defs1⟩ := orToCnf A cls defs
      let ⟨cls2, defs2⟩ := orToCnf B cls1 defs1
      (cls1.union' cls2, defs2)
  | A, cls, defs =>
      let ⟨l, defs1⟩ := A.mkDefs defs
      (l::cls, defs1)

def andToCnf : NnfForm → Array NnfForm → CnfForm × Array NnfForm
  | conj A B, defs =>
    let ⟨fA, defs1⟩ := andToCnf A defs
    let ⟨fB, defs2⟩ := andToCnf B defs1
    (fA.union' fB, defs2)
  | A, defs =>
    let ⟨cls, defs1⟩ := orToCnf A [] defs
    ([cls], defs1)

def toCnf (A : NnfForm) : CnfForm :=
  let ⟨cnf, defs⟩ := andToCnf A #[]
  cnf.union' (defsImplToCnf defs)

end NnfForm