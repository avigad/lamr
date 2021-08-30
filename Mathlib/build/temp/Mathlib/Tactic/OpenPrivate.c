// Lean compiler output
// Module: Mathlib.Tactic.OpenPrivate
// Imports: Init Lean.Elab.Command Lean.Util.FoldConsts
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
static lean_object* l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2;
lean_object* l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isRecCore(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__3;
size_t l_USize_add(size_t, size_t);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(uint8_t, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__31;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_head_x21___at_Lean_Elab_Command_instMonadOptionsCommandElabM___spec__1(lean_object*);
lean_object* l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__7;
extern lean_object* l_Lean_nullKind;
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
uint8_t l_USize_decEq(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__10;
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__32;
extern lean_object* l_Std_Format_defWidth;
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__5;
static lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5;
lean_object* l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(lean_object*);
lean_object* l_Lean_Environment_moduleIdxForModule_x3f(lean_object*, lean_object*);
lean_object* l_List_mapTR___rarg(lean_object*, lean_object*);
static lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3;
lean_object* l_Lean_getConstInfo___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__16;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
uint8_t l_Lean_instDecidableEqModuleIdx(lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6;
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__7;
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__24;
lean_object* l_Lean_Elab_log___at_Lean_Elab_Command_runLinters___spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Elab_Command_elabExportPrivate___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__15;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__3;
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivate(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
uint8_t l_Lean_isPrivateName(lean_object*);
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2;
lean_object* l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1(lean_object*, size_t, lean_object*);
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__3(lean_object*);
lean_object* l_Lean_compileDecl___at_Lean_Elab_Command_elabExportPrivate___spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1;
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_setEnv___at_Lean_Elab_Command_expandDeclId___spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__6;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1(lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__2(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(lean_object*, size_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
lean_object* lean_array_fget(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__11;
static lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_instInhabitedCommandElabM(lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1;
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__1(lean_object*);
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__26;
lean_object* l_Lean_Environment_moduleIdxForModule_x3f___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__2(lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2;
lean_object* l_Lean_KernelException_toMessageData(lean_object*, lean_object*);
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
static lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7;
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__1(lean_object*, lean_object*);
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
static lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1;
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3;
static lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1;
lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___boxed(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__12;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1;
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_format_pretty(lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2;
uint8_t l_Array_contains___at_Lean_findField_x3f___spec__1(lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1;
static lean_object* l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1;
static lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1;
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4;
lean_object* l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2;
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2;
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__2;
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__17;
static lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
static lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___closed__2;
lean_object* l___private_Init_Util_0__mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_exportPrivate;
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__22;
lean_object* l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3;
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_declsInModuleIdx(lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__8;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__4;
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__21;
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__8;
lean_object* l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(lean_object*, lean_object*);
extern lean_object* l_Lean_Expr_FindImpl_initCache;
static lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1;
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__4;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__19;
static lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__1;
static lean_object* l_Lean_Elab_Command_exportPrivate___closed__1;
static lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1;
lean_object* l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_modifyScope(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__27;
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__2;
lean_object* lean_panic_fn(lean_object*, lean_object*);
static lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
uint8_t lean_is_aux_recursor(lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20(lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__9;
lean_object* l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__1(lean_object*);
lean_object* l_Lean_Elab_Command_openPrivate;
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef(lean_object*, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4;
lean_object* l_Lean_Meta_collectPrivateIn(lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__29;
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__20;
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___lambda__1(lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1;
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__5;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__14;
extern lean_object* l_Lean_Expr_FoldConstsImpl_initCache;
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Expr_FindImpl_findM_x3f_visit(lean_object*, size_t, lean_object*, lean_object*);
static lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__28;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__25;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_value_x21(lean_object*);
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__18;
static lean_object* l_Lean_Elab_Command_openPrivate___closed__30;
lean_object* lean_compile_decl(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1___boxed(lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_getScope___rarg(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__13;
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__6;
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15(lean_object*, lean_object*);
extern lean_object* l___private_Lean_MonadEnv_0__Lean_supportedRecursors;
lean_object* l_Lean_Syntax_formatStxAux(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Command_openPrivate___closed__23;
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(lean_object*);
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instDecidableEqModuleIdx___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3;
lean_object* lean_add_decl(lean_object*, lean_object*);
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l_Lean_isPrivateName(x_1);
if (x_3 == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_box(0);
x_5 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_2, x_1, x_4);
return x_5;
}
}
}
static lean_object* _init_l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Meta_collectPrivateIn___rarg___lambda__1), 2, 0);
return x_1;
}
}
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = l_Lean_ConstantInfo_value_x21(x_3);
x_7 = 8192;
x_8 = l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1;
x_9 = l_Lean_Expr_FoldConstsImpl_initCache;
x_10 = l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(x_8, x_7, x_6, x_2, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
lean_dec(x_10);
x_12 = lean_apply_2(x_5, lean_box(0), x_11);
return x_12;
}
}
lean_object* l_Lean_Meta_collectPrivateIn___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_inc(x_1);
x_7 = l_Lean_getConstInfo___rarg(x_1, x_2, x_3, x_4);
x_8 = lean_alloc_closure((void*)(l_Lean_Meta_collectPrivateIn___rarg___lambda__2___boxed), 3, 2);
lean_closure_set(x_8, 0, x_1);
lean_closure_set(x_8, 1, x_5);
x_9 = lean_apply_4(x_6, lean_box(0), lean_box(0), x_7, x_8);
return x_9;
}
}
lean_object* l_Lean_Meta_collectPrivateIn(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Meta_collectPrivateIn___rarg), 5, 0);
return x_2;
}
}
lean_object* l_Lean_Meta_collectPrivateIn___rarg___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Meta_collectPrivateIn___rarg___lambda__2(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
lean_object* l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_array_get_size(x_1);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; 
lean_dec(x_3);
x_6 = lean_box(0);
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_array_fget(x_1, x_3);
x_8 = lean_name_eq(x_7, x_2);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_3, x_9);
lean_dec(x_3);
x_3 = x_10;
goto _start;
}
else
{
lean_object* x_12; 
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_3);
return x_12;
}
}
}
}
lean_object* l_Lean_Environment_moduleIdxForModule_x3f(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = l_Lean_Environment_allImportedModuleNames(x_1);
x_4 = lean_unsigned_to_nat(0u);
x_5 = l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1(x_3, x_2, x_4);
lean_dec(x_3);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_box(0);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_5);
if (x_7 == 0)
{
return x_5;
}
else
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_5, 0);
lean_inc(x_8);
lean_dec(x_5);
x_9 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_9, 0, x_8);
return x_9;
}
}
}
}
lean_object* l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Array_indexOfAux___at_Lean_Environment_moduleIdxForModule_x3f___spec__1(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Lean_Environment_moduleIdxForModule_x3f___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Environment_moduleIdxForModule_x3f(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
uint8_t l_Lean_instDecidableEqModuleIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lean_nat_dec_eq(x_1, x_2);
return x_3;
}
}
lean_object* l_Lean_instDecidableEqModuleIdx___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_Lean_instDecidableEqModuleIdx(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
return x_2;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_4 = lean_ctor_get(x_3, 0);
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 2);
x_7 = lean_nat_dec_eq(x_5, x_1);
if (x_7 == 0)
{
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_9; 
lean_inc(x_4);
x_9 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_2);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
}
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = x_3 == x_4;
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; size_t x_9; size_t x_10; 
x_7 = lean_array_uget(x_2, x_3);
x_8 = l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1(x_1, x_5, x_7);
lean_dec(x_7);
x_9 = 1;
x_10 = x_3 + x_9;
x_3 = x_10;
x_5 = x_8;
goto _start;
}
else
{
return x_5;
}
}
}
lean_object* l_Lean_Environment_declsInModuleIdx(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_3 = lean_box(0);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_array_get_size(x_5);
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_lt(x_7, x_6);
if (x_8 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_3;
}
else
{
uint8_t x_9; 
x_9 = lean_nat_dec_le(x_6, x_6);
if (x_9 == 0)
{
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
return x_3;
}
else
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = 0;
x_11 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_12 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2(x_2, x_5, x_10, x_11, x_3);
lean_dec(x_5);
lean_dec(x_2);
return x_12;
}
}
}
}
lean_object* l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Std_AssocList_foldlM___at_Lean_Environment_declsInModuleIdx___spec__1(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_1);
return x_4;
}
}
lean_object* l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; lean_object* x_8; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = l_Array_foldlMUnsafe_fold___at_Lean_Environment_declsInModuleIdx___spec__2(x_1, x_2, x_6, x_7, x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabOpenPrivateLike_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabOpenPrivateLike_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_4);
lean_dec(x_3);
x_5 = lean_box(0);
x_6 = lean_apply_1(x_2, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; 
lean_dec(x_4);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_apply_1(x_3, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_7);
lean_dec(x_3);
x_10 = lean_apply_1(x_4, x_1);
return x_10;
}
}
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabOpenPrivateLike_match__3___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__10(x_2, x_3, x_4, x_8);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_19, 6, x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_Command_expandDeclId___spec__10(x_2, x_19, x_4, x_8);
return x_20;
}
}
}
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_Elab_Command_getScope___rarg(x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_Command_getScope___rarg(x_3, x_11);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_15, 3);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_ResolveName_resolveGlobalName(x_8, x_12, x_16, x_1);
lean_dec(x_12);
lean_ctor_set(x_13, 0, x_17);
return x_13;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_13, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_13);
x_20 = lean_ctor_get(x_18, 3);
lean_inc(x_20);
lean_dec(x_18);
x_21 = l_Lean_ResolveName_resolveGlobalName(x_8, x_12, x_20, x_1);
lean_dec(x_12);
x_22 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_19);
return x_22;
}
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown constant '");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'");
return x_1;
}
}
static lean_object* _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_box(0);
x_6 = l_Lean_mkConst(x_1, x_5);
x_7 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_7, 0, x_6);
x_8 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2;
x_9 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_9, 0, x_8);
lean_ctor_set(x_9, 1, x_7);
x_10 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4;
x_11 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_11, x_2, x_3, x_4);
return x_12;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1___boxed), 1, 0);
return x_1;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1;
x_7 = l_List_mapTR___rarg(x_6, x_1);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_5);
return x_8;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_inc(x_1);
x_5 = l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5(x_1, x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = l_List_filterAux___at_Lean_resolveGlobalConstCore___spec__1(x_6, x_8);
x_10 = l_List_isEmpty___rarg(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_1);
x_11 = lean_box(0);
x_12 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2(x_9, x_11, x_2, x_3, x_7);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
else
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_9);
x_13 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6(x_1, x_2, x_3, x_7);
lean_dec(x_3);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_ctor_get(x_13, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_13);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("expected identifier");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 3)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_ctor_get(x_1, 2);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = l_List_filterMap___at_Lean_resolveGlobalConst___spec__1(x_6);
x_8 = l_List_isEmpty___rarg(x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_7);
lean_ctor_set(x_9, 1, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
lean_dec(x_7);
x_10 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_replaceRef(x_1, x_11);
lean_dec(x_11);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_2, 6);
lean_dec(x_15);
lean_ctor_set(x_2, 6, x_13);
x_16 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4(x_5, x_2, x_3, x_12);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_17 = lean_ctor_get(x_2, 0);
x_18 = lean_ctor_get(x_2, 1);
x_19 = lean_ctor_get(x_2, 2);
x_20 = lean_ctor_get(x_2, 3);
x_21 = lean_ctor_get(x_2, 4);
x_22 = lean_ctor_get(x_2, 5);
lean_inc(x_22);
lean_inc(x_21);
lean_inc(x_20);
lean_inc(x_19);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_2);
x_23 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_23, 0, x_17);
lean_ctor_set(x_23, 1, x_18);
lean_ctor_set(x_23, 2, x_19);
lean_ctor_set(x_23, 3, x_20);
lean_ctor_set(x_23, 4, x_21);
lean_ctor_set(x_23, 5, x_22);
lean_ctor_set(x_23, 6, x_13);
x_24 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4(x_5, x_23, x_3, x_12);
return x_24;
}
}
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3;
x_26 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3(x_1, x_25, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_1);
return x_26;
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = l_Lean_Elab_Command_getRef(x_3, x_4, x_5);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_6, 1);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_Lean_replaceRef(x_1, x_7);
lean_dec(x_7);
lean_dec(x_1);
x_10 = !lean_is_exclusive(x_3);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_3, 6);
lean_dec(x_11);
lean_ctor_set(x_3, 6, x_9);
x_12 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8(x_2, x_3, x_4, x_8);
lean_dec(x_4);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_13 = lean_ctor_get(x_3, 0);
x_14 = lean_ctor_get(x_3, 1);
x_15 = lean_ctor_get(x_3, 2);
x_16 = lean_ctor_get(x_3, 3);
x_17 = lean_ctor_get(x_3, 4);
x_18 = lean_ctor_get(x_3, 5);
lean_inc(x_18);
lean_inc(x_17);
lean_inc(x_16);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_dec(x_3);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_14);
lean_ctor_set(x_19, 2, x_15);
lean_ctor_set(x_19, 3, x_16);
lean_ctor_set(x_19, 4, x_17);
lean_ctor_set(x_19, 5, x_18);
lean_ctor_set(x_19, 6, x_9);
x_20 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8(x_2, x_19, x_4, x_8);
lean_dec(x_4);
return x_20;
}
}
}
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___lambda__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_box(0);
x_3 = l_Lean_mkConst(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ambiguous identifier '");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("', possible interpretations: ");
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___lambda__1), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
lean_object* l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_5 = l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2(x_1, x_2, x_3, x_4);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_box(0);
x_9 = 0;
x_10 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_11 = l_Lean_Syntax_formatStxAux(x_8, x_9, x_10, x_1);
x_12 = l_Std_Format_defWidth;
x_13 = lean_format_pretty(x_11, x_12);
x_14 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2;
x_17 = lean_string_append(x_15, x_16);
x_18 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3;
x_19 = l_List_mapTR___rarg(x_18, x_6);
x_20 = l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__1(x_19);
x_21 = lean_string_append(x_17, x_20);
lean_dec(x_20);
x_22 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
x_23 = lean_string_append(x_21, x_22);
x_24 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_25, 0, x_24);
x_26 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__7(x_1, x_25, x_2, x_3, x_7);
return x_26;
}
else
{
lean_object* x_27; 
x_27 = lean_ctor_get(x_6, 1);
lean_inc(x_27);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_28 = !lean_is_exclusive(x_5);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_5, 0);
lean_dec(x_29);
x_30 = lean_ctor_get(x_6, 0);
lean_inc(x_30);
lean_dec(x_6);
lean_ctor_set(x_5, 0, x_30);
return x_5;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_5, 1);
lean_inc(x_31);
lean_dec(x_5);
x_32 = lean_ctor_get(x_6, 0);
lean_inc(x_32);
lean_dec(x_6);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_27);
x_34 = lean_ctor_get(x_5, 1);
lean_inc(x_34);
lean_dec(x_5);
x_35 = lean_box(0);
x_36 = 0;
x_37 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_38 = l_Lean_Syntax_formatStxAux(x_35, x_36, x_37, x_1);
x_39 = l_Std_Format_defWidth;
x_40 = lean_format_pretty(x_38, x_39);
x_41 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1;
x_42 = lean_string_append(x_41, x_40);
lean_dec(x_40);
x_43 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2;
x_44 = lean_string_append(x_42, x_43);
x_45 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3;
x_46 = l_List_mapTR___rarg(x_45, x_6);
x_47 = l_List_toString___at_Lean_resolveGlobalConstNoOverloadCore___spec__1(x_46);
x_48 = lean_string_append(x_44, x_47);
lean_dec(x_47);
x_49 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
x_50 = lean_string_append(x_48, x_49);
x_51 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_51, 0, x_50);
x_52 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__7(x_1, x_52, x_2, x_3, x_34);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_5);
if (x_54 == 0)
{
return x_5;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_5, 0);
x_56 = lean_ctor_get(x_5, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_5);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_5 = l_Lean_Elab_Command_getRef(x_2, x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_2, 4);
lean_inc(x_8);
lean_inc(x_8);
x_9 = l_Lean_Elab_getBetterRef(x_6, x_8);
lean_dec(x_6);
x_10 = l_Lean_addMessageContextPartial___at_Lean_Elab_Command_instAddMessageContextCommandElabM___spec__1(x_1, x_2, x_3, x_7);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_Lean_Elab_addMacroStack___at_Lean_Elab_Command_instAddErrorMessageContextCommandElabM___spec__1(x_11, x_8, x_2, x_3, x_12);
lean_dec(x_2);
lean_dec(x_8);
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_9);
lean_ctor_set(x_16, 1, x_15);
lean_ctor_set_tag(x_13, 1);
lean_ctor_set(x_13, 0, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_17);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
return x_20;
}
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_5, 0);
x_8 = lean_ctor_get(x_5, 1);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec(x_7);
lean_inc(x_1);
x_10 = lean_environment_find(x_9, x_1);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_free_object(x_5);
x_11 = lean_box(0);
x_12 = l_Lean_mkConst(x_1, x_11);
x_13 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2;
x_15 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4;
x_17 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11(x_17, x_2, x_3, x_8);
return x_18;
}
else
{
lean_object* x_19; 
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_10, 0);
lean_inc(x_19);
lean_dec(x_10);
lean_ctor_set(x_5, 0, x_19);
return x_5;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_5, 0);
x_21 = lean_ctor_get(x_5, 1);
lean_inc(x_21);
lean_inc(x_20);
lean_dec(x_5);
x_22 = lean_ctor_get(x_20, 0);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_1);
x_23 = lean_environment_find(x_22, x_1);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_24 = lean_box(0);
x_25 = l_Lean_mkConst(x_1, x_24);
x_26 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_26, 0, x_25);
x_27 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11(x_30, x_2, x_3, x_21);
return x_31;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_dec(x_1);
x_32 = lean_ctor_get(x_23, 0);
lean_inc(x_32);
lean_dec(x_23);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_21);
return x_33;
}
}
}
}
lean_object* l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10(x_1, x_3, x_4, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; size_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_8 = lean_ctor_get(x_6, 0);
x_9 = l_Lean_ConstantInfo_value_x21(x_8);
lean_dec(x_8);
x_10 = 8192;
x_11 = l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1;
x_12 = l_Lean_Expr_FoldConstsImpl_initCache;
x_13 = l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(x_11, x_10, x_9, x_2, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
lean_ctor_set(x_6, 0, x_14);
return x_6;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; size_t x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_ctor_get(x_6, 0);
x_16 = lean_ctor_get(x_6, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_6);
x_17 = l_Lean_ConstantInfo_value_x21(x_15);
lean_dec(x_15);
x_18 = 8192;
x_19 = l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1;
x_20 = l_Lean_Expr_FoldConstsImpl_initCache;
x_21 = l_Lean_Expr_FoldConstsImpl_fold_visit___rarg(x_19, x_18, x_17, x_2, x_20);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_16);
return x_23;
}
}
else
{
uint8_t x_24; 
lean_dec(x_2);
x_24 = !lean_is_exclusive(x_6);
if (x_24 == 0)
{
return x_6;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_6, 0);
x_26 = lean_ctor_get(x_6, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_6);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_6);
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_array_uget(x_1, x_3);
lean_inc(x_6);
lean_inc(x_5);
x_11 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1(x_10, x_5, x_6, x_7);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_5);
x_14 = l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9(x_12, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; size_t x_17; size_t x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = 1;
x_18 = x_3 + x_17;
x_3 = x_18;
x_4 = x_15;
x_7 = x_16;
goto _start;
}
else
{
uint8_t x_20; 
lean_dec(x_6);
lean_dec(x_5);
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
uint8_t x_24; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_11);
if (x_24 == 0)
{
return x_11;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_11, 0);
x_26 = lean_ctor_get(x_11, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_11);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
}
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_6; 
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_2);
lean_ctor_set(x_6, 1, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = l_Lean_isPrivateName(x_7);
if (x_9 == 0)
{
lean_dec(x_7);
x_1 = x_8;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_box(0);
x_12 = l_Std_RBNode_insert___at_Lean_NameSet_insert___spec__1(x_2, x_7, x_11);
x_1 = x_8;
x_2 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unknown module ");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint8_t x_8; 
x_8 = x_3 < x_2;
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_7);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_10 = lean_array_uget(x_1, x_3);
x_18 = lean_st_ref_get(x_6, x_7);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_ctor_get(x_19, 0);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_Syntax_getId(x_10);
x_23 = l_Lean_Environment_moduleIdxForModule_x3f(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_4);
x_24 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_24, 0, x_10);
x_25 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2;
x_26 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3;
x_28 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_28, x_5, x_6, x_20);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
return x_29;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_29);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
lean_dec(x_10);
x_34 = lean_ctor_get(x_23, 0);
lean_inc(x_34);
lean_dec(x_23);
x_35 = lean_st_ref_get(x_6, x_20);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Lean_Environment_declsInModuleIdx(x_38, x_34);
x_40 = l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13(x_39, x_4, x_5, x_6, x_37);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_43 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_43, 0, x_41);
x_11 = x_43;
x_12 = x_42;
goto block_17;
}
block_17:
{
lean_object* x_13; size_t x_14; size_t x_15; 
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
x_14 = 1;
x_15 = x_3 + x_14;
x_3 = x_15;
x_4 = x_13;
x_7 = x_12;
goto _start;
}
}
}
}
static lean_object* _init_l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n");
return x_1;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
lean_dec(x_1);
x_7 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15(x_4, x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_private_to_user_name(x_5);
if (lean_obj_tag(x_9) == 0)
{
x_1 = x_6;
x_2 = x_8;
goto _start;
}
else
{
lean_object* x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_11 = lean_ctor_get(x_9, 0);
lean_inc(x_11);
lean_dec(x_9);
x_12 = 1;
x_13 = l_Lean_Name_toString(x_11, x_12);
x_14 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1;
x_17 = lean_string_append(x_15, x_16);
x_18 = lean_string_append(x_8, x_17);
lean_dec(x_17);
x_1 = x_6;
x_2 = x_18;
goto _start;
}
}
}
}
static lean_object* _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("none");
return x_1;
}
}
static lean_object* _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1;
x_2 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(some ");
return x_1;
}
}
static lean_object* _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(uint8_t x_1, lean_object* x_2) {
_start:
{
if (x_1 == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_2, 1);
lean_inc(x_5);
lean_dec(x_2);
x_6 = 0;
x_7 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(x_6, x_5);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3;
x_9 = lean_string_append(x_8, x_7);
lean_dec(x_7);
return x_9;
}
else
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_10 = lean_ctor_get(x_4, 0);
lean_inc(x_10);
lean_dec(x_4);
x_11 = 1;
x_12 = l_Lean_Name_toString(x_10, x_11);
x_13 = l_addParenHeuristic(x_12);
lean_dec(x_12);
x_14 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4;
x_15 = lean_string_append(x_14, x_13);
lean_dec(x_13);
x_16 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5;
x_17 = lean_string_append(x_15, x_16);
x_18 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1;
x_19 = lean_string_append(x_18, x_17);
lean_dec(x_17);
x_20 = lean_string_append(x_19, x_7);
lean_dec(x_7);
return x_20;
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_21; 
x_21 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_2, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 1);
lean_inc(x_23);
lean_dec(x_2);
x_24 = 0;
x_25 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(x_24, x_23);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2;
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
return x_27;
}
else
{
lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_28 = lean_ctor_get(x_22, 0);
lean_inc(x_28);
lean_dec(x_22);
x_29 = 1;
x_30 = l_Lean_Name_toString(x_28, x_29);
x_31 = l_addParenHeuristic(x_30);
lean_dec(x_30);
x_32 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4;
x_33 = lean_string_append(x_32, x_31);
lean_dec(x_31);
x_34 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5;
x_35 = lean_string_append(x_33, x_34);
x_36 = lean_string_append(x_35, x_25);
lean_dec(x_25);
return x_36;
}
}
}
}
}
static lean_object* _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[]");
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
lean_object* l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_1);
if (x_3 == 0)
{
uint8_t x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_4 = 1;
x_5 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(x_4, x_1);
x_6 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2;
x_7 = lean_string_append(x_6, x_5);
lean_dec(x_5);
x_8 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3;
x_9 = lean_string_append(x_7, x_8);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = 1;
x_14 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(x_13, x_12);
x_15 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2;
x_16 = lean_string_append(x_15, x_14);
lean_dec(x_14);
x_17 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3;
x_18 = lean_string_append(x_16, x_17);
return x_18;
}
}
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_3);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_2, 0);
x_10 = lean_ctor_get(x_2, 1);
x_11 = lean_ctor_get(x_2, 3);
x_12 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18(x_1, x_9, x_3, x_4, x_5, x_6);
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = l_Lean_Name_isSuffixOf(x_1, x_10);
if (x_16 == 0)
{
x_2 = x_11;
x_3 = x_15;
x_6 = x_14;
goto _start;
}
else
{
lean_object* x_18; 
lean_inc(x_10);
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_10);
lean_ctor_set(x_18, 1, x_15);
x_2 = x_11;
x_3 = x_18;
x_6 = x_14;
goto _start;
}
}
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' not found in the provided declarations:\n");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_instInhabitedCommandElabM(lean_box(0));
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Mathlib.Tactic.OpenPrivate");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean.Elab.Command.elabOpenPrivateLike");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("unreachable code has been reached");
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_1 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3;
x_2 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4;
x_3 = lean_unsigned_to_nat(62u);
x_4 = lean_unsigned_to_nat(11u);
x_5 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5;
x_6 = l___private_Init_Util_0__mkPanicMessageWithDecl(x_1, x_2, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(lean_private_to_user_name), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("provided name is ambiguous: found ");
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, size_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint8_t x_10; 
x_10 = x_5 < x_4;
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_2);
lean_dec(x_1);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_9);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_12 = lean_array_uget(x_3, x_5);
x_20 = l_Lean_Syntax_getId(x_12);
lean_dec(x_12);
x_21 = lean_box(0);
x_78 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18(x_20, x_2, x_21, x_7, x_8, x_9);
x_79 = lean_ctor_get(x_78, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_78, 1);
lean_inc(x_80);
lean_dec(x_78);
x_81 = lean_ctor_get(x_79, 0);
lean_inc(x_81);
lean_dec(x_79);
x_22 = x_81;
x_23 = x_80;
goto block_77;
block_19:
{
lean_object* x_15; size_t x_16; size_t x_17; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = 1;
x_17 = x_5 + x_16;
x_5 = x_17;
x_6 = x_15;
x_9 = x_14;
goto _start;
}
block_77:
{
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; 
lean_dec(x_6);
lean_dec(x_1);
x_24 = 1;
x_25 = l_Lean_Name_toString(x_20, x_24);
x_26 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3;
x_27 = lean_string_append(x_26, x_25);
lean_dec(x_25);
x_28 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1;
x_29 = lean_string_append(x_27, x_28);
x_30 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15(x_2, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_33, x_7, x_8, x_23);
lean_dec(x_8);
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
lean_object* x_39; 
x_39 = lean_ctor_get(x_22, 1);
lean_inc(x_39);
if (lean_obj_tag(x_39) == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_22, 0);
lean_inc(x_40);
lean_dec(x_22);
lean_inc(x_40);
x_41 = lean_private_to_user_name(x_40);
if (lean_obj_tag(x_41) == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_40);
lean_dec(x_20);
x_42 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2;
x_43 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6;
x_44 = lean_panic_fn(x_42, x_43);
lean_inc(x_8);
lean_inc(x_7);
x_45 = lean_apply_3(x_44, x_7, x_8, x_23);
if (lean_obj_tag(x_45) == 0)
{
lean_object* x_46; lean_object* x_47; 
x_46 = lean_ctor_get(x_45, 1);
lean_inc(x_46);
lean_dec(x_45);
x_47 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_47, 0, x_6);
x_13 = x_47;
x_14 = x_46;
goto block_19;
}
else
{
uint8_t x_48; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_45);
if (x_48 == 0)
{
return x_45;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_45, 0);
x_50 = lean_ctor_get(x_45, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_45);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
else
{
lean_object* x_52; lean_object* x_53; 
x_52 = lean_ctor_get(x_41, 0);
lean_inc(x_52);
lean_dec(x_41);
lean_inc(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_20);
x_53 = lean_apply_6(x_1, x_40, x_52, x_20, x_7, x_8, x_23);
if (lean_obj_tag(x_53) == 0)
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
x_55 = lean_ctor_get(x_53, 1);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_20);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_array_push(x_6, x_56);
x_58 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_58, 0, x_57);
x_13 = x_58;
x_14 = x_55;
goto block_19;
}
else
{
uint8_t x_59; 
lean_dec(x_20);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_59 = !lean_is_exclusive(x_53);
if (x_59 == 0)
{
return x_53;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_53, 0);
x_61 = lean_ctor_get(x_53, 1);
lean_inc(x_61);
lean_inc(x_60);
lean_dec(x_53);
x_62 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
return x_62;
}
}
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; 
lean_dec(x_39);
lean_dec(x_20);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_63 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7;
x_64 = l_List_mapTR___rarg(x_63, x_22);
x_65 = l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16(x_64);
x_66 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8;
x_67 = lean_string_append(x_66, x_65);
lean_dec(x_65);
x_68 = l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4;
x_69 = lean_string_append(x_67, x_68);
x_70 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_70, 0, x_69);
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_70);
x_72 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_71, x_7, x_8, x_23);
lean_dec(x_8);
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
return x_72;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_72, 0);
x_75 = lean_ctor_get(x_72, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_72);
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_75);
return x_76;
}
}
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; 
x_5 = x_3 < x_2;
if (x_5 == 0)
{
return x_4;
}
else
{
lean_object* x_6; lean_object* x_7; size_t x_8; size_t x_9; 
x_6 = lean_array_uget(x_1, x_3);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_4);
x_8 = 1;
x_9 = x_3 + x_8;
x_3 = x_9;
x_4 = x_7;
goto _start;
}
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1(lean_object* x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; size_t x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_3, 3);
x_6 = lean_array_get_size(x_1);
x_7 = lean_usize_of_nat(x_6);
lean_dec(x_6);
x_8 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20(x_1, x_7, x_2, x_5);
lean_ctor_set(x_3, 3, x_8);
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; size_t x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
x_11 = lean_ctor_get(x_3, 2);
x_12 = lean_ctor_get(x_3, 3);
x_13 = lean_ctor_get(x_3, 4);
x_14 = lean_ctor_get(x_3, 5);
x_15 = lean_ctor_get(x_3, 6);
lean_inc(x_15);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_16 = lean_array_get_size(x_1);
x_17 = lean_usize_of_nat(x_16);
lean_dec(x_16);
x_18 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20(x_1, x_17, x_2, x_12);
x_19 = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_10);
lean_ctor_set(x_19, 2, x_11);
lean_ctor_set(x_19, 3, x_18);
lean_ctor_set(x_19, 4, x_13);
lean_ctor_set(x_19, 5, x_14);
lean_ctor_set(x_19, 6, x_15);
return x_19;
}
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, size_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
lean_inc(x_8);
lean_inc(x_7);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19(x_2, x_3, x_1, x_11, x_4, x_5, x_7, x_8, x_9);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_12, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
lean_dec(x_12);
x_15 = lean_box_usize(x_4);
x_16 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1___boxed), 3, 2);
lean_closure_set(x_16, 0, x_13);
lean_closure_set(x_16, 1, x_15);
x_17 = l_Lean_Elab_Command_modifyScope(x_16, x_7, x_8, x_14);
lean_dec(x_8);
lean_dec(x_7);
return x_17;
}
else
{
uint8_t x_18; 
lean_dec(x_8);
lean_dec(x_7);
x_18 = !lean_is_exclusive(x_12);
if (x_18 == 0)
{
return x_12;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_12, 0);
x_20 = lean_ctor_get(x_12, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_12);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabOpenPrivateLike___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabOpenPrivateLike___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("found private declarations:\n");
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; lean_object* x_9; 
x_8 = 0;
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_52; 
x_52 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
x_9 = x_52;
goto block_51;
}
else
{
lean_object* x_53; 
x_53 = lean_ctor_get(x_2, 0);
lean_inc(x_53);
lean_dec(x_2);
x_9 = x_53;
goto block_51;
}
block_51:
{
lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_array_get_size(x_9);
x_11 = lean_usize_of_nat(x_10);
lean_dec(x_10);
x_12 = l_Lean_NameSet_empty;
lean_inc(x_6);
lean_inc(x_5);
x_13 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12(x_9, x_11, x_8, x_12, x_5, x_6, x_7);
lean_dec(x_9);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_45; 
x_45 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
x_16 = x_45;
goto block_44;
}
else
{
lean_object* x_46; 
x_46 = lean_ctor_get(x_3, 0);
lean_inc(x_46);
lean_dec(x_3);
x_16 = x_46;
goto block_44;
}
block_44:
{
lean_object* x_17; size_t x_18; lean_object* x_19; 
x_17 = lean_array_get_size(x_16);
x_18 = lean_usize_of_nat(x_17);
lean_dec(x_17);
lean_inc(x_5);
x_19 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14(x_16, x_18, x_8, x_14, x_5, x_6, x_15);
lean_dec(x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Array_isEmpty___rarg(x_1);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
x_24 = lean_box(0);
x_25 = l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(x_1, x_4, x_20, x_8, x_23, x_24, x_5, x_6, x_21);
return x_25;
}
else
{
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
x_27 = lean_box(0);
x_28 = l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(x_1, x_4, x_20, x_8, x_26, x_27, x_5, x_6, x_21);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_29 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__2;
lean_inc(x_20);
x_30 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15(x_20, x_29);
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec(x_30);
x_32 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = 0;
lean_inc(x_6);
lean_inc(x_5);
x_35 = l_Lean_Elab_log___at_Lean_Elab_Command_runLinters___spec__3(x_33, x_34, x_5, x_6, x_21);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec(x_35);
x_38 = l_Lean_Elab_Command_elabOpenPrivateLike___closed__1;
x_39 = l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(x_1, x_4, x_20, x_8, x_38, x_36, x_5, x_6, x_37);
lean_dec(x_36);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
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
uint8_t x_47; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_47 = !lean_is_exclusive(x_13);
if (x_47 == 0)
{
return x_13;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_13, 0);
x_49 = lean_ctor_get(x_13, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_13);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
}
}
lean_object* l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_throwErrorAt___at_Lean_Elab_Command_elabOpenPrivateLike___spec__3(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_6;
}
}
lean_object* l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_resolveGlobalName___at_Lean_Elab_Command_elabOpenPrivateLike___spec__5(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
lean_object* l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__8(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Command_elabOpenPrivateLike___spec__11(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Meta_collectPrivateIn___at_Lean_Elab_Command_elabOpenPrivateLike___spec__9(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__12(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_List_forIn_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__13(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_6;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
size_t x_8; size_t x_9; lean_object* x_10; 
x_8 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_9 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_10 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14(x_1, x_8, x_9, x_4, x_5, x_6, x_7);
lean_dec(x_6);
lean_dec(x_1);
return x_10;
}
}
lean_object* l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lean_unbox(x_1);
lean_dec(x_1);
x_4 = l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17(x_3, x_2);
return x_4;
}
}
lean_object* l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__18(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; size_t x_11; lean_object* x_12; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = lean_unbox_usize(x_5);
lean_dec(x_5);
x_12 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19(x_1, x_2, x_3, x_10, x_11, x_6, x_7, x_8, x_9);
lean_dec(x_3);
return x_12;
}
}
lean_object* l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; size_t x_6; lean_object* x_7; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__20(x_1, x_5, x_6, x_4);
lean_dec(x_1);
return x_7;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; lean_object* x_5; 
x_4 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_5 = l_Lean_Elab_Command_elabOpenPrivateLike___lambda__1(x_1, x_4, x_3);
lean_dec(x_1);
return x_5;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
size_t x_10; lean_object* x_11; 
x_10 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_11 = l_Lean_Elab_Command_elabOpenPrivateLike___lambda__2(x_1, x_2, x_3, x_10, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_6);
lean_dec(x_1);
return x_11;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivateLike___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Command_elabOpenPrivateLike(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_openPrivate___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Elab");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__2;
x_2 = l_Lean_Elab_Command_openPrivate___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Command");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__4;
x_2 = l_Lean_Elab_Command_openPrivate___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("openPrivate");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__6;
x_2 = l_Lean_Elab_Command_openPrivate___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_openPrivate___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("open private");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__11;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_openPrivate___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_openPrivate___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__16;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__14;
x_2 = l_Lean_Elab_Command_openPrivate___closed__17;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_openPrivate___closed__12;
x_3 = l_Lean_Elab_Command_openPrivate___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__20() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optional");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Command_openPrivate___closed__20;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("in");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__22;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__24() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_openPrivate___closed__23;
x_3 = l_Lean_Elab_Command_openPrivate___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__25() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__21;
x_2 = l_Lean_Elab_Command_openPrivate___closed__24;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_openPrivate___closed__19;
x_3 = l_Lean_Elab_Command_openPrivate___closed__25;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("from");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__27;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_openPrivate___closed__28;
x_3 = l_Lean_Elab_Command_openPrivate___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__21;
x_2 = l_Lean_Elab_Command_openPrivate___closed__29;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__31() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_openPrivate___closed__26;
x_3 = l_Lean_Elab_Command_openPrivate___closed__30;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate___closed__32() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__8;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Elab_Command_openPrivate___closed__31;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_openPrivate() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__32;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1() {
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
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg), 1, 0);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
}
static lean_object* _init_l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabOpenPrivate___lambda__1___boxed), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Syntax_getArgs(x_1);
x_9 = l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1;
x_10 = l_Lean_Elab_Command_elabOpenPrivateLike(x_8, x_2, x_4, x_9, x_5, x_6, x_7);
lean_dec(x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_nullKind;
x_12 = lean_unsigned_to_nat(2u);
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_9, x_15);
lean_dec(x_9);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Command_elabOpenPrivate___lambda__2(x_2, x_4, x_19, x_18, x_5, x_6, x_7);
lean_dec(x_2);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_9);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Command_elabOpenPrivate___lambda__2(x_2, x_4, x_22, x_21, x_5, x_6, x_7);
lean_dec(x_2);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_openPrivate___closed__8;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_isNone(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_nullKind;
lean_inc(x_11);
x_14 = l_Lean_Syntax_isNodeOf(x_11, x_13, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = l_Lean_Syntax_getArg(x_11, x_8);
lean_dec(x_11);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Command_elabOpenPrivate___lambda__3(x_1, x_9, x_19, x_18, x_2, x_3, x_4);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Command_elabOpenPrivate___lambda__3(x_1, x_9, x_22, x_21, x_2, x_3, x_4);
return x_23;
}
}
}
}
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Command_elabOpenPrivate___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_Elab_Command_elabOpenPrivate___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Command_elabOpenPrivate___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("exportPrivate");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__6;
x_2 = l_Lean_Elab_Command_exportPrivate___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("export private");
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Command_exportPrivate___closed__3;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_exportPrivate___closed__4;
x_3 = l_Lean_Elab_Command_openPrivate___closed__18;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_exportPrivate___closed__5;
x_3 = l_Lean_Elab_Command_openPrivate___closed__25;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_openPrivate___closed__10;
x_2 = l_Lean_Elab_Command_exportPrivate___closed__6;
x_3 = l_Lean_Elab_Command_openPrivate___closed__30;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Lean_Elab_Command_exportPrivate___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_Lean_Elab_Command_exportPrivate___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Lean_Elab_Command_exportPrivate() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Elab_Command_exportPrivate___closed__8;
return x_1;
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 2);
lean_inc(x_8);
lean_dec(x_6);
x_9 = l_List_head_x21___at_Lean_Elab_Command_instMonadOptionsCommandElabM___spec__1(x_8);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_KernelException_toMessageData(x_1, x_10);
x_12 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_11, x_2, x_3, x_7);
return x_12;
}
}
lean_object* l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_add_decl(x_8, x_1);
lean_dec(x_1);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
lean_dec(x_9);
x_11 = l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2(x_10, x_2, x_3, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_9, 0);
lean_inc(x_12);
lean_dec(x_9);
x_13 = l_Lean_setEnv___at_Lean_Elab_Command_expandDeclId___spec__5(x_12, x_2, x_3, x_7);
lean_dec(x_2);
return x_13;
}
}
}
uint8_t l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
lean_dec(x_2);
lean_inc(x_3);
lean_inc(x_1);
x_4 = lean_is_aux_recursor(x_1, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_inc(x_3);
x_5 = l_Lean_isRecCore(x_1, x_3);
if (x_5 == 0)
{
uint8_t x_6; 
lean_dec(x_3);
x_6 = 0;
return x_6;
}
else
{
lean_object* x_7; uint8_t x_8; 
x_7 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors;
x_8 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_7, x_3);
lean_dec(x_3);
if (x_8 == 0)
{
uint8_t x_9; 
x_9 = 1;
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
else
{
uint8_t x_11; 
lean_inc(x_3);
lean_inc(x_1);
x_11 = l_Lean_isCasesOnRecursor(x_1, x_3);
if (x_11 == 0)
{
lean_object* x_12; uint8_t x_13; 
lean_dec(x_1);
x_12 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors;
x_13 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_12, x_3);
lean_dec(x_3);
if (x_13 == 0)
{
uint8_t x_14; 
x_14 = 1;
return x_14;
}
else
{
uint8_t x_15; 
x_15 = 0;
return x_15;
}
}
else
{
uint8_t x_16; 
lean_inc(x_3);
x_16 = l_Lean_isRecCore(x_1, x_3);
if (x_16 == 0)
{
uint8_t x_17; 
lean_dec(x_3);
x_17 = 0;
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = l___private_Lean_MonadEnv_0__Lean_supportedRecursors;
x_19 = l_Array_contains___at_Lean_findField_x3f___spec__1(x_18, x_3);
lean_dec(x_3);
if (x_19 == 0)
{
uint8_t x_20; 
x_20 = 1;
return x_20;
}
else
{
uint8_t x_21; 
x_21 = 0;
return x_21;
}
}
}
}
}
else
{
uint8_t x_22; 
lean_dec(x_2);
lean_dec(x_1);
x_22 = 0;
return x_22;
}
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("code generator does not support recursor '");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' yet, consider using 'match ... with' and/or structural recursion");
return x_1;
}
}
static lean_object* _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_34; lean_object* x_35; lean_object* x_36; size_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_34 = lean_ctor_get(x_8, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_34, 2);
lean_inc(x_35);
lean_dec(x_34);
lean_inc(x_1);
x_36 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_36, 0, x_1);
x_37 = 8192;
x_38 = l_Lean_Expr_FindImpl_initCache;
x_39 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_36, x_37, x_35, x_38);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
if (lean_obj_tag(x_40) == 0)
{
x_10 = x_6;
goto block_33;
}
else
{
lean_object* x_41; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
lean_dec(x_40);
if (lean_obj_tag(x_41) == 4)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_1);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
lean_dec(x_41);
x_43 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_43, 0, x_42);
x_44 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_47 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
x_48 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_47, x_4, x_5, x_6);
x_49 = !lean_is_exclusive(x_48);
if (x_49 == 0)
{
return x_48;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_48, 0);
x_51 = lean_ctor_get(x_48, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_48);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
else
{
lean_dec(x_41);
x_10 = x_6;
goto block_33;
}
}
block_33:
{
lean_object* x_11; lean_object* x_12; size_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
lean_inc(x_1);
x_12 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_12, 0, x_1);
x_13 = 8192;
x_14 = l_Lean_Expr_FindImpl_initCache;
x_15 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_12, x_13, x_11, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
x_17 = lean_box(0);
x_2 = x_17;
x_3 = x_9;
x_6 = x_10;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_16, 0);
lean_inc(x_19);
lean_dec(x_16);
if (lean_obj_tag(x_19) == 4)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_9);
lean_dec(x_1);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
lean_dec(x_19);
x_21 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_25, x_4, x_5, x_10);
x_27 = !lean_is_exclusive(x_26);
if (x_27 == 0)
{
return x_26;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_26, 0);
x_29 = lean_ctor_get(x_26, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_26);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_19);
x_31 = lean_box(0);
x_2 = x_31;
x_3 = x_9;
x_6 = x_10;
goto _start;
}
}
}
}
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; size_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
lean_inc(x_1);
x_11 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_11, 0, x_1);
x_12 = 8192;
x_13 = l_Lean_Expr_FindImpl_initCache;
x_14 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_11, x_12, x_10, x_13);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_box(0);
x_2 = x_16;
x_3 = x_9;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_ctor_get(x_15, 0);
lean_inc(x_18);
lean_dec(x_15);
if (lean_obj_tag(x_18) == 4)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_9);
lean_dec(x_1);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_20, 0, x_19);
x_21 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_24 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_24, 0, x_22);
lean_ctor_set(x_24, 1, x_23);
x_25 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_24, x_4, x_5, x_6);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
else
{
lean_object* x_30; 
lean_dec(x_18);
x_30 = lean_box(0);
x_2 = x_30;
x_3 = x_9;
goto _start;
}
}
}
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_7; 
lean_dec(x_4);
lean_dec(x_1);
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_2);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_19; lean_object* x_20; size_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_2);
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
lean_dec(x_3);
x_19 = lean_ctor_get(x_8, 1);
lean_inc(x_19);
lean_inc(x_1);
x_20 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_20, 0, x_1);
x_21 = 8192;
x_22 = l_Lean_Expr_FindImpl_initCache;
x_23 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_20, x_21, x_19, x_22);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
lean_dec(x_23);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_8, 2);
lean_inc(x_25);
lean_dec(x_8);
x_26 = lean_box(0);
lean_inc(x_4);
lean_inc(x_1);
x_27 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7(x_1, x_26, x_25, x_4, x_5, x_6);
x_10 = x_27;
goto block_18;
}
else
{
lean_object* x_28; 
x_28 = lean_ctor_get(x_24, 0);
lean_inc(x_28);
lean_dec(x_24);
if (lean_obj_tag(x_28) == 4)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
lean_dec(x_8);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
lean_dec(x_28);
x_30 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
x_33 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
lean_inc(x_4);
x_35 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_34, x_4, x_5, x_6);
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
x_10 = x_35;
goto block_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_35, 0);
x_38 = lean_ctor_get(x_35, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_35);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_10 = x_39;
goto block_18;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
lean_dec(x_28);
x_40 = lean_ctor_get(x_8, 2);
lean_inc(x_40);
lean_dec(x_8);
x_41 = lean_box(0);
lean_inc(x_4);
lean_inc(x_1);
x_42 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7(x_1, x_41, x_40, x_4, x_5, x_6);
x_10 = x_42;
goto block_18;
}
}
block_18:
{
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_2 = x_11;
x_3 = x_9;
x_6 = x_12;
goto _start;
}
else
{
uint8_t x_14; 
lean_dec(x_9);
lean_dec(x_4);
lean_dec(x_1);
x_14 = !lean_is_exclusive(x_10);
if (x_14 == 0)
{
return x_10;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_10, 0);
x_16 = lean_ctor_get(x_10, 1);
lean_inc(x_16);
lean_inc(x_15);
lean_dec(x_10);
x_17 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
}
}
}
}
}
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
switch (lean_obj_tag(x_2)) {
case 0:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; size_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_2, 0);
lean_inc(x_7);
lean_dec(x_2);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
lean_dec(x_7);
x_9 = lean_ctor_get(x_8, 2);
lean_inc(x_9);
lean_dec(x_8);
x_10 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_10, 0, x_1);
x_11 = 8192;
x_12 = l_Lean_Expr_FindImpl_initCache;
x_13 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_10, x_11, x_9, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_4);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_6);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_ctor_get(x_14, 0);
lean_inc(x_17);
lean_dec(x_14);
if (lean_obj_tag(x_17) == 4)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
lean_dec(x_17);
x_19 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_23 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_23, x_4, x_5, x_6);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_17);
lean_dec(x_4);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_6);
return x_26;
}
}
}
case 1:
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_50; size_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_3);
x_27 = lean_ctor_get(x_2, 0);
lean_inc(x_27);
lean_dec(x_2);
x_28 = lean_ctor_get(x_27, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_27, 1);
lean_inc(x_29);
lean_dec(x_27);
x_30 = lean_ctor_get(x_28, 2);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_1);
x_50 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_50, 0, x_1);
x_51 = 8192;
x_52 = l_Lean_Expr_FindImpl_initCache;
x_53 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_50, x_51, x_30, x_52);
x_54 = lean_ctor_get(x_53, 0);
lean_inc(x_54);
lean_dec(x_53);
if (lean_obj_tag(x_54) == 0)
{
x_31 = x_6;
goto block_49;
}
else
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
lean_dec(x_54);
if (lean_obj_tag(x_55) == 4)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
lean_dec(x_29);
lean_dec(x_1);
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_57, 0, x_56);
x_58 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_61, x_4, x_5, x_6);
x_63 = !lean_is_exclusive(x_62);
if (x_63 == 0)
{
return x_62;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_64 = lean_ctor_get(x_62, 0);
x_65 = lean_ctor_get(x_62, 1);
lean_inc(x_65);
lean_inc(x_64);
lean_dec(x_62);
x_66 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_66, 0, x_64);
lean_ctor_set(x_66, 1, x_65);
return x_66;
}
}
else
{
lean_dec(x_55);
x_31 = x_6;
goto block_49;
}
}
block_49:
{
lean_object* x_32; size_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_32 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_32, 0, x_1);
x_33 = 8192;
x_34 = l_Lean_Expr_FindImpl_initCache;
x_35 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_32, x_33, x_29, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
lean_dec(x_35);
if (lean_obj_tag(x_36) == 0)
{
lean_object* x_37; lean_object* x_38; 
lean_dec(x_4);
x_37 = lean_box(0);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_31);
return x_38;
}
else
{
lean_object* x_39; 
x_39 = lean_ctor_get(x_36, 0);
lean_inc(x_39);
lean_dec(x_36);
if (lean_obj_tag(x_39) == 4)
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
lean_dec(x_39);
x_41 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_41, 0, x_40);
x_42 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_43 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_45 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
x_46 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_45, x_4, x_5, x_31);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; 
lean_dec(x_39);
lean_dec(x_4);
x_47 = lean_box(0);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_31);
return x_48;
}
}
}
}
case 2:
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_90; size_t x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_3);
x_67 = lean_ctor_get(x_2, 0);
lean_inc(x_67);
lean_dec(x_2);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = lean_ctor_get(x_68, 2);
lean_inc(x_70);
lean_dec(x_68);
lean_inc(x_1);
x_90 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_90, 0, x_1);
x_91 = 8192;
x_92 = l_Lean_Expr_FindImpl_initCache;
x_93 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_90, x_91, x_70, x_92);
x_94 = lean_ctor_get(x_93, 0);
lean_inc(x_94);
lean_dec(x_93);
if (lean_obj_tag(x_94) == 0)
{
x_71 = x_6;
goto block_89;
}
else
{
lean_object* x_95; 
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
lean_dec(x_94);
if (lean_obj_tag(x_95) == 4)
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; uint8_t x_103; 
lean_dec(x_69);
lean_dec(x_1);
x_96 = lean_ctor_get(x_95, 0);
lean_inc(x_96);
lean_dec(x_95);
x_97 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_97, 0, x_96);
x_98 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_99 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_101 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_101, 0, x_99);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_101, x_4, x_5, x_6);
x_103 = !lean_is_exclusive(x_102);
if (x_103 == 0)
{
return x_102;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_102, 0);
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_102);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
else
{
lean_dec(x_95);
x_71 = x_6;
goto block_89;
}
}
block_89:
{
lean_object* x_72; size_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_72, 0, x_1);
x_73 = 8192;
x_74 = l_Lean_Expr_FindImpl_initCache;
x_75 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_72, x_73, x_69, x_74);
x_76 = lean_ctor_get(x_75, 0);
lean_inc(x_76);
lean_dec(x_75);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; 
lean_dec(x_4);
x_77 = lean_box(0);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_77);
lean_ctor_set(x_78, 1, x_71);
return x_78;
}
else
{
lean_object* x_79; 
x_79 = lean_ctor_get(x_76, 0);
lean_inc(x_79);
lean_dec(x_76);
if (lean_obj_tag(x_79) == 4)
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_ctor_get(x_79, 0);
lean_inc(x_80);
lean_dec(x_79);
x_81 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_81, 0, x_80);
x_82 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_83 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_81);
x_84 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_85 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_85, 0, x_83);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_85, x_4, x_5, x_71);
return x_86;
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_79);
lean_dec(x_4);
x_87 = lean_box(0);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_71);
return x_88;
}
}
}
}
case 3:
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_130; size_t x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_3);
x_107 = lean_ctor_get(x_2, 0);
lean_inc(x_107);
lean_dec(x_2);
x_108 = lean_ctor_get(x_107, 0);
lean_inc(x_108);
x_109 = lean_ctor_get(x_107, 1);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_ctor_get(x_108, 2);
lean_inc(x_110);
lean_dec(x_108);
lean_inc(x_1);
x_130 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_130, 0, x_1);
x_131 = 8192;
x_132 = l_Lean_Expr_FindImpl_initCache;
x_133 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_130, x_131, x_110, x_132);
x_134 = lean_ctor_get(x_133, 0);
lean_inc(x_134);
lean_dec(x_133);
if (lean_obj_tag(x_134) == 0)
{
x_111 = x_6;
goto block_129;
}
else
{
lean_object* x_135; 
x_135 = lean_ctor_get(x_134, 0);
lean_inc(x_135);
lean_dec(x_134);
if (lean_obj_tag(x_135) == 4)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; uint8_t x_143; 
lean_dec(x_109);
lean_dec(x_1);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
lean_dec(x_135);
x_137 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_137, 0, x_136);
x_138 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_139 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_141 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_141, 0, x_139);
lean_ctor_set(x_141, 1, x_140);
x_142 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_141, x_4, x_5, x_6);
x_143 = !lean_is_exclusive(x_142);
if (x_143 == 0)
{
return x_142;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_142, 0);
x_145 = lean_ctor_get(x_142, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_142);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
else
{
lean_dec(x_135);
x_111 = x_6;
goto block_129;
}
}
block_129:
{
lean_object* x_112; size_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_112 = lean_alloc_closure((void*)(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed), 2, 1);
lean_closure_set(x_112, 0, x_1);
x_113 = 8192;
x_114 = l_Lean_Expr_FindImpl_initCache;
x_115 = l_Lean_Expr_FindImpl_findM_x3f_visit(x_112, x_113, x_109, x_114);
x_116 = lean_ctor_get(x_115, 0);
lean_inc(x_116);
lean_dec(x_115);
if (lean_obj_tag(x_116) == 0)
{
lean_object* x_117; lean_object* x_118; 
lean_dec(x_4);
x_117 = lean_box(0);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_111);
return x_118;
}
else
{
lean_object* x_119; 
x_119 = lean_ctor_get(x_116, 0);
lean_inc(x_119);
lean_dec(x_116);
if (lean_obj_tag(x_119) == 4)
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_120 = lean_ctor_get(x_119, 0);
lean_inc(x_120);
lean_dec(x_119);
x_121 = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(x_121, 0, x_120);
x_122 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2;
x_123 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4;
x_125 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
x_126 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_125, x_4, x_5, x_111);
return x_126;
}
else
{
lean_object* x_127; lean_object* x_128; 
lean_dec(x_119);
lean_dec(x_4);
x_127 = lean_box(0);
x_128 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_128, 0, x_127);
lean_ctor_set(x_128, 1, x_111);
return x_128;
}
}
}
}
case 4:
{
lean_object* x_147; 
lean_dec(x_4);
lean_dec(x_1);
x_147 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_147, 0, x_3);
lean_ctor_set(x_147, 1, x_6);
return x_147;
}
case 5:
{
lean_object* x_148; lean_object* x_149; 
x_148 = lean_ctor_get(x_2, 0);
lean_inc(x_148);
lean_dec(x_2);
x_149 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6(x_1, x_3, x_148, x_4, x_5, x_6);
return x_149;
}
default: 
{
lean_object* x_150; lean_object* x_151; 
x_150 = lean_ctor_get(x_2, 2);
lean_inc(x_150);
lean_dec(x_2);
x_151 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8(x_1, x_3, x_150, x_4, x_5, x_6);
return x_151;
}
}
}
}
lean_object* l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Elab_Command_elabExportPrivate___spec__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_box(0);
x_10 = l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5(x_8, x_1, x_9, x_2, x_3, x_7);
lean_dec(x_3);
return x_10;
}
}
lean_object* l_Lean_compileDecl___at_Lean_Elab_Command_elabExportPrivate___spec__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_5 = lean_st_ref_get(x_3, x_4);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_st_ref_get(x_3, x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 2);
lean_inc(x_12);
lean_dec(x_10);
x_13 = l_List_head_x21___at_Lean_Elab_Command_instMonadOptionsCommandElabM___spec__1(x_12);
lean_dec(x_12);
x_14 = lean_ctor_get(x_13, 1);
lean_inc(x_14);
lean_dec(x_13);
x_15 = lean_compile_decl(x_8, x_14, x_1);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
lean_dec(x_15);
if (lean_obj_tag(x_16) == 11)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
lean_dec(x_16);
lean_inc(x_3);
lean_inc(x_2);
x_18 = l___private_Lean_MonadEnv_0__Lean_checkUnsupported___at_Lean_Elab_Command_elabExportPrivate___spec__4(x_1, x_2, x_3, x_11);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
lean_dec(x_18);
x_20 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_20, 0, x_17);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Command_0__Lean_Elab_Command_elabCommandUsing___spec__1(x_21, x_2, x_3, x_19);
lean_dec(x_3);
return x_22;
}
else
{
uint8_t x_23; 
lean_dec(x_17);
lean_dec(x_3);
lean_dec(x_2);
x_23 = !lean_is_exclusive(x_18);
if (x_23 == 0)
{
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_18, 0);
x_25 = lean_ctor_get(x_18, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_18);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_24);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
lean_object* x_27; 
lean_dec(x_1);
x_27 = l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2(x_16, x_2, x_3, x_11);
lean_dec(x_3);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
lean_dec(x_1);
x_28 = lean_ctor_get(x_15, 0);
lean_inc(x_28);
lean_dec(x_15);
x_29 = l_Lean_setEnv___at_Lean_Elab_Command_expandDeclId___spec__5(x_28, x_2, x_3, x_11);
lean_dec(x_3);
lean_dec(x_2);
return x_29;
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_mkLevelParam), 1, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = l_Lean_ConstantInfo_levelParams(x_1);
x_9 = l_Lean_ConstantInfo_type(x_1);
lean_inc(x_8);
lean_inc(x_2);
x_10 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_8);
lean_ctor_set(x_10, 2, x_9);
x_11 = l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1;
x_12 = l_List_mapTR___rarg(x_11, x_8);
x_13 = l_Lean_mkConst(x_3, x_12);
x_14 = l_Lean_ConstantInfo_isUnsafe(x_1);
if (x_14 == 0)
{
lean_object* x_15; uint8_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_box(1);
x_16 = 1;
x_17 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_17, 0, x_10);
lean_ctor_set(x_17, 1, x_13);
lean_ctor_set(x_17, 2, x_15);
lean_ctor_set_uint8(x_17, sizeof(void*)*3, x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
lean_inc(x_5);
lean_inc(x_18);
x_19 = l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1(x_18, x_5, x_6, x_7);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_21 = l_Lean_compileDecl___at_Lean_Elab_Command_elabExportPrivate___spec__3(x_18, x_5, x_6, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_21, 0);
lean_dec(x_23);
lean_ctor_set(x_21, 0, x_2);
return x_21;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_21, 1);
lean_inc(x_24);
lean_dec(x_21);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_2);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
else
{
uint8_t x_26; 
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_21);
if (x_26 == 0)
{
return x_21;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_21, 0);
x_28 = lean_ctor_get(x_21, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_21);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_30 = !lean_is_exclusive(x_19);
if (x_30 == 0)
{
return x_19;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_19, 0);
x_32 = lean_ctor_get(x_19, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_19);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
else
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_box(1);
x_35 = 0;
x_36 = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_13);
lean_ctor_set(x_36, 2, x_34);
lean_ctor_set_uint8(x_36, sizeof(void*)*3, x_35);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
lean_inc(x_5);
lean_inc(x_37);
x_38 = l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1(x_37, x_5, x_6, x_7);
if (lean_obj_tag(x_38) == 0)
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_38, 1);
lean_inc(x_39);
lean_dec(x_38);
x_40 = l_Lean_compileDecl___at_Lean_Elab_Command_elabExportPrivate___spec__3(x_37, x_5, x_6, x_39);
if (lean_obj_tag(x_40) == 0)
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_40);
if (x_41 == 0)
{
lean_object* x_42; 
x_42 = lean_ctor_get(x_40, 0);
lean_dec(x_42);
lean_ctor_set(x_40, 0, x_2);
return x_40;
}
else
{
lean_object* x_43; lean_object* x_44; 
x_43 = lean_ctor_get(x_40, 1);
lean_inc(x_43);
lean_dec(x_40);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_2);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
else
{
uint8_t x_45; 
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_40);
if (x_45 == 0)
{
return x_40;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_40, 0);
x_47 = lean_ctor_get(x_40, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_40);
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
lean_dec(x_37);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_49 = !lean_is_exclusive(x_38);
if (x_49 == 0)
{
return x_38;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_38, 0);
x_51 = lean_ctor_get(x_38, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_38);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("' has already been declared");
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
lean_dec(x_3);
lean_inc(x_4);
lean_inc(x_1);
x_7 = l_Lean_getConstInfo___at_Lean_Elab_Command_elabOpenPrivateLike___spec__10(x_1, x_4, x_5, x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec(x_7);
x_10 = lean_st_ref_get(x_5, x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 0);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_2);
x_14 = l_Lean_Environment_contains(x_13, x_2);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_box(0);
x_16 = l_Lean_Elab_Command_elabExportPrivate___lambda__1(x_8, x_2, x_1, x_15, x_4, x_5, x_12);
lean_dec(x_8);
return x_16;
}
else
{
uint8_t x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_8);
lean_dec(x_1);
x_17 = 1;
x_18 = l_Lean_Name_toString(x_2, x_17);
x_19 = l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3;
x_20 = lean_string_append(x_19, x_18);
lean_dec(x_18);
x_21 = l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1;
x_22 = lean_string_append(x_20, x_21);
x_23 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = l_Lean_throwError___at_Lean_Elab_Command_elabCommand___spec__1(x_24, x_4, x_5, x_12);
lean_dec(x_5);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_25, 0);
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_25);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
return x_29;
}
}
}
else
{
uint8_t x_30; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_7);
if (x_30 == 0)
{
return x_7;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_7, 0);
x_32 = lean_ctor_get(x_7, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_7);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
static lean_object* _init_l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Command_elabExportPrivate___lambda__2), 6, 0);
return x_1;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = l_Lean_Syntax_getArgs(x_1);
x_9 = l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1;
x_10 = l_Lean_Elab_Command_elabOpenPrivateLike(x_8, x_2, x_4, x_9, x_5, x_6, x_7);
lean_dec(x_8);
return x_10;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_3);
x_8 = lean_unsigned_to_nat(3u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_Syntax_isNone(x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = l_Lean_nullKind;
x_12 = lean_unsigned_to_nat(2u);
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_9);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_14 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_7);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_unsigned_to_nat(1u);
x_16 = l_Lean_Syntax_getArg(x_9, x_15);
lean_dec(x_9);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Command_elabExportPrivate___lambda__3(x_2, x_4, x_19, x_18, x_5, x_6, x_7);
lean_dec(x_2);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_9);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Command_elabExportPrivate___lambda__3(x_2, x_4, x_22, x_21, x_5, x_6, x_7);
lean_dec(x_2);
return x_23;
}
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_Lean_Elab_Command_exportPrivate___closed__2;
lean_inc(x_1);
x_6 = l_Lean_Syntax_isOfKind(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_7 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_4);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = l_Lean_Syntax_isNone(x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
x_13 = l_Lean_nullKind;
lean_inc(x_11);
x_14 = l_Lean_Syntax_isNodeOf(x_11, x_13, x_10);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_15 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg(x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_16 = l_Lean_Syntax_getArg(x_11, x_8);
lean_dec(x_11);
x_17 = l_Lean_Syntax_getArgs(x_16);
lean_dec(x_16);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_17);
x_19 = lean_box(0);
x_20 = l_Lean_Elab_Command_elabExportPrivate___lambda__4(x_1, x_9, x_19, x_18, x_2, x_3, x_4);
return x_20;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
lean_dec(x_11);
x_21 = lean_box(0);
x_22 = lean_box(0);
x_23 = l_Lean_Elab_Command_elabExportPrivate___lambda__4(x_1, x_9, x_22, x_21, x_2, x_3, x_4);
return x_23;
}
}
}
}
lean_object* l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwKernelException___at_Lean_Elab_Command_elabExportPrivate___spec__2(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_addDecl___at_Lean_Elab_Command_elabExportPrivate___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___lambda__1(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__7(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__8(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Declaration_foldExprM___at_Lean_Elab_Command_elabExportPrivate___spec__5(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
return x_7;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Command_elabExportPrivate___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_4);
lean_dec(x_1);
return x_8;
}
}
lean_object* l_Lean_Elab_Command_elabExportPrivate___lambda__3___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = l_Lean_Elab_Command_elabExportPrivate___lambda__3(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec(x_3);
lean_dec(x_1);
return x_8;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
lean_object* initialize_Lean_Util_FoldConsts(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_OpenPrivate(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1 = _init_l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Meta_collectPrivateIn___rarg___lambda__2___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__1);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__2);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__3);
l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4 = _init_l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4();
lean_mark_persistent(l_Lean_throwUnknownConstant___at_Lean_Elab_Command_elabOpenPrivateLike___spec__6___closed__4);
l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1 = _init_l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConstCore___at_Lean_Elab_Command_elabOpenPrivateLike___spec__4___lambda__2___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__1);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__2);
l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3 = _init_l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConst___at_Lean_Elab_Command_elabOpenPrivateLike___spec__2___closed__3);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__1);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__2);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__3);
l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4 = _init_l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4();
lean_mark_persistent(l_Lean_resolveGlobalConstNoOverload___at_Lean_Elab_Command_elabOpenPrivateLike___spec__1___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__14___closed__3);
l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1 = _init_l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1();
lean_mark_persistent(l_Std_RBNode_forIn_visit___at_Lean_Elab_Command_elabOpenPrivateLike___spec__15___closed__1);
l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1 = _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1();
lean_mark_persistent(l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__1);
l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2 = _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2();
lean_mark_persistent(l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__2);
l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3 = _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3();
lean_mark_persistent(l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__3);
l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4 = _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4();
lean_mark_persistent(l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__4);
l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5 = _init_l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5();
lean_mark_persistent(l_List_toStringAux___at_Lean_Elab_Command_elabOpenPrivateLike___spec__17___closed__5);
l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1 = _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1();
lean_mark_persistent(l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__1);
l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2 = _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2();
lean_mark_persistent(l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__2);
l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3 = _init_l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3();
lean_mark_persistent(l_List_toString___at_Lean_Elab_Command_elabOpenPrivateLike___spec__16___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__1);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__2);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__3);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__4);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__5);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__6);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__7);
l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8 = _init_l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8();
lean_mark_persistent(l_Array_forInUnsafe_loop___at_Lean_Elab_Command_elabOpenPrivateLike___spec__19___closed__8);
l_Lean_Elab_Command_elabOpenPrivateLike___closed__1 = _init_l_Lean_Elab_Command_elabOpenPrivateLike___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabOpenPrivateLike___closed__1);
l_Lean_Elab_Command_elabOpenPrivateLike___closed__2 = _init_l_Lean_Elab_Command_elabOpenPrivateLike___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_elabOpenPrivateLike___closed__2);
l_Lean_Elab_Command_openPrivate___closed__1 = _init_l_Lean_Elab_Command_openPrivate___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__1);
l_Lean_Elab_Command_openPrivate___closed__2 = _init_l_Lean_Elab_Command_openPrivate___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__2);
l_Lean_Elab_Command_openPrivate___closed__3 = _init_l_Lean_Elab_Command_openPrivate___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__3);
l_Lean_Elab_Command_openPrivate___closed__4 = _init_l_Lean_Elab_Command_openPrivate___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__4);
l_Lean_Elab_Command_openPrivate___closed__5 = _init_l_Lean_Elab_Command_openPrivate___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__5);
l_Lean_Elab_Command_openPrivate___closed__6 = _init_l_Lean_Elab_Command_openPrivate___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__6);
l_Lean_Elab_Command_openPrivate___closed__7 = _init_l_Lean_Elab_Command_openPrivate___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__7);
l_Lean_Elab_Command_openPrivate___closed__8 = _init_l_Lean_Elab_Command_openPrivate___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__8);
l_Lean_Elab_Command_openPrivate___closed__9 = _init_l_Lean_Elab_Command_openPrivate___closed__9();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__9);
l_Lean_Elab_Command_openPrivate___closed__10 = _init_l_Lean_Elab_Command_openPrivate___closed__10();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__10);
l_Lean_Elab_Command_openPrivate___closed__11 = _init_l_Lean_Elab_Command_openPrivate___closed__11();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__11);
l_Lean_Elab_Command_openPrivate___closed__12 = _init_l_Lean_Elab_Command_openPrivate___closed__12();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__12);
l_Lean_Elab_Command_openPrivate___closed__13 = _init_l_Lean_Elab_Command_openPrivate___closed__13();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__13);
l_Lean_Elab_Command_openPrivate___closed__14 = _init_l_Lean_Elab_Command_openPrivate___closed__14();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__14);
l_Lean_Elab_Command_openPrivate___closed__15 = _init_l_Lean_Elab_Command_openPrivate___closed__15();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__15);
l_Lean_Elab_Command_openPrivate___closed__16 = _init_l_Lean_Elab_Command_openPrivate___closed__16();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__16);
l_Lean_Elab_Command_openPrivate___closed__17 = _init_l_Lean_Elab_Command_openPrivate___closed__17();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__17);
l_Lean_Elab_Command_openPrivate___closed__18 = _init_l_Lean_Elab_Command_openPrivate___closed__18();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__18);
l_Lean_Elab_Command_openPrivate___closed__19 = _init_l_Lean_Elab_Command_openPrivate___closed__19();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__19);
l_Lean_Elab_Command_openPrivate___closed__20 = _init_l_Lean_Elab_Command_openPrivate___closed__20();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__20);
l_Lean_Elab_Command_openPrivate___closed__21 = _init_l_Lean_Elab_Command_openPrivate___closed__21();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__21);
l_Lean_Elab_Command_openPrivate___closed__22 = _init_l_Lean_Elab_Command_openPrivate___closed__22();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__22);
l_Lean_Elab_Command_openPrivate___closed__23 = _init_l_Lean_Elab_Command_openPrivate___closed__23();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__23);
l_Lean_Elab_Command_openPrivate___closed__24 = _init_l_Lean_Elab_Command_openPrivate___closed__24();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__24);
l_Lean_Elab_Command_openPrivate___closed__25 = _init_l_Lean_Elab_Command_openPrivate___closed__25();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__25);
l_Lean_Elab_Command_openPrivate___closed__26 = _init_l_Lean_Elab_Command_openPrivate___closed__26();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__26);
l_Lean_Elab_Command_openPrivate___closed__27 = _init_l_Lean_Elab_Command_openPrivate___closed__27();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__27);
l_Lean_Elab_Command_openPrivate___closed__28 = _init_l_Lean_Elab_Command_openPrivate___closed__28();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__28);
l_Lean_Elab_Command_openPrivate___closed__29 = _init_l_Lean_Elab_Command_openPrivate___closed__29();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__29);
l_Lean_Elab_Command_openPrivate___closed__30 = _init_l_Lean_Elab_Command_openPrivate___closed__30();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__30);
l_Lean_Elab_Command_openPrivate___closed__31 = _init_l_Lean_Elab_Command_openPrivate___closed__31();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__31);
l_Lean_Elab_Command_openPrivate___closed__32 = _init_l_Lean_Elab_Command_openPrivate___closed__32();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate___closed__32);
l_Lean_Elab_Command_openPrivate = _init_l_Lean_Elab_Command_openPrivate();
lean_mark_persistent(l_Lean_Elab_Command_openPrivate);
l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1 = _init_l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabOpenPrivate___spec__1___rarg___closed__1);
l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1 = _init_l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabOpenPrivate___lambda__2___closed__1);
l_Lean_Elab_Command_exportPrivate___closed__1 = _init_l_Lean_Elab_Command_exportPrivate___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__1);
l_Lean_Elab_Command_exportPrivate___closed__2 = _init_l_Lean_Elab_Command_exportPrivate___closed__2();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__2);
l_Lean_Elab_Command_exportPrivate___closed__3 = _init_l_Lean_Elab_Command_exportPrivate___closed__3();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__3);
l_Lean_Elab_Command_exportPrivate___closed__4 = _init_l_Lean_Elab_Command_exportPrivate___closed__4();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__4);
l_Lean_Elab_Command_exportPrivate___closed__5 = _init_l_Lean_Elab_Command_exportPrivate___closed__5();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__5);
l_Lean_Elab_Command_exportPrivate___closed__6 = _init_l_Lean_Elab_Command_exportPrivate___closed__6();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__6);
l_Lean_Elab_Command_exportPrivate___closed__7 = _init_l_Lean_Elab_Command_exportPrivate___closed__7();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__7);
l_Lean_Elab_Command_exportPrivate___closed__8 = _init_l_Lean_Elab_Command_exportPrivate___closed__8();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate___closed__8);
l_Lean_Elab_Command_exportPrivate = _init_l_Lean_Elab_Command_exportPrivate();
lean_mark_persistent(l_Lean_Elab_Command_exportPrivate);
l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1 = _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1();
lean_mark_persistent(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__1);
l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2 = _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2();
lean_mark_persistent(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__2);
l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3 = _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3();
lean_mark_persistent(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__3);
l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4 = _init_l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4();
lean_mark_persistent(l_List_foldlM___at_Lean_Elab_Command_elabExportPrivate___spec__6___closed__4);
l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1 = _init_l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabExportPrivate___lambda__1___closed__1);
l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1 = _init_l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabExportPrivate___lambda__2___closed__1);
l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1 = _init_l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1();
lean_mark_persistent(l_Lean_Elab_Command_elabExportPrivate___lambda__3___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
