// Lean compiler output
// Module: Mathlib.Function
// Imports: Init
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
lean_object* l_Function_on__fun___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_curry(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_swap___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_curry___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_app___rarg(lean_object*, lean_object*);
lean_object* l_Function_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_uncurry___rarg(lean_object*, lean_object*);
lean_object* l_Function_app(lean_object*, lean_object*);
lean_object* l_Function_comp__right(lean_object*, lean_object*);
lean_object* l_Function_uncurry(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp__left___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_combine___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp__right___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_on__fun(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_combine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp__left(lean_object*, lean_object*);
lean_object* l_Function_comp__right___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_4);
x_6 = lean_apply_2(x_1, x_3, x_5);
return x_6;
}
}
lean_object* l_Function_comp__right(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp__right___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Function_comp__left___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_2(x_1, x_5, x_4);
return x_6;
}
}
lean_object* l_Function_comp__left(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_comp__left___rarg), 4, 0);
return x_3;
}
}
lean_object* l_Function_on__fun___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_2);
x_5 = lean_apply_1(x_2, x_3);
x_6 = lean_apply_1(x_2, x_4);
x_7 = lean_apply_2(x_1, x_5, x_6);
return x_7;
}
}
lean_object* l_Function_on__fun(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_on__fun___rarg), 4, 0);
return x_4;
}
}
lean_object* l_Function_combine___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_5);
lean_inc(x_4);
x_6 = lean_apply_2(x_1, x_4, x_5);
x_7 = lean_apply_2(x_3, x_4, x_5);
x_8 = lean_apply_2(x_2, x_6, x_7);
return x_8;
}
}
lean_object* l_Function_combine(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_alloc_closure((void*)(l_Function_combine___rarg), 5, 0);
return x_6;
}
}
lean_object* l_Function_swap___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_2(x_1, x_3, x_2);
return x_4;
}
}
lean_object* l_Function_swap(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_swap___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Function_app___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_1, x_2);
return x_3;
}
}
lean_object* l_Function_app(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Function_app___rarg), 2, 0);
return x_3;
}
}
lean_object* l_Function_curry___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_3);
x_5 = lean_apply_1(x_1, x_4);
return x_5;
}
}
lean_object* l_Function_curry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_curry___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Function_uncurry___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_apply_2(x_1, x_3, x_4);
return x_5;
}
}
lean_object* l_Function_uncurry(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Function_uncurry___rarg), 2, 0);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Function(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
