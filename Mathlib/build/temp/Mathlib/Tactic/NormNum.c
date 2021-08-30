// Lean compiler output
// Module: Mathlib.Tactic.NormNum
// Imports: Init Lean.Elab.Tactic.Basic Mathlib.Algebra.Ring.Basic Mathlib.Tactic.Core
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
uint8_t l_Lean_Expr_isNatLit(lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__3;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__12;
lean_object* l_Lean_Expr_numeral_x3f_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_match__1(lean_object*);
lean_object* lean_name_mk_string(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__2;
static lean_object* l_Lean_Parser_Tactic_normNum___closed__8;
lean_object* l_Lean_Tactic_evalNormNum_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Tactic_evalNormNum___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__19;
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__1(lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__4;
lean_object* l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__1;
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_NormNum_eval___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__13;
lean_object* l_Lean_Expr_natLit_x21(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__2;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__21;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_match__1(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__11;
static lean_object* l_Lean_Tactic_evalNormNum___rarg___closed__1;
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_evalPow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__26;
lean_object* l_Lean_Expr_numeral_x3f_match__1(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_levelZero;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__2;
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__8;
static lean_object* l_Lean_Expr_numeral_x3f___closed__1;
static lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__27;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__9;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__5;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__6;
static lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__23;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__11;
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Tactic_evalNormNum(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__5;
static lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
lean_object* l_Lean_Meta_mkOfNatLit(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__7;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__18;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__15;
static lean_object* l_Lean_Expr_numeral_x3f___closed__7;
lean_object* l_Lean_Tactic_evalNormNum___boxed(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__17;
lean_object* l_Lean_Expr_natLit_x3f(lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__1;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval___closed__1;
lean_object* l_Lean_Expr_numeral_x3f(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__25;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__7;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__24;
static lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3;
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__10;
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
lean_object* l_Lean_Tactic_evalNormNum_match__1(lean_object*);
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__3;
lean_object* l_Lean_Meta_NormNum_eval_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_match__2(lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_mkOfNatLit___closed__3;
lean_object* l_Lean_Expr_getAppNumArgsAux(lean_object*, lean_object*);
static lean_object* l_Lean_Parser_Tactic_normNum___closed__6;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__20;
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__6;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__28;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__14;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__22;
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__2(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_mkOfNatLit___closed__1;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__16;
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
lean_object* l_Lean_Parser_Tactic_normNum;
static lean_object* l_Lean_Meta_mkOfNatLit___closed__2;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__5;
lean_object* l_Lean_Meta_NormNum_eval_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__3;
static lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__4;
static lean_object* l_Lean_Meta_NormNum_eval_x27___closed__10;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Expr_numeral_x3f___closed__9;
static lean_object* l_Lean_Expr_numeral_x3f___closed__8;
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Tactic_Generalize_0__Lean_Elab_Tactic_evalGeneralizeWithEq___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_numeral_x3f_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
}
}
lean_object* l_Lean_Expr_numeral_x3f_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Expr_numeral_x3f_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Nat");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_numeral_x3f___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("OfNat");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_numeral_x3f___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__4;
x_2 = l_Lean_Expr_numeral_x3f___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("zero");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__2;
x_2 = l_Lean_Expr_numeral_x3f___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("succ");
return x_1;
}
}
static lean_object* _init_l_Lean_Expr_numeral_x3f___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__2;
x_2 = l_Lean_Expr_numeral_x3f___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Expr_numeral_x3f(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Expr_natLit_x3f(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; uint8_t x_4; 
x_3 = l_Lean_Expr_getAppFn(x_1);
x_4 = l_Lean_Expr_isConst(x_3);
if (x_4 == 0)
{
lean_object* x_5; 
lean_dec(x_3);
lean_dec(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_34; uint8_t x_35; 
x_6 = l_Lean_Expr_constName_x21(x_3);
lean_dec(x_3);
x_34 = l_Lean_Expr_numeral_x3f___closed__11;
x_35 = lean_name_eq(x_6, x_34);
if (x_35 == 0)
{
lean_object* x_36; 
x_36 = lean_box(0);
x_7 = x_36;
goto block_33;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_unsigned_to_nat(0u);
x_38 = l_Lean_Expr_getAppNumArgsAux(x_1, x_37);
x_39 = lean_unsigned_to_nat(1u);
x_40 = lean_nat_dec_eq(x_38, x_39);
lean_dec(x_38);
if (x_40 == 0)
{
lean_object* x_41; 
x_41 = lean_box(0);
x_7 = x_41;
goto block_33;
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_6);
x_42 = l_Lean_Expr_appArg_x21(x_1);
lean_dec(x_1);
x_43 = l_Lean_Expr_numeral_x3f(x_42);
if (lean_obj_tag(x_43) == 0)
{
lean_object* x_44; 
x_44 = lean_box(0);
return x_44;
}
else
{
uint8_t x_45; 
x_45 = !lean_is_exclusive(x_43);
if (x_45 == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_43, 0);
x_47 = lean_nat_add(x_46, x_39);
lean_dec(x_46);
lean_ctor_set(x_43, 0, x_47);
return x_43;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_43, 0);
lean_inc(x_48);
lean_dec(x_43);
x_49 = lean_nat_add(x_48, x_39);
lean_dec(x_48);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
}
}
block_33:
{
lean_object* x_8; uint8_t x_9; 
lean_dec(x_7);
x_8 = l_Lean_Expr_numeral_x3f___closed__6;
x_9 = lean_name_eq(x_6, x_8);
if (x_9 == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = l_Lean_Expr_numeral_x3f___closed__8;
x_11 = lean_name_eq(x_6, x_10);
lean_dec(x_6);
if (x_11 == 0)
{
lean_object* x_12; 
lean_dec(x_1);
x_12 = lean_box(0);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Expr_getAppNumArgsAux(x_1, x_13);
lean_dec(x_1);
x_15 = lean_nat_dec_eq(x_14, x_13);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_box(0);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = l_Lean_Expr_numeral_x3f___closed__9;
return x_17;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_18 = lean_unsigned_to_nat(0u);
x_19 = l_Lean_Expr_getAppNumArgsAux(x_1, x_18);
x_20 = lean_unsigned_to_nat(3u);
x_21 = lean_nat_dec_eq(x_19, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_1);
x_22 = l_Lean_Expr_numeral_x3f___closed__8;
x_23 = lean_name_eq(x_6, x_22);
lean_dec(x_6);
if (x_23 == 0)
{
lean_object* x_24; 
lean_dec(x_19);
x_24 = lean_box(0);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = lean_nat_dec_eq(x_19, x_18);
lean_dec(x_19);
if (x_25 == 0)
{
lean_object* x_26; 
x_26 = lean_box(0);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = l_Lean_Expr_numeral_x3f___closed__9;
return x_27;
}
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_6);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_19, x_28);
lean_dec(x_19);
x_30 = lean_nat_sub(x_29, x_28);
lean_dec(x_29);
x_31 = l_Lean_Expr_getRevArg_x21(x_1, x_30);
lean_dec(x_1);
x_1 = x_31;
goto _start;
}
}
}
}
}
else
{
uint8_t x_51; 
lean_dec(x_1);
x_51 = !lean_is_exclusive(x_2);
if (x_51 == 0)
{
return x_2;
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_2, 0);
lean_inc(x_52);
lean_dec(x_2);
x_53 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_53, 0, x_52);
return x_53;
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkOfNatLit___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Numeric");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_mkOfNatLit___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_mkOfNatLit___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_mkOfNatLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_mkOfNatLit___closed__2;
x_2 = l_Lean_Expr_numeral_x3f___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_mkOfNatLit(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_box(0);
x_6 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_6, 0, x_1);
lean_ctor_set(x_6, 1, x_5);
x_7 = l_Lean_Meta_mkOfNatLit___closed__3;
lean_inc(x_6);
x_8 = l_Lean_mkConst(x_7, x_6);
lean_inc(x_4);
lean_inc(x_2);
x_9 = l_Lean_mkApp3(x_8, x_2, x_4, x_3);
x_10 = l_Lean_Expr_numeral_x3f___closed__6;
x_11 = l_Lean_mkConst(x_10, x_6);
x_12 = l_Lean_mkApp3(x_11, x_2, x_4, x_9);
return x_12;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
lean_object* x_4; uint64_t x_5; lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get_uint64(x_1, sizeof(void*)*1);
lean_dec(x_1);
x_6 = lean_box_uint64(x_5);
x_7 = lean_apply_2(x_2, x_4, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_NormNum_eval_x27_evalBinOp_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_5, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_5);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_unsigned_to_nat(0u);
x_10 = lean_nat_dec_eq(x_8, x_9);
if (x_10 == 0)
{
lean_object* x_11; uint8_t x_12; 
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_dec_eq(x_8, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_3);
x_13 = lean_apply_1(x_4, x_8);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_8);
lean_dec(x_4);
x_14 = lean_box(0);
x_15 = lean_apply_1(x_3, x_14);
return x_15;
}
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_3);
x_16 = lean_box(0);
x_17 = lean_apply_1(x_2, x_16);
return x_17;
}
}
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_NormNum_eval_x27_match__1___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HAdd");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HMul");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HPow");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hPow");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hMul");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hAdd");
return x_1;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; uint64_t x_13; lean_object* x_14; uint8_t x_15; 
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
x_14 = lean_ctor_get(x_7, 0);
lean_dec(x_14);
x_15 = !lean_is_exclusive(x_8);
if (x_15 == 0)
{
lean_object* x_16; uint64_t x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_16 = lean_ctor_get(x_8, 1);
x_17 = lean_ctor_get_uint64(x_8, sizeof(void*)*2);
x_18 = lean_ctor_get(x_8, 0);
lean_dec(x_18);
x_19 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
x_20 = lean_string_dec_eq(x_16, x_19);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_2);
x_21 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
x_22 = lean_string_dec_eq(x_16, x_21);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
x_23 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
x_24 = lean_string_dec_eq(x_16, x_23);
if (x_24 == 0)
{
lean_object* x_25; uint8_t x_26; 
lean_dec(x_4);
x_25 = l_Lean_Expr_numeral_x3f___closed__3;
x_26 = lean_string_dec_eq(x_16, x_25);
lean_dec(x_16);
if (x_26 == 0)
{
lean_object* x_27; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
x_27 = lean_apply_1(x_6, x_1);
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_1);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_ctor_get(x_1, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_1, 0);
lean_dec(x_30);
x_31 = l_Lean_Expr_numeral_x3f___closed__5;
x_32 = lean_string_dec_eq(x_12, x_31);
if (x_32 == 0)
{
lean_object* x_33; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_25);
x_33 = lean_apply_1(x_6, x_1);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_12);
x_34 = lean_array_get_size(x_10);
x_35 = lean_unsigned_to_nat(3u);
x_36 = lean_nat_dec_eq(x_34, x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_25);
lean_ctor_set(x_7, 1, x_31);
x_37 = lean_apply_1(x_6, x_1);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_38 = lean_unsigned_to_nat(0u);
x_39 = lean_array_fget(x_10, x_38);
x_40 = lean_unsigned_to_nat(1u);
x_41 = lean_array_fget(x_10, x_40);
x_42 = lean_unsigned_to_nat(2u);
x_43 = lean_array_fget(x_10, x_42);
lean_dec(x_10);
x_44 = lean_box_uint64(x_17);
x_45 = lean_box_uint64(x_13);
x_46 = lean_apply_5(x_5, x_39, x_41, x_43, x_44, x_45);
return x_46;
}
}
}
else
{
lean_object* x_47; uint8_t x_48; 
lean_dec(x_1);
x_47 = l_Lean_Expr_numeral_x3f___closed__5;
x_48 = lean_string_dec_eq(x_12, x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_25);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_7);
lean_ctor_set(x_49, 1, x_10);
x_50 = lean_apply_1(x_6, x_49);
return x_50;
}
else
{
lean_object* x_51; lean_object* x_52; uint8_t x_53; 
lean_dec(x_12);
x_51 = lean_array_get_size(x_10);
x_52 = lean_unsigned_to_nat(3u);
x_53 = lean_nat_dec_eq(x_51, x_52);
lean_dec(x_51);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_5);
lean_ctor_set(x_8, 1, x_25);
lean_ctor_set(x_7, 1, x_47);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_7);
lean_ctor_set(x_54, 1, x_10);
x_55 = lean_apply_1(x_6, x_54);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_56 = lean_unsigned_to_nat(0u);
x_57 = lean_array_fget(x_10, x_56);
x_58 = lean_unsigned_to_nat(1u);
x_59 = lean_array_fget(x_10, x_58);
x_60 = lean_unsigned_to_nat(2u);
x_61 = lean_array_fget(x_10, x_60);
lean_dec(x_10);
x_62 = lean_box_uint64(x_17);
x_63 = lean_box_uint64(x_13);
x_64 = lean_apply_5(x_5, x_57, x_59, x_61, x_62, x_63);
return x_64;
}
}
}
}
}
else
{
uint8_t x_65; 
lean_dec(x_16);
lean_dec(x_5);
x_65 = !lean_is_exclusive(x_1);
if (x_65 == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_66 = lean_ctor_get(x_1, 1);
lean_dec(x_66);
x_67 = lean_ctor_get(x_1, 0);
lean_dec(x_67);
x_68 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_69 = lean_string_dec_eq(x_12, x_68);
if (x_69 == 0)
{
lean_object* x_70; 
lean_dec(x_4);
lean_ctor_set(x_8, 1, x_23);
x_70 = lean_apply_1(x_6, x_1);
return x_70;
}
else
{
lean_object* x_71; lean_object* x_72; uint8_t x_73; 
lean_dec(x_12);
x_71 = lean_array_get_size(x_10);
x_72 = lean_unsigned_to_nat(6u);
x_73 = lean_nat_dec_eq(x_71, x_72);
lean_dec(x_71);
if (x_73 == 0)
{
lean_object* x_74; 
lean_dec(x_4);
lean_ctor_set(x_8, 1, x_23);
lean_ctor_set(x_7, 1, x_68);
x_74 = lean_apply_1(x_6, x_1);
return x_74;
}
else
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_array_fget(x_10, x_75);
x_77 = lean_unsigned_to_nat(1u);
x_78 = lean_array_fget(x_10, x_77);
x_79 = lean_unsigned_to_nat(2u);
x_80 = lean_array_fget(x_10, x_79);
x_81 = lean_unsigned_to_nat(3u);
x_82 = lean_array_fget(x_10, x_81);
x_83 = lean_unsigned_to_nat(4u);
x_84 = lean_array_fget(x_10, x_83);
x_85 = lean_unsigned_to_nat(5u);
x_86 = lean_array_fget(x_10, x_85);
lean_dec(x_10);
x_87 = lean_box_uint64(x_17);
x_88 = lean_box_uint64(x_13);
x_89 = lean_apply_8(x_4, x_76, x_78, x_80, x_82, x_84, x_86, x_87, x_88);
return x_89;
}
}
}
else
{
lean_object* x_90; uint8_t x_91; 
lean_dec(x_1);
x_90 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_91 = lean_string_dec_eq(x_12, x_90);
if (x_91 == 0)
{
lean_object* x_92; lean_object* x_93; 
lean_dec(x_4);
lean_ctor_set(x_8, 1, x_23);
x_92 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_92, 0, x_7);
lean_ctor_set(x_92, 1, x_10);
x_93 = lean_apply_1(x_6, x_92);
return x_93;
}
else
{
lean_object* x_94; lean_object* x_95; uint8_t x_96; 
lean_dec(x_12);
x_94 = lean_array_get_size(x_10);
x_95 = lean_unsigned_to_nat(6u);
x_96 = lean_nat_dec_eq(x_94, x_95);
lean_dec(x_94);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; 
lean_dec(x_4);
lean_ctor_set(x_8, 1, x_23);
lean_ctor_set(x_7, 1, x_90);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_7);
lean_ctor_set(x_97, 1, x_10);
x_98 = lean_apply_1(x_6, x_97);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_99 = lean_unsigned_to_nat(0u);
x_100 = lean_array_fget(x_10, x_99);
x_101 = lean_unsigned_to_nat(1u);
x_102 = lean_array_fget(x_10, x_101);
x_103 = lean_unsigned_to_nat(2u);
x_104 = lean_array_fget(x_10, x_103);
x_105 = lean_unsigned_to_nat(3u);
x_106 = lean_array_fget(x_10, x_105);
x_107 = lean_unsigned_to_nat(4u);
x_108 = lean_array_fget(x_10, x_107);
x_109 = lean_unsigned_to_nat(5u);
x_110 = lean_array_fget(x_10, x_109);
lean_dec(x_10);
x_111 = lean_box_uint64(x_17);
x_112 = lean_box_uint64(x_13);
x_113 = lean_apply_8(x_4, x_100, x_102, x_104, x_106, x_108, x_110, x_111, x_112);
return x_113;
}
}
}
}
}
else
{
uint8_t x_114; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
x_114 = !lean_is_exclusive(x_1);
if (x_114 == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; uint8_t x_118; 
x_115 = lean_ctor_get(x_1, 1);
lean_dec(x_115);
x_116 = lean_ctor_get(x_1, 0);
lean_dec(x_116);
x_117 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_118 = lean_string_dec_eq(x_12, x_117);
if (x_118 == 0)
{
lean_object* x_119; 
lean_dec(x_3);
lean_ctor_set(x_8, 1, x_21);
x_119 = lean_apply_1(x_6, x_1);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; uint8_t x_122; 
lean_dec(x_12);
x_120 = lean_array_get_size(x_10);
x_121 = lean_unsigned_to_nat(6u);
x_122 = lean_nat_dec_eq(x_120, x_121);
lean_dec(x_120);
if (x_122 == 0)
{
lean_object* x_123; 
lean_dec(x_3);
lean_ctor_set(x_8, 1, x_21);
lean_ctor_set(x_7, 1, x_117);
x_123 = lean_apply_1(x_6, x_1);
return x_123;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_124 = lean_unsigned_to_nat(0u);
x_125 = lean_array_fget(x_10, x_124);
x_126 = lean_unsigned_to_nat(1u);
x_127 = lean_array_fget(x_10, x_126);
x_128 = lean_unsigned_to_nat(2u);
x_129 = lean_array_fget(x_10, x_128);
x_130 = lean_unsigned_to_nat(3u);
x_131 = lean_array_fget(x_10, x_130);
x_132 = lean_unsigned_to_nat(4u);
x_133 = lean_array_fget(x_10, x_132);
x_134 = lean_unsigned_to_nat(5u);
x_135 = lean_array_fget(x_10, x_134);
lean_dec(x_10);
x_136 = lean_box_uint64(x_17);
x_137 = lean_box_uint64(x_13);
x_138 = lean_apply_8(x_3, x_125, x_127, x_129, x_131, x_133, x_135, x_136, x_137);
return x_138;
}
}
}
else
{
lean_object* x_139; uint8_t x_140; 
lean_dec(x_1);
x_139 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_140 = lean_string_dec_eq(x_12, x_139);
if (x_140 == 0)
{
lean_object* x_141; lean_object* x_142; 
lean_dec(x_3);
lean_ctor_set(x_8, 1, x_21);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_7);
lean_ctor_set(x_141, 1, x_10);
x_142 = lean_apply_1(x_6, x_141);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; uint8_t x_145; 
lean_dec(x_12);
x_143 = lean_array_get_size(x_10);
x_144 = lean_unsigned_to_nat(6u);
x_145 = lean_nat_dec_eq(x_143, x_144);
lean_dec(x_143);
if (x_145 == 0)
{
lean_object* x_146; lean_object* x_147; 
lean_dec(x_3);
lean_ctor_set(x_8, 1, x_21);
lean_ctor_set(x_7, 1, x_139);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_7);
lean_ctor_set(x_146, 1, x_10);
x_147 = lean_apply_1(x_6, x_146);
return x_147;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_148 = lean_unsigned_to_nat(0u);
x_149 = lean_array_fget(x_10, x_148);
x_150 = lean_unsigned_to_nat(1u);
x_151 = lean_array_fget(x_10, x_150);
x_152 = lean_unsigned_to_nat(2u);
x_153 = lean_array_fget(x_10, x_152);
x_154 = lean_unsigned_to_nat(3u);
x_155 = lean_array_fget(x_10, x_154);
x_156 = lean_unsigned_to_nat(4u);
x_157 = lean_array_fget(x_10, x_156);
x_158 = lean_unsigned_to_nat(5u);
x_159 = lean_array_fget(x_10, x_158);
lean_dec(x_10);
x_160 = lean_box_uint64(x_17);
x_161 = lean_box_uint64(x_13);
x_162 = lean_apply_8(x_3, x_149, x_151, x_153, x_155, x_157, x_159, x_160, x_161);
return x_162;
}
}
}
}
}
else
{
uint8_t x_163; 
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_163 = !lean_is_exclusive(x_1);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_164 = lean_ctor_get(x_1, 1);
lean_dec(x_164);
x_165 = lean_ctor_get(x_1, 0);
lean_dec(x_165);
x_166 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_167 = lean_string_dec_eq(x_12, x_166);
if (x_167 == 0)
{
lean_object* x_168; 
lean_dec(x_2);
lean_ctor_set(x_8, 1, x_19);
x_168 = lean_apply_1(x_6, x_1);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; uint8_t x_171; 
lean_dec(x_12);
x_169 = lean_array_get_size(x_10);
x_170 = lean_unsigned_to_nat(6u);
x_171 = lean_nat_dec_eq(x_169, x_170);
lean_dec(x_169);
if (x_171 == 0)
{
lean_object* x_172; 
lean_dec(x_2);
lean_ctor_set(x_8, 1, x_19);
lean_ctor_set(x_7, 1, x_166);
x_172 = lean_apply_1(x_6, x_1);
return x_172;
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_free_object(x_1);
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_173 = lean_unsigned_to_nat(0u);
x_174 = lean_array_fget(x_10, x_173);
x_175 = lean_unsigned_to_nat(1u);
x_176 = lean_array_fget(x_10, x_175);
x_177 = lean_unsigned_to_nat(2u);
x_178 = lean_array_fget(x_10, x_177);
x_179 = lean_unsigned_to_nat(3u);
x_180 = lean_array_fget(x_10, x_179);
x_181 = lean_unsigned_to_nat(4u);
x_182 = lean_array_fget(x_10, x_181);
x_183 = lean_unsigned_to_nat(5u);
x_184 = lean_array_fget(x_10, x_183);
lean_dec(x_10);
x_185 = lean_box_uint64(x_17);
x_186 = lean_box_uint64(x_13);
x_187 = lean_apply_8(x_2, x_174, x_176, x_178, x_180, x_182, x_184, x_185, x_186);
return x_187;
}
}
}
else
{
lean_object* x_188; uint8_t x_189; 
lean_dec(x_1);
x_188 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_189 = lean_string_dec_eq(x_12, x_188);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_2);
lean_ctor_set(x_8, 1, x_19);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_7);
lean_ctor_set(x_190, 1, x_10);
x_191 = lean_apply_1(x_6, x_190);
return x_191;
}
else
{
lean_object* x_192; lean_object* x_193; uint8_t x_194; 
lean_dec(x_12);
x_192 = lean_array_get_size(x_10);
x_193 = lean_unsigned_to_nat(6u);
x_194 = lean_nat_dec_eq(x_192, x_193);
lean_dec(x_192);
if (x_194 == 0)
{
lean_object* x_195; lean_object* x_196; 
lean_dec(x_2);
lean_ctor_set(x_8, 1, x_19);
lean_ctor_set(x_7, 1, x_188);
x_195 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_195, 0, x_7);
lean_ctor_set(x_195, 1, x_10);
x_196 = lean_apply_1(x_6, x_195);
return x_196;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; 
lean_free_object(x_8);
lean_free_object(x_7);
lean_dec(x_6);
x_197 = lean_unsigned_to_nat(0u);
x_198 = lean_array_fget(x_10, x_197);
x_199 = lean_unsigned_to_nat(1u);
x_200 = lean_array_fget(x_10, x_199);
x_201 = lean_unsigned_to_nat(2u);
x_202 = lean_array_fget(x_10, x_201);
x_203 = lean_unsigned_to_nat(3u);
x_204 = lean_array_fget(x_10, x_203);
x_205 = lean_unsigned_to_nat(4u);
x_206 = lean_array_fget(x_10, x_205);
x_207 = lean_unsigned_to_nat(5u);
x_208 = lean_array_fget(x_10, x_207);
lean_dec(x_10);
x_209 = lean_box_uint64(x_17);
x_210 = lean_box_uint64(x_13);
x_211 = lean_apply_8(x_2, x_198, x_200, x_202, x_204, x_206, x_208, x_209, x_210);
return x_211;
}
}
}
}
}
else
{
lean_object* x_212; uint64_t x_213; lean_object* x_214; uint8_t x_215; 
x_212 = lean_ctor_get(x_8, 1);
x_213 = lean_ctor_get_uint64(x_8, sizeof(void*)*2);
lean_inc(x_212);
lean_dec(x_8);
x_214 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
x_215 = lean_string_dec_eq(x_212, x_214);
if (x_215 == 0)
{
lean_object* x_216; uint8_t x_217; 
lean_dec(x_2);
x_216 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
x_217 = lean_string_dec_eq(x_212, x_216);
if (x_217 == 0)
{
lean_object* x_218; uint8_t x_219; 
lean_dec(x_3);
x_218 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
x_219 = lean_string_dec_eq(x_212, x_218);
if (x_219 == 0)
{
lean_object* x_220; uint8_t x_221; 
lean_dec(x_4);
x_220 = l_Lean_Expr_numeral_x3f___closed__3;
x_221 = lean_string_dec_eq(x_212, x_220);
lean_dec(x_212);
if (x_221 == 0)
{
lean_object* x_222; 
lean_free_object(x_7);
lean_dec(x_12);
lean_dec(x_10);
lean_dec(x_5);
x_222 = lean_apply_1(x_6, x_1);
return x_222;
}
else
{
lean_object* x_223; lean_object* x_224; uint8_t x_225; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_223 = x_1;
} else {
 lean_dec_ref(x_1);
 x_223 = lean_box(0);
}
x_224 = l_Lean_Expr_numeral_x3f___closed__5;
x_225 = lean_string_dec_eq(x_12, x_224);
if (x_225 == 0)
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; 
lean_dec(x_5);
x_226 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_226, 0, x_9);
lean_ctor_set(x_226, 1, x_220);
lean_ctor_set_uint64(x_226, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 0, x_226);
if (lean_is_scalar(x_223)) {
 x_227 = lean_alloc_ctor(0, 2, 0);
} else {
 x_227 = x_223;
}
lean_ctor_set(x_227, 0, x_7);
lean_ctor_set(x_227, 1, x_10);
x_228 = lean_apply_1(x_6, x_227);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; uint8_t x_231; 
lean_dec(x_12);
x_229 = lean_array_get_size(x_10);
x_230 = lean_unsigned_to_nat(3u);
x_231 = lean_nat_dec_eq(x_229, x_230);
lean_dec(x_229);
if (x_231 == 0)
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_5);
x_232 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_232, 0, x_9);
lean_ctor_set(x_232, 1, x_220);
lean_ctor_set_uint64(x_232, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 1, x_224);
lean_ctor_set(x_7, 0, x_232);
if (lean_is_scalar(x_223)) {
 x_233 = lean_alloc_ctor(0, 2, 0);
} else {
 x_233 = x_223;
}
lean_ctor_set(x_233, 0, x_7);
lean_ctor_set(x_233, 1, x_10);
x_234 = lean_apply_1(x_6, x_233);
return x_234;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
lean_dec(x_223);
lean_free_object(x_7);
lean_dec(x_6);
x_235 = lean_unsigned_to_nat(0u);
x_236 = lean_array_fget(x_10, x_235);
x_237 = lean_unsigned_to_nat(1u);
x_238 = lean_array_fget(x_10, x_237);
x_239 = lean_unsigned_to_nat(2u);
x_240 = lean_array_fget(x_10, x_239);
lean_dec(x_10);
x_241 = lean_box_uint64(x_213);
x_242 = lean_box_uint64(x_13);
x_243 = lean_apply_5(x_5, x_236, x_238, x_240, x_241, x_242);
return x_243;
}
}
}
}
else
{
lean_object* x_244; lean_object* x_245; uint8_t x_246; 
lean_dec(x_212);
lean_dec(x_5);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_244 = x_1;
} else {
 lean_dec_ref(x_1);
 x_244 = lean_box(0);
}
x_245 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_246 = lean_string_dec_eq(x_12, x_245);
if (x_246 == 0)
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_4);
x_247 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_247, 0, x_9);
lean_ctor_set(x_247, 1, x_218);
lean_ctor_set_uint64(x_247, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 0, x_247);
if (lean_is_scalar(x_244)) {
 x_248 = lean_alloc_ctor(0, 2, 0);
} else {
 x_248 = x_244;
}
lean_ctor_set(x_248, 0, x_7);
lean_ctor_set(x_248, 1, x_10);
x_249 = lean_apply_1(x_6, x_248);
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; uint8_t x_252; 
lean_dec(x_12);
x_250 = lean_array_get_size(x_10);
x_251 = lean_unsigned_to_nat(6u);
x_252 = lean_nat_dec_eq(x_250, x_251);
lean_dec(x_250);
if (x_252 == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_4);
x_253 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_253, 0, x_9);
lean_ctor_set(x_253, 1, x_218);
lean_ctor_set_uint64(x_253, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 1, x_245);
lean_ctor_set(x_7, 0, x_253);
if (lean_is_scalar(x_244)) {
 x_254 = lean_alloc_ctor(0, 2, 0);
} else {
 x_254 = x_244;
}
lean_ctor_set(x_254, 0, x_7);
lean_ctor_set(x_254, 1, x_10);
x_255 = lean_apply_1(x_6, x_254);
return x_255;
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec(x_244);
lean_free_object(x_7);
lean_dec(x_6);
x_256 = lean_unsigned_to_nat(0u);
x_257 = lean_array_fget(x_10, x_256);
x_258 = lean_unsigned_to_nat(1u);
x_259 = lean_array_fget(x_10, x_258);
x_260 = lean_unsigned_to_nat(2u);
x_261 = lean_array_fget(x_10, x_260);
x_262 = lean_unsigned_to_nat(3u);
x_263 = lean_array_fget(x_10, x_262);
x_264 = lean_unsigned_to_nat(4u);
x_265 = lean_array_fget(x_10, x_264);
x_266 = lean_unsigned_to_nat(5u);
x_267 = lean_array_fget(x_10, x_266);
lean_dec(x_10);
x_268 = lean_box_uint64(x_213);
x_269 = lean_box_uint64(x_13);
x_270 = lean_apply_8(x_4, x_257, x_259, x_261, x_263, x_265, x_267, x_268, x_269);
return x_270;
}
}
}
}
else
{
lean_object* x_271; lean_object* x_272; uint8_t x_273; 
lean_dec(x_212);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_271 = x_1;
} else {
 lean_dec_ref(x_1);
 x_271 = lean_box(0);
}
x_272 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_273 = lean_string_dec_eq(x_12, x_272);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; 
lean_dec(x_3);
x_274 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_274, 0, x_9);
lean_ctor_set(x_274, 1, x_216);
lean_ctor_set_uint64(x_274, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 0, x_274);
if (lean_is_scalar(x_271)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_271;
}
lean_ctor_set(x_275, 0, x_7);
lean_ctor_set(x_275, 1, x_10);
x_276 = lean_apply_1(x_6, x_275);
return x_276;
}
else
{
lean_object* x_277; lean_object* x_278; uint8_t x_279; 
lean_dec(x_12);
x_277 = lean_array_get_size(x_10);
x_278 = lean_unsigned_to_nat(6u);
x_279 = lean_nat_dec_eq(x_277, x_278);
lean_dec(x_277);
if (x_279 == 0)
{
lean_object* x_280; lean_object* x_281; lean_object* x_282; 
lean_dec(x_3);
x_280 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_280, 0, x_9);
lean_ctor_set(x_280, 1, x_216);
lean_ctor_set_uint64(x_280, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 1, x_272);
lean_ctor_set(x_7, 0, x_280);
if (lean_is_scalar(x_271)) {
 x_281 = lean_alloc_ctor(0, 2, 0);
} else {
 x_281 = x_271;
}
lean_ctor_set(x_281, 0, x_7);
lean_ctor_set(x_281, 1, x_10);
x_282 = lean_apply_1(x_6, x_281);
return x_282;
}
else
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; 
lean_dec(x_271);
lean_free_object(x_7);
lean_dec(x_6);
x_283 = lean_unsigned_to_nat(0u);
x_284 = lean_array_fget(x_10, x_283);
x_285 = lean_unsigned_to_nat(1u);
x_286 = lean_array_fget(x_10, x_285);
x_287 = lean_unsigned_to_nat(2u);
x_288 = lean_array_fget(x_10, x_287);
x_289 = lean_unsigned_to_nat(3u);
x_290 = lean_array_fget(x_10, x_289);
x_291 = lean_unsigned_to_nat(4u);
x_292 = lean_array_fget(x_10, x_291);
x_293 = lean_unsigned_to_nat(5u);
x_294 = lean_array_fget(x_10, x_293);
lean_dec(x_10);
x_295 = lean_box_uint64(x_213);
x_296 = lean_box_uint64(x_13);
x_297 = lean_apply_8(x_3, x_284, x_286, x_288, x_290, x_292, x_294, x_295, x_296);
return x_297;
}
}
}
}
else
{
lean_object* x_298; lean_object* x_299; uint8_t x_300; 
lean_dec(x_212);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_298 = x_1;
} else {
 lean_dec_ref(x_1);
 x_298 = lean_box(0);
}
x_299 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_300 = lean_string_dec_eq(x_12, x_299);
if (x_300 == 0)
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; 
lean_dec(x_2);
x_301 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_301, 0, x_9);
lean_ctor_set(x_301, 1, x_214);
lean_ctor_set_uint64(x_301, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 0, x_301);
if (lean_is_scalar(x_298)) {
 x_302 = lean_alloc_ctor(0, 2, 0);
} else {
 x_302 = x_298;
}
lean_ctor_set(x_302, 0, x_7);
lean_ctor_set(x_302, 1, x_10);
x_303 = lean_apply_1(x_6, x_302);
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; uint8_t x_306; 
lean_dec(x_12);
x_304 = lean_array_get_size(x_10);
x_305 = lean_unsigned_to_nat(6u);
x_306 = lean_nat_dec_eq(x_304, x_305);
lean_dec(x_304);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_2);
x_307 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_307, 0, x_9);
lean_ctor_set(x_307, 1, x_214);
lean_ctor_set_uint64(x_307, sizeof(void*)*2, x_213);
lean_ctor_set(x_7, 1, x_299);
lean_ctor_set(x_7, 0, x_307);
if (lean_is_scalar(x_298)) {
 x_308 = lean_alloc_ctor(0, 2, 0);
} else {
 x_308 = x_298;
}
lean_ctor_set(x_308, 0, x_7);
lean_ctor_set(x_308, 1, x_10);
x_309 = lean_apply_1(x_6, x_308);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
lean_dec(x_298);
lean_free_object(x_7);
lean_dec(x_6);
x_310 = lean_unsigned_to_nat(0u);
x_311 = lean_array_fget(x_10, x_310);
x_312 = lean_unsigned_to_nat(1u);
x_313 = lean_array_fget(x_10, x_312);
x_314 = lean_unsigned_to_nat(2u);
x_315 = lean_array_fget(x_10, x_314);
x_316 = lean_unsigned_to_nat(3u);
x_317 = lean_array_fget(x_10, x_316);
x_318 = lean_unsigned_to_nat(4u);
x_319 = lean_array_fget(x_10, x_318);
x_320 = lean_unsigned_to_nat(5u);
x_321 = lean_array_fget(x_10, x_320);
lean_dec(x_10);
x_322 = lean_box_uint64(x_213);
x_323 = lean_box_uint64(x_13);
x_324 = lean_apply_8(x_2, x_311, x_313, x_315, x_317, x_319, x_321, x_322, x_323);
return x_324;
}
}
}
}
}
else
{
lean_object* x_325; uint64_t x_326; lean_object* x_327; uint64_t x_328; lean_object* x_329; lean_object* x_330; uint8_t x_331; 
x_325 = lean_ctor_get(x_7, 1);
x_326 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_inc(x_325);
lean_dec(x_7);
x_327 = lean_ctor_get(x_8, 1);
lean_inc(x_327);
x_328 = lean_ctor_get_uint64(x_8, sizeof(void*)*2);
if (lean_is_exclusive(x_8)) {
 lean_ctor_release(x_8, 0);
 lean_ctor_release(x_8, 1);
 x_329 = x_8;
} else {
 lean_dec_ref(x_8);
 x_329 = lean_box(0);
}
x_330 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
x_331 = lean_string_dec_eq(x_327, x_330);
if (x_331 == 0)
{
lean_object* x_332; uint8_t x_333; 
lean_dec(x_2);
x_332 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
x_333 = lean_string_dec_eq(x_327, x_332);
if (x_333 == 0)
{
lean_object* x_334; uint8_t x_335; 
lean_dec(x_3);
x_334 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
x_335 = lean_string_dec_eq(x_327, x_334);
if (x_335 == 0)
{
lean_object* x_336; uint8_t x_337; 
lean_dec(x_4);
x_336 = l_Lean_Expr_numeral_x3f___closed__3;
x_337 = lean_string_dec_eq(x_327, x_336);
lean_dec(x_327);
if (x_337 == 0)
{
lean_object* x_338; 
lean_dec(x_329);
lean_dec(x_325);
lean_dec(x_10);
lean_dec(x_5);
x_338 = lean_apply_1(x_6, x_1);
return x_338;
}
else
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_339 = x_1;
} else {
 lean_dec_ref(x_1);
 x_339 = lean_box(0);
}
x_340 = l_Lean_Expr_numeral_x3f___closed__5;
x_341 = lean_string_dec_eq(x_325, x_340);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
lean_dec(x_5);
if (lean_is_scalar(x_329)) {
 x_342 = lean_alloc_ctor(1, 2, 8);
} else {
 x_342 = x_329;
}
lean_ctor_set(x_342, 0, x_9);
lean_ctor_set(x_342, 1, x_336);
lean_ctor_set_uint64(x_342, sizeof(void*)*2, x_328);
x_343 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_325);
lean_ctor_set_uint64(x_343, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_339)) {
 x_344 = lean_alloc_ctor(0, 2, 0);
} else {
 x_344 = x_339;
}
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_10);
x_345 = lean_apply_1(x_6, x_344);
return x_345;
}
else
{
lean_object* x_346; lean_object* x_347; uint8_t x_348; 
lean_dec(x_325);
x_346 = lean_array_get_size(x_10);
x_347 = lean_unsigned_to_nat(3u);
x_348 = lean_nat_dec_eq(x_346, x_347);
lean_dec(x_346);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; 
lean_dec(x_5);
if (lean_is_scalar(x_329)) {
 x_349 = lean_alloc_ctor(1, 2, 8);
} else {
 x_349 = x_329;
}
lean_ctor_set(x_349, 0, x_9);
lean_ctor_set(x_349, 1, x_336);
lean_ctor_set_uint64(x_349, sizeof(void*)*2, x_328);
x_350 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_350, 0, x_349);
lean_ctor_set(x_350, 1, x_340);
lean_ctor_set_uint64(x_350, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_339)) {
 x_351 = lean_alloc_ctor(0, 2, 0);
} else {
 x_351 = x_339;
}
lean_ctor_set(x_351, 0, x_350);
lean_ctor_set(x_351, 1, x_10);
x_352 = lean_apply_1(x_6, x_351);
return x_352;
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_339);
lean_dec(x_329);
lean_dec(x_6);
x_353 = lean_unsigned_to_nat(0u);
x_354 = lean_array_fget(x_10, x_353);
x_355 = lean_unsigned_to_nat(1u);
x_356 = lean_array_fget(x_10, x_355);
x_357 = lean_unsigned_to_nat(2u);
x_358 = lean_array_fget(x_10, x_357);
lean_dec(x_10);
x_359 = lean_box_uint64(x_328);
x_360 = lean_box_uint64(x_326);
x_361 = lean_apply_5(x_5, x_354, x_356, x_358, x_359, x_360);
return x_361;
}
}
}
}
else
{
lean_object* x_362; lean_object* x_363; uint8_t x_364; 
lean_dec(x_327);
lean_dec(x_5);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_362 = x_1;
} else {
 lean_dec_ref(x_1);
 x_362 = lean_box(0);
}
x_363 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_364 = lean_string_dec_eq(x_325, x_363);
if (x_364 == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
lean_dec(x_4);
if (lean_is_scalar(x_329)) {
 x_365 = lean_alloc_ctor(1, 2, 8);
} else {
 x_365 = x_329;
}
lean_ctor_set(x_365, 0, x_9);
lean_ctor_set(x_365, 1, x_334);
lean_ctor_set_uint64(x_365, sizeof(void*)*2, x_328);
x_366 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_366, 0, x_365);
lean_ctor_set(x_366, 1, x_325);
lean_ctor_set_uint64(x_366, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_362)) {
 x_367 = lean_alloc_ctor(0, 2, 0);
} else {
 x_367 = x_362;
}
lean_ctor_set(x_367, 0, x_366);
lean_ctor_set(x_367, 1, x_10);
x_368 = lean_apply_1(x_6, x_367);
return x_368;
}
else
{
lean_object* x_369; lean_object* x_370; uint8_t x_371; 
lean_dec(x_325);
x_369 = lean_array_get_size(x_10);
x_370 = lean_unsigned_to_nat(6u);
x_371 = lean_nat_dec_eq(x_369, x_370);
lean_dec(x_369);
if (x_371 == 0)
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_4);
if (lean_is_scalar(x_329)) {
 x_372 = lean_alloc_ctor(1, 2, 8);
} else {
 x_372 = x_329;
}
lean_ctor_set(x_372, 0, x_9);
lean_ctor_set(x_372, 1, x_334);
lean_ctor_set_uint64(x_372, sizeof(void*)*2, x_328);
x_373 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_373, 0, x_372);
lean_ctor_set(x_373, 1, x_363);
lean_ctor_set_uint64(x_373, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_362)) {
 x_374 = lean_alloc_ctor(0, 2, 0);
} else {
 x_374 = x_362;
}
lean_ctor_set(x_374, 0, x_373);
lean_ctor_set(x_374, 1, x_10);
x_375 = lean_apply_1(x_6, x_374);
return x_375;
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_362);
lean_dec(x_329);
lean_dec(x_6);
x_376 = lean_unsigned_to_nat(0u);
x_377 = lean_array_fget(x_10, x_376);
x_378 = lean_unsigned_to_nat(1u);
x_379 = lean_array_fget(x_10, x_378);
x_380 = lean_unsigned_to_nat(2u);
x_381 = lean_array_fget(x_10, x_380);
x_382 = lean_unsigned_to_nat(3u);
x_383 = lean_array_fget(x_10, x_382);
x_384 = lean_unsigned_to_nat(4u);
x_385 = lean_array_fget(x_10, x_384);
x_386 = lean_unsigned_to_nat(5u);
x_387 = lean_array_fget(x_10, x_386);
lean_dec(x_10);
x_388 = lean_box_uint64(x_328);
x_389 = lean_box_uint64(x_326);
x_390 = lean_apply_8(x_4, x_377, x_379, x_381, x_383, x_385, x_387, x_388, x_389);
return x_390;
}
}
}
}
else
{
lean_object* x_391; lean_object* x_392; uint8_t x_393; 
lean_dec(x_327);
lean_dec(x_5);
lean_dec(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_391 = x_1;
} else {
 lean_dec_ref(x_1);
 x_391 = lean_box(0);
}
x_392 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_393 = lean_string_dec_eq(x_325, x_392);
if (x_393 == 0)
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
lean_dec(x_3);
if (lean_is_scalar(x_329)) {
 x_394 = lean_alloc_ctor(1, 2, 8);
} else {
 x_394 = x_329;
}
lean_ctor_set(x_394, 0, x_9);
lean_ctor_set(x_394, 1, x_332);
lean_ctor_set_uint64(x_394, sizeof(void*)*2, x_328);
x_395 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_395, 0, x_394);
lean_ctor_set(x_395, 1, x_325);
lean_ctor_set_uint64(x_395, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_391)) {
 x_396 = lean_alloc_ctor(0, 2, 0);
} else {
 x_396 = x_391;
}
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_10);
x_397 = lean_apply_1(x_6, x_396);
return x_397;
}
else
{
lean_object* x_398; lean_object* x_399; uint8_t x_400; 
lean_dec(x_325);
x_398 = lean_array_get_size(x_10);
x_399 = lean_unsigned_to_nat(6u);
x_400 = lean_nat_dec_eq(x_398, x_399);
lean_dec(x_398);
if (x_400 == 0)
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_3);
if (lean_is_scalar(x_329)) {
 x_401 = lean_alloc_ctor(1, 2, 8);
} else {
 x_401 = x_329;
}
lean_ctor_set(x_401, 0, x_9);
lean_ctor_set(x_401, 1, x_332);
lean_ctor_set_uint64(x_401, sizeof(void*)*2, x_328);
x_402 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_402, 0, x_401);
lean_ctor_set(x_402, 1, x_392);
lean_ctor_set_uint64(x_402, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_391)) {
 x_403 = lean_alloc_ctor(0, 2, 0);
} else {
 x_403 = x_391;
}
lean_ctor_set(x_403, 0, x_402);
lean_ctor_set(x_403, 1, x_10);
x_404 = lean_apply_1(x_6, x_403);
return x_404;
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
lean_dec(x_391);
lean_dec(x_329);
lean_dec(x_6);
x_405 = lean_unsigned_to_nat(0u);
x_406 = lean_array_fget(x_10, x_405);
x_407 = lean_unsigned_to_nat(1u);
x_408 = lean_array_fget(x_10, x_407);
x_409 = lean_unsigned_to_nat(2u);
x_410 = lean_array_fget(x_10, x_409);
x_411 = lean_unsigned_to_nat(3u);
x_412 = lean_array_fget(x_10, x_411);
x_413 = lean_unsigned_to_nat(4u);
x_414 = lean_array_fget(x_10, x_413);
x_415 = lean_unsigned_to_nat(5u);
x_416 = lean_array_fget(x_10, x_415);
lean_dec(x_10);
x_417 = lean_box_uint64(x_328);
x_418 = lean_box_uint64(x_326);
x_419 = lean_apply_8(x_3, x_406, x_408, x_410, x_412, x_414, x_416, x_417, x_418);
return x_419;
}
}
}
}
else
{
lean_object* x_420; lean_object* x_421; uint8_t x_422; 
lean_dec(x_327);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_420 = x_1;
} else {
 lean_dec_ref(x_1);
 x_420 = lean_box(0);
}
x_421 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_422 = lean_string_dec_eq(x_325, x_421);
if (x_422 == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
lean_dec(x_2);
if (lean_is_scalar(x_329)) {
 x_423 = lean_alloc_ctor(1, 2, 8);
} else {
 x_423 = x_329;
}
lean_ctor_set(x_423, 0, x_9);
lean_ctor_set(x_423, 1, x_330);
lean_ctor_set_uint64(x_423, sizeof(void*)*2, x_328);
x_424 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_424, 0, x_423);
lean_ctor_set(x_424, 1, x_325);
lean_ctor_set_uint64(x_424, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_420)) {
 x_425 = lean_alloc_ctor(0, 2, 0);
} else {
 x_425 = x_420;
}
lean_ctor_set(x_425, 0, x_424);
lean_ctor_set(x_425, 1, x_10);
x_426 = lean_apply_1(x_6, x_425);
return x_426;
}
else
{
lean_object* x_427; lean_object* x_428; uint8_t x_429; 
lean_dec(x_325);
x_427 = lean_array_get_size(x_10);
x_428 = lean_unsigned_to_nat(6u);
x_429 = lean_nat_dec_eq(x_427, x_428);
lean_dec(x_427);
if (x_429 == 0)
{
lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
lean_dec(x_2);
if (lean_is_scalar(x_329)) {
 x_430 = lean_alloc_ctor(1, 2, 8);
} else {
 x_430 = x_329;
}
lean_ctor_set(x_430, 0, x_9);
lean_ctor_set(x_430, 1, x_330);
lean_ctor_set_uint64(x_430, sizeof(void*)*2, x_328);
x_431 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_431, 0, x_430);
lean_ctor_set(x_431, 1, x_421);
lean_ctor_set_uint64(x_431, sizeof(void*)*2, x_326);
if (lean_is_scalar(x_420)) {
 x_432 = lean_alloc_ctor(0, 2, 0);
} else {
 x_432 = x_420;
}
lean_ctor_set(x_432, 0, x_431);
lean_ctor_set(x_432, 1, x_10);
x_433 = lean_apply_1(x_6, x_432);
return x_433;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; 
lean_dec(x_420);
lean_dec(x_329);
lean_dec(x_6);
x_434 = lean_unsigned_to_nat(0u);
x_435 = lean_array_fget(x_10, x_434);
x_436 = lean_unsigned_to_nat(1u);
x_437 = lean_array_fget(x_10, x_436);
x_438 = lean_unsigned_to_nat(2u);
x_439 = lean_array_fget(x_10, x_438);
x_440 = lean_unsigned_to_nat(3u);
x_441 = lean_array_fget(x_10, x_440);
x_442 = lean_unsigned_to_nat(4u);
x_443 = lean_array_fget(x_10, x_442);
x_444 = lean_unsigned_to_nat(5u);
x_445 = lean_array_fget(x_10, x_444);
lean_dec(x_10);
x_446 = lean_box_uint64(x_328);
x_447 = lean_box_uint64(x_326);
x_448 = lean_apply_8(x_2, x_435, x_437, x_439, x_441, x_443, x_445, x_446, x_447);
return x_448;
}
}
}
}
}
else
{
lean_object* x_449; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_449 = lean_apply_1(x_6, x_1);
return x_449;
}
}
else
{
lean_object* x_450; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_450 = lean_apply_1(x_6, x_1);
return x_450;
}
}
else
{
lean_object* x_451; 
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_451 = lean_apply_1(x_6, x_1);
return x_451;
}
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_NormNum_eval_x27_match__2___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_4, 3);
x_8 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_7);
lean_ctor_set(x_11, 1, x_10);
lean_ctor_set_tag(x_8, 1);
lean_ctor_set(x_8, 0, x_11);
return x_8;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_12 = lean_ctor_get(x_8, 0);
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_8);
lean_inc(x_7);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_7);
lean_ctor_set(x_14, 1, x_12);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fail");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Semiring");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_evalBinOp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_11 = l_Lean_Meta_getLevel(x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
lean_inc(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_16);
x_18 = l_Lean_mkConst(x_17, x_16);
lean_inc(x_3);
x_19 = l_Lean_mkApp(x_18, x_3);
x_20 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Meta_synthInstance(x_19, x_20, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_16);
x_25 = l_Lean_mkConst(x_24, x_16);
lean_inc(x_3);
x_26 = l_Lean_mkApp(x_25, x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = l_Lean_Meta_synthInstance(x_26, x_20, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_30 = l_Lean_Meta_NormNum_eval_x27(x_4, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_35 = l_Lean_Meta_NormNum_eval_x27(x_5, x_6, x_7, x_8, x_9, x_32);
if (lean_obj_tag(x_35) == 0)
{
lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = !lean_is_exclusive(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_39 = lean_ctor_get(x_36, 0);
x_40 = lean_ctor_get(x_36, 1);
x_41 = lean_unsigned_to_nat(1u);
x_42 = l_Lean_Expr_getRevArg_x21(x_33, x_41);
lean_dec(x_33);
x_43 = l_Lean_Expr_getRevArg_x21(x_39, x_41);
lean_dec(x_39);
x_44 = l_Lean_Expr_natLit_x21(x_42);
x_45 = l_Lean_Expr_natLit_x21(x_43);
x_46 = lean_apply_2(x_2, x_44, x_45);
x_47 = l_Lean_mkRawNatLit(x_46);
lean_inc(x_47);
lean_inc(x_3);
x_48 = l_Lean_Meta_mkOfNatLit(x_14, x_3, x_22, x_47);
lean_inc(x_47);
x_49 = l_Lean_Meta_mkEqRefl(x_47, x_6, x_7, x_8, x_9, x_37);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_49, 0);
x_52 = l_Lean_mkConst(x_1, x_16);
x_53 = l_Lean_mkApp10(x_52, x_3, x_28, x_4, x_5, x_42, x_43, x_47, x_34, x_40, x_51);
lean_ctor_set(x_36, 1, x_53);
lean_ctor_set(x_36, 0, x_48);
lean_ctor_set(x_49, 0, x_36);
return x_49;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_49, 0);
x_55 = lean_ctor_get(x_49, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_49);
x_56 = l_Lean_mkConst(x_1, x_16);
x_57 = l_Lean_mkApp10(x_56, x_3, x_28, x_4, x_5, x_42, x_43, x_47, x_34, x_40, x_54);
lean_ctor_set(x_36, 1, x_57);
lean_ctor_set(x_36, 0, x_48);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_36);
lean_ctor_set(x_58, 1, x_55);
return x_58;
}
}
else
{
uint8_t x_59; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_43);
lean_dec(x_42);
lean_free_object(x_36);
lean_dec(x_40);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_49);
if (x_59 == 0)
{
return x_49;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_49, 0);
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_49);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
x_63 = lean_ctor_get(x_36, 0);
x_64 = lean_ctor_get(x_36, 1);
lean_inc(x_64);
lean_inc(x_63);
lean_dec(x_36);
x_65 = lean_unsigned_to_nat(1u);
x_66 = l_Lean_Expr_getRevArg_x21(x_33, x_65);
lean_dec(x_33);
x_67 = l_Lean_Expr_getRevArg_x21(x_63, x_65);
lean_dec(x_63);
x_68 = l_Lean_Expr_natLit_x21(x_66);
x_69 = l_Lean_Expr_natLit_x21(x_67);
x_70 = lean_apply_2(x_2, x_68, x_69);
x_71 = l_Lean_mkRawNatLit(x_70);
lean_inc(x_71);
lean_inc(x_3);
x_72 = l_Lean_Meta_mkOfNatLit(x_14, x_3, x_22, x_71);
lean_inc(x_71);
x_73 = l_Lean_Meta_mkEqRefl(x_71, x_6, x_7, x_8, x_9, x_37);
if (lean_obj_tag(x_73) == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_74 = lean_ctor_get(x_73, 0);
lean_inc(x_74);
x_75 = lean_ctor_get(x_73, 1);
lean_inc(x_75);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_76 = x_73;
} else {
 lean_dec_ref(x_73);
 x_76 = lean_box(0);
}
x_77 = l_Lean_mkConst(x_1, x_16);
x_78 = l_Lean_mkApp10(x_77, x_3, x_28, x_4, x_5, x_66, x_67, x_71, x_34, x_64, x_74);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_72);
lean_ctor_set(x_79, 1, x_78);
if (lean_is_scalar(x_76)) {
 x_80 = lean_alloc_ctor(0, 2, 0);
} else {
 x_80 = x_76;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_75);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_67);
lean_dec(x_66);
lean_dec(x_64);
lean_dec(x_34);
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_81 = lean_ctor_get(x_73, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_73, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_73)) {
 lean_ctor_release(x_73, 0);
 lean_ctor_release(x_73, 1);
 x_83 = x_73;
} else {
 lean_dec_ref(x_73);
 x_83 = lean_box(0);
}
if (lean_is_scalar(x_83)) {
 x_84 = lean_alloc_ctor(1, 2, 0);
} else {
 x_84 = x_83;
}
lean_ctor_set(x_84, 0, x_81);
lean_ctor_set(x_84, 1, x_82);
return x_84;
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_34);
lean_dec(x_33);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_35);
if (x_85 == 0)
{
return x_35;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_35, 0);
x_87 = lean_ctor_get(x_35, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_35);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_30);
if (x_89 == 0)
{
return x_30;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_30, 0);
x_91 = lean_ctor_get(x_30, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_30);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_27);
if (x_93 == 0)
{
return x_27;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_27, 0);
x_95 = lean_ctor_get(x_27, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_27);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
else
{
uint8_t x_97; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_97 = !lean_is_exclusive(x_21);
if (x_97 == 0)
{
return x_21;
}
else
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_98 = lean_ctor_get(x_21, 0);
x_99 = lean_ctor_get(x_21, 1);
lean_inc(x_99);
lean_inc(x_98);
lean_dec(x_21);
x_100 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_100, 0, x_98);
lean_ctor_set(x_100, 1, x_99);
return x_100;
}
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_101 = lean_ctor_get(x_11, 1);
lean_inc(x_101);
lean_dec(x_11);
x_102 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_103 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_102, x_6, x_7, x_8, x_9, x_101);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_103;
}
}
else
{
uint8_t x_104; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_104 = !lean_is_exclusive(x_11);
if (x_104 == 0)
{
return x_11;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_105 = lean_ctor_get(x_11, 0);
x_106 = lean_ctor_get(x_11, 1);
lean_inc(x_106);
lean_inc(x_105);
lean_dec(x_11);
x_107 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_107, 0, x_105);
lean_ctor_set(x_107, 1, x_106);
return x_107;
}
}
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Expr_numeral_x3f___closed__2;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("instNumericNat");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Expr_numeral_x3f___closed__2;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__3;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Meta");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__6;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("NormNum");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__8;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_nat");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__10;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__12;
x_3 = l_Lean_mkConst(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Lean_mkRawNatLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_one");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkRawNatLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_zero");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__18;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_pow");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__10;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__20;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_pow___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__23() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_mul");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__10;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__23;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__26() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat_add");
return x_1;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__27() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__10;
x_2 = l_Lean_Meta_NormNum_eval_x27___closed__26;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval_x27___closed__28() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_add___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; 
lean_inc(x_1);
x_7 = l_Lean_Expr_getAppFnArgs(x_1);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 1)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
if (lean_obj_tag(x_9) == 1)
{
lean_object* x_10; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_7);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_7, 1);
x_13 = lean_ctor_get(x_7, 0);
lean_dec(x_13);
x_14 = lean_ctor_get(x_8, 1);
lean_inc(x_14);
lean_dec(x_8);
x_15 = lean_ctor_get(x_9, 1);
lean_inc(x_15);
lean_dec(x_9);
x_16 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
x_19 = lean_string_dec_eq(x_15, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
x_21 = lean_string_dec_eq(x_15, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
x_22 = l_Lean_Expr_numeral_x3f___closed__3;
x_23 = lean_string_dec_eq(x_15, x_22);
lean_dec(x_15);
if (x_23 == 0)
{
uint8_t x_24; 
lean_dec(x_14);
lean_dec(x_12);
x_24 = l_Lean_Expr_isNatLit(x_1);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_free_object(x_7);
lean_dec(x_1);
x_25 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_26 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_25, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_27 = l_Lean_levelZero;
x_28 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_29 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_30 = l_Lean_Meta_mkOfNatLit(x_27, x_28, x_29, x_1);
x_31 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_32 = l_Lean_mkApp(x_31, x_1);
lean_ctor_set(x_7, 1, x_32);
lean_ctor_set(x_7, 0, x_30);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_7);
lean_ctor_set(x_33, 1, x_6);
return x_33;
}
}
else
{
lean_object* x_34; uint8_t x_35; 
x_34 = l_Lean_Expr_numeral_x3f___closed__5;
x_35 = lean_string_dec_eq(x_14, x_34);
lean_dec(x_14);
if (x_35 == 0)
{
uint8_t x_36; 
lean_dec(x_12);
x_36 = l_Lean_Expr_isNatLit(x_1);
if (x_36 == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_free_object(x_7);
lean_dec(x_1);
x_37 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_38 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_37, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_39 = l_Lean_levelZero;
x_40 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_41 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_42 = l_Lean_Meta_mkOfNatLit(x_39, x_40, x_41, x_1);
x_43 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_44 = l_Lean_mkApp(x_43, x_1);
lean_ctor_set(x_7, 1, x_44);
lean_ctor_set(x_7, 0, x_42);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_7);
lean_ctor_set(x_45, 1, x_6);
return x_45;
}
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
x_46 = lean_array_get_size(x_12);
x_47 = lean_unsigned_to_nat(3u);
x_48 = lean_nat_dec_eq(x_46, x_47);
lean_dec(x_46);
if (x_48 == 0)
{
uint8_t x_49; 
lean_dec(x_12);
x_49 = l_Lean_Expr_isNatLit(x_1);
if (x_49 == 0)
{
lean_object* x_50; lean_object* x_51; 
lean_free_object(x_7);
lean_dec(x_1);
x_50 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_51 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_50, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_52 = l_Lean_levelZero;
x_53 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_54 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_55 = l_Lean_Meta_mkOfNatLit(x_52, x_53, x_54, x_1);
x_56 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_57 = l_Lean_mkApp(x_56, x_1);
lean_ctor_set(x_7, 1, x_57);
lean_ctor_set(x_7, 0, x_55);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_7);
lean_ctor_set(x_58, 1, x_6);
return x_58;
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_array_fget(x_12, x_59);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_array_fget(x_12, x_61);
lean_dec(x_12);
x_63 = l_Lean_Expr_natLit_x3f(x_62);
lean_dec(x_62);
if (lean_obj_tag(x_63) == 0)
{
lean_object* x_64; lean_object* x_65; 
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_1);
x_64 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_65 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_64, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_65;
}
else
{
lean_object* x_66; uint8_t x_67; 
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
lean_dec(x_63);
x_67 = lean_nat_dec_eq(x_66, x_59);
if (x_67 == 0)
{
uint8_t x_68; 
x_68 = lean_nat_dec_eq(x_66, x_61);
lean_dec(x_66);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_60);
lean_inc(x_1);
x_69 = l_Lean_Meta_mkEqRefl(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_69) == 0)
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_69);
if (x_70 == 0)
{
lean_object* x_71; 
x_71 = lean_ctor_get(x_69, 0);
lean_ctor_set(x_7, 1, x_71);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_69, 0, x_7);
return x_69;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_69, 0);
x_73 = lean_ctor_get(x_69, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_69);
lean_ctor_set(x_7, 1, x_72);
lean_ctor_set(x_7, 0, x_1);
x_74 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_74, 0, x_7);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
else
{
uint8_t x_75; 
lean_free_object(x_7);
lean_dec(x_1);
x_75 = !lean_is_exclusive(x_69);
if (x_75 == 0)
{
return x_69;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_69, 0);
x_77 = lean_ctor_get(x_69, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_69);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
lean_object* x_79; 
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_60);
x_79 = l_Lean_Meta_getLevel(x_60, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_79) == 0)
{
lean_object* x_80; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
if (lean_obj_tag(x_80) == 1)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_81 = lean_ctor_get(x_79, 1);
lean_inc(x_81);
lean_dec(x_79);
x_82 = lean_ctor_get(x_80, 0);
lean_inc(x_82);
lean_dec(x_80);
x_83 = lean_box(0);
lean_inc(x_82);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
x_85 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_84);
x_86 = l_Lean_mkConst(x_85, x_84);
lean_inc(x_60);
x_87 = l_Lean_mkApp(x_86, x_60);
x_88 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_89 = l_Lean_Meta_synthInstance(x_87, x_88, x_2, x_3, x_4, x_5, x_81);
if (lean_obj_tag(x_89) == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_90 = lean_ctor_get(x_89, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_89, 1);
lean_inc(x_91);
lean_dec(x_89);
x_92 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_84);
x_93 = l_Lean_mkConst(x_92, x_84);
lean_inc(x_60);
x_94 = l_Lean_mkApp(x_93, x_60);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_95 = l_Lean_Meta_synthInstance(x_94, x_88, x_2, x_3, x_4, x_5, x_91);
if (lean_obj_tag(x_95) == 0)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; 
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_95, 1);
lean_inc(x_97);
lean_dec(x_95);
x_98 = l_Lean_Meta_NormNum_eval_x27___closed__14;
lean_inc(x_60);
x_99 = l_Lean_Meta_mkOfNatLit(x_82, x_60, x_90, x_98);
x_100 = l_Lean_Meta_NormNum_eval_x27___closed__16;
x_101 = l_Lean_mkConst(x_100, x_84);
x_102 = l_Lean_mkAppB(x_101, x_60, x_96);
x_103 = l_Lean_Meta_mkEqSymm(x_102, x_2, x_3, x_4, x_5, x_97);
if (lean_obj_tag(x_103) == 0)
{
uint8_t x_104; 
x_104 = !lean_is_exclusive(x_103);
if (x_104 == 0)
{
lean_object* x_105; 
x_105 = lean_ctor_get(x_103, 0);
lean_ctor_set(x_7, 1, x_105);
lean_ctor_set(x_7, 0, x_99);
lean_ctor_set(x_103, 0, x_7);
return x_103;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_106 = lean_ctor_get(x_103, 0);
x_107 = lean_ctor_get(x_103, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_103);
lean_ctor_set(x_7, 1, x_106);
lean_ctor_set(x_7, 0, x_99);
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_7);
lean_ctor_set(x_108, 1, x_107);
return x_108;
}
}
else
{
uint8_t x_109; 
lean_dec(x_99);
lean_free_object(x_7);
x_109 = !lean_is_exclusive(x_103);
if (x_109 == 0)
{
return x_103;
}
else
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_103, 0);
x_111 = lean_ctor_get(x_103, 1);
lean_inc(x_111);
lean_inc(x_110);
lean_dec(x_103);
x_112 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_112, 0, x_110);
lean_ctor_set(x_112, 1, x_111);
return x_112;
}
}
}
else
{
uint8_t x_113; 
lean_dec(x_90);
lean_dec(x_84);
lean_dec(x_82);
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_113 = !lean_is_exclusive(x_95);
if (x_113 == 0)
{
return x_95;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_114 = lean_ctor_get(x_95, 0);
x_115 = lean_ctor_get(x_95, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_95);
x_116 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_116, 0, x_114);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
uint8_t x_117; 
lean_dec(x_84);
lean_dec(x_82);
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_117 = !lean_is_exclusive(x_89);
if (x_117 == 0)
{
return x_89;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_89, 0);
x_119 = lean_ctor_get(x_89, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_89);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_80);
lean_dec(x_60);
lean_free_object(x_7);
x_121 = lean_ctor_get(x_79, 1);
lean_inc(x_121);
lean_dec(x_79);
x_122 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_123 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_122, x_2, x_3, x_4, x_5, x_121);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_123;
}
}
else
{
uint8_t x_124; 
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_124 = !lean_is_exclusive(x_79);
if (x_124 == 0)
{
return x_79;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_125 = lean_ctor_get(x_79, 0);
x_126 = lean_ctor_get(x_79, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_79);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_125);
lean_ctor_set(x_127, 1, x_126);
return x_127;
}
}
}
}
else
{
lean_object* x_128; 
lean_dec(x_66);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_60);
x_128 = l_Lean_Meta_getLevel(x_60, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; 
x_129 = lean_ctor_get(x_128, 0);
lean_inc(x_129);
if (lean_obj_tag(x_129) == 1)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
x_130 = lean_ctor_get(x_128, 1);
lean_inc(x_130);
lean_dec(x_128);
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_box(0);
lean_inc(x_131);
x_133 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_133, 0, x_131);
lean_ctor_set(x_133, 1, x_132);
x_134 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_133);
x_135 = l_Lean_mkConst(x_134, x_133);
lean_inc(x_60);
x_136 = l_Lean_mkApp(x_135, x_60);
x_137 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_138 = l_Lean_Meta_synthInstance(x_136, x_137, x_2, x_3, x_4, x_5, x_130);
if (lean_obj_tag(x_138) == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
x_139 = lean_ctor_get(x_138, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_138, 1);
lean_inc(x_140);
lean_dec(x_138);
x_141 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_133);
x_142 = l_Lean_mkConst(x_141, x_133);
lean_inc(x_60);
x_143 = l_Lean_mkApp(x_142, x_60);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_144 = l_Lean_Meta_synthInstance(x_143, x_137, x_2, x_3, x_4, x_5, x_140);
if (lean_obj_tag(x_144) == 0)
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_145 = lean_ctor_get(x_144, 0);
lean_inc(x_145);
x_146 = lean_ctor_get(x_144, 1);
lean_inc(x_146);
lean_dec(x_144);
x_147 = l_Lean_Meta_NormNum_eval_x27___closed__17;
lean_inc(x_60);
x_148 = l_Lean_Meta_mkOfNatLit(x_131, x_60, x_139, x_147);
x_149 = l_Lean_Meta_NormNum_eval_x27___closed__19;
x_150 = l_Lean_mkConst(x_149, x_133);
x_151 = l_Lean_mkAppB(x_150, x_60, x_145);
x_152 = l_Lean_Meta_mkEqSymm(x_151, x_2, x_3, x_4, x_5, x_146);
if (lean_obj_tag(x_152) == 0)
{
uint8_t x_153; 
x_153 = !lean_is_exclusive(x_152);
if (x_153 == 0)
{
lean_object* x_154; 
x_154 = lean_ctor_get(x_152, 0);
lean_ctor_set(x_7, 1, x_154);
lean_ctor_set(x_7, 0, x_148);
lean_ctor_set(x_152, 0, x_7);
return x_152;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; 
x_155 = lean_ctor_get(x_152, 0);
x_156 = lean_ctor_get(x_152, 1);
lean_inc(x_156);
lean_inc(x_155);
lean_dec(x_152);
lean_ctor_set(x_7, 1, x_155);
lean_ctor_set(x_7, 0, x_148);
x_157 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_157, 0, x_7);
lean_ctor_set(x_157, 1, x_156);
return x_157;
}
}
else
{
uint8_t x_158; 
lean_dec(x_148);
lean_free_object(x_7);
x_158 = !lean_is_exclusive(x_152);
if (x_158 == 0)
{
return x_152;
}
else
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; 
x_159 = lean_ctor_get(x_152, 0);
x_160 = lean_ctor_get(x_152, 1);
lean_inc(x_160);
lean_inc(x_159);
lean_dec(x_152);
x_161 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_161, 0, x_159);
lean_ctor_set(x_161, 1, x_160);
return x_161;
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_139);
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_144);
if (x_162 == 0)
{
return x_144;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_144, 0);
x_164 = lean_ctor_get(x_144, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_144);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
else
{
uint8_t x_166; 
lean_dec(x_133);
lean_dec(x_131);
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_166 = !lean_is_exclusive(x_138);
if (x_166 == 0)
{
return x_138;
}
else
{
lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_167 = lean_ctor_get(x_138, 0);
x_168 = lean_ctor_get(x_138, 1);
lean_inc(x_168);
lean_inc(x_167);
lean_dec(x_138);
x_169 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_169, 0, x_167);
lean_ctor_set(x_169, 1, x_168);
return x_169;
}
}
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_129);
lean_dec(x_60);
lean_free_object(x_7);
x_170 = lean_ctor_get(x_128, 1);
lean_inc(x_170);
lean_dec(x_128);
x_171 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_172 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_171, x_2, x_3, x_4, x_5, x_170);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_172;
}
}
else
{
uint8_t x_173; 
lean_dec(x_60);
lean_free_object(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_173 = !lean_is_exclusive(x_128);
if (x_173 == 0)
{
return x_128;
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_174 = lean_ctor_get(x_128, 0);
x_175 = lean_ctor_get(x_128, 1);
lean_inc(x_175);
lean_inc(x_174);
lean_dec(x_128);
x_176 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_176, 0, x_174);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
}
}
}
}
}
}
}
else
{
lean_object* x_177; uint8_t x_178; 
lean_dec(x_15);
x_177 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_178 = lean_string_dec_eq(x_14, x_177);
lean_dec(x_14);
if (x_178 == 0)
{
uint8_t x_179; 
lean_dec(x_12);
x_179 = l_Lean_Expr_isNatLit(x_1);
if (x_179 == 0)
{
lean_object* x_180; lean_object* x_181; 
lean_free_object(x_7);
lean_dec(x_1);
x_180 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_181 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_180, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_181;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_182 = l_Lean_levelZero;
x_183 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_184 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_185 = l_Lean_Meta_mkOfNatLit(x_182, x_183, x_184, x_1);
x_186 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_187 = l_Lean_mkApp(x_186, x_1);
lean_ctor_set(x_7, 1, x_187);
lean_ctor_set(x_7, 0, x_185);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_7);
lean_ctor_set(x_188, 1, x_6);
return x_188;
}
}
else
{
lean_object* x_189; lean_object* x_190; uint8_t x_191; 
x_189 = lean_array_get_size(x_12);
x_190 = lean_unsigned_to_nat(6u);
x_191 = lean_nat_dec_eq(x_189, x_190);
lean_dec(x_189);
if (x_191 == 0)
{
uint8_t x_192; 
lean_dec(x_12);
x_192 = l_Lean_Expr_isNatLit(x_1);
if (x_192 == 0)
{
lean_object* x_193; lean_object* x_194; 
lean_free_object(x_7);
lean_dec(x_1);
x_193 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_194 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_193, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_194;
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_195 = l_Lean_levelZero;
x_196 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_197 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_198 = l_Lean_Meta_mkOfNatLit(x_195, x_196, x_197, x_1);
x_199 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_200 = l_Lean_mkApp(x_199, x_1);
lean_ctor_set(x_7, 1, x_200);
lean_ctor_set(x_7, 0, x_198);
x_201 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_201, 0, x_7);
lean_ctor_set(x_201, 1, x_6);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
lean_free_object(x_7);
lean_dec(x_1);
x_202 = lean_unsigned_to_nat(2u);
x_203 = lean_array_fget(x_12, x_202);
x_204 = lean_unsigned_to_nat(4u);
x_205 = lean_array_fget(x_12, x_204);
x_206 = lean_unsigned_to_nat(5u);
x_207 = lean_array_fget(x_12, x_206);
lean_dec(x_12);
x_208 = l_Lean_Meta_NormNum_eval_x27___closed__21;
x_209 = l_Lean_Meta_NormNum_eval_x27___closed__22;
x_210 = l_Lean_Meta_NormNum_eval_x27_evalPow(x_208, x_209, x_203, x_205, x_207, x_2, x_3, x_4, x_5, x_6);
return x_210;
}
}
}
}
else
{
lean_object* x_211; uint8_t x_212; 
lean_dec(x_15);
x_211 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_212 = lean_string_dec_eq(x_14, x_211);
lean_dec(x_14);
if (x_212 == 0)
{
uint8_t x_213; 
lean_dec(x_12);
x_213 = l_Lean_Expr_isNatLit(x_1);
if (x_213 == 0)
{
lean_object* x_214; lean_object* x_215; 
lean_free_object(x_7);
lean_dec(x_1);
x_214 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_215 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_214, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_215;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_216 = l_Lean_levelZero;
x_217 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_218 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_219 = l_Lean_Meta_mkOfNatLit(x_216, x_217, x_218, x_1);
x_220 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_221 = l_Lean_mkApp(x_220, x_1);
lean_ctor_set(x_7, 1, x_221);
lean_ctor_set(x_7, 0, x_219);
x_222 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_222, 0, x_7);
lean_ctor_set(x_222, 1, x_6);
return x_222;
}
}
else
{
lean_object* x_223; lean_object* x_224; uint8_t x_225; 
x_223 = lean_array_get_size(x_12);
x_224 = lean_unsigned_to_nat(6u);
x_225 = lean_nat_dec_eq(x_223, x_224);
lean_dec(x_223);
if (x_225 == 0)
{
uint8_t x_226; 
lean_dec(x_12);
x_226 = l_Lean_Expr_isNatLit(x_1);
if (x_226 == 0)
{
lean_object* x_227; lean_object* x_228; 
lean_free_object(x_7);
lean_dec(x_1);
x_227 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_228 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_227, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_228;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_229 = l_Lean_levelZero;
x_230 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_231 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_232 = l_Lean_Meta_mkOfNatLit(x_229, x_230, x_231, x_1);
x_233 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_234 = l_Lean_mkApp(x_233, x_1);
lean_ctor_set(x_7, 1, x_234);
lean_ctor_set(x_7, 0, x_232);
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_7);
lean_ctor_set(x_235, 1, x_6);
return x_235;
}
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_free_object(x_7);
lean_dec(x_1);
x_236 = lean_unsigned_to_nat(2u);
x_237 = lean_array_fget(x_12, x_236);
x_238 = lean_unsigned_to_nat(4u);
x_239 = lean_array_fget(x_12, x_238);
x_240 = lean_unsigned_to_nat(5u);
x_241 = lean_array_fget(x_12, x_240);
lean_dec(x_12);
x_242 = l_Lean_Meta_NormNum_eval_x27___closed__24;
x_243 = l_Lean_Meta_NormNum_eval_x27___closed__25;
x_244 = l_Lean_Meta_NormNum_eval_x27_evalBinOp(x_242, x_243, x_237, x_239, x_241, x_2, x_3, x_4, x_5, x_6);
return x_244;
}
}
}
}
else
{
lean_object* x_245; uint8_t x_246; 
lean_dec(x_15);
x_245 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_246 = lean_string_dec_eq(x_14, x_245);
lean_dec(x_14);
if (x_246 == 0)
{
uint8_t x_247; 
lean_dec(x_12);
x_247 = l_Lean_Expr_isNatLit(x_1);
if (x_247 == 0)
{
lean_object* x_248; lean_object* x_249; 
lean_free_object(x_7);
lean_dec(x_1);
x_248 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_249 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_248, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_250 = l_Lean_levelZero;
x_251 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_252 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_253 = l_Lean_Meta_mkOfNatLit(x_250, x_251, x_252, x_1);
x_254 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_255 = l_Lean_mkApp(x_254, x_1);
lean_ctor_set(x_7, 1, x_255);
lean_ctor_set(x_7, 0, x_253);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_7);
lean_ctor_set(x_256, 1, x_6);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_257 = lean_array_get_size(x_12);
x_258 = lean_unsigned_to_nat(6u);
x_259 = lean_nat_dec_eq(x_257, x_258);
lean_dec(x_257);
if (x_259 == 0)
{
uint8_t x_260; 
lean_dec(x_12);
x_260 = l_Lean_Expr_isNatLit(x_1);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; 
lean_free_object(x_7);
lean_dec(x_1);
x_261 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_262 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_261, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_262;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_263 = l_Lean_levelZero;
x_264 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_265 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_266 = l_Lean_Meta_mkOfNatLit(x_263, x_264, x_265, x_1);
x_267 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_268 = l_Lean_mkApp(x_267, x_1);
lean_ctor_set(x_7, 1, x_268);
lean_ctor_set(x_7, 0, x_266);
x_269 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_269, 0, x_7);
lean_ctor_set(x_269, 1, x_6);
return x_269;
}
}
else
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_free_object(x_7);
lean_dec(x_1);
x_270 = lean_unsigned_to_nat(2u);
x_271 = lean_array_fget(x_12, x_270);
x_272 = lean_unsigned_to_nat(4u);
x_273 = lean_array_fget(x_12, x_272);
x_274 = lean_unsigned_to_nat(5u);
x_275 = lean_array_fget(x_12, x_274);
lean_dec(x_12);
x_276 = l_Lean_Meta_NormNum_eval_x27___closed__27;
x_277 = l_Lean_Meta_NormNum_eval_x27___closed__28;
x_278 = l_Lean_Meta_NormNum_eval_x27_evalBinOp(x_276, x_277, x_271, x_273, x_275, x_2, x_3, x_4, x_5, x_6);
return x_278;
}
}
}
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; uint8_t x_283; 
x_279 = lean_ctor_get(x_7, 1);
lean_inc(x_279);
lean_dec(x_7);
x_280 = lean_ctor_get(x_8, 1);
lean_inc(x_280);
lean_dec(x_8);
x_281 = lean_ctor_get(x_9, 1);
lean_inc(x_281);
lean_dec(x_9);
x_282 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1;
x_283 = lean_string_dec_eq(x_281, x_282);
if (x_283 == 0)
{
lean_object* x_284; uint8_t x_285; 
x_284 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2;
x_285 = lean_string_dec_eq(x_281, x_284);
if (x_285 == 0)
{
lean_object* x_286; uint8_t x_287; 
x_286 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3;
x_287 = lean_string_dec_eq(x_281, x_286);
if (x_287 == 0)
{
lean_object* x_288; uint8_t x_289; 
x_288 = l_Lean_Expr_numeral_x3f___closed__3;
x_289 = lean_string_dec_eq(x_281, x_288);
lean_dec(x_281);
if (x_289 == 0)
{
uint8_t x_290; 
lean_dec(x_280);
lean_dec(x_279);
x_290 = l_Lean_Expr_isNatLit(x_1);
if (x_290 == 0)
{
lean_object* x_291; lean_object* x_292; 
lean_dec(x_1);
x_291 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_292 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_291, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_292;
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_293 = l_Lean_levelZero;
x_294 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_295 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_296 = l_Lean_Meta_mkOfNatLit(x_293, x_294, x_295, x_1);
x_297 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_298 = l_Lean_mkApp(x_297, x_1);
x_299 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_299, 0, x_296);
lean_ctor_set(x_299, 1, x_298);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_299);
lean_ctor_set(x_300, 1, x_6);
return x_300;
}
}
else
{
lean_object* x_301; uint8_t x_302; 
x_301 = l_Lean_Expr_numeral_x3f___closed__5;
x_302 = lean_string_dec_eq(x_280, x_301);
lean_dec(x_280);
if (x_302 == 0)
{
uint8_t x_303; 
lean_dec(x_279);
x_303 = l_Lean_Expr_isNatLit(x_1);
if (x_303 == 0)
{
lean_object* x_304; lean_object* x_305; 
lean_dec(x_1);
x_304 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_305 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_304, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_305;
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_306 = l_Lean_levelZero;
x_307 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_308 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_309 = l_Lean_Meta_mkOfNatLit(x_306, x_307, x_308, x_1);
x_310 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_311 = l_Lean_mkApp(x_310, x_1);
x_312 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_312, 0, x_309);
lean_ctor_set(x_312, 1, x_311);
x_313 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_313, 0, x_312);
lean_ctor_set(x_313, 1, x_6);
return x_313;
}
}
else
{
lean_object* x_314; lean_object* x_315; uint8_t x_316; 
x_314 = lean_array_get_size(x_279);
x_315 = lean_unsigned_to_nat(3u);
x_316 = lean_nat_dec_eq(x_314, x_315);
lean_dec(x_314);
if (x_316 == 0)
{
uint8_t x_317; 
lean_dec(x_279);
x_317 = l_Lean_Expr_isNatLit(x_1);
if (x_317 == 0)
{
lean_object* x_318; lean_object* x_319; 
lean_dec(x_1);
x_318 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_319 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_318, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_319;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_320 = l_Lean_levelZero;
x_321 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_322 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_323 = l_Lean_Meta_mkOfNatLit(x_320, x_321, x_322, x_1);
x_324 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_325 = l_Lean_mkApp(x_324, x_1);
x_326 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_326, 0, x_323);
lean_ctor_set(x_326, 1, x_325);
x_327 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_327, 0, x_326);
lean_ctor_set(x_327, 1, x_6);
return x_327;
}
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_328 = lean_unsigned_to_nat(0u);
x_329 = lean_array_fget(x_279, x_328);
x_330 = lean_unsigned_to_nat(1u);
x_331 = lean_array_fget(x_279, x_330);
lean_dec(x_279);
x_332 = l_Lean_Expr_natLit_x3f(x_331);
lean_dec(x_331);
if (lean_obj_tag(x_332) == 0)
{
lean_object* x_333; lean_object* x_334; 
lean_dec(x_329);
lean_dec(x_1);
x_333 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_334 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_333, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_334;
}
else
{
lean_object* x_335; uint8_t x_336; 
x_335 = lean_ctor_get(x_332, 0);
lean_inc(x_335);
lean_dec(x_332);
x_336 = lean_nat_dec_eq(x_335, x_328);
if (x_336 == 0)
{
uint8_t x_337; 
x_337 = lean_nat_dec_eq(x_335, x_330);
lean_dec(x_335);
if (x_337 == 0)
{
lean_object* x_338; 
lean_dec(x_329);
lean_inc(x_1);
x_338 = l_Lean_Meta_mkEqRefl(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_338) == 0)
{
lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_339 = lean_ctor_get(x_338, 0);
lean_inc(x_339);
x_340 = lean_ctor_get(x_338, 1);
lean_inc(x_340);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_341 = x_338;
} else {
 lean_dec_ref(x_338);
 x_341 = lean_box(0);
}
x_342 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_342, 0, x_1);
lean_ctor_set(x_342, 1, x_339);
if (lean_is_scalar(x_341)) {
 x_343 = lean_alloc_ctor(0, 2, 0);
} else {
 x_343 = x_341;
}
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_340);
return x_343;
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
lean_dec(x_1);
x_344 = lean_ctor_get(x_338, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_338, 1);
lean_inc(x_345);
if (lean_is_exclusive(x_338)) {
 lean_ctor_release(x_338, 0);
 lean_ctor_release(x_338, 1);
 x_346 = x_338;
} else {
 lean_dec_ref(x_338);
 x_346 = lean_box(0);
}
if (lean_is_scalar(x_346)) {
 x_347 = lean_alloc_ctor(1, 2, 0);
} else {
 x_347 = x_346;
}
lean_ctor_set(x_347, 0, x_344);
lean_ctor_set(x_347, 1, x_345);
return x_347;
}
}
else
{
lean_object* x_348; 
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_329);
x_348 = l_Lean_Meta_getLevel(x_329, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_348) == 0)
{
lean_object* x_349; 
x_349 = lean_ctor_get(x_348, 0);
lean_inc(x_349);
if (lean_obj_tag(x_349) == 1)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_350 = lean_ctor_get(x_348, 1);
lean_inc(x_350);
lean_dec(x_348);
x_351 = lean_ctor_get(x_349, 0);
lean_inc(x_351);
lean_dec(x_349);
x_352 = lean_box(0);
lean_inc(x_351);
x_353 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_353, 0, x_351);
lean_ctor_set(x_353, 1, x_352);
x_354 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_353);
x_355 = l_Lean_mkConst(x_354, x_353);
lean_inc(x_329);
x_356 = l_Lean_mkApp(x_355, x_329);
x_357 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_358 = l_Lean_Meta_synthInstance(x_356, x_357, x_2, x_3, x_4, x_5, x_350);
if (lean_obj_tag(x_358) == 0)
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; 
x_359 = lean_ctor_get(x_358, 0);
lean_inc(x_359);
x_360 = lean_ctor_get(x_358, 1);
lean_inc(x_360);
lean_dec(x_358);
x_361 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_353);
x_362 = l_Lean_mkConst(x_361, x_353);
lean_inc(x_329);
x_363 = l_Lean_mkApp(x_362, x_329);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_364 = l_Lean_Meta_synthInstance(x_363, x_357, x_2, x_3, x_4, x_5, x_360);
if (lean_obj_tag(x_364) == 0)
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
x_365 = lean_ctor_get(x_364, 0);
lean_inc(x_365);
x_366 = lean_ctor_get(x_364, 1);
lean_inc(x_366);
lean_dec(x_364);
x_367 = l_Lean_Meta_NormNum_eval_x27___closed__14;
lean_inc(x_329);
x_368 = l_Lean_Meta_mkOfNatLit(x_351, x_329, x_359, x_367);
x_369 = l_Lean_Meta_NormNum_eval_x27___closed__16;
x_370 = l_Lean_mkConst(x_369, x_353);
x_371 = l_Lean_mkAppB(x_370, x_329, x_365);
x_372 = l_Lean_Meta_mkEqSymm(x_371, x_2, x_3, x_4, x_5, x_366);
if (lean_obj_tag(x_372) == 0)
{
lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; 
x_373 = lean_ctor_get(x_372, 0);
lean_inc(x_373);
x_374 = lean_ctor_get(x_372, 1);
lean_inc(x_374);
if (lean_is_exclusive(x_372)) {
 lean_ctor_release(x_372, 0);
 lean_ctor_release(x_372, 1);
 x_375 = x_372;
} else {
 lean_dec_ref(x_372);
 x_375 = lean_box(0);
}
x_376 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_376, 0, x_368);
lean_ctor_set(x_376, 1, x_373);
if (lean_is_scalar(x_375)) {
 x_377 = lean_alloc_ctor(0, 2, 0);
} else {
 x_377 = x_375;
}
lean_ctor_set(x_377, 0, x_376);
lean_ctor_set(x_377, 1, x_374);
return x_377;
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
lean_dec(x_368);
x_378 = lean_ctor_get(x_372, 0);
lean_inc(x_378);
x_379 = lean_ctor_get(x_372, 1);
lean_inc(x_379);
if (lean_is_exclusive(x_372)) {
 lean_ctor_release(x_372, 0);
 lean_ctor_release(x_372, 1);
 x_380 = x_372;
} else {
 lean_dec_ref(x_372);
 x_380 = lean_box(0);
}
if (lean_is_scalar(x_380)) {
 x_381 = lean_alloc_ctor(1, 2, 0);
} else {
 x_381 = x_380;
}
lean_ctor_set(x_381, 0, x_378);
lean_ctor_set(x_381, 1, x_379);
return x_381;
}
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_359);
lean_dec(x_353);
lean_dec(x_351);
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_382 = lean_ctor_get(x_364, 0);
lean_inc(x_382);
x_383 = lean_ctor_get(x_364, 1);
lean_inc(x_383);
if (lean_is_exclusive(x_364)) {
 lean_ctor_release(x_364, 0);
 lean_ctor_release(x_364, 1);
 x_384 = x_364;
} else {
 lean_dec_ref(x_364);
 x_384 = lean_box(0);
}
if (lean_is_scalar(x_384)) {
 x_385 = lean_alloc_ctor(1, 2, 0);
} else {
 x_385 = x_384;
}
lean_ctor_set(x_385, 0, x_382);
lean_ctor_set(x_385, 1, x_383);
return x_385;
}
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
lean_dec(x_353);
lean_dec(x_351);
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_386 = lean_ctor_get(x_358, 0);
lean_inc(x_386);
x_387 = lean_ctor_get(x_358, 1);
lean_inc(x_387);
if (lean_is_exclusive(x_358)) {
 lean_ctor_release(x_358, 0);
 lean_ctor_release(x_358, 1);
 x_388 = x_358;
} else {
 lean_dec_ref(x_358);
 x_388 = lean_box(0);
}
if (lean_is_scalar(x_388)) {
 x_389 = lean_alloc_ctor(1, 2, 0);
} else {
 x_389 = x_388;
}
lean_ctor_set(x_389, 0, x_386);
lean_ctor_set(x_389, 1, x_387);
return x_389;
}
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; 
lean_dec(x_349);
lean_dec(x_329);
x_390 = lean_ctor_get(x_348, 1);
lean_inc(x_390);
lean_dec(x_348);
x_391 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_392 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_391, x_2, x_3, x_4, x_5, x_390);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_392;
}
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_393 = lean_ctor_get(x_348, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_348, 1);
lean_inc(x_394);
if (lean_is_exclusive(x_348)) {
 lean_ctor_release(x_348, 0);
 lean_ctor_release(x_348, 1);
 x_395 = x_348;
} else {
 lean_dec_ref(x_348);
 x_395 = lean_box(0);
}
if (lean_is_scalar(x_395)) {
 x_396 = lean_alloc_ctor(1, 2, 0);
} else {
 x_396 = x_395;
}
lean_ctor_set(x_396, 0, x_393);
lean_ctor_set(x_396, 1, x_394);
return x_396;
}
}
}
else
{
lean_object* x_397; 
lean_dec(x_335);
lean_dec(x_1);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_329);
x_397 = l_Lean_Meta_getLevel(x_329, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_397) == 0)
{
lean_object* x_398; 
x_398 = lean_ctor_get(x_397, 0);
lean_inc(x_398);
if (lean_obj_tag(x_398) == 1)
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_399 = lean_ctor_get(x_397, 1);
lean_inc(x_399);
lean_dec(x_397);
x_400 = lean_ctor_get(x_398, 0);
lean_inc(x_400);
lean_dec(x_398);
x_401 = lean_box(0);
lean_inc(x_400);
x_402 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_402, 0, x_400);
lean_ctor_set(x_402, 1, x_401);
x_403 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_402);
x_404 = l_Lean_mkConst(x_403, x_402);
lean_inc(x_329);
x_405 = l_Lean_mkApp(x_404, x_329);
x_406 = lean_box(0);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_407 = l_Lean_Meta_synthInstance(x_405, x_406, x_2, x_3, x_4, x_5, x_399);
if (lean_obj_tag(x_407) == 0)
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_408 = lean_ctor_get(x_407, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_407, 1);
lean_inc(x_409);
lean_dec(x_407);
x_410 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_402);
x_411 = l_Lean_mkConst(x_410, x_402);
lean_inc(x_329);
x_412 = l_Lean_mkApp(x_411, x_329);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_413 = l_Lean_Meta_synthInstance(x_412, x_406, x_2, x_3, x_4, x_5, x_409);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_416 = l_Lean_Meta_NormNum_eval_x27___closed__17;
lean_inc(x_329);
x_417 = l_Lean_Meta_mkOfNatLit(x_400, x_329, x_408, x_416);
x_418 = l_Lean_Meta_NormNum_eval_x27___closed__19;
x_419 = l_Lean_mkConst(x_418, x_402);
x_420 = l_Lean_mkAppB(x_419, x_329, x_414);
x_421 = l_Lean_Meta_mkEqSymm(x_420, x_2, x_3, x_4, x_5, x_415);
if (lean_obj_tag(x_421) == 0)
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_422 = lean_ctor_get(x_421, 0);
lean_inc(x_422);
x_423 = lean_ctor_get(x_421, 1);
lean_inc(x_423);
if (lean_is_exclusive(x_421)) {
 lean_ctor_release(x_421, 0);
 lean_ctor_release(x_421, 1);
 x_424 = x_421;
} else {
 lean_dec_ref(x_421);
 x_424 = lean_box(0);
}
x_425 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_425, 0, x_417);
lean_ctor_set(x_425, 1, x_422);
if (lean_is_scalar(x_424)) {
 x_426 = lean_alloc_ctor(0, 2, 0);
} else {
 x_426 = x_424;
}
lean_ctor_set(x_426, 0, x_425);
lean_ctor_set(x_426, 1, x_423);
return x_426;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; 
lean_dec(x_417);
x_427 = lean_ctor_get(x_421, 0);
lean_inc(x_427);
x_428 = lean_ctor_get(x_421, 1);
lean_inc(x_428);
if (lean_is_exclusive(x_421)) {
 lean_ctor_release(x_421, 0);
 lean_ctor_release(x_421, 1);
 x_429 = x_421;
} else {
 lean_dec_ref(x_421);
 x_429 = lean_box(0);
}
if (lean_is_scalar(x_429)) {
 x_430 = lean_alloc_ctor(1, 2, 0);
} else {
 x_430 = x_429;
}
lean_ctor_set(x_430, 0, x_427);
lean_ctor_set(x_430, 1, x_428);
return x_430;
}
}
else
{
lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; 
lean_dec(x_408);
lean_dec(x_402);
lean_dec(x_400);
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_431 = lean_ctor_get(x_413, 0);
lean_inc(x_431);
x_432 = lean_ctor_get(x_413, 1);
lean_inc(x_432);
if (lean_is_exclusive(x_413)) {
 lean_ctor_release(x_413, 0);
 lean_ctor_release(x_413, 1);
 x_433 = x_413;
} else {
 lean_dec_ref(x_413);
 x_433 = lean_box(0);
}
if (lean_is_scalar(x_433)) {
 x_434 = lean_alloc_ctor(1, 2, 0);
} else {
 x_434 = x_433;
}
lean_ctor_set(x_434, 0, x_431);
lean_ctor_set(x_434, 1, x_432);
return x_434;
}
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
lean_dec(x_402);
lean_dec(x_400);
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_435 = lean_ctor_get(x_407, 0);
lean_inc(x_435);
x_436 = lean_ctor_get(x_407, 1);
lean_inc(x_436);
if (lean_is_exclusive(x_407)) {
 lean_ctor_release(x_407, 0);
 lean_ctor_release(x_407, 1);
 x_437 = x_407;
} else {
 lean_dec_ref(x_407);
 x_437 = lean_box(0);
}
if (lean_is_scalar(x_437)) {
 x_438 = lean_alloc_ctor(1, 2, 0);
} else {
 x_438 = x_437;
}
lean_ctor_set(x_438, 0, x_435);
lean_ctor_set(x_438, 1, x_436);
return x_438;
}
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; 
lean_dec(x_398);
lean_dec(x_329);
x_439 = lean_ctor_get(x_397, 1);
lean_inc(x_439);
lean_dec(x_397);
x_440 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_441 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_440, x_2, x_3, x_4, x_5, x_439);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_441;
}
}
else
{
lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; 
lean_dec(x_329);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_442 = lean_ctor_get(x_397, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_397, 1);
lean_inc(x_443);
if (lean_is_exclusive(x_397)) {
 lean_ctor_release(x_397, 0);
 lean_ctor_release(x_397, 1);
 x_444 = x_397;
} else {
 lean_dec_ref(x_397);
 x_444 = lean_box(0);
}
if (lean_is_scalar(x_444)) {
 x_445 = lean_alloc_ctor(1, 2, 0);
} else {
 x_445 = x_444;
}
lean_ctor_set(x_445, 0, x_442);
lean_ctor_set(x_445, 1, x_443);
return x_445;
}
}
}
}
}
}
}
else
{
lean_object* x_446; uint8_t x_447; 
lean_dec(x_281);
x_446 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4;
x_447 = lean_string_dec_eq(x_280, x_446);
lean_dec(x_280);
if (x_447 == 0)
{
uint8_t x_448; 
lean_dec(x_279);
x_448 = l_Lean_Expr_isNatLit(x_1);
if (x_448 == 0)
{
lean_object* x_449; lean_object* x_450; 
lean_dec(x_1);
x_449 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_450 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_449, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_450;
}
else
{
lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_451 = l_Lean_levelZero;
x_452 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_453 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_454 = l_Lean_Meta_mkOfNatLit(x_451, x_452, x_453, x_1);
x_455 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_456 = l_Lean_mkApp(x_455, x_1);
x_457 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_457, 0, x_454);
lean_ctor_set(x_457, 1, x_456);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_457);
lean_ctor_set(x_458, 1, x_6);
return x_458;
}
}
else
{
lean_object* x_459; lean_object* x_460; uint8_t x_461; 
x_459 = lean_array_get_size(x_279);
x_460 = lean_unsigned_to_nat(6u);
x_461 = lean_nat_dec_eq(x_459, x_460);
lean_dec(x_459);
if (x_461 == 0)
{
uint8_t x_462; 
lean_dec(x_279);
x_462 = l_Lean_Expr_isNatLit(x_1);
if (x_462 == 0)
{
lean_object* x_463; lean_object* x_464; 
lean_dec(x_1);
x_463 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_464 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_463, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_464;
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_465 = l_Lean_levelZero;
x_466 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_467 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_468 = l_Lean_Meta_mkOfNatLit(x_465, x_466, x_467, x_1);
x_469 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_470 = l_Lean_mkApp(x_469, x_1);
x_471 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_471, 0, x_468);
lean_ctor_set(x_471, 1, x_470);
x_472 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_472, 0, x_471);
lean_ctor_set(x_472, 1, x_6);
return x_472;
}
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; 
lean_dec(x_1);
x_473 = lean_unsigned_to_nat(2u);
x_474 = lean_array_fget(x_279, x_473);
x_475 = lean_unsigned_to_nat(4u);
x_476 = lean_array_fget(x_279, x_475);
x_477 = lean_unsigned_to_nat(5u);
x_478 = lean_array_fget(x_279, x_477);
lean_dec(x_279);
x_479 = l_Lean_Meta_NormNum_eval_x27___closed__21;
x_480 = l_Lean_Meta_NormNum_eval_x27___closed__22;
x_481 = l_Lean_Meta_NormNum_eval_x27_evalPow(x_479, x_480, x_474, x_476, x_478, x_2, x_3, x_4, x_5, x_6);
return x_481;
}
}
}
}
else
{
lean_object* x_482; uint8_t x_483; 
lean_dec(x_281);
x_482 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5;
x_483 = lean_string_dec_eq(x_280, x_482);
lean_dec(x_280);
if (x_483 == 0)
{
uint8_t x_484; 
lean_dec(x_279);
x_484 = l_Lean_Expr_isNatLit(x_1);
if (x_484 == 0)
{
lean_object* x_485; lean_object* x_486; 
lean_dec(x_1);
x_485 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_486 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_485, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_486;
}
else
{
lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_487 = l_Lean_levelZero;
x_488 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_489 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_490 = l_Lean_Meta_mkOfNatLit(x_487, x_488, x_489, x_1);
x_491 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_492 = l_Lean_mkApp(x_491, x_1);
x_493 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_493, 0, x_490);
lean_ctor_set(x_493, 1, x_492);
x_494 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_494, 0, x_493);
lean_ctor_set(x_494, 1, x_6);
return x_494;
}
}
else
{
lean_object* x_495; lean_object* x_496; uint8_t x_497; 
x_495 = lean_array_get_size(x_279);
x_496 = lean_unsigned_to_nat(6u);
x_497 = lean_nat_dec_eq(x_495, x_496);
lean_dec(x_495);
if (x_497 == 0)
{
uint8_t x_498; 
lean_dec(x_279);
x_498 = l_Lean_Expr_isNatLit(x_1);
if (x_498 == 0)
{
lean_object* x_499; lean_object* x_500; 
lean_dec(x_1);
x_499 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_500 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_499, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_500;
}
else
{
lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_501 = l_Lean_levelZero;
x_502 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_503 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_504 = l_Lean_Meta_mkOfNatLit(x_501, x_502, x_503, x_1);
x_505 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_506 = l_Lean_mkApp(x_505, x_1);
x_507 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_507, 0, x_504);
lean_ctor_set(x_507, 1, x_506);
x_508 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_508, 0, x_507);
lean_ctor_set(x_508, 1, x_6);
return x_508;
}
}
else
{
lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
lean_dec(x_1);
x_509 = lean_unsigned_to_nat(2u);
x_510 = lean_array_fget(x_279, x_509);
x_511 = lean_unsigned_to_nat(4u);
x_512 = lean_array_fget(x_279, x_511);
x_513 = lean_unsigned_to_nat(5u);
x_514 = lean_array_fget(x_279, x_513);
lean_dec(x_279);
x_515 = l_Lean_Meta_NormNum_eval_x27___closed__24;
x_516 = l_Lean_Meta_NormNum_eval_x27___closed__25;
x_517 = l_Lean_Meta_NormNum_eval_x27_evalBinOp(x_515, x_516, x_510, x_512, x_514, x_2, x_3, x_4, x_5, x_6);
return x_517;
}
}
}
}
else
{
lean_object* x_518; uint8_t x_519; 
lean_dec(x_281);
x_518 = l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6;
x_519 = lean_string_dec_eq(x_280, x_518);
lean_dec(x_280);
if (x_519 == 0)
{
uint8_t x_520; 
lean_dec(x_279);
x_520 = l_Lean_Expr_isNatLit(x_1);
if (x_520 == 0)
{
lean_object* x_521; lean_object* x_522; 
lean_dec(x_1);
x_521 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_522 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_521, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_522;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_523 = l_Lean_levelZero;
x_524 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_525 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_526 = l_Lean_Meta_mkOfNatLit(x_523, x_524, x_525, x_1);
x_527 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_528 = l_Lean_mkApp(x_527, x_1);
x_529 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_529, 0, x_526);
lean_ctor_set(x_529, 1, x_528);
x_530 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_530, 0, x_529);
lean_ctor_set(x_530, 1, x_6);
return x_530;
}
}
else
{
lean_object* x_531; lean_object* x_532; uint8_t x_533; 
x_531 = lean_array_get_size(x_279);
x_532 = lean_unsigned_to_nat(6u);
x_533 = lean_nat_dec_eq(x_531, x_532);
lean_dec(x_531);
if (x_533 == 0)
{
uint8_t x_534; 
lean_dec(x_279);
x_534 = l_Lean_Expr_isNatLit(x_1);
if (x_534 == 0)
{
lean_object* x_535; lean_object* x_536; 
lean_dec(x_1);
x_535 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_536 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_535, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_536;
}
else
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_537 = l_Lean_levelZero;
x_538 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_539 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_540 = l_Lean_Meta_mkOfNatLit(x_537, x_538, x_539, x_1);
x_541 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_542 = l_Lean_mkApp(x_541, x_1);
x_543 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_543, 0, x_540);
lean_ctor_set(x_543, 1, x_542);
x_544 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_544, 0, x_543);
lean_ctor_set(x_544, 1, x_6);
return x_544;
}
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
lean_dec(x_1);
x_545 = lean_unsigned_to_nat(2u);
x_546 = lean_array_fget(x_279, x_545);
x_547 = lean_unsigned_to_nat(4u);
x_548 = lean_array_fget(x_279, x_547);
x_549 = lean_unsigned_to_nat(5u);
x_550 = lean_array_fget(x_279, x_549);
lean_dec(x_279);
x_551 = l_Lean_Meta_NormNum_eval_x27___closed__27;
x_552 = l_Lean_Meta_NormNum_eval_x27___closed__28;
x_553 = l_Lean_Meta_NormNum_eval_x27_evalBinOp(x_551, x_552, x_546, x_548, x_550, x_2, x_3, x_4, x_5, x_6);
return x_553;
}
}
}
}
}
else
{
uint8_t x_554; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
x_554 = !lean_is_exclusive(x_7);
if (x_554 == 0)
{
lean_object* x_555; lean_object* x_556; uint8_t x_557; 
x_555 = lean_ctor_get(x_7, 1);
lean_dec(x_555);
x_556 = lean_ctor_get(x_7, 0);
lean_dec(x_556);
x_557 = l_Lean_Expr_isNatLit(x_1);
if (x_557 == 0)
{
lean_object* x_558; lean_object* x_559; 
lean_free_object(x_7);
lean_dec(x_1);
x_558 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_559 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_558, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_559;
}
else
{
lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_560 = l_Lean_levelZero;
x_561 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_562 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_563 = l_Lean_Meta_mkOfNatLit(x_560, x_561, x_562, x_1);
x_564 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_565 = l_Lean_mkApp(x_564, x_1);
lean_ctor_set(x_7, 1, x_565);
lean_ctor_set(x_7, 0, x_563);
x_566 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_566, 0, x_7);
lean_ctor_set(x_566, 1, x_6);
return x_566;
}
}
else
{
uint8_t x_567; 
lean_dec(x_7);
x_567 = l_Lean_Expr_isNatLit(x_1);
if (x_567 == 0)
{
lean_object* x_568; lean_object* x_569; 
lean_dec(x_1);
x_568 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_569 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_568, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_569;
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_570 = l_Lean_levelZero;
x_571 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_572 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_573 = l_Lean_Meta_mkOfNatLit(x_570, x_571, x_572, x_1);
x_574 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_575 = l_Lean_mkApp(x_574, x_1);
x_576 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_576, 0, x_573);
lean_ctor_set(x_576, 1, x_575);
x_577 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_577, 0, x_576);
lean_ctor_set(x_577, 1, x_6);
return x_577;
}
}
}
}
else
{
uint8_t x_578; 
lean_dec(x_9);
lean_dec(x_8);
x_578 = !lean_is_exclusive(x_7);
if (x_578 == 0)
{
lean_object* x_579; lean_object* x_580; uint8_t x_581; 
x_579 = lean_ctor_get(x_7, 1);
lean_dec(x_579);
x_580 = lean_ctor_get(x_7, 0);
lean_dec(x_580);
x_581 = l_Lean_Expr_isNatLit(x_1);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; 
lean_free_object(x_7);
lean_dec(x_1);
x_582 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_583 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_582, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_583;
}
else
{
lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_584 = l_Lean_levelZero;
x_585 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_586 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_587 = l_Lean_Meta_mkOfNatLit(x_584, x_585, x_586, x_1);
x_588 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_589 = l_Lean_mkApp(x_588, x_1);
lean_ctor_set(x_7, 1, x_589);
lean_ctor_set(x_7, 0, x_587);
x_590 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_590, 0, x_7);
lean_ctor_set(x_590, 1, x_6);
return x_590;
}
}
else
{
uint8_t x_591; 
lean_dec(x_7);
x_591 = l_Lean_Expr_isNatLit(x_1);
if (x_591 == 0)
{
lean_object* x_592; lean_object* x_593; 
lean_dec(x_1);
x_592 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_593 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_592, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_593;
}
else
{
lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_594 = l_Lean_levelZero;
x_595 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_596 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_597 = l_Lean_Meta_mkOfNatLit(x_594, x_595, x_596, x_1);
x_598 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_599 = l_Lean_mkApp(x_598, x_1);
x_600 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_600, 0, x_597);
lean_ctor_set(x_600, 1, x_599);
x_601 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_601, 0, x_600);
lean_ctor_set(x_601, 1, x_6);
return x_601;
}
}
}
}
else
{
uint8_t x_602; 
lean_dec(x_8);
x_602 = !lean_is_exclusive(x_7);
if (x_602 == 0)
{
lean_object* x_603; lean_object* x_604; uint8_t x_605; 
x_603 = lean_ctor_get(x_7, 1);
lean_dec(x_603);
x_604 = lean_ctor_get(x_7, 0);
lean_dec(x_604);
x_605 = l_Lean_Expr_isNatLit(x_1);
if (x_605 == 0)
{
lean_object* x_606; lean_object* x_607; 
lean_free_object(x_7);
lean_dec(x_1);
x_606 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_607 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_606, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_607;
}
else
{
lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_608 = l_Lean_levelZero;
x_609 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_610 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_611 = l_Lean_Meta_mkOfNatLit(x_608, x_609, x_610, x_1);
x_612 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_613 = l_Lean_mkApp(x_612, x_1);
lean_ctor_set(x_7, 1, x_613);
lean_ctor_set(x_7, 0, x_611);
x_614 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_614, 0, x_7);
lean_ctor_set(x_614, 1, x_6);
return x_614;
}
}
else
{
uint8_t x_615; 
lean_dec(x_7);
x_615 = l_Lean_Expr_isNatLit(x_1);
if (x_615 == 0)
{
lean_object* x_616; lean_object* x_617; 
lean_dec(x_1);
x_616 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_617 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_616, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_617;
}
else
{
lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_618 = l_Lean_levelZero;
x_619 = l_Lean_Meta_NormNum_eval_x27___closed__1;
x_620 = l_Lean_Meta_NormNum_eval_x27___closed__4;
lean_inc(x_1);
x_621 = l_Lean_Meta_mkOfNatLit(x_618, x_619, x_620, x_1);
x_622 = l_Lean_Meta_NormNum_eval_x27___closed__13;
x_623 = l_Lean_mkApp(x_622, x_1);
x_624 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_624, 0, x_621);
lean_ctor_set(x_624, 1, x_623);
x_625 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_625, 0, x_624);
lean_ctor_set(x_625, 1, x_6);
return x_625;
}
}
}
}
}
lean_object* l_Lean_Meta_NormNum_eval_x27_evalPow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_3);
x_11 = l_Lean_Meta_getLevel(x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 1)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box(0);
lean_inc(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Lean_Meta_mkOfNatLit___closed__2;
lean_inc(x_16);
x_18 = l_Lean_mkConst(x_17, x_16);
lean_inc(x_3);
x_19 = l_Lean_mkApp(x_18, x_3);
x_20 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_21 = l_Lean_Meta_synthInstance(x_19, x_20, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_16);
x_25 = l_Lean_mkConst(x_24, x_16);
lean_inc(x_3);
x_26 = l_Lean_mkApp(x_25, x_3);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_27 = l_Lean_Meta_synthInstance(x_26, x_20, x_6, x_7, x_8, x_9, x_23);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_4);
x_30 = l_Lean_Meta_NormNum_eval_x27(x_4, x_6, x_7, x_8, x_9, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = !lean_is_exclusive(x_31);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_31, 0);
x_35 = lean_ctor_get(x_31, 1);
x_36 = lean_unsigned_to_nat(1u);
x_37 = l_Lean_Expr_getRevArg_x21(x_34, x_36);
lean_dec(x_34);
lean_inc(x_5);
x_38 = l_Lean_Expr_numeral_x3f(x_5);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_37);
lean_free_object(x_31);
lean_dec(x_35);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_40 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_39, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_40;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_41 = lean_ctor_get(x_38, 0);
lean_inc(x_41);
lean_dec(x_38);
x_42 = l_Lean_Expr_natLit_x21(x_37);
x_43 = lean_apply_2(x_2, x_42, x_41);
x_44 = l_Lean_mkRawNatLit(x_43);
lean_inc(x_44);
lean_inc(x_3);
x_45 = l_Lean_Meta_mkOfNatLit(x_14, x_3, x_22, x_44);
lean_inc(x_44);
x_46 = l_Lean_Meta_mkEqRefl(x_44, x_6, x_7, x_8, x_9, x_32);
if (lean_obj_tag(x_46) == 0)
{
uint8_t x_47; 
x_47 = !lean_is_exclusive(x_46);
if (x_47 == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_46, 0);
x_49 = l_Lean_mkConst(x_1, x_16);
x_50 = l_Lean_mkApp8(x_49, x_3, x_28, x_4, x_5, x_37, x_44, x_35, x_48);
lean_ctor_set(x_31, 1, x_50);
lean_ctor_set(x_31, 0, x_45);
lean_ctor_set(x_46, 0, x_31);
return x_46;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_51 = lean_ctor_get(x_46, 0);
x_52 = lean_ctor_get(x_46, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_46);
x_53 = l_Lean_mkConst(x_1, x_16);
x_54 = l_Lean_mkApp8(x_53, x_3, x_28, x_4, x_5, x_37, x_44, x_35, x_51);
lean_ctor_set(x_31, 1, x_54);
lean_ctor_set(x_31, 0, x_45);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_31);
lean_ctor_set(x_55, 1, x_52);
return x_55;
}
}
else
{
uint8_t x_56; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec(x_37);
lean_free_object(x_31);
lean_dec(x_35);
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_56 = !lean_is_exclusive(x_46);
if (x_56 == 0)
{
return x_46;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_46, 0);
x_58 = lean_ctor_get(x_46, 1);
lean_inc(x_58);
lean_inc(x_57);
lean_dec(x_46);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_60 = lean_ctor_get(x_31, 0);
x_61 = lean_ctor_get(x_31, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_31);
x_62 = lean_unsigned_to_nat(1u);
x_63 = l_Lean_Expr_getRevArg_x21(x_60, x_62);
lean_dec(x_60);
lean_inc(x_5);
x_64 = l_Lean_Expr_numeral_x3f(x_5);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; lean_object* x_66; 
lean_dec(x_63);
lean_dec(x_61);
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_65 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_66 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_65, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_67 = lean_ctor_get(x_64, 0);
lean_inc(x_67);
lean_dec(x_64);
x_68 = l_Lean_Expr_natLit_x21(x_63);
x_69 = lean_apply_2(x_2, x_68, x_67);
x_70 = l_Lean_mkRawNatLit(x_69);
lean_inc(x_70);
lean_inc(x_3);
x_71 = l_Lean_Meta_mkOfNatLit(x_14, x_3, x_22, x_70);
lean_inc(x_70);
x_72 = l_Lean_Meta_mkEqRefl(x_70, x_6, x_7, x_8, x_9, x_32);
if (lean_obj_tag(x_72) == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_75 = x_72;
} else {
 lean_dec_ref(x_72);
 x_75 = lean_box(0);
}
x_76 = l_Lean_mkConst(x_1, x_16);
x_77 = l_Lean_mkApp8(x_76, x_3, x_28, x_4, x_5, x_63, x_70, x_61, x_73);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_71);
lean_ctor_set(x_78, 1, x_77);
if (lean_is_scalar(x_75)) {
 x_79 = lean_alloc_ctor(0, 2, 0);
} else {
 x_79 = x_75;
}
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_74);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_71);
lean_dec(x_70);
lean_dec(x_63);
lean_dec(x_61);
lean_dec(x_28);
lean_dec(x_16);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_80 = lean_ctor_get(x_72, 0);
lean_inc(x_80);
x_81 = lean_ctor_get(x_72, 1);
lean_inc(x_81);
if (lean_is_exclusive(x_72)) {
 lean_ctor_release(x_72, 0);
 lean_ctor_release(x_72, 1);
 x_82 = x_72;
} else {
 lean_dec_ref(x_72);
 x_82 = lean_box(0);
}
if (lean_is_scalar(x_82)) {
 x_83 = lean_alloc_ctor(1, 2, 0);
} else {
 x_83 = x_82;
}
lean_ctor_set(x_83, 0, x_80);
lean_ctor_set(x_83, 1, x_81);
return x_83;
}
}
}
}
else
{
uint8_t x_84; 
lean_dec(x_28);
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_84 = !lean_is_exclusive(x_30);
if (x_84 == 0)
{
return x_30;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_85 = lean_ctor_get(x_30, 0);
x_86 = lean_ctor_get(x_30, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_30);
x_87 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_87, 0, x_85);
lean_ctor_set(x_87, 1, x_86);
return x_87;
}
}
}
else
{
uint8_t x_88; 
lean_dec(x_22);
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_88 = !lean_is_exclusive(x_27);
if (x_88 == 0)
{
return x_27;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
x_89 = lean_ctor_get(x_27, 0);
x_90 = lean_ctor_get(x_27, 1);
lean_inc(x_90);
lean_inc(x_89);
lean_dec(x_27);
x_91 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_91, 0, x_89);
lean_ctor_set(x_91, 1, x_90);
return x_91;
}
}
}
else
{
uint8_t x_92; 
lean_dec(x_16);
lean_dec(x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_92 = !lean_is_exclusive(x_21);
if (x_92 == 0)
{
return x_21;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_93 = lean_ctor_get(x_21, 0);
x_94 = lean_ctor_get(x_21, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_21);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_12);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_96 = lean_ctor_get(x_11, 1);
lean_inc(x_96);
lean_dec(x_11);
x_97 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_98 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_97, x_6, x_7, x_8, x_9, x_96);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_98;
}
}
else
{
uint8_t x_99; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_99 = !lean_is_exclusive(x_11);
if (x_99 == 0)
{
return x_11;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_11, 0);
x_101 = lean_ctor_get(x_11, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_11);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Meta_NormNum_eval_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_unsigned_to_nat(3u);
x_6 = lean_nat_dec_eq(x_4, x_5);
lean_dec(x_4);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_array_fget(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = lean_array_fget(x_1, x_10);
x_12 = lean_unsigned_to_nat(2u);
x_13 = lean_array_fget(x_1, x_12);
lean_dec(x_1);
x_14 = lean_apply_3(x_2, x_9, x_11, x_13);
return x_14;
}
}
}
lean_object* l_Lean_Meta_NormNum_eval_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_NormNum_eval_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Expr_withAppAux___at_Lean_Meta_NormNum_eval___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
if (lean_obj_tag(x_3) == 5)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get(x_3, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_dec(x_3);
x_13 = lean_array_set(x_4, x_5, x_12);
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_sub(x_5, x_14);
lean_dec(x_5);
x_3 = x_11;
x_4 = x_13;
x_5 = x_15;
goto _start;
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_5);
x_17 = l_Lean_Expr_numeral_x3f___closed__6;
x_18 = l_Lean_Expr_isConstOf(x_3, x_17);
lean_dec(x_3);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_1);
lean_ctor_set(x_19, 1, x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_10);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_21 = lean_array_get_size(x_4);
x_22 = lean_unsigned_to_nat(3u);
x_23 = lean_nat_dec_eq(x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_24 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_25 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_24, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_26 = lean_unsigned_to_nat(0u);
x_27 = lean_array_fget(x_4, x_26);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_array_fget(x_4, x_28);
lean_dec(x_4);
x_30 = l_Lean_Expr_natLit_x3f(x_29);
lean_dec(x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_27);
lean_dec(x_2);
lean_dec(x_1);
x_31 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_32 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_31, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_32;
}
else
{
lean_object* x_33; uint8_t x_34; 
x_33 = lean_ctor_get(x_30, 0);
lean_inc(x_33);
lean_dec(x_30);
x_34 = lean_nat_dec_eq(x_33, x_26);
if (x_34 == 0)
{
uint8_t x_35; 
x_35 = lean_nat_dec_eq(x_33, x_28);
lean_dec(x_33);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_1);
lean_ctor_set(x_36, 1, x_2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_10);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_27);
x_38 = l_Lean_Meta_getLevel(x_27, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 1)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec(x_38);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = lean_box(0);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_43);
x_45 = l_Lean_mkConst(x_44, x_43);
lean_inc(x_27);
x_46 = l_Lean_mkApp(x_45, x_27);
x_47 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_48 = l_Lean_Meta_synthInstance(x_46, x_47, x_6, x_7, x_8, x_9, x_40);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
x_51 = l_Lean_Expr_numeral_x3f___closed__4;
lean_inc(x_43);
x_52 = l_Lean_mkConst(x_51, x_43);
x_53 = l_Lean_Meta_NormNum_eval_x27___closed__14;
lean_inc(x_27);
x_54 = l_Lean_mkAppB(x_52, x_27, x_53);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_55 = l_Lean_Meta_synthInstance(x_54, x_47, x_6, x_7, x_8, x_9, x_50);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_43);
x_58 = l_Lean_mkConst(x_17, x_43);
lean_inc(x_27);
x_59 = l_Lean_mkApp3(x_58, x_27, x_53, x_56);
x_60 = l_Lean_Meta_NormNum_eval_x27___closed__16;
x_61 = l_Lean_mkConst(x_60, x_43);
x_62 = l_Lean_mkAppB(x_61, x_27, x_49);
x_63 = l_Lean_Meta_mkEqTrans(x_2, x_62, x_6, x_7, x_8, x_9, x_57);
if (lean_obj_tag(x_63) == 0)
{
uint8_t x_64; 
x_64 = !lean_is_exclusive(x_63);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; 
x_65 = lean_ctor_get(x_63, 0);
x_66 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_66, 0, x_59);
lean_ctor_set(x_66, 1, x_65);
lean_ctor_set(x_63, 0, x_66);
return x_63;
}
else
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_67 = lean_ctor_get(x_63, 0);
x_68 = lean_ctor_get(x_63, 1);
lean_inc(x_68);
lean_inc(x_67);
lean_dec(x_63);
x_69 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_69, 0, x_59);
lean_ctor_set(x_69, 1, x_67);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
return x_70;
}
}
else
{
uint8_t x_71; 
lean_dec(x_59);
x_71 = !lean_is_exclusive(x_63);
if (x_71 == 0)
{
return x_63;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_63, 0);
x_73 = lean_ctor_get(x_63, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_63);
x_74 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
return x_74;
}
}
}
else
{
uint8_t x_75; 
lean_dec(x_49);
lean_dec(x_43);
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_75 = !lean_is_exclusive(x_55);
if (x_75 == 0)
{
return x_55;
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; 
x_76 = lean_ctor_get(x_55, 0);
x_77 = lean_ctor_get(x_55, 1);
lean_inc(x_77);
lean_inc(x_76);
lean_dec(x_55);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_76);
lean_ctor_set(x_78, 1, x_77);
return x_78;
}
}
}
else
{
uint8_t x_79; 
lean_dec(x_43);
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_79 = !lean_is_exclusive(x_48);
if (x_79 == 0)
{
return x_48;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; 
x_80 = lean_ctor_get(x_48, 0);
x_81 = lean_ctor_get(x_48, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_48);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_39);
lean_dec(x_27);
lean_dec(x_2);
x_83 = lean_ctor_get(x_38, 1);
lean_inc(x_83);
lean_dec(x_38);
x_84 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_85 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_84, x_6, x_7, x_8, x_9, x_83);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_85;
}
}
else
{
uint8_t x_86; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_86 = !lean_is_exclusive(x_38);
if (x_86 == 0)
{
return x_38;
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_87 = lean_ctor_get(x_38, 0);
x_88 = lean_ctor_get(x_38, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_38);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_88);
return x_89;
}
}
}
}
else
{
lean_object* x_90; 
lean_dec(x_33);
lean_dec(x_1);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_27);
x_90 = l_Lean_Meta_getLevel(x_27, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_90) == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_90, 0);
lean_inc(x_91);
if (lean_obj_tag(x_91) == 1)
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_92 = lean_ctor_get(x_90, 1);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_ctor_get(x_91, 0);
lean_inc(x_93);
lean_dec(x_91);
x_94 = lean_box(0);
x_95 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_95, 0, x_93);
lean_ctor_set(x_95, 1, x_94);
x_96 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4;
lean_inc(x_95);
x_97 = l_Lean_mkConst(x_96, x_95);
lean_inc(x_27);
x_98 = l_Lean_mkApp(x_97, x_27);
x_99 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_100 = l_Lean_Meta_synthInstance(x_98, x_99, x_6, x_7, x_8, x_9, x_92);
if (lean_obj_tag(x_100) == 0)
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; 
x_101 = lean_ctor_get(x_100, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_100, 1);
lean_inc(x_102);
lean_dec(x_100);
x_103 = l_Lean_Expr_numeral_x3f___closed__4;
lean_inc(x_95);
x_104 = l_Lean_mkConst(x_103, x_95);
x_105 = l_Lean_Meta_NormNum_eval_x27___closed__17;
lean_inc(x_27);
x_106 = l_Lean_mkAppB(x_104, x_27, x_105);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_107 = l_Lean_Meta_synthInstance(x_106, x_99, x_6, x_7, x_8, x_9, x_102);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
lean_inc(x_95);
x_110 = l_Lean_mkConst(x_17, x_95);
lean_inc(x_27);
x_111 = l_Lean_mkApp3(x_110, x_27, x_105, x_108);
x_112 = l_Lean_Meta_NormNum_eval_x27___closed__19;
x_113 = l_Lean_mkConst(x_112, x_95);
x_114 = l_Lean_mkAppB(x_113, x_27, x_101);
x_115 = l_Lean_Meta_mkEqTrans(x_2, x_114, x_6, x_7, x_8, x_9, x_109);
if (lean_obj_tag(x_115) == 0)
{
uint8_t x_116; 
x_116 = !lean_is_exclusive(x_115);
if (x_116 == 0)
{
lean_object* x_117; lean_object* x_118; 
x_117 = lean_ctor_get(x_115, 0);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_111);
lean_ctor_set(x_118, 1, x_117);
lean_ctor_set(x_115, 0, x_118);
return x_115;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_119 = lean_ctor_get(x_115, 0);
x_120 = lean_ctor_get(x_115, 1);
lean_inc(x_120);
lean_inc(x_119);
lean_dec(x_115);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_111);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_111);
x_123 = !lean_is_exclusive(x_115);
if (x_123 == 0)
{
return x_115;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_115, 0);
x_125 = lean_ctor_get(x_115, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_115);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
uint8_t x_127; 
lean_dec(x_101);
lean_dec(x_95);
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_127 = !lean_is_exclusive(x_107);
if (x_127 == 0)
{
return x_107;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_128 = lean_ctor_get(x_107, 0);
x_129 = lean_ctor_get(x_107, 1);
lean_inc(x_129);
lean_inc(x_128);
lean_dec(x_107);
x_130 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_130, 0, x_128);
lean_ctor_set(x_130, 1, x_129);
return x_130;
}
}
}
else
{
uint8_t x_131; 
lean_dec(x_95);
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_131 = !lean_is_exclusive(x_100);
if (x_131 == 0)
{
return x_100;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_100, 0);
x_133 = lean_ctor_get(x_100, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_100);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_91);
lean_dec(x_27);
lean_dec(x_2);
x_135 = lean_ctor_get(x_90, 1);
lean_inc(x_135);
lean_dec(x_90);
x_136 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_137 = l_Lean_throwError___at_Lean_Meta_NormNum_eval_x27_evalBinOp___spec__1(x_136, x_6, x_7, x_8, x_9, x_135);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_137;
}
}
else
{
uint8_t x_138; 
lean_dec(x_27);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
x_138 = !lean_is_exclusive(x_90);
if (x_138 == 0)
{
return x_90;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_139 = lean_ctor_get(x_90, 0);
x_140 = lean_ctor_get(x_90, 1);
lean_inc(x_140);
lean_inc(x_139);
lean_dec(x_90);
x_141 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
return x_141;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_NormNum_eval___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_levelZero;
x_2 = l_Lean_mkSort(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_NormNum_eval(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_7 = l_Lean_Meta_NormNum_eval_x27(x_1, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_Lean_Expr_getAppNumArgsAux(x_10, x_12);
x_14 = l_Lean_Meta_NormNum_eval___closed__1;
lean_inc(x_13);
x_15 = lean_mk_array(x_13, x_14);
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_13, x_16);
lean_dec(x_13);
lean_inc(x_10);
x_18 = l_Lean_Expr_withAppAux___at_Lean_Meta_NormNum_eval___spec__1(x_10, x_11, x_10, x_15, x_17, x_2, x_3, x_4, x_5, x_9);
return x_18;
}
else
{
uint8_t x_19; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_7);
if (x_19 == 0)
{
return x_7;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_7, 0);
x_21 = lean_ctor_get(x_7, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_7);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_NormNum_eval_x27___closed__6;
x_2 = l_Lean_Parser_Tactic_normNum___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_normNum___closed__2;
x_2 = l_Lean_Parser_Tactic_normNum___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("normNum");
return x_1;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_normNum___closed__4;
x_2 = l_Lean_Parser_Tactic_normNum___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__7() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Parser_Tactic_normNum___closed__5;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Parser_Tactic_normNum___closed__6;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Lean_Parser_Tactic_normNum___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Parser_Tactic_normNum() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Parser_Tactic_normNum___closed__8;
return x_1;
}
}
lean_object* l_Lean_Tactic_evalNormNum_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; 
lean_dec(x_2);
x_4 = lean_apply_1(x_3, x_1);
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_ctor_get(x_5, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
lean_dec(x_6);
x_10 = lean_apply_3(x_2, x_7, x_8, x_9);
return x_10;
}
}
}
lean_object* l_Lean_Tactic_evalNormNum_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Tactic_evalNormNum_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_10 = l_Lean_Meta_mkEqSymm(x_1, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Lean_Meta_mkEqTrans(x_2, x_11, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Meta_assignExprMVar(x_3, x_14, x_5, x_6, x_7, x_8, x_15);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_16, 0);
lean_dec(x_18);
x_19 = lean_box(0);
lean_ctor_set(x_16, 0, x_19);
return x_16;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_16, 1);
lean_inc(x_20);
lean_dec(x_16);
x_21 = lean_box(0);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
else
{
uint8_t x_23; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_23 = !lean_is_exclusive(x_13);
if (x_23 == 0)
{
return x_13;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_13, 0);
x_25 = lean_ctor_get(x_13, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_13);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
uint8_t x_27; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_27 = !lean_is_exclusive(x_10);
if (x_27 == 0)
{
return x_10;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_10, 0);
x_29 = lean_ctor_get(x_10, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_10);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_24; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_24 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
lean_inc(x_25);
x_27 = l_Lean_Meta_getMVarType(x_25, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_30 = l_Lean_Meta_matchEq_x3f(x_28, x_5, x_6, x_7, x_8, x_29);
if (lean_obj_tag(x_30) == 0)
{
lean_object* x_31; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_ctor_get(x_30, 1);
lean_inc(x_32);
lean_dec(x_30);
x_33 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_34 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Generalize_0__Lean_Elab_Tactic_evalGeneralizeWithEq___spec__1(x_33, x_5, x_6, x_7, x_8, x_32);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_35 = !lean_is_exclusive(x_34);
if (x_35 == 0)
{
return x_34;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_34, 0);
x_37 = lean_ctor_get(x_34, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_34);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_31, 0);
lean_inc(x_39);
lean_dec(x_31);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_ctor_get(x_30, 1);
lean_inc(x_41);
lean_dec(x_30);
x_42 = lean_ctor_get(x_40, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_44 = l_Lean_Meta_NormNum_eval_x27(x_42, x_5, x_6, x_7, x_8, x_41);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
x_47 = lean_ctor_get(x_45, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_45, 1);
lean_inc(x_48);
lean_dec(x_45);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_49 = l_Lean_Meta_NormNum_eval_x27(x_43, x_5, x_6, x_7, x_8, x_46);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = lean_ctor_get(x_50, 0);
lean_inc(x_52);
x_53 = lean_ctor_get(x_50, 1);
lean_inc(x_53);
lean_dec(x_50);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_54 = l_Lean_Meta_isExprDefEq(x_47, x_52, x_5, x_6, x_7, x_8, x_51);
if (lean_obj_tag(x_54) == 0)
{
lean_object* x_55; uint8_t x_56; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; 
lean_dec(x_53);
lean_dec(x_48);
lean_dec(x_25);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_57 = lean_ctor_get(x_54, 1);
lean_inc(x_57);
lean_dec(x_54);
x_58 = l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2;
x_59 = l_Lean_throwError___at_Lean_Meta_withIncRecDepth___spec__1(x_58, x_5, x_6, x_7, x_8, x_57);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_59, 0);
x_62 = lean_ctor_get(x_59, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_59);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_54, 1);
lean_inc(x_64);
lean_dec(x_54);
x_65 = lean_box(0);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_66 = l_Lean_Tactic_evalNormNum___rarg___lambda__1(x_53, x_48, x_25, x_65, x_5, x_6, x_7, x_8, x_64);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
x_10 = x_67;
x_11 = x_68;
goto block_23;
}
else
{
uint8_t x_69; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_69 = !lean_is_exclusive(x_66);
if (x_69 == 0)
{
return x_66;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_66, 0);
x_71 = lean_ctor_get(x_66, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_66);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_53);
lean_dec(x_48);
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_73 = !lean_is_exclusive(x_54);
if (x_73 == 0)
{
return x_54;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_54, 0);
x_75 = lean_ctor_get(x_54, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_54);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
else
{
uint8_t x_77; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_77 = !lean_is_exclusive(x_49);
if (x_77 == 0)
{
return x_49;
}
else
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_78 = lean_ctor_get(x_49, 0);
x_79 = lean_ctor_get(x_49, 1);
lean_inc(x_79);
lean_inc(x_78);
lean_dec(x_49);
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_78);
lean_ctor_set(x_80, 1, x_79);
return x_80;
}
}
}
else
{
uint8_t x_81; 
lean_dec(x_43);
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_81 = !lean_is_exclusive(x_44);
if (x_81 == 0)
{
return x_44;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_82 = lean_ctor_get(x_44, 0);
x_83 = lean_ctor_get(x_44, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_44);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_82);
lean_ctor_set(x_84, 1, x_83);
return x_84;
}
}
}
}
else
{
uint8_t x_85; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_85 = !lean_is_exclusive(x_30);
if (x_85 == 0)
{
return x_30;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_30, 0);
x_87 = lean_ctor_get(x_30, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_30);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_86);
lean_ctor_set(x_88, 1, x_87);
return x_88;
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_25);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_27);
if (x_89 == 0)
{
return x_27;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_27, 0);
x_91 = lean_ctor_get(x_27, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_27);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
else
{
uint8_t x_93; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_93 = !lean_is_exclusive(x_24);
if (x_93 == 0)
{
return x_24;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_24, 0);
x_95 = lean_ctor_get(x_24, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_24);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
block_23:
{
lean_object* x_12; 
x_12 = l_Lean_Elab_Tactic_replaceMainGoal(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_11);
if (lean_obj_tag(x_12) == 0)
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_dec(x_14);
x_15 = lean_box(0);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_12, 1);
lean_inc(x_16);
lean_dec(x_12);
x_17 = lean_box(0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
return x_18;
}
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_12);
if (x_19 == 0)
{
return x_12;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_12, 0);
x_21 = lean_ctor_get(x_12, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_12);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
return x_22;
}
}
}
}
}
static lean_object* _init_l_Lean_Tactic_evalNormNum___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Tactic_evalNormNum___rarg___lambda__2), 9, 0);
return x_1;
}
}
lean_object* l_Lean_Tactic_evalNormNum___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_Lean_Tactic_evalNormNum___rarg___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_Lean_Tactic_evalNormNum(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Tactic_evalNormNum___rarg), 9, 0);
return x_2;
}
}
lean_object* l_Lean_Tactic_evalNormNum___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_Tactic_evalNormNum___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Lean_Tactic_evalNormNum___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_Tactic_evalNormNum(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_Core(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_NormNum(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Core(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Expr_numeral_x3f___closed__1 = _init_l_Lean_Expr_numeral_x3f___closed__1();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__1);
l_Lean_Expr_numeral_x3f___closed__2 = _init_l_Lean_Expr_numeral_x3f___closed__2();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__2);
l_Lean_Expr_numeral_x3f___closed__3 = _init_l_Lean_Expr_numeral_x3f___closed__3();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__3);
l_Lean_Expr_numeral_x3f___closed__4 = _init_l_Lean_Expr_numeral_x3f___closed__4();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__4);
l_Lean_Expr_numeral_x3f___closed__5 = _init_l_Lean_Expr_numeral_x3f___closed__5();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__5);
l_Lean_Expr_numeral_x3f___closed__6 = _init_l_Lean_Expr_numeral_x3f___closed__6();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__6);
l_Lean_Expr_numeral_x3f___closed__7 = _init_l_Lean_Expr_numeral_x3f___closed__7();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__7);
l_Lean_Expr_numeral_x3f___closed__8 = _init_l_Lean_Expr_numeral_x3f___closed__8();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__8);
l_Lean_Expr_numeral_x3f___closed__9 = _init_l_Lean_Expr_numeral_x3f___closed__9();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__9);
l_Lean_Expr_numeral_x3f___closed__10 = _init_l_Lean_Expr_numeral_x3f___closed__10();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__10);
l_Lean_Expr_numeral_x3f___closed__11 = _init_l_Lean_Expr_numeral_x3f___closed__11();
lean_mark_persistent(l_Lean_Expr_numeral_x3f___closed__11);
l_Lean_Meta_mkOfNatLit___closed__1 = _init_l_Lean_Meta_mkOfNatLit___closed__1();
lean_mark_persistent(l_Lean_Meta_mkOfNatLit___closed__1);
l_Lean_Meta_mkOfNatLit___closed__2 = _init_l_Lean_Meta_mkOfNatLit___closed__2();
lean_mark_persistent(l_Lean_Meta_mkOfNatLit___closed__2);
l_Lean_Meta_mkOfNatLit___closed__3 = _init_l_Lean_Meta_mkOfNatLit___closed__3();
lean_mark_persistent(l_Lean_Meta_mkOfNatLit___closed__3);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__1);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__2);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__3);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__4);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__5);
l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6 = _init_l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_match__2___rarg___closed__6);
l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1 = _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__1);
l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2 = _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__2);
l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3 = _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__3);
l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4 = _init_l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27_evalBinOp___closed__4);
l_Lean_Meta_NormNum_eval_x27___closed__1 = _init_l_Lean_Meta_NormNum_eval_x27___closed__1();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__1);
l_Lean_Meta_NormNum_eval_x27___closed__2 = _init_l_Lean_Meta_NormNum_eval_x27___closed__2();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__2);
l_Lean_Meta_NormNum_eval_x27___closed__3 = _init_l_Lean_Meta_NormNum_eval_x27___closed__3();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__3);
l_Lean_Meta_NormNum_eval_x27___closed__4 = _init_l_Lean_Meta_NormNum_eval_x27___closed__4();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__4);
l_Lean_Meta_NormNum_eval_x27___closed__5 = _init_l_Lean_Meta_NormNum_eval_x27___closed__5();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__5);
l_Lean_Meta_NormNum_eval_x27___closed__6 = _init_l_Lean_Meta_NormNum_eval_x27___closed__6();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__6);
l_Lean_Meta_NormNum_eval_x27___closed__7 = _init_l_Lean_Meta_NormNum_eval_x27___closed__7();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__7);
l_Lean_Meta_NormNum_eval_x27___closed__8 = _init_l_Lean_Meta_NormNum_eval_x27___closed__8();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__8);
l_Lean_Meta_NormNum_eval_x27___closed__9 = _init_l_Lean_Meta_NormNum_eval_x27___closed__9();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__9);
l_Lean_Meta_NormNum_eval_x27___closed__10 = _init_l_Lean_Meta_NormNum_eval_x27___closed__10();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__10);
l_Lean_Meta_NormNum_eval_x27___closed__11 = _init_l_Lean_Meta_NormNum_eval_x27___closed__11();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__11);
l_Lean_Meta_NormNum_eval_x27___closed__12 = _init_l_Lean_Meta_NormNum_eval_x27___closed__12();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__12);
l_Lean_Meta_NormNum_eval_x27___closed__13 = _init_l_Lean_Meta_NormNum_eval_x27___closed__13();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__13);
l_Lean_Meta_NormNum_eval_x27___closed__14 = _init_l_Lean_Meta_NormNum_eval_x27___closed__14();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__14);
l_Lean_Meta_NormNum_eval_x27___closed__15 = _init_l_Lean_Meta_NormNum_eval_x27___closed__15();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__15);
l_Lean_Meta_NormNum_eval_x27___closed__16 = _init_l_Lean_Meta_NormNum_eval_x27___closed__16();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__16);
l_Lean_Meta_NormNum_eval_x27___closed__17 = _init_l_Lean_Meta_NormNum_eval_x27___closed__17();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__17);
l_Lean_Meta_NormNum_eval_x27___closed__18 = _init_l_Lean_Meta_NormNum_eval_x27___closed__18();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__18);
l_Lean_Meta_NormNum_eval_x27___closed__19 = _init_l_Lean_Meta_NormNum_eval_x27___closed__19();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__19);
l_Lean_Meta_NormNum_eval_x27___closed__20 = _init_l_Lean_Meta_NormNum_eval_x27___closed__20();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__20);
l_Lean_Meta_NormNum_eval_x27___closed__21 = _init_l_Lean_Meta_NormNum_eval_x27___closed__21();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__21);
l_Lean_Meta_NormNum_eval_x27___closed__22 = _init_l_Lean_Meta_NormNum_eval_x27___closed__22();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__22);
l_Lean_Meta_NormNum_eval_x27___closed__23 = _init_l_Lean_Meta_NormNum_eval_x27___closed__23();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__23);
l_Lean_Meta_NormNum_eval_x27___closed__24 = _init_l_Lean_Meta_NormNum_eval_x27___closed__24();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__24);
l_Lean_Meta_NormNum_eval_x27___closed__25 = _init_l_Lean_Meta_NormNum_eval_x27___closed__25();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__25);
l_Lean_Meta_NormNum_eval_x27___closed__26 = _init_l_Lean_Meta_NormNum_eval_x27___closed__26();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__26);
l_Lean_Meta_NormNum_eval_x27___closed__27 = _init_l_Lean_Meta_NormNum_eval_x27___closed__27();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__27);
l_Lean_Meta_NormNum_eval_x27___closed__28 = _init_l_Lean_Meta_NormNum_eval_x27___closed__28();
lean_mark_persistent(l_Lean_Meta_NormNum_eval_x27___closed__28);
l_Lean_Meta_NormNum_eval___closed__1 = _init_l_Lean_Meta_NormNum_eval___closed__1();
lean_mark_persistent(l_Lean_Meta_NormNum_eval___closed__1);
l_Lean_Parser_Tactic_normNum___closed__1 = _init_l_Lean_Parser_Tactic_normNum___closed__1();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__1);
l_Lean_Parser_Tactic_normNum___closed__2 = _init_l_Lean_Parser_Tactic_normNum___closed__2();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__2);
l_Lean_Parser_Tactic_normNum___closed__3 = _init_l_Lean_Parser_Tactic_normNum___closed__3();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__3);
l_Lean_Parser_Tactic_normNum___closed__4 = _init_l_Lean_Parser_Tactic_normNum___closed__4();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__4);
l_Lean_Parser_Tactic_normNum___closed__5 = _init_l_Lean_Parser_Tactic_normNum___closed__5();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__5);
l_Lean_Parser_Tactic_normNum___closed__6 = _init_l_Lean_Parser_Tactic_normNum___closed__6();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__6);
l_Lean_Parser_Tactic_normNum___closed__7 = _init_l_Lean_Parser_Tactic_normNum___closed__7();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__7);
l_Lean_Parser_Tactic_normNum___closed__8 = _init_l_Lean_Parser_Tactic_normNum___closed__8();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum___closed__8);
l_Lean_Parser_Tactic_normNum = _init_l_Lean_Parser_Tactic_normNum();
lean_mark_persistent(l_Lean_Parser_Tactic_normNum);
l_Lean_Tactic_evalNormNum___rarg___closed__1 = _init_l_Lean_Tactic_evalNormNum___rarg___closed__1();
lean_mark_persistent(l_Lean_Tactic_evalNormNum___rarg___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
