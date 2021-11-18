import LAMR.Util.FirstOrder.Smt
open Std

def bit := "#b1"
def bv0 := toBVConst 32 0
def bv1 := toBVConst 32 1
def bv2 := toBVConst 32 2
def bv4 := toBVConst 32 4
-- Try changing any of these values. The solver will give a model!
def bv24 := toBVConst 32 24
def bv33 := toBVConst 32 0x33333333
def bv55 := toBVConst 32 0x55555555
def bv01 := toBVConst 32 0x01010101
def bv0f := toBVConst 32 0x0f0f0f0f

def popcount :=
  let popCount32Bits := List.range 32 |>.map fun i =>
    sexp!{(ite (= {bit} ((_ extract {toString i} {toString i}) x)) {bv1} {bv0})}

  sexps!{
    (set-logic QF_BV)
    (declare-const x (_ BitVec 32))

    (define-fun line1 ((x (_ BitVec 32))) (_ BitVec 32)
      (bvsub x (bvand (bvlshr x {bv1}) {bv55})))

    (define-fun line2 ((x (_ BitVec 32))) (_ BitVec 32)
      (bvadd (bvand x {bv33}) (bvand (bvlshr x {bv2}) {bv33})))

    (define-fun line3 ((x (_ BitVec 32))) (_ BitVec 32)
      (bvlshr (bvmul (bvand (bvadd (bvlshr x {bv4}) x) {bv0f}) {bv01}) {bv24}))

    (define-fun popCount32 ((x (_ BitVec 32))) (_ BitVec 32)
      (bvadd ...{popCount32Bits}))

    (assert (not (= (line3 (line2 (line1 x))) (popCount32 x))))
    (check-sat)
    (get-model)
  }

#eval popcount.map Sexp.serialize

#eval (do
  let out ← callZ3 popcount (verbose := true)

  if out.get! 0 == sexp!{unsat} then
    IO.println "Functions are equivalent."
  else
    IO.println "Not equivalent!"
  : IO Unit)
