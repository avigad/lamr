// Lean compiler output
// Module: Mathlib.Tactic.PrintPrefix
// Imports: Init Lean.Elab.Command
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
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t l_USize_add(size_t, size_t);
static lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__10;
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftTermElabM___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_instInhabitedConstantInfo___closed__5;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_findCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Lean_Meta_findCore_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__16;
lean_object* l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR___rarg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
extern lean_object* l_Lean_instHashableName;
lean_object* l_Lean_Elab_Command_printPrefix;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1;
static lean_object* l_Lean_Meta_instInhabitedConstantInfo___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__11;
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_findCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Meta_find___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_instInhabitedConstantInfo___closed__2;
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_instInhabitedConstantInfo___closed__4;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_swap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_findCore___closed__1;
lean_object* l_Lean_Meta_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__6;
static uint64_t l_Lean_Meta_instInhabitedConstantInfo___closed__1;
static lean_object* l_Lean_Elab_Command_elabPrintPrefix___closed__1;
lean_object* l_Lean_Meta_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__12;
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_findCore___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1___boxed(lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1;
lean_object* l_Lean_Meta_findCore_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__13;
static lean_object* l_Lean_Elab_Command_printPrefix___closed__17;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__1;
uint8_t l_Lean_Meta_FindOptions_checkPrivate___default;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix_match__1(lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__2;
lean_object* l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__7;
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1(lean_object*, lean_object*, lean_object*);
uint8_t l_String_isEmpty(lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__9;
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1;
static lean_object* l_Lean_Elab_Command_printPrefix___closed__4;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Meta_FindOptions_stage1___default;
static lean_object* l_Lean_Elab_Command_printPrefix___closed__8;
static lean_object* l_Lean_Elab_Command_printPrefix___closed__3;
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__14;
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Term_resolveName___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_printPrefix___closed__5;
static lean_object* l_Lean_Elab_Command_printPrefix___closed__15;
lean_object* l_Lean_Meta_instInhabitedConstantInfo;
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabPrintPrefix___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_findCore___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg(lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_Name_instBEqName;
lean_object* l_Lean_Elab_Command_elabPrintPrefix_match__1___rarg(lean_object*, lean_object*, lean_object*);
static uint64_t _init_l_Lean_Meta_instInhabitedConstantInfo___closed__1() {
_start:
{
lean_object* x_1; uint64_t x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_uint64_of_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedConstantInfo___closed__2() {
_start:
{
lean_object* x_1; uint64_t x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_Meta_instInhabitedConstantInfo___closed__1;
x_3 = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint64(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedConstantInfo___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = l_Lean_Meta_instInhabitedConstantInfo___closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_2);
lean_ctor_set(x_4, 1, x_1);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedConstantInfo___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Lean_Meta_instInhabitedConstantInfo___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedConstantInfo___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Meta_instInhabitedConstantInfo___closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Meta_instInhabitedConstantInfo() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Meta_instInhabitedConstantInfo___closed__5;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_FindOptions_stage1___default() {
_start:
{
uint8_t x_1; 
x_1 = 1;
return x_1;
}
}
static uint8_t _init_l_Lean_Meta_FindOptions_checkPrivate___default() {
_start:
{
uint8_t x_1; 
x_1 = 0;
return x_1;
}
}
lean_object* l_Lean_Meta_findCore_check(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = lean_ctor_get_uint8(x_2, 1);
if (x_11 == 0)
{
uint8_t x_12; 
x_12 = l_Lean_isPrivateName(x_4);
if (x_12 == 0)
{
lean_object* x_13; 
lean_inc(x_5);
x_13 = lean_apply_6(x_1, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
if (x_15 == 0)
{
uint8_t x_16; 
lean_dec(x_5);
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_13, 0);
lean_dec(x_17);
lean_ctor_set(x_13, 0, x_3);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_3);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_ctor_get(x_13, 0);
lean_dec(x_21);
x_22 = lean_array_push(x_3, x_5);
lean_ctor_set(x_13, 0, x_22);
return x_13;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_13, 1);
lean_inc(x_23);
lean_dec(x_13);
x_24 = lean_array_push(x_3, x_5);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
return x_25;
}
}
}
else
{
uint8_t x_26; 
lean_dec(x_5);
lean_dec(x_3);
x_26 = !lean_is_exclusive(x_13);
if (x_26 == 0)
{
return x_13;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_13, 0);
x_28 = lean_ctor_get(x_13, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_13);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
lean_object* x_30; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_3);
lean_ctor_set(x_30, 1, x_10);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_inc(x_5);
x_31 = lean_apply_6(x_1, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
lean_dec(x_5);
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_31, 0);
lean_dec(x_35);
lean_ctor_set(x_31, 0, x_3);
return x_31;
}
else
{
lean_object* x_36; lean_object* x_37; 
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_dec(x_31);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_3);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
else
{
uint8_t x_38; 
x_38 = !lean_is_exclusive(x_31);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_31, 0);
lean_dec(x_39);
x_40 = lean_array_push(x_3, x_5);
lean_ctor_set(x_31, 0, x_40);
return x_31;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_31, 1);
lean_inc(x_41);
lean_dec(x_31);
x_42 = lean_array_push(x_3, x_5);
x_43 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
return x_43;
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_5);
lean_dec(x_3);
x_44 = !lean_is_exclusive(x_31);
if (x_44 == 0)
{
return x_31;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_31, 0);
x_46 = lean_ctor_get(x_31, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_31);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
}
lean_object* l_Lean_Meta_findCore_check___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_findCore_check(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_4);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_4 == x_5;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_array_uget(x_3, x_4);
switch (lean_obj_tag(x_13)) {
case 0:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_16 = l_Lean_Meta_findCore_check(x_1, x_2, x_6, x_14, x_15, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_14);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = 1;
x_20 = x_4 + x_19;
x_4 = x_20;
x_6 = x_17;
x_11 = x_18;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_16);
if (x_22 == 0)
{
return x_16;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_16, 0);
x_24 = lean_ctor_get(x_16, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_16);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
case 1:
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_13, 0);
lean_inc(x_26);
lean_dec(x_13);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
lean_inc(x_1);
x_27 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_findCore___spec__2(x_1, x_2, x_26, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_27) == 0)
{
lean_object* x_28; lean_object* x_29; size_t x_30; size_t x_31; 
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = 1;
x_31 = x_4 + x_30;
x_4 = x_31;
x_6 = x_28;
x_11 = x_29;
goto _start;
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_27);
if (x_33 == 0)
{
return x_27;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_27, 0);
x_35 = lean_ctor_get(x_27, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_27);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
default: 
{
size_t x_37; size_t x_38; 
x_37 = 1;
x_38 = x_4 + x_37;
x_4 = x_38;
goto _start;
}
}
}
else
{
lean_object* x_40; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_6);
lean_ctor_set(x_40, 1, x_11);
return x_40;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_findCore___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_3, 0);
lean_inc(x_10);
lean_dec(x_3);
x_11 = lean_array_get_size(x_10);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_nat_dec_lt(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_9);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = lean_nat_dec_le(x_11, x_11);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_9);
return x_16;
}
else
{
size_t x_17; size_t x_18; lean_object* x_19; 
x_17 = 0;
x_18 = lean_usize_of_nat(x_11);
lean_dec(x_11);
x_19 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3(x_1, x_2, x_10, x_17, x_18, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_10);
return x_19;
}
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_3, 1);
lean_inc(x_21);
lean_dec(x_3);
x_22 = lean_alloc_closure((void*)(l_Lean_Meta_findCore_check___boxed), 10, 2);
lean_closure_set(x_22, 0, x_1);
lean_closure_set(x_22, 1, x_2);
x_23 = lean_unsigned_to_nat(0u);
x_24 = l_Std_PersistentHashMap_foldlMAux_traverse___at_Lean_Meta_DiscrTree_getUnify___spec__4___rarg(x_22, x_20, x_21, lean_box(0), x_23, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_21);
lean_dec(x_20);
return x_24;
}
}
}
lean_object* l_Std_PersistentHashMap_foldlM___at_Lean_Meta_findCore___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_4);
lean_dec(x_3);
x_12 = lean_ctor_get(x_5, 0);
lean_inc(x_12);
lean_dec(x_5);
x_13 = l_Std_PersistentHashMap_foldlMAux___at_Lean_Meta_findCore___spec__2(x_1, x_2, x_12, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_10; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_3);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_4, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_4, 1);
lean_inc(x_12);
x_13 = lean_ctor_get(x_4, 2);
lean_inc(x_13);
lean_dec(x_4);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_14 = l_Lean_Meta_findCore_check(x_1, x_2, x_3, x_11, x_12, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_3 = x_15;
x_4 = x_13;
x_9 = x_16;
goto _start;
}
else
{
uint8_t x_18; 
lean_dec(x_13);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_14);
if (x_18 == 0)
{
return x_14;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_14, 0);
x_20 = lean_ctor_get(x_14, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_14);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_4 == x_5;
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; 
x_13 = lean_array_uget(x_3, x_4);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_1);
x_14 = l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4(x_1, x_2, x_6, x_13, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_4 + x_17;
x_4 = x_18;
x_6 = x_15;
x_11 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_14);
if (x_20 == 0)
{
return x_14;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_14, 0);
x_22 = lean_ctor_get(x_14, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
else
{
lean_object* x_24; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_1);
x_24 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_24, 0, x_6);
lean_ctor_set(x_24, 1, x_11);
return x_24;
}
}
}
lean_object* l_Lean_Meta_findCore___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 0);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_12, 1);
lean_inc(x_13);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Name_instBEqName;
x_16 = l_Lean_instHashableName;
x_17 = l_Std_PersistentHashMap_foldlM___at_Lean_Meta_findCore___spec__1(x_1, x_2, x_15, x_16, x_14, x_3, x_4, x_5, x_6, x_7, x_11);
return x_17;
}
}
static lean_object* _init_l_Lean_Meta_findCore___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Lean_Meta_findCore(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = lean_ctor_get_uint8(x_2, 0);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Lean_Meta_findCore___closed__1;
x_10 = l_Lean_Meta_findCore___lambda__1(x_1, x_2, x_9, x_3, x_4, x_5, x_6, x_7);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_11 = lean_st_ref_get(x_6, x_7);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
lean_dec(x_16);
x_18 = lean_array_get_size(x_17);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_nat_dec_lt(x_19, x_18);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; 
lean_dec(x_18);
lean_dec(x_17);
x_21 = l_Lean_Meta_findCore___closed__1;
x_22 = l_Lean_Meta_findCore___lambda__1(x_1, x_2, x_21, x_3, x_4, x_5, x_6, x_13);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = lean_nat_dec_le(x_18, x_18);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_18);
lean_dec(x_17);
x_24 = l_Lean_Meta_findCore___closed__1;
x_25 = l_Lean_Meta_findCore___lambda__1(x_1, x_2, x_24, x_3, x_4, x_5, x_6, x_13);
return x_25;
}
else
{
size_t x_26; size_t x_27; lean_object* x_28; lean_object* x_29; 
x_26 = 0;
x_27 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_28 = l_Lean_Meta_findCore___closed__1;
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_29 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5(x_1, x_2, x_17, x_26, x_27, x_28, x_3, x_4, x_5, x_6, x_13);
lean_dec(x_17);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = l_Lean_Meta_findCore___lambda__1(x_1, x_2, x_30, x_3, x_4, x_5, x_6, x_31);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_33 = !lean_is_exclusive(x_29);
if (x_33 == 0)
{
return x_29;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__3(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
return x_14;
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Std_AssocList_foldlM___at_Lean_Meta_findCore___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_13 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_14 = l_Array_foldlMUnsafe_fold___at_Lean_Meta_findCore___spec__5(x_1, x_2, x_3, x_12, x_13, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_14;
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_6, x_2);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_8 = lean_array_swap(x_4, x_5, x_2);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = l_Lean_Meta_instInhabitedConstantInfo;
x_11 = lean_array_get(x_10, x_4, x_6);
lean_inc(x_1);
lean_inc(x_3);
x_12 = lean_apply_2(x_1, x_11, x_3);
x_13 = lean_unbox(x_12);
lean_dec(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lean_nat_add(x_6, x_14);
lean_dec(x_6);
x_6 = x_15;
goto _start;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_array_swap(x_4, x_5, x_6);
x_18 = lean_unsigned_to_nat(1u);
x_19 = lean_nat_add(x_5, x_18);
lean_dec(x_5);
x_20 = lean_nat_add(x_6, x_18);
lean_dec(x_6);
x_4 = x_17;
x_5 = x_19;
x_6 = x_20;
goto _start;
}
}
}
}
uint8_t l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = l_Lean_ConstantInfo_name(x_1);
x_4 = l_Lean_ConstantInfo_name(x_2);
x_5 = l_Lean_Name_lt(x_3, x_4);
lean_dec(x_4);
lean_dec(x_3);
return x_5;
}
}
static lean_object* _init_l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1___boxed), 2, 0);
return x_1;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_13; 
x_13 = lean_nat_dec_lt(x_2, x_3);
if (x_13 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_14 = lean_nat_add(x_2, x_3);
x_15 = lean_unsigned_to_nat(2u);
x_16 = lean_nat_div(x_14, x_15);
lean_dec(x_14);
x_46 = l_Lean_Meta_instInhabitedConstantInfo;
x_47 = lean_array_get(x_46, x_1, x_16);
x_48 = lean_array_get(x_46, x_1, x_2);
x_49 = l_Lean_ConstantInfo_name(x_47);
lean_dec(x_47);
x_50 = l_Lean_ConstantInfo_name(x_48);
lean_dec(x_48);
x_51 = l_Lean_Name_lt(x_49, x_50);
lean_dec(x_50);
lean_dec(x_49);
if (x_51 == 0)
{
x_17 = x_1;
goto block_45;
}
else
{
lean_object* x_52; 
x_52 = lean_array_swap(x_1, x_2, x_16);
x_17 = x_52;
goto block_45;
}
block_45:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = l_Lean_Meta_instInhabitedConstantInfo;
x_19 = lean_array_get(x_18, x_17, x_3);
x_20 = lean_array_get(x_18, x_17, x_2);
x_21 = l_Lean_ConstantInfo_name(x_19);
x_22 = l_Lean_ConstantInfo_name(x_20);
lean_dec(x_20);
x_23 = l_Lean_Name_lt(x_21, x_22);
lean_dec(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_24 = lean_array_get(x_18, x_17, x_16);
x_25 = l_Lean_ConstantInfo_name(x_24);
lean_dec(x_24);
x_26 = l_Lean_Name_lt(x_25, x_21);
lean_dec(x_21);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; 
lean_dec(x_16);
x_27 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_28 = l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(x_27, x_3, x_19, x_17, x_2, x_2);
x_4 = x_28;
goto block_12;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_dec(x_19);
x_29 = lean_array_swap(x_17, x_16, x_3);
lean_dec(x_16);
x_30 = lean_array_get(x_18, x_29, x_3);
x_31 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_32 = l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(x_31, x_3, x_30, x_29, x_2, x_2);
x_4 = x_32;
goto block_12;
}
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_21);
lean_dec(x_19);
x_33 = lean_array_swap(x_17, x_2, x_3);
x_34 = lean_array_get(x_18, x_33, x_16);
x_35 = lean_array_get(x_18, x_33, x_3);
x_36 = l_Lean_ConstantInfo_name(x_34);
lean_dec(x_34);
x_37 = l_Lean_ConstantInfo_name(x_35);
x_38 = l_Lean_Name_lt(x_36, x_37);
lean_dec(x_37);
lean_dec(x_36);
if (x_38 == 0)
{
lean_object* x_39; lean_object* x_40; 
lean_dec(x_16);
x_39 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_40 = l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(x_39, x_3, x_35, x_33, x_2, x_2);
x_4 = x_40;
goto block_12;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
lean_dec(x_35);
x_41 = lean_array_swap(x_33, x_16, x_3);
lean_dec(x_16);
x_42 = lean_array_get(x_18, x_41, x_3);
x_43 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1;
lean_inc_n(x_2, 2);
x_44 = l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(x_43, x_3, x_42, x_41, x_2, x_2);
x_4 = x_44;
goto block_12;
}
}
}
}
block_12:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lean_nat_dec_le(x_3, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1(x_6, x_2, x_5);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_1 = x_8;
x_2 = x_10;
goto _start;
}
else
{
lean_dec(x_5);
lean_dec(x_2);
return x_6;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" : ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n");
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
uint8_t x_12; 
x_12 = x_3 < x_2;
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_array_uget(x_1, x_3);
x_15 = l_Lean_ConstantInfo_type(x_14);
x_16 = l_Lean_Meta_ppExpr(x_15, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; size_t x_32; size_t x_33; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_Lean_ConstantInfo_name(x_14);
lean_dec(x_14);
x_20 = 1;
x_21 = l_Lean_Name_toString(x_19, x_20);
x_22 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1;
x_23 = lean_string_append(x_22, x_21);
lean_dec(x_21);
x_24 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2;
x_25 = lean_string_append(x_23, x_24);
x_26 = l_Std_Format_defWidth;
x_27 = lean_format_pretty(x_17, x_26);
x_28 = lean_string_append(x_25, x_27);
lean_dec(x_27);
x_29 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3;
x_30 = lean_string_append(x_28, x_29);
x_31 = lean_string_append(x_4, x_30);
lean_dec(x_30);
x_32 = 1;
x_33 = x_3 + x_32;
x_3 = x_33;
x_4 = x_31;
x_11 = x_18;
goto _start;
}
else
{
uint8_t x_35; 
lean_dec(x_14);
lean_dec(x_4);
x_35 = !lean_is_exclusive(x_16);
if (x_35 == 0)
{
return x_16;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_16, 0);
x_37 = lean_ctor_get(x_16, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_16);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
}
lean_object* l_Lean_Meta_find(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_11 = l_Lean_Meta_findCore(x_2, x_3, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; size_t x_20; size_t x_21; lean_object* x_22; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_array_get_size(x_12);
x_15 = lean_unsigned_to_nat(1u);
x_16 = lean_nat_sub(x_14, x_15);
lean_dec(x_14);
x_17 = lean_unsigned_to_nat(0u);
x_18 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1(x_12, x_17, x_16);
lean_dec(x_16);
x_19 = lean_array_get_size(x_18);
x_20 = lean_usize_of_nat(x_19);
lean_dec(x_19);
x_21 = 0;
x_22 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3(x_18, x_20, x_21, x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_13);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_18);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
return x_22;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_22);
if (x_27 == 0)
{
return x_22;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_22, 0);
x_29 = lean_ctor_get(x_22, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_22);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_11);
if (x_31 == 0)
{
return x_11;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_11, 0);
x_33 = lean_ctor_get(x_11, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_11);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Array_qpartition_loop___at_Lean_Meta_find___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Array_qpartition_loop___at_Lean_Meta_find___spec__2(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1___lambda__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Array_qsort_sort___at_Lean_Meta_find___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_qsort_sort___at_Lean_Meta_find___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
size_t x_12; size_t x_13; lean_object* x_14; 
x_12 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_13 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_14 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3(x_1, x_12, x_13, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_Lean_Meta_find___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Meta_find(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_5);
lean_dec(x_4);
return x_11;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_printPrefix___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Elab");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__2;
x_2 = l_Lean_Elab_Command_printPrefix___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Command");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__4;
x_2 = l_Lean_Elab_Command_printPrefix___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("printPrefix");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__6;
x_2 = l_Lean_Elab_Command_printPrefix___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_printPrefix___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("#print prefix ");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__11;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_printPrefix___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__10;
x_2 = l_Lean_Elab_Command_printPrefix___closed__12;
x_3 = l_Lean_Elab_Command_printPrefix___closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__8;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Elab_Command_printPrefix___closed__16;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_printPrefix() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_printPrefix___closed__17;
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; 
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; 
lean_dec(x_5);
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabPrintPrefix_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_unsupportedSyntaxExceptionId;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_6, 3);
x_10 = lean_ctor_get(x_2, 3);
lean_inc(x_10);
lean_inc(x_10);
x_11 = l_Lean_Elab_getBetterRef(x_9, x_10);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_4, x_5, x_6, x_7, x_8);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Term_instAddErrorMessageContextTermElabM___spec__1(x_13, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_14);
lean_dec(x_2);
lean_dec(x_10);
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_15, 0);
x_20 = lean_ctor_get(x_15, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_15);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_11);
lean_ctor_set(x_21, 1, x_19);
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
return x_22;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabPrintPrefix___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = !lean_is_exclusive(x_7);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_7, 3);
x_12 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_dec(x_1);
lean_ctor_set(x_7, 3, x_12);
x_13 = l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_14 = lean_ctor_get(x_7, 0);
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get(x_7, 2);
x_17 = lean_ctor_get(x_7, 3);
x_18 = lean_ctor_get(x_7, 4);
x_19 = lean_ctor_get(x_7, 5);
x_20 = lean_ctor_get(x_7, 6);
x_21 = lean_ctor_get(x_7, 7);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_7);
x_22 = l_Lean_replaceRef(x_1, x_17);
lean_dec(x_17);
lean_dec(x_1);
x_23 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_23, 0, x_14);
lean_ctor_set(x_23, 1, x_15);
lean_ctor_set(x_23, 2, x_16);
lean_ctor_set(x_23, 3, x_22);
lean_ctor_set(x_23, 4, x_18);
lean_ctor_set(x_23, 5, x_19);
lean_ctor_set(x_23, 6, x_20);
lean_ctor_set(x_23, 7, x_21);
x_24 = l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4(x_2, x_3, x_4, x_5, x_6, x_23, x_8, x_9);
lean_dec(x_8);
lean_dec(x_23);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_24;
}
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown constant '");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_9 = lean_box(0);
x_10 = l_Lean_mkConst(x_1, x_9);
x_11 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2;
x_13 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
x_14 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_Lean_throwError___at___private_Lean_Elab_Term_0__Lean_Elab_Term_applyAttributesCore___spec__1(x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_16;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1;
x_11 = l_List_mapTR___rarg(x_10, x_1);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_9);
return x_12;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_inc(x_6);
lean_inc(x_1);
x_9 = l_Lean_resolveGlobalName___at_Lean_Elab_Term_resolveName___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_box(0);
x_13 = l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(x_10, x_12);
x_14 = l_List_isEmpty___rarg(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_1);
x_15 = lean_box(0);
x_16 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2(x_13, x_15, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_13);
x_17 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_11);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
return x_17;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_17);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected identifier");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(x_10);
x_12 = l_List_isEmpty___rarg(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_8);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_11);
x_14 = !lean_is_exclusive(x_6);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_6, 3);
x_16 = l_Lean_replaceRef(x_1, x_15);
lean_dec(x_15);
lean_dec(x_1);
lean_ctor_set(x_6, 3, x_16);
x_17 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5(x_9, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_18 = lean_ctor_get(x_6, 0);
x_19 = lean_ctor_get(x_6, 1);
x_20 = lean_ctor_get(x_6, 2);
x_21 = lean_ctor_get(x_6, 3);
x_22 = lean_ctor_get(x_6, 4);
x_23 = lean_ctor_get(x_6, 5);
x_24 = lean_ctor_get(x_6, 6);
x_25 = lean_ctor_get(x_6, 7);
lean_inc(x_25);
lean_inc(x_24);
lean_inc(x_23);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_6);
x_26 = l_Lean_replaceRef(x_1, x_21);
lean_dec(x_21);
lean_dec(x_1);
x_27 = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(x_27, 0, x_18);
lean_ctor_set(x_27, 1, x_19);
lean_ctor_set(x_27, 2, x_20);
lean_ctor_set(x_27, 3, x_26);
lean_ctor_set(x_27, 4, x_22);
lean_ctor_set(x_27, 5, x_23);
lean_ctor_set(x_27, 6, x_24);
lean_ctor_set(x_27, 7, x_25);
x_28 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5(x_9, x_2, x_3, x_4, x_5, x_27, x_7, x_8);
return x_28;
}
}
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3;
x_30 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabPrintPrefix___spec__3(x_1, x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_30;
}
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; 
x_8 = l_Lean_ConstantInfo_name(x_2);
x_9 = l_Lean_Name_isPrefixOf(x_1, x_8);
lean_dec(x_8);
x_10 = lean_box(x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_10);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
uint8_t x_11; 
x_11 = l_String_isEmpty(x_2);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; 
x_12 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_12, 0, x_2);
x_13 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = 0;
x_15 = l_Lean_Elab_logAt___at_Lean_Elab_Term_traceAtCmdPos___spec__3(x_1, x_13, x_14, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; 
lean_dec(x_2);
x_16 = lean_box(0);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_10);
return x_17;
}
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1;
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_2);
x_13 = l_Lean_Meta_find(x_12, x_1, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_String_isEmpty(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
lean_dec(x_4);
lean_dec(x_2);
x_17 = lean_box(0);
x_18 = l_Lean_Elab_Command_elabPrintPrefix___lambda__2(x_3, x_14, x_17, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_18;
}
else
{
lean_object* x_19; 
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_19 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_15);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_2);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Command_elabPrintPrefix___lambda__2(x_3, x_14, x_22, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_23;
}
else
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_dec(x_19);
x_26 = lean_ctor_get(x_20, 0);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabPrintPrefix___lambda__1___boxed), 7, 1);
lean_closure_set(x_27, 0, x_26);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_28 = l_Lean_Meta_find(x_14, x_27, x_2, x_5, x_6, x_7, x_8, x_9, x_10, x_25);
if (lean_obj_tag(x_28) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
x_31 = lean_box(0);
x_32 = l_Lean_Elab_Command_elabPrintPrefix___lambda__2(x_3, x_29, x_31, x_5, x_6, x_7, x_8, x_9, x_10, x_30);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_32;
}
else
{
uint8_t x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_33 = !lean_is_exclusive(x_28);
if (x_33 == 0)
{
return x_28;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_28, 0);
x_35 = lean_ctor_get(x_28, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_28);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
return x_36;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
lean_dec(x_24);
lean_dec(x_20);
lean_dec(x_2);
x_37 = lean_ctor_get(x_19, 1);
lean_inc(x_37);
lean_dec(x_19);
x_38 = lean_box(0);
x_39 = l_Lean_Elab_Command_elabPrintPrefix___lambda__2(x_3, x_14, x_38, x_5, x_6, x_7, x_8, x_9, x_10, x_37);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_40 = !lean_is_exclusive(x_19);
if (x_40 == 0)
{
return x_19;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_19, 0);
x_42 = lean_ctor_get(x_19, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_19);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
}
else
{
uint8_t x_44; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = !lean_is_exclusive(x_13);
if (x_44 == 0)
{
return x_13;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_13, 0);
x_46 = lean_ctor_get(x_13, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_13);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabPrintPrefix___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; 
x_1 = 1;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_printPrefix___closed__8;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_Elab_Command_printPrefix___closed__14;
lean_inc(x_11);
x_13 = l_Lean_Syntax_isOfKind(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_2);
x_14 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg(x_4);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = l_Lean_Syntax_getId(x_11);
x_16 = lean_box(0);
x_17 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabPrintPrefix___lambda__1___boxed), 7, 1);
lean_closure_set(x_17, 0, x_15);
x_18 = l_Lean_Elab_Command_elabPrintPrefix___closed__1;
x_19 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabPrintPrefix___lambda__3), 11, 4);
lean_closure_set(x_19, 0, x_17);
lean_closure_set(x_19, 1, x_18);
lean_closure_set(x_19, 2, x_9);
lean_closure_set(x_19, 3, x_11);
x_20 = l_Lean_Elab_Command_liftTermElabM___rarg(x_16, x_19, x_2, x_3, x_4);
return x_20;
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwError___at_Lean_Elab_Command_elabPrintPrefix___spec__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_9;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Command_elabPrintPrefix___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_Elab_Command_elabPrintPrefix___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabPrintPrefix___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_Elab_Command_elabPrintPrefix(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_PrintPrefix(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_instInhabitedConstantInfo___closed__1 = _init_l_Lean_Meta_instInhabitedConstantInfo___closed__1();
l_Lean_Meta_instInhabitedConstantInfo___closed__2 = _init_l_Lean_Meta_instInhabitedConstantInfo___closed__2();
lean_mark_persistent(l_Lean_Meta_instInhabitedConstantInfo___closed__2);
l_Lean_Meta_instInhabitedConstantInfo___closed__3 = _init_l_Lean_Meta_instInhabitedConstantInfo___closed__3();
lean_mark_persistent(l_Lean_Meta_instInhabitedConstantInfo___closed__3);
l_Lean_Meta_instInhabitedConstantInfo___closed__4 = _init_l_Lean_Meta_instInhabitedConstantInfo___closed__4();
lean_mark_persistent(l_Lean_Meta_instInhabitedConstantInfo___closed__4);
l_Lean_Meta_instInhabitedConstantInfo___closed__5 = _init_l_Lean_Meta_instInhabitedConstantInfo___closed__5();
lean_mark_persistent(l_Lean_Meta_instInhabitedConstantInfo___closed__5);
l_Lean_Meta_instInhabitedConstantInfo = _init_l_Lean_Meta_instInhabitedConstantInfo();
lean_mark_persistent(l_Lean_Meta_instInhabitedConstantInfo);
l_Lean_Meta_FindOptions_stage1___default = _init_l_Lean_Meta_FindOptions_stage1___default();
l_Lean_Meta_FindOptions_checkPrivate___default = _init_l_Lean_Meta_FindOptions_checkPrivate___default();
l_Lean_Meta_findCore___closed__1 = _init_l_Lean_Meta_findCore___closed__1();
lean_mark_persistent(l_Lean_Meta_findCore___closed__1);
l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1 = _init_l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1();
lean_mark_persistent(l_Array_qsort_sort___at_Lean_Meta_find___spec__1___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Meta_find___spec__3___closed__3);
l_Lean_Elab_Command_printPrefix___closed__1 = _init_l_Lean_Elab_Command_printPrefix___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__1);
l_Lean_Elab_Command_printPrefix___closed__2 = _init_l_Lean_Elab_Command_printPrefix___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__2);
l_Lean_Elab_Command_printPrefix___closed__3 = _init_l_Lean_Elab_Command_printPrefix___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__3);
l_Lean_Elab_Command_printPrefix___closed__4 = _init_l_Lean_Elab_Command_printPrefix___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__4);
l_Lean_Elab_Command_printPrefix___closed__5 = _init_l_Lean_Elab_Command_printPrefix___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__5);
l_Lean_Elab_Command_printPrefix___closed__6 = _init_l_Lean_Elab_Command_printPrefix___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__6);
l_Lean_Elab_Command_printPrefix___closed__7 = _init_l_Lean_Elab_Command_printPrefix___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__7);
l_Lean_Elab_Command_printPrefix___closed__8 = _init_l_Lean_Elab_Command_printPrefix___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__8);
l_Lean_Elab_Command_printPrefix___closed__9 = _init_l_Lean_Elab_Command_printPrefix___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__9);
l_Lean_Elab_Command_printPrefix___closed__10 = _init_l_Lean_Elab_Command_printPrefix___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__10);
l_Lean_Elab_Command_printPrefix___closed__11 = _init_l_Lean_Elab_Command_printPrefix___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__11);
l_Lean_Elab_Command_printPrefix___closed__12 = _init_l_Lean_Elab_Command_printPrefix___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__12);
l_Lean_Elab_Command_printPrefix___closed__13 = _init_l_Lean_Elab_Command_printPrefix___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__13);
l_Lean_Elab_Command_printPrefix___closed__14 = _init_l_Lean_Elab_Command_printPrefix___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__14);
l_Lean_Elab_Command_printPrefix___closed__15 = _init_l_Lean_Elab_Command_printPrefix___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__15);
l_Lean_Elab_Command_printPrefix___closed__16 = _init_l_Lean_Elab_Command_printPrefix___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__16);
l_Lean_Elab_Command_printPrefix___closed__17 = _init_l_Lean_Elab_Command_printPrefix___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix___closed__17);
l_Lean_Elab_Command_printPrefix = _init_l_Lean_Elab_Command_printPrefix();
lean_mark_persistent(l_Lean_Elab_Command_printPrefix);
l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabPrintPrefix___spec__1___rarg___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__2);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__3);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabPrintPrefix___spec__6___closed__4);
l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1 = _init_l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabPrintPrefix___spec__5___lambda__2___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__2);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabPrintPrefix___spec__2___closed__3);
l_Lean_Elab_Command_elabPrintPrefix___closed__1 = _init_l_Lean_Elab_Command_elabPrintPrefix___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabPrintPrefix___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
