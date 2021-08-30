// Lean compiler output
// Module: Mathlib.Algebra.Ring.Basic
// Imports: Init Mathlib.Algebra.GroupWithZero.Defs Mathlib.Algebra.Group.Basic Mathlib.Tactic.Spread
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_Int_instCommRingInt___closed__7;
lean_object* l_Int_instCommRingInt___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_instMonoidWithZero__1___rarg(lean_object*);
lean_object* l_instMonoidWithZero__1___rarg___boxed(lean_object*);
lean_object* l_Nat_instCommSemiringNat___lambda__1___boxed(lean_object*, lean_object*);
static lean_object* l_Nat_instCommSemiringNat___closed__4;
extern lean_object* l_Int_instNegInt;
static lean_object* l_Int_instCommRingInt___closed__8;
static lean_object* l_Int_instCommRingInt___closed__4;
static lean_object* l_Nat_instCommSemiringNat___closed__1;
lean_object* l_Nat_instNumericNat;
static lean_object* l_Int_instCommRingInt___closed__2;
lean_object* l_instCommMonoid__1___rarg(lean_object*);
lean_object* l_id___rarg___boxed(lean_object*);
lean_object* l_instSemiring___rarg(lean_object*);
static lean_object* l_Nat_instCommSemiringNat___closed__2;
static lean_object* l_Int_instCommRingInt___closed__1;
lean_object* l_instSemiring(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Nat_instCommSemiringNat___lambda__1(lean_object*, lean_object*);
lean_object* l_instCommSemiring___rarg(lean_object*);
lean_object* l_Int_instCommRingInt;
static lean_object* l_Int_instCommRingInt___closed__5;
lean_object* l_Int_instCommRingInt___lambda__1(lean_object*, lean_object*);
static lean_object* l_Nat_instNumericNat___closed__1;
extern lean_object* l_Int_instSubInt;
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_instCoeNat___rarg___boxed(lean_object*);
lean_object* l_Int_instNumericInt(lean_object*);
static lean_object* l_Int_instCommRingInt___closed__3;
extern lean_object* l_instMulNat;
lean_object* l_Int_instCommRingInt___lambda__2___boxed(lean_object*, lean_object*);
lean_object* l_instMonoidWithZero__1(lean_object*);
extern lean_object* l_instAddNat;
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_Int_instCommRingInt___lambda__2(lean_object*, lean_object*);
lean_object* l_instCommMonoid__1___rarg___boxed(lean_object*);
lean_object* l_Nat_instCommSemiringNat;
lean_object* l_Numeric_OfNat___rarg(lean_object*, lean_object*);
static lean_object* l_Int_instCommRingInt___closed__10;
lean_object* l_instCoeNat___rarg(lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_instCoeNat(lean_object*);
static lean_object* l_Int_instCommRingInt___closed__6;
static lean_object* l_Int_instCommRingInt___closed__9;
lean_object* l_Numeric_OfNat(lean_object*);
extern lean_object* l_Int_instMulInt;
lean_object* l_instSemiring___rarg___boxed(lean_object*);
extern lean_object* l_Int_instAddInt;
static lean_object* l_Nat_instCommSemiringNat___closed__5;
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_instCommMonoid__1(lean_object*);
lean_object* l_instCommSemiring(lean_object*);
lean_object* l_instCommSemiring___rarg___boxed(lean_object*);
static lean_object* l_Nat_instCommSemiringNat___closed__3;
lean_object* l_Numeric_OfNat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_Numeric_OfNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Numeric_OfNat___rarg), 2, 0);
return x_2;
}
}
lean_object* l_instCoeNat___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_instCoeNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCoeNat___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_instCoeNat___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instCoeNat___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_instMonoidWithZero__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_inc(x_3);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
lean_object* l_instMonoidWithZero__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instMonoidWithZero__1___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_instMonoidWithZero__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instMonoidWithZero__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_instCommMonoid__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_instCommMonoid__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCommMonoid__1___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_instCommMonoid__1___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instCommMonoid__1___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_instSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_ctor_get(x_1, 2);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_inc(x_5);
lean_inc(x_2);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
lean_ctor_set(x_6, 2, x_4);
return x_6;
}
}
lean_object* l_instSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instSemiring___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_instSemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instSemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_instCommSemiring___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = l_instSemiring___rarg(x_1);
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_dec(x_2);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_5);
lean_ctor_set(x_7, 2, x_6);
return x_7;
}
}
}
lean_object* l_instCommSemiring(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instCommSemiring___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_instCommSemiring___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instCommSemiring___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Nat_instNumericNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_id___rarg___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instNumericNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instNumericNat___closed__1;
return x_1;
}
}
lean_object* l_Nat_instCommSemiringNat___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_nat_pow(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_instCommSemiringNat___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_instMulNat;
x_2 = lean_unsigned_to_nat(1u);
x_3 = l_Nat_instCommSemiringNat___closed__1;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_instAddNat;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Nat_instCommSemiringNat___closed__3;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Nat_instCommSemiringNat___closed__2;
x_2 = l_Nat_instCommSemiringNat___closed__4;
x_3 = l_Nat_instNumericNat;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Nat_instCommSemiringNat() {
_start:
{
lean_object* x_1; 
x_1 = l_Nat_instCommSemiringNat___closed__5;
return x_1;
}
}
lean_object* l_Nat_instCommSemiringNat___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Nat_instCommSemiringNat___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Int_instNumericInt(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
lean_object* l_Int_instCommRingInt___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_pow(x_2, x_1);
return x_3;
}
}
lean_object* l_Int_instCommRingInt___lambda__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_nat_to_int(x_1);
x_4 = lean_int_mul(x_3, x_2);
lean_dec(x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instCommRingInt___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Int_instMulInt;
x_2 = l_Int_instCommRingInt___closed__1;
x_3 = l_Int_instCommRingInt___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instCommRingInt___lambda__2___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Int_instAddInt;
x_2 = l_Int_instCommRingInt___closed__4;
x_3 = l_Int_instCommRingInt___closed__5;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = l_Int_instCommRingInt___closed__6;
x_2 = l_Int_instNegInt;
x_3 = l_Int_instSubInt;
x_4 = l_Int_instCommRingInt___closed__7;
x_5 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set(x_5, 3, x_4);
return x_5;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_instNumericInt), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Int_instCommRingInt___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Int_instCommRingInt___closed__3;
x_2 = l_Int_instCommRingInt___closed__8;
x_3 = l_Int_instCommRingInt___closed__9;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Int_instCommRingInt() {
_start:
{
lean_object* x_1; 
x_1 = l_Int_instCommRingInt___closed__10;
return x_1;
}
}
lean_object* l_Int_instCommRingInt___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instCommRingInt___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Int_instCommRingInt___lambda__2___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Int_instCommRingInt___lambda__2(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Defs(lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_Spread(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Algebra_Ring_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Defs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Spread(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Nat_instNumericNat___closed__1 = _init_l_Nat_instNumericNat___closed__1();
lean_mark_persistent(l_Nat_instNumericNat___closed__1);
l_Nat_instNumericNat = _init_l_Nat_instNumericNat();
lean_mark_persistent(l_Nat_instNumericNat);
l_Nat_instCommSemiringNat___closed__1 = _init_l_Nat_instCommSemiringNat___closed__1();
lean_mark_persistent(l_Nat_instCommSemiringNat___closed__1);
l_Nat_instCommSemiringNat___closed__2 = _init_l_Nat_instCommSemiringNat___closed__2();
lean_mark_persistent(l_Nat_instCommSemiringNat___closed__2);
l_Nat_instCommSemiringNat___closed__3 = _init_l_Nat_instCommSemiringNat___closed__3();
lean_mark_persistent(l_Nat_instCommSemiringNat___closed__3);
l_Nat_instCommSemiringNat___closed__4 = _init_l_Nat_instCommSemiringNat___closed__4();
lean_mark_persistent(l_Nat_instCommSemiringNat___closed__4);
l_Nat_instCommSemiringNat___closed__5 = _init_l_Nat_instCommSemiringNat___closed__5();
lean_mark_persistent(l_Nat_instCommSemiringNat___closed__5);
l_Nat_instCommSemiringNat = _init_l_Nat_instCommSemiringNat();
lean_mark_persistent(l_Nat_instCommSemiringNat);
l_Int_instCommRingInt___closed__1 = _init_l_Int_instCommRingInt___closed__1();
lean_mark_persistent(l_Int_instCommRingInt___closed__1);
l_Int_instCommRingInt___closed__2 = _init_l_Int_instCommRingInt___closed__2();
lean_mark_persistent(l_Int_instCommRingInt___closed__2);
l_Int_instCommRingInt___closed__3 = _init_l_Int_instCommRingInt___closed__3();
lean_mark_persistent(l_Int_instCommRingInt___closed__3);
l_Int_instCommRingInt___closed__4 = _init_l_Int_instCommRingInt___closed__4();
lean_mark_persistent(l_Int_instCommRingInt___closed__4);
l_Int_instCommRingInt___closed__5 = _init_l_Int_instCommRingInt___closed__5();
lean_mark_persistent(l_Int_instCommRingInt___closed__5);
l_Int_instCommRingInt___closed__6 = _init_l_Int_instCommRingInt___closed__6();
lean_mark_persistent(l_Int_instCommRingInt___closed__6);
l_Int_instCommRingInt___closed__7 = _init_l_Int_instCommRingInt___closed__7();
lean_mark_persistent(l_Int_instCommRingInt___closed__7);
l_Int_instCommRingInt___closed__8 = _init_l_Int_instCommRingInt___closed__8();
lean_mark_persistent(l_Int_instCommRingInt___closed__8);
l_Int_instCommRingInt___closed__9 = _init_l_Int_instCommRingInt___closed__9();
lean_mark_persistent(l_Int_instCommRingInt___closed__9);
l_Int_instCommRingInt___closed__10 = _init_l_Int_instCommRingInt___closed__10();
lean_mark_persistent(l_Int_instCommRingInt___closed__10);
l_Int_instCommRingInt = _init_l_Int_instCommRingInt();
lean_mark_persistent(l_Int_instCommRingInt);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
