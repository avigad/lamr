// Lean compiler output
// Module: Mathlib.Logic.Basic
// Imports: Init Mathlib.Init.Logic Mathlib.Function Mathlib.Tactic.Basic
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
lean_object* l_Empty_elim_match__1(lean_object*, uint8_t);
lean_object* l_decidable__of__iff_x27___rarg___boxed(lean_object*);
lean_object* l_decidable__of__bool_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Or_by__cases_x27___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Or_by__cases_x27(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_fix_x27_impl(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_fix_x27_impl___rarg(lean_object*, lean_object*);
lean_object* l_decidable__of__iff___rarg___boxed(lean_object*);
lean_object* l_WellFounded_fix_x27_impl___rarg___lambda__1(lean_object*, lean_object*, lean_object*);
uint8_t l_decidable__of__iff___rarg(uint8_t);
lean_object* l_decidable__of__bool_match__1(lean_object*, lean_object*);
lean_object* l_decidable__of__iff(lean_object*, lean_object*, lean_object*);
lean_object* l_hidden(lean_object*);
uint8_t l_decidable__of__iff_x27___rarg(uint8_t);
lean_object* l_Empty_elim(lean_object*, uint8_t);
lean_object* l_decidable__of__iff_x27(lean_object*, lean_object*, lean_object*);
uint8_t l_decidable__of__bool___rarg(uint8_t, lean_object*);
lean_object* l_Or_by__cases_x27___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_hidden___rarg(lean_object*);
lean_object* l_hidden___rarg___boxed(lean_object*);
lean_object* l_Empty_elim_match__1___boxed(lean_object*, lean_object*);
lean_object* l_decidable__of__bool_match__1___rarg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_decidable__of__bool(lean_object*);
lean_object* l_Not_elim(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Empty_elim___boxed(lean_object*, lean_object*);
lean_object* l_decidable__of__bool___rarg___boxed(lean_object*, lean_object*);
lean_object* l_Or_by__cases_x27___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_apply_1(x_4, lean_box(0));
return x_6;
}
}
}
lean_object* l_Or_by__cases_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Or_by__cases_x27___rarg___boxed), 4, 0);
return x_4;
}
}
lean_object* l_Or_by__cases_x27___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_Or_by__cases_x27___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
lean_object* l_WellFounded_fix_x27_impl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_WellFounded_fix_x27_impl___rarg(x_1, x_2);
return x_4;
}
}
lean_object* l_WellFounded_fix_x27_impl___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_1);
x_3 = lean_alloc_closure((void*)(l_WellFounded_fix_x27_impl___rarg___lambda__1), 3, 1);
lean_closure_set(x_3, 0, x_1);
x_4 = lean_apply_2(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_WellFounded_fix_x27_impl(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_WellFounded_fix_x27_impl___rarg), 2, 0);
return x_5;
}
}
lean_object* l_hidden___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_hidden(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_hidden___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_hidden___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_hidden___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Empty_elim_match__1(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
lean_object* l_Empty_elim_match__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Empty_elim_match__1(x_1, x_3);
return x_4;
}
}
lean_object* l_Empty_elim(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_internal_panic_unreachable();
}
}
lean_object* l_Empty_elim___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_2);
lean_dec(x_2);
x_4 = l_Empty_elim(x_1, x_3);
return x_4;
}
}
lean_object* l_Not_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_internal_panic_unreachable();
}
}
uint8_t l_decidable__of__iff___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
lean_object* l_decidable__of__iff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_decidable__of__iff___rarg___boxed), 1, 0);
return x_4;
}
}
lean_object* l_decidable__of__iff___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_decidable__of__iff___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_decidable__of__iff_x27___rarg(uint8_t x_1) {
_start:
{
return x_1;
}
}
lean_object* l_decidable__of__iff_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_decidable__of__iff_x27___rarg___boxed), 1, 0);
return x_4;
}
}
lean_object* l_decidable__of__iff_x27___rarg___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_decidable__of__iff_x27___rarg(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_decidable__of__bool_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (x_1 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_1(x_4, lean_box(0));
return x_5;
}
else
{
lean_object* x_6; 
lean_dec(x_4);
x_6 = lean_apply_1(x_3, lean_box(0));
return x_6;
}
}
}
lean_object* l_decidable__of__bool_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_decidable__of__bool_match__1___rarg___boxed), 4, 0);
return x_3;
}
}
lean_object* l_decidable__of__bool_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_1);
lean_dec(x_1);
x_6 = l_decidable__of__bool_match__1___rarg(x_5, x_2, x_3, x_4);
return x_6;
}
}
uint8_t l_decidable__of__bool___rarg(uint8_t x_1, lean_object* x_2) {
_start:
{
return x_1;
}
}
lean_object* l_decidable__of__bool(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_decidable__of__bool___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_decidable__of__bool___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_decidable__of__bool___rarg(x_3, x_2);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Init_Logic(lean_object*);
lean_object* initialize_Mathlib_Function(lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Logic_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init_Logic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Function(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
