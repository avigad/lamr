// Lean compiler output
// Module: Mathlib.Data.List.Basic
// Imports: Init Mathlib.Logic.Basic Mathlib.Data.Nat.Basic Mathlib.SetNotation Lean
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
lean_object* l_List_reverse___rarg(lean_object*);
lean_object* l_List_decidableMem_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_insert(lean_object*);
lean_object* l_List_length_x27_match__1(lean_object*, lean_object*);
lean_object* l_List_decidableMem_match__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_instSubsetList(lean_object*);
lean_object* l_List_insert___at_List_union___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_length_x27(lean_object*);
lean_object* l_List_inter___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_decidableMem_match__1___rarg(uint8_t, lean_object*, lean_object*);
lean_object* l_List_append_x27_match__1(lean_object*, lean_object*);
lean_object* l_List_instMemList(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_List_append_x27_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_length_x27___rarg___boxed(lean_object*);
lean_object* l_List_filterAux___at_List_inter___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_erasep___rarg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_erasep(lean_object*, lean_object*);
lean_object* l_List_repeat(lean_object*);
lean_object* l_List_append_x27(lean_object*);
lean_object* l_List_union___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_length_x27___rarg(lean_object*);
lean_object* l_List_insert___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_insert___at_List_union___spec__1(lean_object*);
lean_object* l_List_append_x27___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_decidableMem(lean_object*);
lean_object* l_List_repeat_match__1___rarg___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_decidableMem___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repeat___rarg(lean_object*, lean_object*);
lean_object* l_List_filterAux___at_List_inter___spec__1(lean_object*);
lean_object* l_List_union(lean_object*);
lean_object* l_List_inter(lean_object*);
lean_object* l_List_length_x27_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_decidableMem_match__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_repeat___rarg___boxed(lean_object*, lean_object*);
lean_object* l_List_append_x27___rarg(lean_object*, lean_object*);
lean_object* l_List_decidableMem___rarg___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repeat_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_repeat_match__1(lean_object*);
lean_object* l_List_append_x27_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_4);
x_5 = lean_apply_1(x_3, x_2);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_3(x_4, x_6, x_7, x_2);
return x_8;
}
}
}
lean_object* l_List_append_x27_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_append_x27_match__1___rarg), 4, 0);
return x_3;
}
}
lean_object* l_List_append_x27___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_inc(x_2);
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = l_List_append_x27___rarg(x_4, x_2);
lean_ctor_set(x_1, 1, x_5);
return x_1;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_inc(x_6);
lean_dec(x_1);
x_8 = l_List_append_x27___rarg(x_7, x_2);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
}
}
}
lean_object* l_List_append_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_append_x27___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_append_x27___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_append_x27___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_length_x27_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
lean_dec(x_1);
x_8 = lean_apply_2(x_3, x_6, x_7);
return x_8;
}
}
}
lean_object* l_List_length_x27_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_length_x27_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_List_length_x27___rarg(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 1);
x_4 = l_List_length_x27___rarg(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
}
lean_object* l_List_length_x27(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_length_x27___rarg___boxed), 1, 0);
return x_2;
}
}
lean_object* l_List_length_x27___rarg___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_List_length_x27___rarg(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_List_instMemList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_List_decidableMem_match__1___rarg(uint8_t x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_List_decidableMem_match__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lean_alloc_closure((void*)(l_List_decidableMem_match__1___rarg___boxed), 3, 0);
return x_5;
}
}
lean_object* l_List_decidableMem_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lean_unbox(x_1);
lean_dec(x_1);
x_5 = l_List_decidableMem_match__1___rarg(x_4, x_2, x_3);
return x_5;
}
}
lean_object* l_List_decidableMem_match__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_List_decidableMem_match__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
uint8_t l_List_decidableMem___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
lean_dec(x_2);
lean_dec(x_1);
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
lean_inc(x_1);
lean_inc(x_2);
x_7 = lean_apply_2(x_1, x_2, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
uint8_t x_10; 
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_10 = 1;
return x_10;
}
}
}
}
lean_object* l_List_decidableMem(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_decidableMem___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_decidableMem___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = l_List_decidableMem___rarg(x_1, x_2, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* l_List_instSubsetList(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_box(0);
return x_2;
}
}
lean_object* l_List_repeat_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_dec(x_2);
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_sub(x_1, x_6);
x_8 = lean_apply_1(x_3, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
lean_object* l_List_repeat_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_repeat_match__1___rarg___boxed), 3, 0);
return x_2;
}
}
lean_object* l_List_repeat_match__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_List_repeat_match__1___rarg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_List_repeat___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_2, x_5);
lean_inc(x_1);
x_7 = l_List_repeat___rarg(x_1, x_6);
lean_dec(x_6);
x_8 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
else
{
lean_object* x_9; 
lean_dec(x_1);
x_9 = lean_box(0);
return x_9;
}
}
}
lean_object* l_List_repeat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_repeat___rarg___boxed), 2, 0);
return x_2;
}
}
lean_object* l_List_repeat___rarg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_repeat___rarg(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
lean_object* l_List_insert___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_List_decidableMem___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
lean_object* l_List_insert(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_insert___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_erasep___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_1);
lean_inc(x_5);
x_7 = lean_apply_1(x_1, x_5);
x_8 = lean_unbox(x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
x_9 = l_List_erasep___rarg(x_1, x_6);
lean_ctor_set(x_2, 1, x_9);
return x_2;
}
else
{
lean_free_object(x_2);
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_2, 0);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_2);
lean_inc(x_1);
lean_inc(x_10);
x_12 = lean_apply_1(x_1, x_10);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = l_List_erasep___rarg(x_1, x_11);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_10);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_dec(x_10);
lean_dec(x_1);
return x_11;
}
}
}
}
}
lean_object* l_List_erasep(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_List_erasep___rarg), 2, 0);
return x_3;
}
}
lean_object* l_List_insert___at_List_union___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
lean_inc(x_3);
lean_inc(x_2);
x_4 = l_List_decidableMem___rarg(x_1, x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_5, 0, x_2);
lean_ctor_set(x_5, 1, x_3);
return x_5;
}
else
{
lean_dec(x_2);
return x_3;
}
}
}
lean_object* l_List_insert___at_List_union___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_insert___at_List_union___spec__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_union___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_dec(x_1);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
lean_inc(x_1);
x_6 = l_List_insert___at_List_union___spec__1___rarg(x_1, x_4, x_3);
x_2 = x_5;
x_3 = x_6;
goto _start;
}
}
}
lean_object* l_List_union(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_union___rarg), 3, 0);
return x_2;
}
}
lean_object* l_List_filterAux___at_List_inter___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
lean_dec(x_1);
x_5 = l_List_reverse___rarg(x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_3);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_2);
lean_inc(x_7);
lean_inc(x_1);
x_9 = l_List_decidableMem___rarg(x_1, x_7, x_2);
if (x_9 == 0)
{
lean_free_object(x_3);
lean_dec(x_7);
x_3 = x_8;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_4);
{
lean_object* _tmp_2 = x_8;
lean_object* _tmp_3 = x_3;
x_3 = _tmp_2;
x_4 = _tmp_3;
}
goto _start;
}
}
else
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
lean_inc(x_2);
lean_inc(x_12);
lean_inc(x_1);
x_14 = l_List_decidableMem___rarg(x_1, x_12, x_2);
if (x_14 == 0)
{
lean_dec(x_12);
x_3 = x_13;
goto _start;
}
else
{
lean_object* x_16; 
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_12);
lean_ctor_set(x_16, 1, x_4);
x_3 = x_13;
x_4 = x_16;
goto _start;
}
}
}
}
}
lean_object* l_List_filterAux___at_List_inter___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_filterAux___at_List_inter___spec__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_List_inter___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_List_filterAux___at_List_inter___spec__1___rarg(x_1, x_3, x_2, x_4);
return x_5;
}
}
lean_object* l_List_inter(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_List_inter___rarg), 3, 0);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(lean_object*);
lean_object* initialize_Mathlib_SetNotation(lean_object*);
lean_object* initialize_Lean(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Data_List_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetNotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
