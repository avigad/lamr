// Lean compiler output
// Module: Mathlib.Data.Subtype
// Imports: Init Mathlib.Function Mathlib.Logic.Function.Basic Mathlib.Tactic.Basic Mathlib.Tactic.Coe
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
lean_object* l_Subtype_instSetoidSubtype___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_simps_coe___rarg___boxed(lean_object*);
lean_object* l_Subtype_coind___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_simps_coe___rarg(lean_object*);
lean_object* l_Subtype_instSetoidSubtype(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_map(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_instHasEquivSubtype___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_map___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_simps_coe(lean_object*, lean_object*);
lean_object* l_Subtype_restrict(lean_object*, lean_object*);
lean_object* l_Subtype_instHasEquivSubtype(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_coind(lean_object*, lean_object*);
lean_object* l_Subtype_restrict___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subtype_simps_coe___rarg(lean_object* x_1) {
_start:
{
lean_inc(x_1);
return x_1;
}
}
lean_object* l_Subtype_simps_coe(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subtype_simps_coe___rarg___boxed), 1, 0);
return x_3;
}
}
lean_object* l_Subtype_simps_coe___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Subtype_simps_coe___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Subtype_restrict___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
lean_object* l_Subtype_restrict(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subtype_restrict___rarg), 3, 0);
return x_3;
}
}
lean_object* l_Subtype_coind___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Subtype_coind(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Subtype_coind___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Subtype_map___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_1(x_1, x_3);
return x_4;
}
}
lean_object* l_Subtype_map(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_Subtype_map___rarg), 3, 0);
return x_5;
}
}
lean_object* l_Subtype_instHasEquivSubtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
lean_object* l_Subtype_instHasEquivSubtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subtype_instHasEquivSubtype(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* l_Subtype_instSetoidSubtype(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_box(0);
return x_4;
}
}
lean_object* l_Subtype_instSetoidSubtype___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Subtype_instSetoidSubtype(x_1, x_2, x_3);
lean_dec(x_2);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Function(lean_object*);
lean_object* initialize_Mathlib_Logic_Function_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_Coe(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Data_Subtype(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Function(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Coe(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
