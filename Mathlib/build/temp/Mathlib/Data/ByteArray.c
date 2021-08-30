// Lean compiler output
// Module: Mathlib.Data.ByteArray
// Imports: Init Mathlib.Data.Nat.Basic Mathlib.Data.Char Mathlib.Data.UInt
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
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_ByteArray_toSliceT(lean_object*);
lean_object* l_String_toAsciiByteArray(lean_object*);
uint32_t l_UInt8_toUInt32(uint8_t);
uint8_t l_UInt32_toUInt8(uint32_t);
lean_object* l_ByteSlice_instForInByteSliceUInt8(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_toArray(lean_object*);
lean_object* l_String_toAsciiByteArray_loop_impl___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_toString(lean_object*);
lean_object* l_ByteSlice_toArray_match__1(lean_object*);
lean_object* l_String_toAsciiByteArray_loop_impl(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSliceT_toSlice(lean_object*);
lean_object* l_ByteArray_toSlice(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
extern lean_object* l_ByteArray_empty;
lean_object* l_ByteSlice_toString___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_getOp___boxed(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSliceT_getOp___boxed(lean_object*, lean_object*);
lean_object* l_ByteSliceT_size___boxed(lean_object*);
uint8_t l_ByteSlice_getOp(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl_match__1(lean_object*, lean_object*);
static lean_object* l_ByteSlice_toString___closed__2;
static lean_object* l_ByteSlice_toString___closed__1;
lean_object* l_ByteSlice_instForInByteSliceUInt8___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSlice_toString___lambda__1(uint8_t, lean_object*);
uint8_t l_ByteSliceT_getOp(lean_object*, lean_object*);
lean_object* l_ByteSliceT_size(lean_object*);
lean_object* l_ByteSliceT_toSlice_match__1(lean_object*);
lean_object* l_instToStringByteSlice(lean_object*);
uint8_t lean_byte_array_get(lean_object*, lean_object*);
lean_object* l_ByteSlice_toArray_match__1___rarg(lean_object*, lean_object*);
lean_object* l_String_toAsciiByteArray___boxed(lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_ByteSliceT_toSlice_match__1___rarg(lean_object*, lean_object*);
lean_object* l_ByteSliceT_toSlice___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteSliceT_size(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_byte_array_size(x_2);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_nat_sub(x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_ByteSliceT_size___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ByteSliceT_size(x_1);
lean_dec(x_1);
return x_2;
}
}
uint8_t l_ByteSliceT_getOp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_byte_array_get(x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_ByteSliceT_getOp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ByteSliceT_getOp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_ByteArray_toSliceT(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_ByteSlice_toArray_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_6;
}
}
lean_object* l_ByteSlice_toArray_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ByteSlice_toArray_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_ByteSlice_toArray(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = l_ByteArray_extract(x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_2);
return x_5;
}
}
uint8_t l_ByteSlice_getOp(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_byte_array_get(x_3, x_5);
lean_dec(x_5);
return x_6;
}
}
lean_object* l_ByteSlice_getOp___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_ByteSlice_getOp(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_ByteSlice_forIn_loop_impl_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_1(x_2, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_3, x_6);
return x_7;
}
}
}
lean_object* l_ByteSlice_forIn_loop_impl_match__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ByteSlice_forIn_loop_impl_match__1___rarg), 3, 0);
return x_3;
}
}
lean_object* l_ByteSlice_forIn_loop_impl___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_8);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
lean_dec(x_7);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_2, x_13);
lean_dec(x_2);
x_15 = l_ByteSlice_forIn_loop_impl___rarg(x_1, x_3, x_4, x_5, x_6, x_14, x_12);
return x_15;
}
}
}
lean_object* l_ByteSlice_forIn_loop_impl___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_nat_dec_lt(x_6, x_5);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec(x_1);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_apply_2(x_10, lean_box(0), x_7);
return x_11;
}
else
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_byte_array_get(x_3, x_6);
x_14 = lean_box(x_13);
lean_inc(x_2);
x_15 = lean_apply_2(x_2, x_14, x_7);
x_16 = lean_alloc_closure((void*)(l_ByteSlice_forIn_loop_impl___rarg___lambda__1), 7, 6);
lean_closure_set(x_16, 0, x_1);
lean_closure_set(x_16, 1, x_6);
lean_closure_set(x_16, 2, x_2);
lean_closure_set(x_16, 3, x_3);
lean_closure_set(x_16, 4, x_4);
lean_closure_set(x_16, 5, x_5);
x_17 = lean_apply_4(x_12, lean_box(0), lean_box(0), x_15, x_16);
return x_17;
}
}
}
lean_object* l_ByteSlice_forIn_loop_impl(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ByteSlice_forIn_loop_impl___rarg), 7, 0);
return x_3;
}
}
lean_object* l_ByteSlice_instForInByteSliceUInt8___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_2, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_2, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_2, 2);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_nat_add(x_6, x_7);
lean_dec(x_7);
lean_inc(x_6);
x_9 = l_ByteSlice_forIn_loop_impl___rarg(x_1, x_4, x_5, x_6, x_8, x_6, x_3);
return x_9;
}
}
lean_object* l_ByteSlice_instForInByteSliceUInt8(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ByteSlice_instForInByteSliceUInt8___rarg), 4, 0);
return x_3;
}
}
lean_object* l_ByteSliceT_toSlice_match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
lean_object* l_ByteSliceT_toSlice_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_ByteSliceT_toSlice_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_ByteSliceT_toSlice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_byte_array_size(x_2);
x_5 = lean_nat_sub(x_4, x_3);
lean_dec(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_6 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_3);
lean_ctor_set(x_6, 2, x_5);
return x_6;
}
}
lean_object* l_ByteSliceT_toSlice___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_ByteSliceT_toSlice(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_ByteArray_toSlice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_byte_array_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
lean_ctor_set(x_4, 2, x_2);
return x_4;
}
}
lean_object* l_String_toAsciiByteArray_loop_impl(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_string_utf8_at_end(x_1, x_3);
if (x_4 == 0)
{
uint32_t x_5; uint8_t x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_string_utf8_get(x_1, x_3);
x_6 = ((uint8_t)x_5);
x_7 = lean_byte_array_push(x_2, x_6);
x_8 = lean_string_utf8_next(x_1, x_3);
lean_dec(x_3);
x_2 = x_7;
x_3 = x_8;
goto _start;
}
else
{
lean_dec(x_3);
return x_2;
}
}
}
lean_object* l_String_toAsciiByteArray_loop_impl___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_String_toAsciiByteArray_loop_impl(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_String_toAsciiByteArray(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_ByteArray_empty;
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_String_toAsciiByteArray_loop_impl(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_String_toAsciiByteArray___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_String_toAsciiByteArray(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_5, x_4);
if (x_7 == 0)
{
lean_dec(x_5);
lean_dec(x_1);
return x_6;
}
else
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_byte_array_get(x_2, x_5);
x_9 = lean_box(x_8);
lean_inc(x_1);
x_10 = lean_apply_2(x_1, x_9, x_6);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
lean_dec(x_5);
lean_dec(x_1);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_add(x_5, x_13);
lean_dec(x_5);
x_5 = x_14;
x_6 = x_12;
goto _start;
}
}
}
}
lean_object* l_ByteSlice_toString___lambda__1(uint8_t x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; lean_object* x_4; lean_object* x_5; 
x_3 = ((uint32_t)x_1);
x_4 = lean_string_push(x_2, x_3);
x_5 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_5, 0, x_4);
return x_5;
}
}
static lean_object* _init_l_ByteSlice_toString___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_ByteSlice_toString___lambda__1___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_ByteSlice_toString___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_ByteSlice_toString(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_4);
x_6 = l_ByteSlice_toString___closed__1;
x_7 = l_ByteSlice_toString___closed__2;
lean_inc(x_3);
x_8 = l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1(x_6, x_2, x_3, x_5, x_3, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_ByteSlice_toString___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_ByteSlice_toString___lambda__1(x_3, x_2);
return x_4;
}
}
lean_object* l_instToStringByteSlice(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_nat_add(x_3, x_4);
lean_dec(x_4);
x_6 = l_ByteSlice_toString___closed__1;
x_7 = l_ByteSlice_toString___closed__2;
lean_inc(x_3);
x_8 = l_ByteSlice_forIn_loop_impl___at_ByteSlice_toString___spec__1(x_6, x_2, x_3, x_5, x_3, x_7);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
return x_8;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_Char(lean_object*);
lean_object* initialize_Mathlib_Data_UInt(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Data_ByteArray(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Char(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_UInt(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_ByteSlice_toString___closed__1 = _init_l_ByteSlice_toString___closed__1();
lean_mark_persistent(l_ByteSlice_toString___closed__1);
l_ByteSlice_toString___closed__2 = _init_l_ByteSlice_toString___closed__2();
lean_mark_persistent(l_ByteSlice_toString___closed__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
