// Lean compiler output
// Module: Mathlib.Tactic.Core
// Imports: Init Lean.Expr
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
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_natLit_x21(lean_object*);
extern lean_object* l_instInhabitedNat;
lean_object* l_Lean_Expr_natLit_x21___boxed(lean_object*);
static lean_object* l_Lean_Expr_natLit_x21___closed__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_natLit_x21___closed__4;
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux_match__1(lean_object*);
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_natLit_x21_match__1(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_getAppFnArgs___closed__2;
static uint64_t l_Lean_Expr_getAppFnArgs___closed__1;
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
lean_object* l_Lean_Expr_natLit_x21_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_natLit_x21___closed__3;
static lean_object* l_Lean_Expr_natLit_x21___closed__2;
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_7; lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_10 = lean_box_uint64(x_9);
x_11 = lean_apply_5(x_5, x_7, x_8, x_10, x_2, x_3);
return x_11;
}
case 5:
{
lean_object* x_12; lean_object* x_13; uint64_t x_14; lean_object* x_15; lean_object* x_16; 
lean_dec(x_6);
lean_dec(x_5);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get_uint64(x_1, sizeof(void*)*2);
lean_dec(x_1);
x_15 = lean_box_uint64(x_14);
x_16 = lean_apply_5(x_4, x_12, x_13, x_15, x_2, x_3);
return x_16;
}
default: 
{
lean_object* x_17; 
lean_dec(x_5);
lean_dec(x_4);
x_17 = lean_apply_3(x_6, x_1, x_2, x_3);
return x_17;
}
}
}
}
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux_match__1___rarg), 6, 0);
return x_2;
}
}
lean_object* l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 4:
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_2);
return x_5;
}
case 5:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_array_set(x_2, x_3, x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_sub(x_3, x_9);
lean_dec(x_3);
x_1 = x_6;
x_2 = x_8;
x_3 = x_10;
goto _start;
}
default: 
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_2);
return x_13;
}
}
}
}
static uint64_t _init_l_Lean_Expr_getAppFnArgs___closed__1() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_getAppFnArgs___closed__2() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Expr_getAppFnArgs___closed__1;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
lean_object* l_Lean_Expr_getAppFnArgs(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_Lean_Expr_getAppNumArgsAux(x_1, x_2);
x_4 = l_Lean_Expr_getAppFnArgs___closed__2;
lean_inc(x_3);
x_5 = lean_mk_array(x_3, x_4);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_8 = l___private_Mathlib_Tactic_Core_0__Lean_Expr_getAppFnArgsAux(x_1, x_5, x_7);
return x_8;
}
}
lean_object* l_Lean_Expr_natLit_x21_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
uint64_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_ctor_get(x_4, 0);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_box_uint64(x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_4);
lean_dec(x_2);
x_9 = lean_apply_1(x_3, x_1);
return x_9;
}
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_Lean_Expr_natLit_x21_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_natLit_x21_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_natLit_x21___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Mathlib.Tactic.Core");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_natLit_x21___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Expr.natLit!");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_natLit_x21___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("nat literal expected");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_natLit_x21___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Lean_Expr_natLit_x21___closed__1;
x_2 = l_Lean_Expr_natLit_x21___closed__2;
x_3 = lean_unsigned_to_nat(22u);
x_4 = lean_unsigned_to_nat(32u);
x_5 = l_Lean_Expr_natLit_x21___closed__3;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_Lean_Expr_natLit_x21(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 9)
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_instInhabitedNat;
x_5 = l_Lean_Expr_natLit_x21___closed__4;
x_6 = lean_panic_fn(x_4, x_5);
return x_6;
}
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = l_instInhabitedNat;
x_8 = l_Lean_Expr_natLit_x21___closed__4;
x_9 = lean_panic_fn(x_7, x_8);
return x_9;
}
}
}
lean_object* l_Lean_Expr_natLit_x21___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_natLit_x21(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Expr(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_Core(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Expr(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Expr_getAppFnArgs___closed__1 = _init_l_Lean_Expr_getAppFnArgs___closed__1();
l_Lean_Expr_getAppFnArgs___closed__2 = _init_l_Lean_Expr_getAppFnArgs___closed__2();
lean_mark_persistent(l_Lean_Expr_getAppFnArgs___closed__2);
l_Lean_Expr_natLit_x21___closed__1 = _init_l_Lean_Expr_natLit_x21___closed__1();
lean_mark_persistent(l_Lean_Expr_natLit_x21___closed__1);
l_Lean_Expr_natLit_x21___closed__2 = _init_l_Lean_Expr_natLit_x21___closed__2();
lean_mark_persistent(l_Lean_Expr_natLit_x21___closed__2);
l_Lean_Expr_natLit_x21___closed__3 = _init_l_Lean_Expr_natLit_x21___closed__3();
lean_mark_persistent(l_Lean_Expr_natLit_x21___closed__3);
l_Lean_Expr_natLit_x21___closed__4 = _init_l_Lean_Expr_natLit_x21___closed__4();
lean_mark_persistent(l_Lean_Expr_natLit_x21___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
