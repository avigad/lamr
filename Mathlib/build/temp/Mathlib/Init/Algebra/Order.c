// Lean compiler output
// Module: Mathlib.Init.Algebra.Order
// Imports: Init Mathlib.Init.Logic
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
lean_object* l_decidableLt__of__decidableLe_match__1(lean_object*, lean_object*);
lean_object* l_decidableEq__of__decidableLe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEq(lean_object*);
lean_object* l_instDecidableLe__5(lean_object*);
uint8_t l_decidableLt__of__decidableLe___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_decidableLt__of__decidableLe___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_decidableLt__of__decidableLe(lean_object*, lean_object*);
lean_object* l_decidableLt__of__decidableLe_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableLe__5___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_decidableEq__of__decidableLe___boxed(lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__eq___default(lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__eq___default___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_lt__by__cases___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__eq___default___boxed(lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__lt___default___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableEq___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__lt___default___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_LinearOrder_decidable__lt___default(lean_object*, lean_object*);
lean_object* l_decidableLt__of__decidableLe___boxed(lean_object*, lean_object*);
lean_object* l_instDecidableLt__5___rarg(lean_object*, lean_object*, lean_object*);
uint8_t l_LinearOrder_decidable__lt___default___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_lt__by__cases(lean_object*);
lean_object* l_decidableEq__of__decidableLe(lean_object*, lean_object*);
lean_object* l_instDecidableLt__5(lean_object*);
lean_object* l_decidableLt__of__decidableLe_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_3, x_1, x_2);
return x_4;
}
}
lean_object* l_decidableLt__of__decidableLe_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLt__of__decidableLe_match__1___rarg), 3, 0);
return x_3;
}
}
uint8_t l_decidableLt__of__decidableLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_apply_2(x_1, x_3, x_2);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
lean_object* l_decidableLt__of__decidableLe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableLt__of__decidableLe___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_decidableLt__of__decidableLe___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_decidableLt__of__decidableLe___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_decidableLt__of__decidableLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableLt__of__decidableLe(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_decidableEq__of__decidableLe___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
lean_inc(x_1);
lean_inc(x_3);
lean_inc(x_2);
x_4 = lean_apply_2(x_1, x_2, x_3);
x_5 = lean_unbox(x_4);
lean_dec(x_4);
if (x_5 == 0)
{
uint8_t x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_6 = 0;
x_7 = lean_box(x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_apply_2(x_1, x_3, x_2);
return x_8;
}
}
}
lean_object* l_decidableEq__of__decidableLe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidableEq__of__decidableLe___rarg), 3, 0);
return x_3;
}
}
lean_object* l_decidableEq__of__decidableLe___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_decidableEq__of__decidableLe(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_LinearOrder_decidable__eq___default___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_decidableEq__of__decidableLe___rarg(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_LinearOrder_decidable__eq___default(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearOrder_decidable__eq___default___rarg), 3, 0);
return x_3;
}
}
lean_object* l_LinearOrder_decidable__eq___default___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearOrder_decidable__eq___default(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
uint8_t l_LinearOrder_decidable__lt___default___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = l_decidableLt__of__decidableLe___rarg(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_LinearOrder_decidable__lt___default(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_LinearOrder_decidable__lt___default___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_LinearOrder_decidable__lt___default___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_LinearOrder_decidable__lt___default___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_LinearOrder_decidable__lt___default___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_LinearOrder_decidable__lt___default(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_instDecidableLt__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 3);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_instDecidableLt__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableLt__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_instDecidableLe__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_instDecidableLe__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableLe__5___rarg), 3, 0);
return x_2;
}
}
lean_object* l_instDecidableEq___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_instDecidableEq(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_instDecidableEq___rarg), 3, 0);
return x_2;
}
}
lean_object* l_lt__by__cases___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_8 = l_instDecidableLt__5___rarg(x_1, x_2, x_3);
x_9 = lean_unbox(x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
lean_dec(x_5);
x_10 = l_instDecidableLt__5___rarg(x_1, x_3, x_2);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_7);
x_12 = lean_apply_1(x_6, lean_box(0));
return x_12;
}
else
{
lean_object* x_13; 
lean_dec(x_6);
x_13 = lean_apply_1(x_7, lean_box(0));
return x_13;
}
}
else
{
lean_object* x_14; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_apply_1(x_5, lean_box(0));
return x_14;
}
}
}
lean_object* l_lt__by__cases(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_lt__by__cases___rarg), 7, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Init_Logic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Init_Algebra_Order(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init_Logic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
