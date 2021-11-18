import LAMR.Util.FirstOrder.Smt
open Std

def bit := "#b1"
def bv0 := toBVConst 32 0
def bv1 := toBVConst 32 1
def bv2 := toBVConst 32 2
def bv33 := toBVConst 32 858993459
def bv4 := toBVConst 32 4
def bv55 := toBVConst 32 1431655765
def bv01 := toBVConst 32 16843009
def bv24 := toBVConst 32 24
def bv0f := toBVConst 32 252645135

def popcount := sexps!{
 (set-logic QF_BV)
  (declare-const x (_ BitVec 32))
  (define-fun line1 ((x (_ BitVec 32))) (_ BitVec 32)
    (bvsub x (bvand (bvlshr x {bv1}) {bv55})))
  (define-fun line2 ((x (_ BitVec 32))) (_ BitVec 32)
    (bvadd (bvand x {bv33}) (bvand (bvlshr x {bv2}) {bv33})))
  (define-fun line3 ((x (_ BitVec 32))) (_ BitVec 32)
    (bvlshr (bvmul (bvand (bvadd (bvlshr x {bv4}) x) {bv0f}) {bv01}) {bv24}))
  (define-fun popCount32 ((x (_ BitVec 32))) (_ BitVec 32)
   (bvadd  (ite (= {bit} ((_ extract  0  0) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  1  1) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  2  2) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  3  3) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  4  4) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  5  5) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  6  6) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  7  7) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  8  8) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract  9  9) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 10 10) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 11 11) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 12 12) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 13 13) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 14 14) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 15 15) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 16 16) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 17 17) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 18 18) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 19 19) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 20 20) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 21 21) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 22 22) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 23 23) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 24 24) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 25 25) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 26 26) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 27 27) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 28 28) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 29 29) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 30 30) x)) {bv1} {bv0})
    (ite (= {bit} ((_ extract 31 31) x)) {bv1} {bv0})))
  (assert (not (= (line3 (line2 (line1 x))) (popCount32 x))))
  (check-sat)
  (get-model)
  (exit)
}

#eval popcount

#eval (do
  let out ← callZ3 popcount (verbose := true)
  : IO Unit)

