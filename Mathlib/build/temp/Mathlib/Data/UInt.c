// Lean compiler output
// Module: Mathlib.Data.UInt
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
uint8_t l_UInt8_isLower(uint8_t);
uint32_t l_UInt8_toUInt32(uint8_t);
uint8_t l_UInt8_decLe(uint8_t, uint8_t);
lean_object* l_UInt8_toChar___boxed(lean_object*);
uint32_t l_UInt8_toChar(uint8_t);
lean_object* l_UInt8_isLower___boxed(lean_object*);
uint8_t l_UInt8_isAlphanum(uint8_t);
uint8_t l_UInt8_isAlpha(uint8_t);
lean_object* l_UInt8_isDigit___boxed(lean_object*);
uint8_t l_UInt8_isUpper(uint8_t);
lean_object* l_UInt8_isAlpha___boxed(lean_object*);
lean_object* l_UInt8_isAlphanum___boxed(lean_object*);
uint8_t l_UInt8_isDigit(uint8_t);
lean_object* l_UInt8_isUpper___boxed(lean_object*);
uint8_t l_UInt8_isUpper(uint8_t x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = 65;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; uint8_t x_6; 
x_5 = 90;
x_6 = x_1 <= x_5;
return x_6;
}
}
}
lean_object* l_UInt8_isUpper___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_isUpper(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_UInt8_isLower(uint8_t x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = 97;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; uint8_t x_6; 
x_5 = 122;
x_6 = x_1 <= x_5;
return x_6;
}
}
}
lean_object* l_UInt8_isLower___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_isLower(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_UInt8_isAlpha(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_UInt8_isUpper(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = l_UInt8_isLower(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
lean_object* l_UInt8_isAlpha___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_isAlpha(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_UInt8_isDigit(uint8_t x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; 
x_2 = 48;
x_3 = x_2 <= x_1;
if (x_3 == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
uint8_t x_5; uint8_t x_6; 
x_5 = 57;
x_6 = x_1 <= x_5;
return x_6;
}
}
}
lean_object* l_UInt8_isDigit___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_isDigit(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint8_t l_UInt8_isAlphanum(uint8_t x_1) {
_start:
{
uint8_t x_2; 
x_2 = l_UInt8_isAlpha(x_1);
if (x_2 == 0)
{
uint8_t x_3; 
x_3 = l_UInt8_isDigit(x_1);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 1;
return x_4;
}
}
}
lean_object* l_UInt8_isAlphanum___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint8_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_isAlphanum(x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
uint32_t l_UInt8_toChar(uint8_t x_1) {
_start:
{
uint32_t x_2; 
x_2 = ((uint32_t)x_1);
return x_2;
}
}
lean_object* l_UInt8_toChar___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; uint32_t x_3; lean_object* x_4; 
x_2 = lean_unbox(x_1);
lean_dec(x_1);
x_3 = l_UInt8_toChar(x_2);
x_4 = lean_box_uint32(x_3);
return x_4;
}
}
lean_object* initialize_Init(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Data_UInt(lean_object* w) {
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
