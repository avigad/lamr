// Lean compiler output
// Module: Mathlib.Util.Time
// Imports: Init Lean
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_io_mono_ms_now(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Command_runLinters___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_timeCmd___closed__7;
static lean_object* l_timeCmd___closed__11;
lean_object* l_timeCmd;
static lean_object* l_timeCmd___closed__3;
static lean_object* l_timeCmd___closed__10;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_timeCmd___closed__6;
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_timeCmdElab___closed__2;
lean_object* l_Lean_Elab_Command_elabCommand(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_timeCmd___closed__5;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabNamespace___spec__1___rarg(lean_object*);
static lean_object* l_timeCmdElab___closed__3;
static lean_object* l_timeCmd___closed__4;
lean_object* l_timeCmdElab(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_timeCmdElab___closed__4;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_timeCmd___closed__2;
static lean_object* l_timeCmd___closed__8;
static lean_object* l_timeCmdElab___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_timeCmd___closed__1;
static lean_object* l_timeCmd___closed__9;
static lean_object* _init_l_timeCmd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("timeCmd");
return x_1;
}
}
static lean_object* _init_l_timeCmd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_timeCmd___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_timeCmd___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_timeCmd___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_timeCmd___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_timeCmd___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("#time ");
return x_1;
}
}
static lean_object* _init_l_timeCmd___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_timeCmd___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_timeCmd___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("command");
return x_1;
}
}
static lean_object* _init_l_timeCmd___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_timeCmd___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_timeCmd___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_timeCmd___closed__8;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_timeCmd___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_timeCmd___closed__4;
x_2 = l_timeCmd___closed__6;
x_3 = l_timeCmd___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_timeCmd___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_timeCmd___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_timeCmd___closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_timeCmd() {
_start:
{
lean_object* x_1; 
x_1 = l_timeCmd___closed__11;
return x_1;
}
}
static lean_object* _init_l_timeCmdElab___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("time: ");
return x_1;
}
}
static lean_object* _init_l_timeCmdElab___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_timeCmdElab___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_timeCmdElab___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ms");
return x_1;
}
}
static lean_object* _init_l_timeCmdElab___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_timeCmdElab___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_timeCmdElab(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_timeCmd___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabNamespace___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = lean_io_mono_ms_now(x_4);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
lean_inc(x_3);
lean_inc(x_2);
x_15 = l_Lean_Elab_Command_elabCommand(x_11, x_2, x_3, x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_io_mono_ms_now(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; lean_object* x_29; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_nat_sub(x_18, x_13);
lean_dec(x_13);
lean_dec(x_18);
x_21 = l_Nat_repr(x_20);
x_22 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = l_timeCmdElab___closed__2;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_timeCmdElab___closed__4;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = 0;
x_29 = l_Lean_Elab_logAt___at_Lean_Elab_Command_runLinters___spec__2(x_9, x_27, x_28, x_2, x_3, x_19);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_9);
return x_29;
}
else
{
uint8_t x_30; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_3);
x_30 = !lean_is_exclusive(x_17);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_31 = lean_ctor_get(x_17, 0);
x_32 = lean_ctor_get(x_2, 6);
lean_inc(x_32);
lean_dec(x_2);
x_33 = lean_io_error_to_string(x_31);
x_34 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_34, 0, x_33);
x_35 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_35, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_17, 0, x_36);
return x_17;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_37 = lean_ctor_get(x_17, 0);
x_38 = lean_ctor_get(x_17, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_17);
x_39 = lean_ctor_get(x_2, 6);
lean_inc(x_39);
lean_dec(x_2);
x_40 = lean_io_error_to_string(x_37);
x_41 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_39);
lean_ctor_set(x_43, 1, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_38);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_13);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_15);
if (x_45 == 0)
{
return x_15;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_15, 0);
x_47 = lean_ctor_get(x_15, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_15);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
else
{
uint8_t x_49; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_3);
x_49 = !lean_is_exclusive(x_12);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_12, 0);
x_51 = lean_ctor_get(x_2, 6);
lean_inc(x_51);
lean_dec(x_2);
x_52 = lean_io_error_to_string(x_50);
x_53 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_53, 0, x_52);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_51);
lean_ctor_set(x_55, 1, x_54);
lean_ctor_set(x_12, 0, x_55);
return x_12;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_56 = lean_ctor_get(x_12, 0);
x_57 = lean_ctor_get(x_12, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_12);
x_58 = lean_ctor_get(x_2, 6);
lean_inc(x_58);
lean_dec(x_2);
x_59 = lean_io_error_to_string(x_56);
x_60 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_60, 0, x_59);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_60);
x_62 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_62, 0, x_58);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_57);
return x_63;
}
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Util_Time(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_timeCmd___closed__1 = _init_l_timeCmd___closed__1();
lean_mark_persistent(l_timeCmd___closed__1);
l_timeCmd___closed__2 = _init_l_timeCmd___closed__2();
lean_mark_persistent(l_timeCmd___closed__2);
l_timeCmd___closed__3 = _init_l_timeCmd___closed__3();
lean_mark_persistent(l_timeCmd___closed__3);
l_timeCmd___closed__4 = _init_l_timeCmd___closed__4();
lean_mark_persistent(l_timeCmd___closed__4);
l_timeCmd___closed__5 = _init_l_timeCmd___closed__5();
lean_mark_persistent(l_timeCmd___closed__5);
l_timeCmd___closed__6 = _init_l_timeCmd___closed__6();
lean_mark_persistent(l_timeCmd___closed__6);
l_timeCmd___closed__7 = _init_l_timeCmd___closed__7();
lean_mark_persistent(l_timeCmd___closed__7);
l_timeCmd___closed__8 = _init_l_timeCmd___closed__8();
lean_mark_persistent(l_timeCmd___closed__8);
l_timeCmd___closed__9 = _init_l_timeCmd___closed__9();
lean_mark_persistent(l_timeCmd___closed__9);
l_timeCmd___closed__10 = _init_l_timeCmd___closed__10();
lean_mark_persistent(l_timeCmd___closed__10);
l_timeCmd___closed__11 = _init_l_timeCmd___closed__11();
lean_mark_persistent(l_timeCmd___closed__11);
l_timeCmd = _init_l_timeCmd();
lean_mark_persistent(l_timeCmd);
l_timeCmdElab___closed__1 = _init_l_timeCmdElab___closed__1();
lean_mark_persistent(l_timeCmdElab___closed__1);
l_timeCmdElab___closed__2 = _init_l_timeCmdElab___closed__2();
lean_mark_persistent(l_timeCmdElab___closed__2);
l_timeCmdElab___closed__3 = _init_l_timeCmdElab___closed__3();
lean_mark_persistent(l_timeCmdElab___closed__3);
l_timeCmdElab___closed__4 = _init_l_timeCmdElab___closed__4();
lean_mark_persistent(l_timeCmdElab___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
