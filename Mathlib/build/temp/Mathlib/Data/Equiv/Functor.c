// Lean compiler output
// Module: Mathlib.Data.Equiv.Functor
// Imports: Init Mathlib.Data.Equiv.Basic
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
lean_object* l_Functor_map__equiv___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_map__equiv___elambda__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_map__equiv(lean_object*);
lean_object* l_Functor_map__equiv___elambda__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_map__equiv___elambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Functor_map__equiv___elambda__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_equiv_symm___elambda__2___rarg(lean_object*, lean_object*);
lean_object* l_Functor_map__equiv___elambda__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_4(x_1, lean_box(0), lean_box(0), x_2, x_3);
return x_4;
}
}
lean_object* l_Functor_map__equiv___elambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Functor_map__equiv___elambda__1___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Functor_map__equiv___elambda__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_apply_4(x_1, lean_box(0), lean_box(0), x_2, x_3);
return x_4;
}
}
lean_object* l_Functor_map__equiv___elambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_alloc_closure((void*)(l_Functor_map__equiv___elambda__2___rarg), 3, 0);
return x_4;
}
}
lean_object* l_Functor_map__equiv___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_inc(x_6);
x_8 = lean_alloc_closure((void*)(l_Functor_map__equiv___elambda__2___rarg), 3, 2);
lean_closure_set(x_8, 0, x_6);
lean_closure_set(x_8, 1, x_7);
x_9 = lean_alloc_closure((void*)(l_equiv_symm___elambda__2___rarg), 2, 1);
lean_closure_set(x_9, 0, x_5);
x_10 = lean_alloc_closure((void*)(l_Functor_map__equiv___elambda__1___rarg), 3, 2);
lean_closure_set(x_10, 0, x_6);
lean_closure_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
lean_object* l_Functor_map__equiv(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Functor_map__equiv___rarg), 5, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Data_Equiv_Basic(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Data_Equiv_Functor(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Equiv_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
