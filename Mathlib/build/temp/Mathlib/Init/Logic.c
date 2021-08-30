// Lean compiler output
// Module: Mathlib.Init.Logic
// Imports: Init Mathlib.Tactic.Basic
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
lean_object* lean_name_mk_string(lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__10;
lean_object* l_Or_by__cases(lean_object*, lean_object*);
lean_object* l_forall__prop__decidable(lean_object*, lean_object*);
lean_object* l_decidable__of__decidable__of__iff___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__11;
lean_object* l_exists__prop__decidable___rarg___boxed(lean_object*, lean_object*);
lean_object* l_And_elim___rarg(lean_object*, lean_object*);
lean_object* l_decidable__of__decidable__of__eq(lean_object*, lean_object*);
uint8_t l_decidable__of__decidable__of__iff___rarg(uint8_t, lean_object*);
lean_object* l_decidable__eq__of__bool__pred(lean_object*);
lean_object* l_instDecidableXor___rarg___boxed(lean_object*, lean_object*);
lean_object* l_term_u2203_x21___x2c__;
lean_object* l_Decidable_by__cases(lean_object*, lean_object*);
lean_object* l_Or_by__cases___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_exists__prop__decidable___rarg(uint8_t, lean_object*);
lean_object* l_Lean_expandExplicitBinders(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Decidable_to__bool___rarg___boxed(lean_object*);
lean_object* l_myMacro____x40_Mathlib_Init_Logic___hyg_2542_(lean_object*, lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__4;
static lean_object* l_term_u2203_x21___x2c_____closed__9;
static lean_object* l_term_u2203_x21___x2c_____closed__8;
lean_object* l_decidable__of__decidable__of__eq___rarg___boxed(lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__2;
lean_object* l_And_elim(lean_object*, lean_object*, lean_object*);
lean_object* l_forall__prop__decidable___rarg___boxed(lean_object*, lean_object*);
uint8_t l_decidable__of__decidable__of__eq___rarg(uint8_t, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__1;
static lean_object* l_term_u2203_x21___x2c_____closed__3;
static lean_object* l_term_u2203_x21___x2c_____closed__14;
lean_object* l_Decidable_by__cases___rarg___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1;
static lean_object* l_term_u2203_x21___x2c_____closed__15;
static lean_object* l_term_u2203_x21___x2c_____closed__5;
lean_object* l_Decidable_by__cases___rarg(uint8_t, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2;
lean_object* l_decidable__eq__of__bool__pred___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__7;
lean_object* l_instDecidableXor(lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__12;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Decidable_to__bool(lean_object*);
lean_object* l_forall__prop__decidable___rarg(uint8_t, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Or_by__cases___rarg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__13;
uint8_t l_Decidable_to__bool___rarg(uint8_t);
lean_object* l_exists__prop__decidable(lean_object*, lean_object*);
static lean_object* l_term_u2203_x21___x2c_____closed__6;
lean_object* l_decidable__of__decidable__of__iff(lean_object*, lean_object*);
uint8_t l_instDecidableXor___rarg(uint8_t, uint8_t);
extern lean_object* l_Lean_explicitBinders;
lean_object* l_And_elim___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_2(x_1, lean_box(0), lean_box(0));
return x_3;
}
}
lean_object* l_And_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_And_elim___rarg), 2, 0);
return x_4;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term∃!_,_");
return x_1;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u2203_x21___x2c_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u2203_x21___x2c_____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("∃! ");
return x_1;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term_u2203_x21___x2c_____closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u2203_x21___x2c_____closed__4;
x_2 = l_term_u2203_x21___x2c_____closed__6;
x_3 = l_Lean_explicitBinders;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_term_u2203_x21___x2c_____closed__8;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u2203_x21___x2c_____closed__4;
x_2 = l_term_u2203_x21___x2c_____closed__7;
x_3 = l_term_u2203_x21___x2c_____closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term");
return x_1;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_term_u2203_x21___x2c_____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_term_u2203_x21___x2c_____closed__12;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u2203_x21___x2c_____closed__4;
x_2 = l_term_u2203_x21___x2c_____closed__10;
x_3 = l_term_u2203_x21___x2c_____closed__13;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u2203_x21___x2c_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_term_u2203_x21___x2c_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_term_u2203_x21___x2c_____closed__14;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_term_u2203_x21___x2c__() {
_start:
{
lean_object* x_1; 
x_1 = l_term_u2203_x21___x2c_____closed__15;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ExistsUnique");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Init_Logic___hyg_2542_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_term_u2203_x21___x2c_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2;
x_13 = l_Lean_expandExplicitBinders(x_12, x_9, x_11, x_2, x_3);
lean_dec(x_9);
return x_13;
}
}
}
uint8_t l_Decidable_to__bool___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
lean_object* l_Decidable_to__bool(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Decidable_to__bool___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_Decidable_to__bool___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_Decidable_to__bool___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Decidable_by__cases___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (x_1 == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, lean_box(0));
return x_4;
}
else
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_1(x_2, lean_box(0));
return x_5;
}
}
}
lean_object* l_Decidable_by__cases(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Decidable_by__cases___rarg___boxed), 3, 0);
return x_3;
}
}
lean_object* l_Decidable_by__cases___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_Decidable_by__cases___rarg(x_4, x_2, x_3);
return x_5;
}
}
uint8_t l_decidable__of__decidable__of__iff___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
lean_object* l_decidable__of__decidable__of__iff(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidable__of__decidable__of__iff___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_decidable__of__decidable__of__iff___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_decidable__of__decidable__of__iff___rarg(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
uint8_t l_decidable__of__decidable__of__eq___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
lean_object* l_decidable__of__decidable__of__eq(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidable__of__decidable__of__eq___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_decidable__of__decidable__of__eq___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_decidable__of__decidable__of__eq___rarg(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_Or_by__cases___rarg(uint8_t x_1, uint8_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (x_1 == 0)
{
lean_object* x_7; 
lean_dec(x_5);
x_7 = lean_apply_1(x_6, lean_box(0));
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_6);
x_8 = lean_apply_1(x_5, lean_box(0));
return x_8;
}
}
}
lean_object* l_Or_by__cases(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Or_by__cases___rarg___boxed), 6, 0);
return x_3;
}
}
lean_object* l_Or_by__cases___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; uint8_t x_8; lean_object* x_9; 
x_7 = lean_unbox(x_1);
lean_dec(x_1);
x_8 = lean_unbox(x_2);
lean_dec(x_2);
x_9 = l_Or_by__cases___rarg(x_7, x_8, x_3, x_4, x_5, x_6);
return x_9;
}
}
uint8_t l_instDecidableXor___rarg(uint8_t x_1, uint8_t x_2) {
_start:
{
if (x_1 == 0)
{
return x_2;
}
else
{
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
}
}
lean_object* l_instDecidableXor(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_instDecidableXor___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_instDecidableXor___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; lean_object* x_6; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = lean_unbox(x_2);
lean_dec(x_2);
x_5 = l_instDecidableXor___rarg(x_3, x_4);
x_6 = lean_box(x_5);
return x_6;
}
}
lean_object* l_exists__prop__decidable___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_2);
x_3 = 0;
x_4 = lean_box(x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_apply_1(x_2, lean_box(0));
return x_5;
}
}
}
lean_object* l_exists__prop__decidable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_exists__prop__decidable___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_exists__prop__decidable___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_exists__prop__decidable___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_forall__prop__decidable___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
uint8_t x_3; lean_object* x_4; 
lean_dec(x_2);
x_3 = 1;
x_4 = lean_box(x_3);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_apply_1(x_2, lean_box(0));
return x_5;
}
}
}
lean_object* l_forall__prop__decidable(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_forall__prop__decidable___rarg___boxed), 2, 0);
return x_3;
}
}
lean_object* l_forall__prop__decidable___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_forall__prop__decidable___rarg(x_3, x_2);
return x_4;
}
}
lean_object* l_decidable__eq__of__bool__pred___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_2(x_1, x_4, x_5);
return x_6;
}
}
lean_object* l_decidable__eq__of__bool__pred(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidable__eq__of__bool__pred___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Init_Logic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_term_u2203_x21___x2c_____closed__1 = _init_l_term_u2203_x21___x2c_____closed__1();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__1);
l_term_u2203_x21___x2c_____closed__2 = _init_l_term_u2203_x21___x2c_____closed__2();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__2);
l_term_u2203_x21___x2c_____closed__3 = _init_l_term_u2203_x21___x2c_____closed__3();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__3);
l_term_u2203_x21___x2c_____closed__4 = _init_l_term_u2203_x21___x2c_____closed__4();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__4);
l_term_u2203_x21___x2c_____closed__5 = _init_l_term_u2203_x21___x2c_____closed__5();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__5);
l_term_u2203_x21___x2c_____closed__6 = _init_l_term_u2203_x21___x2c_____closed__6();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__6);
l_term_u2203_x21___x2c_____closed__7 = _init_l_term_u2203_x21___x2c_____closed__7();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__7);
l_term_u2203_x21___x2c_____closed__8 = _init_l_term_u2203_x21___x2c_____closed__8();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__8);
l_term_u2203_x21___x2c_____closed__9 = _init_l_term_u2203_x21___x2c_____closed__9();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__9);
l_term_u2203_x21___x2c_____closed__10 = _init_l_term_u2203_x21___x2c_____closed__10();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__10);
l_term_u2203_x21___x2c_____closed__11 = _init_l_term_u2203_x21___x2c_____closed__11();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__11);
l_term_u2203_x21___x2c_____closed__12 = _init_l_term_u2203_x21___x2c_____closed__12();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__12);
l_term_u2203_x21___x2c_____closed__13 = _init_l_term_u2203_x21___x2c_____closed__13();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__13);
l_term_u2203_x21___x2c_____closed__14 = _init_l_term_u2203_x21___x2c_____closed__14();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__14);
l_term_u2203_x21___x2c_____closed__15 = _init_l_term_u2203_x21___x2c_____closed__15();
lean_mark_persistent(l_term_u2203_x21___x2c_____closed__15);
l_term_u2203_x21___x2c__ = _init_l_term_u2203_x21___x2c__();
lean_mark_persistent(l_term_u2203_x21___x2c__);
l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1 = _init_l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__1);
l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2 = _init_l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Init_Logic___hyg_2542____closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
