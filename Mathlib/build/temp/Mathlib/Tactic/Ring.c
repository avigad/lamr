// Lean compiler output
// Module: Mathlib.Tactic.Ring
// Imports: Init Lean.Elab.Tactic.Basic Mathlib.Algebra.Ring.Basic Mathlib.Tactic.NormNum
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
lean_object* l_Tactic_Ring_evalAdd_match__1___rarg(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_RingM_run___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__2;
static lean_object* l_Tactic_Ring_addAtom___closed__1;
static lean_object* l_Tactic_Ring_evalAdd___closed__18;
static lean_object* l_Tactic_Ring_evalAdd___closed__14;
static lean_object* l_Tactic_Ring_evalAdd___closed__15;
static lean_object* l_Tactic_Ring_RingM_run___rarg___closed__4;
lean_object* l_Tactic_Ring_evalMul_match__1(lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__12;
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Tactic_Ring_RingM_run_match__1(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__9;
lean_object* l_Tactic_Ring_instInhabitedHornerExpr;
lean_object* l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_pp_match__1(lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__7;
lean_object* l_Tactic_Ring_HornerExpr_isZero_match__1(lean_object*);
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__12;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_State_atoms___default;
static lean_object* l_Tactic_Ring_evalPow___closed__14;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__14;
lean_object* l_Tactic_Ring_evalHorner_match__1(lean_object*);
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__1___rarg(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_xadd_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__5;
lean_object* l_Tactic_Ring_addAtom___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5;
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__15;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__3;
lean_object* l_Tactic_Ring_HornerExpr_reflConv(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalPow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_eval_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__1;
lean_object* l_Tactic_Ring_evalPow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6;
static lean_object* l_Tactic_Ring_evalAtom___closed__1;
static lean_object* l_Tactic_Ring_eval_match__3___rarg___closed__2;
lean_object* l_Tactic_Ring_eval_match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_RingM_run___rarg___closed__5;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3(lean_object*);
static lean_object* l_Tactic_Ring_tacticRing___closed__5;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_pp_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_RingM_run___rarg___closed__3;
static lean_object* l_Tactic_Ring_evalAdd___closed__22;
lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_instInhabitedHornerExpr___closed__1;
static lean_object* l_Tactic_Ring_evalMul___closed__7;
static lean_object* l_Tactic_Ring_evalAtom___closed__2;
lean_object* l_Tactic_Ring_addAtom_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_e(lean_object*);
lean_object* l_Tactic_Ring_eval_match__2(lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__4;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__8;
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1;
lean_object* l_Tactic_Ring_evalAdd_match__2(lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_instInhabitedHornerExpr___closed__2;
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__3;
lean_object* lean_nat_add(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalHorner___closed__5;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalHorner___closed__7;
lean_object* l_Tactic_Ring_HornerExpr_pp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__21;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1(lean_object*);
static lean_object* l_Tactic_Ring_evalHorner___closed__3;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__8;
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_eval_match__1(lean_object*);
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__9;
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4;
static lean_object* l_Tactic_Ring_evalAdd___closed__6;
static lean_object* l_Tactic_Ring_evalMul___closed__8;
lean_object* l_Tactic_Ring_horner(lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__17;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__2;
static lean_object* l_Tactic_Ring_evalMul___closed__4;
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Tactic_Ring_HornerExpr_isZero(lean_object*);
lean_object* l_Tactic_Ring_evalAdd_match__2___rarg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_instDecidableNot___rarg(uint8_t);
static lean_object* l_Tactic_Ring_evalAdd___closed__8;
lean_object* lean_st_ref_take(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__9;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8;
lean_object* l_Tactic_Ring_evalAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1;
static lean_object* l_Tactic_Ring_eval_match__3___rarg___closed__1;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__1;
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__2;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__11;
static lean_object* l_Tactic_Ring_evalAdd___closed__2;
lean_object* l_Tactic_Ring_addAtom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__4;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval_match__1___rarg___closed__1;
lean_object* l_Tactic_Ring_horner___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__5;
static lean_object* l_Tactic_Ring_evalPow___closed__3;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
lean_object* l_Tactic_Ring_evalPow_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval___closed__2;
static lean_object* l_Tactic_Ring_evalMul___closed__13;
static lean_object* l_Tactic_Ring_evalPow___closed__6;
lean_object* l_Tactic_Ring_HornerExpr_e___boxed(lean_object*);
static lean_object* l_Tactic_Ring_tacticRing___closed__1;
lean_object* l_Nat_repr(lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__1;
lean_object* l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__3;
lean_object* l_Tactic_Ring_addAtom_match__1(lean_object*);
lean_object* lean_st_mk_ref(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval_match__3___rarg___closed__3;
lean_object* l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__6;
static lean_object* l_Tactic_Ring_eval___closed__5;
lean_object* l_Tactic_Ring_evalAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__5;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__4;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__2;
static lean_object* l_Tactic_Ring_State_atoms___default___closed__1;
lean_object* l_Tactic_Ring_RingM_run_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_tacticRing___closed__2;
lean_object* l_Tactic_Ring_HornerExpr_reflConv___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval___closed__3;
lean_object* l_Tactic_Ring_evalMul_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__1;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalHorner_match__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_numeral_x3f(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Tactic_Ring_HornerExpr_isZero___boxed(lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_tacticRing;
static lean_object* l_Tactic_Ring_evalAdd___closed__11;
static lean_object* l_Tactic_Ring_evalHorner___closed__1;
static lean_object* l_Tactic_Ring_evalHorner___closed__6;
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__1(lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__6;
lean_object* l_Tactic_Ring_evalHorner___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__16;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5(lean_object*);
static lean_object* l_Tactic_Ring_evalHorner___closed__8;
static lean_object* l_Tactic_Ring_evalPow___closed__7;
lean_object* l_Tactic_Ring_HornerExpr_e_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__11;
static lean_object* l_Tactic_Ring_eval_match__3___rarg___closed__4;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__6;
static lean_object* l_Tactic_Ring_eval___closed__1;
lean_object* l_Tactic_Ring_evalAdd_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_mkAppCS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_e_match__1(lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__10;
static lean_object* l_Tactic_Ring_evalAdd___closed__12;
lean_object* l_Lean_Meta_assignExprMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__13;
lean_object* l_Tactic_Ring_evalAdd_match__1(lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_eval_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalHorner___closed__2;
lean_object* l_Tactic_Ring_HornerExpr_isZero_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__11;
lean_object* l_Tactic_Ring_evalPow_match__2(lean_object*);
lean_object* l_Tactic_Ring_RingM_run(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_mkApp(lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalConstMul___closed__2;
lean_object* l_Tactic_Ring_evalConstMul(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_eval_match__3(lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__13;
lean_object* l_Lean_Meta_mkEqTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Option_Basic_0__decEqOption____x40_Init_Data_Option_Basic___hyg_549____at_instDecidableEqOption___spec__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalAdd_match__3(lean_object*);
lean_object* l_Tactic_Ring_evalConstMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalConstMul___closed__1;
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_State_numAtoms___default;
lean_object* l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_ensureHasNoMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_tacticRing___closed__4;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__3;
static lean_object* l_Tactic_Ring_evalMul___closed__9;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_NormNum_eval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval___closed__6;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__10;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__7;
lean_object* l_Tactic_Ring_evalPow_match__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__5;
lean_object* l_Tactic_Ring_evalPow_match__1(lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2;
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_eval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_eval___closed__4;
static lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___closed__7;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__13;
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2(lean_object*);
static lean_object* l_Tactic_Ring_evalMul___closed__1;
lean_object* l_Tactic_Ring_evalMul___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__16;
static lean_object* l_Tactic_Ring_evalHorner___closed__4;
lean_object* l_Lean_Expr_getAppFn(lean_object*);
static lean_object* l_Tactic_Ring_evalAtom___closed__3;
static lean_object* l_Tactic_Ring_evalConstMul___closed__3;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__5;
static lean_object* l_Tactic_Ring_HornerExpr_pp___closed__14;
static lean_object* l_Tactic_Ring_evalAdd___closed__20;
static lean_object* l_Tactic_Ring_evalMul___closed__10;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7;
static lean_object* l_Tactic_Ring_RingM_run___rarg___closed__1;
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalAdd___closed__10;
static lean_object* l_Tactic_Ring_tacticRing___closed__3;
lean_object* l_Tactic_Ring_addAtom___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Tactic_Ring_evalHorner(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_evalPow___closed__12;
static lean_object* l_Tactic_Ring_evalAdd___closed__19;
static lean_object* l_Tactic_Ring_RingM_run___rarg___closed__2;
static lean_object* l_Tactic_Ring_mkAppCS___closed__1;
lean_object* l_Tactic_Ring_mkAppCS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4(lean_object*);
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1;
lean_object* l_Lean_Meta_mkAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_decEq___boxed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
static lean_object* _init_l_Tactic_Ring_State_atoms___default___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_State_atoms___default() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_Ring_State_atoms___default___closed__1;
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_State_numAtoms___default() {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(0u);
return x_1;
}
}
lean_object* l_Tactic_Ring_RingM_run_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Tactic_Ring_RingM_run_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_RingM_run_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg___boxed), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
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
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg___boxed), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_RingM_run___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("fail");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_RingM_run___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_RingM_run___rarg___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_RingM_run___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("CommSemiring");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_RingM_run___rarg___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_RingM_run___rarg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_RingM_run___rarg___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_State_atoms___default___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_RingM_run___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_8 = l_Lean_Meta_getLevel(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; 
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
switch (lean_obj_tag(x_9)) {
case 0:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = l_Tactic_Ring_RingM_run___rarg___closed__2;
x_12 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg(x_11, x_3, x_4, x_5, x_6, x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_12;
}
case 1:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_13 = lean_ctor_get(x_8, 1);
lean_inc(x_13);
lean_dec(x_8);
x_14 = lean_ctor_get(x_9, 0);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_box(0);
lean_inc(x_14);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
x_17 = l_Tactic_Ring_RingM_run___rarg___closed__4;
x_18 = l_Lean_mkConst(x_17, x_16);
lean_inc(x_1);
x_19 = l_Lean_mkApp(x_18, x_1);
x_20 = lean_box(0);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_21 = l_Lean_Meta_synthInstance(x_19, x_20, x_3, x_4, x_5, x_6, x_13);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_24, 0, x_1);
lean_ctor_set(x_24, 1, x_14);
lean_ctor_set(x_24, 2, x_22);
x_25 = lean_st_ref_get(x_6, x_23);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
lean_dec(x_25);
x_27 = l_Tactic_Ring_RingM_run___rarg___closed__5;
x_28 = lean_st_mk_ref(x_27, x_26);
x_29 = lean_ctor_get(x_28, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_28, 1);
lean_inc(x_30);
lean_dec(x_28);
lean_inc(x_6);
lean_inc(x_29);
x_31 = lean_apply_7(x_2, x_24, x_29, x_3, x_4, x_5, x_6, x_30);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = lean_st_ref_get(x_6, x_33);
lean_dec(x_6);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = lean_st_ref_get(x_29, x_35);
lean_dec(x_29);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_ctor_get(x_36, 0);
lean_dec(x_38);
lean_ctor_set(x_36, 0, x_32);
return x_36;
}
else
{
lean_object* x_39; lean_object* x_40; 
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_32);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
else
{
uint8_t x_41; 
lean_dec(x_29);
lean_dec(x_6);
x_41 = !lean_is_exclusive(x_31);
if (x_41 == 0)
{
return x_31;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_31, 0);
x_43 = lean_ctor_get(x_31, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_31);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_14);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_21);
if (x_45 == 0)
{
return x_21;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_21, 0);
x_47 = lean_ctor_get(x_21, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_21);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
case 2:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_49 = lean_ctor_get(x_8, 1);
lean_inc(x_49);
lean_dec(x_8);
x_50 = l_Tactic_Ring_RingM_run___rarg___closed__2;
x_51 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg(x_50, x_3, x_4, x_5, x_6, x_49);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_51;
}
case 3:
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_52 = lean_ctor_get(x_8, 1);
lean_inc(x_52);
lean_dec(x_8);
x_53 = l_Tactic_Ring_RingM_run___rarg___closed__2;
x_54 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg(x_53, x_3, x_4, x_5, x_6, x_52);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_54;
}
case 4:
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_55 = lean_ctor_get(x_8, 1);
lean_inc(x_55);
lean_dec(x_8);
x_56 = l_Tactic_Ring_RingM_run___rarg___closed__2;
x_57 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg(x_56, x_3, x_4, x_5, x_6, x_55);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_57;
}
default: 
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_58 = lean_ctor_get(x_8, 1);
lean_inc(x_58);
lean_dec(x_8);
x_59 = l_Tactic_Ring_RingM_run___rarg___closed__2;
x_60 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg(x_59, x_3, x_4, x_5, x_6, x_58);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_60;
}
}
}
else
{
uint8_t x_61; 
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_61 = !lean_is_exclusive(x_8);
if (x_61 == 0)
{
return x_8;
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_62 = lean_ctor_get(x_8, 0);
x_63 = lean_ctor_get(x_8, 1);
lean_inc(x_63);
lean_inc(x_62);
lean_dec(x_8);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_62);
lean_ctor_set(x_64, 1, x_63);
return x_64;
}
}
}
}
lean_object* l_Tactic_Ring_RingM_run(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_RingM_run___rarg), 7, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__1___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__2___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__3___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__4___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
lean_object* l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_throwError___at_Tactic_Ring_RingM_run___spec__5___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_7;
}
}
static lean_object* _init_l_Tactic_Ring_mkAppCS___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_mkAppCS(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_Lean_mkConst(x_1, x_12);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_3, 2);
lean_inc(x_15);
lean_dec(x_3);
x_16 = l_Tactic_Ring_mkAppCS___closed__1;
x_17 = lean_array_push(x_16, x_14);
x_18 = lean_array_push(x_17, x_15);
x_19 = l_Array_append___rarg(x_18, x_2);
x_20 = l_Lean_mkAppN(x_13, x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_9);
return x_21;
}
}
lean_object* l_Tactic_Ring_mkAppCS___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_mkAppCS(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Tactic_Ring_addAtom_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Tactic_Ring_addAtom_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_addAtom_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_nat_dec_le(x_15, x_6);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_5, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_7);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_5, x_19);
lean_dec(x_5);
x_21 = lean_ctor_get(x_2, 0);
x_22 = l_Lean_instInhabitedExpr;
x_23 = lean_array_get(x_22, x_21, x_6);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_1);
x_24 = l_Lean_Meta_isExprDefEq(x_1, x_23, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_25; uint8_t x_26; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_unbox(x_25);
lean_dec(x_25);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_24, 1);
lean_inc(x_27);
lean_dec(x_24);
x_28 = lean_ctor_get(x_4, 2);
x_29 = lean_nat_add(x_6, x_28);
lean_dec(x_6);
lean_inc(x_3);
{
lean_object* _tmp_4 = x_20;
lean_object* _tmp_5 = x_29;
lean_object* _tmp_6 = x_3;
lean_object* _tmp_13 = x_27;
x_5 = _tmp_4;
x_6 = _tmp_5;
x_7 = _tmp_6;
x_14 = _tmp_13;
}
goto _start;
}
else
{
uint8_t x_31; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_3);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_24);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_24, 0);
lean_dec(x_32);
x_33 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_33, 0, x_6);
x_34 = lean_box(0);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
lean_ctor_set(x_24, 0, x_35);
return x_24;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_36 = lean_ctor_get(x_24, 1);
lean_inc(x_36);
lean_dec(x_24);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_6);
x_38 = lean_box(0);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_36);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_3);
lean_dec(x_1);
x_41 = !lean_is_exclusive(x_24);
if (x_41 == 0)
{
return x_24;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_24, 0);
x_43 = lean_ctor_get(x_24, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_24);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_42);
lean_ctor_set(x_44, 1, x_43);
return x_44;
}
}
}
else
{
lean_object* x_45; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_7);
lean_ctor_set(x_45, 1, x_14);
return x_45;
}
}
else
{
lean_object* x_46; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_7);
lean_ctor_set(x_46, 1, x_14);
return x_46;
}
}
}
lean_object* l_Tactic_Ring_addAtom___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_11 = lean_st_ref_get(x_9, x_10);
x_12 = lean_ctor_get(x_11, 1);
lean_inc(x_12);
lean_dec(x_11);
x_13 = lean_st_ref_take(x_5, x_12);
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
x_17 = lean_array_push(x_16, x_1);
x_18 = lean_ctor_get(x_14, 1);
lean_inc(x_18);
lean_dec(x_14);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_add(x_18, x_19);
lean_dec(x_18);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_17);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_st_ref_set(x_5, x_21, x_15);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_2);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_2);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
static lean_object* _init_l_Tactic_Ring_addAtom___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = lean_box(0);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_addAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_9 = lean_st_ref_get(x_7, x_8);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_st_ref_get(x_3, x_10);
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
x_14 = lean_ctor_get(x_12, 1);
lean_inc(x_14);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_unsigned_to_nat(1u);
lean_inc(x_14);
x_17 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_14);
lean_ctor_set(x_17, 2, x_16);
x_18 = l_Tactic_Ring_addAtom___closed__1;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_14);
lean_inc(x_1);
x_19 = l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1(x_1, x_12, x_18, x_17, x_14, x_15, x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_13);
lean_dec(x_17);
lean_dec(x_12);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_22 = lean_ctor_get(x_19, 1);
lean_inc(x_22);
lean_dec(x_19);
x_23 = lean_box(0);
x_24 = l_Tactic_Ring_addAtom___lambda__1(x_1, x_14, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_22);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_24;
}
else
{
uint8_t x_25; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_25 = !lean_is_exclusive(x_19);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; 
x_26 = lean_ctor_get(x_19, 0);
lean_dec(x_26);
x_27 = lean_ctor_get(x_21, 0);
lean_inc(x_27);
lean_dec(x_21);
lean_ctor_set(x_19, 0, x_27);
return x_19;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_19, 1);
lean_inc(x_28);
lean_dec(x_19);
x_29 = lean_ctor_get(x_21, 0);
lean_inc(x_29);
lean_dec(x_21);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8_t x_31; 
lean_dec(x_14);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_19);
if (x_31 == 0)
{
return x_19;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_19, 0);
x_33 = lean_ctor_get(x_19, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_19);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
}
lean_object* l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Std_Range_forIn_loop___at_Tactic_Ring_addAtom___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_4);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_Tactic_Ring_addAtom___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Tactic_Ring_addAtom___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
return x_11;
}
}
lean_object* l_Tactic_Ring_horner___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec(x_6);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 2);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lean_apply_2(x_10, x_4, x_3);
x_12 = lean_apply_2(x_9, x_2, x_11);
x_13 = lean_apply_2(x_7, x_12, x_5);
return x_13;
}
}
lean_object* l_Tactic_Ring_horner(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_horner___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_instInhabitedHornerExpr___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_Lean_mkRawNatLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_instInhabitedHornerExpr___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_instInhabitedHornerExpr___closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_instInhabitedHornerExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_Ring_instInhabitedHornerExpr___closed__2;
return x_1;
}
}
lean_object* l_Tactic_Ring_HornerExpr_e_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 2);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 3);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_5(x_3, x_7, x_8, x_9, x_10, x_11);
return x_12;
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_e_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_HornerExpr_e_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Tactic_Ring_HornerExpr_e(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
return x_2;
}
}
lean_object* l_Tactic_Ring_HornerExpr_e___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Tactic_Ring_HornerExpr_e(x_1);
lean_dec(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Tactic_Ring_HornerExpr_e___boxed), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1;
return x_1;
}
}
lean_object* l_Tactic_Ring_HornerExpr_isZero_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; 
lean_dec(x_2);
x_7 = lean_apply_1(x_3, x_1);
return x_7;
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_isZero_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_HornerExpr_isZero_match__1___rarg), 3, 0);
return x_2;
}
}
uint8_t l_Tactic_Ring_HornerExpr_isZero(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_ctor_get(x_1, 1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
return x_4;
}
else
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_isZero___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = l_Tactic_Ring_HornerExpr_isZero(x_1);
lean_dec(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Ring");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__2;
x_2 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_HornerExpr_xadd_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_12 = l_Tactic_Ring_HornerExpr_e(x_1);
x_13 = lean_ctor_get(x_2, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_3, 0);
lean_inc(x_14);
x_15 = l_Tactic_Ring_HornerExpr_e(x_4);
x_16 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__7;
x_17 = lean_array_push(x_16, x_12);
x_18 = lean_array_push(x_17, x_13);
x_19 = lean_array_push(x_18, x_14);
x_20 = lean_array_push(x_19, x_15);
x_21 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__6;
x_22 = l_Tactic_Ring_mkAppCS(x_21, x_20, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_ctor_get(x_22, 0);
x_25 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_1);
lean_ctor_set(x_25, 2, x_2);
lean_ctor_set(x_25, 3, x_3);
lean_ctor_set(x_25, 4, x_4);
lean_ctor_set(x_22, 0, x_25);
return x_22;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_26 = lean_ctor_get(x_22, 0);
x_27 = lean_ctor_get(x_22, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_22);
x_28 = lean_alloc_ctor(1, 5, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_1);
lean_ctor_set(x_28, 2, x_2);
lean_ctor_set(x_28, 3, x_3);
lean_ctor_set(x_28, 4, x_4);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
return x_29;
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_xadd_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_Ring_HornerExpr_xadd_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Tactic_Ring_HornerExpr_reflConv(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = l_Tactic_Ring_HornerExpr_e(x_1);
x_10 = l_Lean_Meta_mkEqRefl(x_9, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_1);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_1);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_1);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_reflConv___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Tactic_Ring_HornerExpr_reflConv(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_9;
}
}
lean_object* l_Tactic_Ring_HornerExpr_pp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
lean_dec(x_1);
x_6 = lean_apply_2(x_2, x_4, x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_1, 3);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = lean_ctor_get(x_1, 2);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 4);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_ctor_get(x_7, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_7, 1);
lean_inc(x_13);
lean_dec(x_7);
x_14 = lean_apply_6(x_3, x_8, x_9, x_10, x_12, x_13, x_11);
return x_14;
}
}
}
lean_object* l_Tactic_Ring_HornerExpr_pp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_HornerExpr_pp_match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__3;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__5;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__7;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(") * (");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__9;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")^");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__11;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" + ");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_HornerExpr_pp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_HornerExpr_pp___closed__13;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_HornerExpr_pp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_box(0);
x_11 = l_Lean_PrettyPrinter_ppExpr(x_10, x_9, x_7, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_11) == 0)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_11);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_13 = lean_ctor_get(x_11, 0);
x_14 = l_Tactic_Ring_HornerExpr_pp___closed__2;
x_15 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_13);
x_16 = l_Tactic_Ring_HornerExpr_pp___closed__4;
x_17 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = l_Nat_repr(x_8);
x_19 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_19, 0, x_18);
x_20 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_Tactic_Ring_HornerExpr_pp___closed__6;
x_22 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
lean_ctor_set(x_11, 0, x_22);
return x_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_23 = lean_ctor_get(x_11, 0);
x_24 = lean_ctor_get(x_11, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_11);
x_25 = l_Tactic_Ring_HornerExpr_pp___closed__2;
x_26 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_23);
x_27 = l_Tactic_Ring_HornerExpr_pp___closed__4;
x_28 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_28, 0, x_26);
lean_ctor_set(x_28, 1, x_27);
x_29 = l_Nat_repr(x_8);
x_30 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_30, 0, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_28);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Tactic_Ring_HornerExpr_pp___closed__6;
x_33 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_24);
return x_34;
}
}
else
{
uint8_t x_35; 
lean_dec(x_8);
x_35 = !lean_is_exclusive(x_11);
if (x_35 == 0)
{
return x_11;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_11, 0);
x_37 = lean_ctor_get(x_11, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_11);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_39 = lean_ctor_get(x_1, 3);
lean_inc(x_39);
x_40 = lean_ctor_get(x_1, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_1, 2);
lean_inc(x_41);
x_42 = lean_ctor_get(x_1, 4);
lean_inc(x_42);
lean_dec(x_1);
x_43 = lean_ctor_get(x_39, 1);
lean_inc(x_43);
lean_dec(x_39);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_44 = l_Tactic_Ring_HornerExpr_pp(x_40, x_2, x_3, x_4, x_5, x_6);
if (lean_obj_tag(x_44) == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_44, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_44, 1);
lean_inc(x_46);
lean_dec(x_44);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_47 = l_Tactic_Ring_HornerExpr_pp(x_42, x_2, x_3, x_4, x_5, x_46);
if (lean_obj_tag(x_47) == 0)
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_48 = lean_ctor_get(x_47, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_47, 1);
lean_inc(x_49);
lean_dec(x_47);
x_50 = lean_box(0);
x_51 = lean_ctor_get(x_41, 0);
lean_inc(x_51);
lean_dec(x_41);
x_52 = lean_box(0);
x_53 = l_Lean_PrettyPrinter_ppExpr(x_52, x_50, x_51, x_2, x_3, x_4, x_5, x_49);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_55 = lean_ctor_get(x_53, 0);
x_56 = l_Tactic_Ring_HornerExpr_pp___closed__8;
x_57 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_45);
x_58 = l_Tactic_Ring_HornerExpr_pp___closed__10;
x_59 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_59, 0, x_57);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_55);
x_61 = l_Tactic_Ring_HornerExpr_pp___closed__12;
x_62 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = l_Nat_repr(x_43);
x_64 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_64, 0, x_63);
x_65 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Tactic_Ring_HornerExpr_pp___closed__14;
x_67 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_48);
lean_ctor_set(x_53, 0, x_68);
return x_53;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; 
x_69 = lean_ctor_get(x_53, 0);
x_70 = lean_ctor_get(x_53, 1);
lean_inc(x_70);
lean_inc(x_69);
lean_dec(x_53);
x_71 = l_Tactic_Ring_HornerExpr_pp___closed__8;
x_72 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_45);
x_73 = l_Tactic_Ring_HornerExpr_pp___closed__10;
x_74 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_74, 0, x_72);
lean_ctor_set(x_74, 1, x_73);
x_75 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_75, 0, x_74);
lean_ctor_set(x_75, 1, x_69);
x_76 = l_Tactic_Ring_HornerExpr_pp___closed__12;
x_77 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_77, 0, x_75);
lean_ctor_set(x_77, 1, x_76);
x_78 = l_Nat_repr(x_43);
x_79 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_79, 0, x_78);
x_80 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_79);
x_81 = l_Tactic_Ring_HornerExpr_pp___closed__14;
x_82 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_83, 0, x_82);
lean_ctor_set(x_83, 1, x_48);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_70);
return x_84;
}
}
else
{
uint8_t x_85; 
lean_dec(x_48);
lean_dec(x_45);
lean_dec(x_43);
x_85 = !lean_is_exclusive(x_53);
if (x_85 == 0)
{
return x_53;
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_86 = lean_ctor_get(x_53, 0);
x_87 = lean_ctor_get(x_53, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_53);
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
lean_dec(x_45);
lean_dec(x_43);
lean_dec(x_41);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_47);
if (x_89 == 0)
{
return x_47;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_47, 0);
x_91 = lean_ctor_get(x_47, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_47);
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
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_93 = !lean_is_exclusive(x_44);
if (x_93 == 0)
{
return x_44;
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; 
x_94 = lean_ctor_get(x_44, 0);
x_95 = lean_ctor_get(x_44, 1);
lean_inc(x_95);
lean_inc(x_94);
lean_dec(x_44);
x_96 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_96, 0, x_94);
lean_ctor_set(x_96, 1, x_95);
return x_96;
}
}
}
}
}
lean_object* l_Tactic_Ring_evalHorner_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_apply_6(x_5, x_1, x_7, x_8, x_2, x_3, x_4);
return x_9;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_5);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = lean_ctor_get(x_1, 2);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 3);
lean_inc(x_13);
x_14 = lean_ctor_get(x_1, 4);
lean_inc(x_14);
x_15 = lean_apply_9(x_6, x_1, x_10, x_11, x_12, x_13, x_14, x_2, x_3, x_4);
return x_15;
}
}
}
lean_object* l_Tactic_Ring_evalHorner_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalHorner_match__1___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("zero_horner");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalHorner___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Nat_decEq___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_horner");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalHorner___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalHorner___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalHorner(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_ctor_get(x_1, 1);
lean_inc(x_12);
x_13 = lean_unsigned_to_nat(0u);
x_14 = lean_nat_dec_eq(x_12, x_13);
lean_dec(x_12);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_inc(x_5);
x_15 = l_Tactic_Ring_HornerExpr_xadd_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Tactic_Ring_HornerExpr_reflConv(x_16, x_5, x_6, x_7, x_8, x_9, x_10, x_17);
lean_dec(x_5);
return x_18;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_1);
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_3, 0);
lean_inc(x_20);
lean_dec(x_3);
x_21 = l_Tactic_Ring_HornerExpr_e(x_4);
x_22 = l_Tactic_Ring_evalHorner___closed__3;
x_23 = lean_array_push(x_22, x_19);
x_24 = lean_array_push(x_23, x_20);
x_25 = lean_array_push(x_24, x_21);
x_26 = l_Tactic_Ring_evalHorner___closed__2;
x_27 = l_Tactic_Ring_mkAppCS(x_26, x_25, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_4);
lean_ctor_set(x_30, 1, x_29);
lean_ctor_set(x_27, 0, x_30);
return x_27;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_31 = lean_ctor_get(x_27, 0);
x_32 = lean_ctor_get(x_27, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_27);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
return x_34;
}
}
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_35 = lean_ctor_get(x_1, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_1, 2);
lean_inc(x_36);
x_37 = lean_ctor_get(x_1, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_1, 4);
lean_inc(x_38);
x_39 = lean_ctor_get(x_36, 1);
lean_inc(x_39);
lean_dec(x_36);
x_40 = lean_ctor_get(x_2, 1);
lean_inc(x_40);
x_41 = lean_nat_dec_eq(x_39, x_40);
lean_dec(x_40);
lean_dec(x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_38);
lean_dec(x_37);
lean_dec(x_35);
lean_inc(x_5);
x_42 = l_Tactic_Ring_HornerExpr_xadd_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_Tactic_Ring_HornerExpr_reflConv(x_43, x_5, x_6, x_7, x_8, x_9, x_10, x_44);
lean_dec(x_5);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_46 = l_Tactic_Ring_HornerExpr_e(x_38);
lean_dec(x_38);
x_47 = l_Lean_Expr_numeral_x3f(x_46);
x_48 = l_Tactic_Ring_evalHorner___closed__5;
x_49 = l_Tactic_Ring_evalHorner___closed__4;
x_50 = l___private_Init_Data_Option_Basic_0__decEqOption____x40_Init_Data_Option_Basic___hyg_549____at_instDecidableEqOption___spec__1___rarg(x_48, x_47, x_49);
x_51 = lean_unbox(x_50);
lean_dec(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_37);
lean_dec(x_35);
lean_inc(x_5);
x_52 = l_Tactic_Ring_HornerExpr_xadd_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
lean_dec(x_52);
x_55 = l_Tactic_Ring_HornerExpr_reflConv(x_53, x_5, x_6, x_7, x_8, x_9, x_10, x_54);
lean_dec(x_5);
return x_55;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_1);
x_56 = lean_ctor_get(x_37, 1);
lean_inc(x_56);
x_57 = lean_ctor_get(x_3, 1);
lean_inc(x_57);
x_58 = lean_nat_add(x_56, x_57);
lean_dec(x_57);
lean_dec(x_56);
lean_inc(x_58);
x_59 = l_Lean_mkRawNatLit(x_58);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_59);
x_60 = l_Lean_Meta_mkEqRefl(x_59, x_7, x_8, x_9, x_10, x_11);
if (lean_obj_tag(x_60) == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_ctor_get(x_60, 1);
lean_inc(x_62);
lean_dec(x_60);
lean_inc(x_59);
x_63 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_63, 0, x_59);
lean_ctor_set(x_63, 1, x_58);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_2);
lean_inc(x_35);
x_64 = l_Tactic_Ring_HornerExpr_xadd_x27(x_35, x_2, x_63, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_62);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
x_66 = lean_ctor_get(x_64, 1);
lean_inc(x_66);
lean_dec(x_64);
x_67 = l_Tactic_Ring_HornerExpr_e(x_35);
lean_dec(x_35);
x_68 = lean_ctor_get(x_2, 0);
lean_inc(x_68);
lean_dec(x_2);
x_69 = lean_ctor_get(x_37, 0);
lean_inc(x_69);
lean_dec(x_37);
x_70 = lean_ctor_get(x_3, 0);
lean_inc(x_70);
lean_dec(x_3);
x_71 = l_Tactic_Ring_HornerExpr_e(x_4);
lean_dec(x_4);
x_72 = l_Tactic_Ring_evalHorner___closed__8;
x_73 = lean_array_push(x_72, x_67);
x_74 = lean_array_push(x_73, x_68);
x_75 = lean_array_push(x_74, x_69);
x_76 = lean_array_push(x_75, x_70);
x_77 = lean_array_push(x_76, x_71);
x_78 = lean_array_push(x_77, x_59);
x_79 = lean_array_push(x_78, x_61);
x_80 = l_Tactic_Ring_evalHorner___closed__7;
x_81 = l_Tactic_Ring_mkAppCS(x_80, x_79, x_5, x_6, x_7, x_8, x_9, x_10, x_66);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_65);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_81, 0, x_84);
return x_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_81, 0);
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_81);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_65);
lean_ctor_set(x_87, 1, x_85);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
uint8_t x_89; 
lean_dec(x_59);
lean_dec(x_58);
lean_dec(x_37);
lean_dec(x_35);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_60);
if (x_89 == 0)
{
return x_60;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_60, 0);
x_91 = lean_ctor_get(x_60, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_60);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
}
}
}
lean_object* l_Tactic_Ring_evalHorner___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_Tactic_Ring_evalHorner(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_6);
return x_12;
}
}
lean_object* l_Tactic_Ring_evalAdd_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Tactic_Ring_evalAdd_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalAdd_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalAdd_match__2___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_Tactic_Ring_evalAdd_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalAdd_match__2___rarg), 2, 0);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalAdd_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_4(x_3, x_7, x_8, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 2);
lean_inc(x_16);
x_17 = lean_ctor_get(x_2, 3);
lean_inc(x_17);
x_18 = lean_ctor_get(x_2, 4);
lean_inc(x_18);
x_19 = lean_apply_9(x_4, x_1, x_12, x_13, x_2, x_14, x_15, x_16, x_17, x_18);
return x_19;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec(x_6);
x_20 = lean_ctor_get(x_1, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 2);
lean_inc(x_22);
x_23 = lean_ctor_get(x_1, 3);
lean_inc(x_23);
x_24 = lean_ctor_get(x_1, 4);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 1);
lean_inc(x_26);
x_27 = lean_apply_9(x_5, x_1, x_20, x_21, x_22, x_23, x_24, x_2, x_25, x_26);
return x_27;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_5);
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 2);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 4);
lean_inc(x_32);
x_33 = lean_ctor_get(x_2, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_2, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 2);
lean_inc(x_35);
x_36 = lean_ctor_get(x_2, 3);
lean_inc(x_36);
x_37 = lean_ctor_get(x_2, 4);
lean_inc(x_37);
x_38 = lean_apply_12(x_6, x_1, x_28, x_29, x_30, x_31, x_32, x_2, x_33, x_34, x_35, x_36, x_37);
return x_38;
}
}
}
}
lean_object* l_Tactic_Ring_evalAdd_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalAdd_match__3___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("const_add_horner");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAdd___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("zero_add");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalAdd___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_add_const");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAdd___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("add_zero");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalAdd___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_add_horner_eq");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAdd___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(12u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("OfNat");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalAdd___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ofNat");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_evalAdd___closed__14;
x_2 = l_Tactic_Ring_evalAdd___closed__15;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_instInhabitedHornerExpr___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__18() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_add_horner_gt");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAdd___closed__18;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(13u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_add_horner_lt");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAdd___closed__22() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAdd___closed__21;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_evalAdd(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Meta_mkAdd(x_10, x_13, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Meta_NormNum_eval(x_16, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_nat_add(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_23);
lean_ctor_set(x_2, 0, x_22);
lean_ctor_set(x_20, 0, x_2);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_nat_add(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_26);
lean_ctor_set(x_2, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_18, 0, x_27);
return x_18;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_32 = x_28;
} else {
 lean_dec_ref(x_28);
 x_32 = lean_box(0);
}
x_33 = lean_nat_add(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_33);
lean_ctor_set(x_2, 0, x_30);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_2);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_11);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
return x_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_2, 0);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_46 = l_Lean_Meta_mkAdd(x_10, x_44, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_Meta_NormNum_eval(x_47, x_5, x_6, x_7, x_8, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_52 = x_49;
} else {
 lean_dec_ref(x_49);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_55 = x_50;
} else {
 lean_dec_ref(x_50);
 x_55 = lean_box(0);
}
x_56 = lean_nat_add(x_11, x_45);
lean_dec(x_45);
lean_dec(x_11);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
if (lean_is_scalar(x_55)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_55;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
if (lean_is_scalar(x_52)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_52;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_51);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_45);
lean_dec(x_11);
x_60 = lean_ctor_get(x_49, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_62 = x_49;
} else {
 lean_dec_ref(x_49);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_64 = lean_ctor_get(x_46, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_46, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_66 = x_46;
} else {
 lean_dec_ref(x_46);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_68 = lean_ctor_get(x_1, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_1, 1);
lean_inc(x_69);
x_70 = lean_ctor_get(x_2, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_2, 1);
lean_inc(x_71);
x_72 = lean_ctor_get(x_2, 2);
lean_inc(x_72);
x_73 = lean_ctor_get(x_2, 3);
lean_inc(x_73);
x_74 = lean_ctor_get(x_2, 4);
lean_inc(x_74);
x_75 = lean_unsigned_to_nat(0u);
x_76 = lean_nat_dec_eq(x_69, x_75);
lean_dec(x_69);
if (x_76 == 0)
{
lean_object* x_77; 
lean_dec(x_70);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_74);
x_77 = l_Tactic_Ring_evalAdd(x_1, x_74, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_77) == 0)
{
lean_object* x_78; lean_object* x_79; uint8_t x_80; 
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = !lean_is_exclusive(x_78);
if (x_80 == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint8_t x_101; 
x_81 = lean_ctor_get(x_78, 0);
x_82 = lean_ctor_get(x_78, 1);
lean_inc(x_3);
lean_inc(x_81);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
x_83 = l_Tactic_Ring_HornerExpr_xadd_x27(x_71, x_72, x_73, x_81, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
x_86 = l_Tactic_Ring_HornerExpr_e(x_71);
lean_dec(x_71);
x_87 = lean_ctor_get(x_72, 0);
lean_inc(x_87);
lean_dec(x_72);
x_88 = lean_ctor_get(x_73, 0);
lean_inc(x_88);
lean_dec(x_73);
x_89 = l_Tactic_Ring_HornerExpr_e(x_74);
lean_dec(x_74);
x_90 = l_Tactic_Ring_HornerExpr_e(x_81);
lean_dec(x_81);
x_91 = l_Tactic_Ring_evalHorner___closed__8;
x_92 = lean_array_push(x_91, x_68);
x_93 = lean_array_push(x_92, x_86);
x_94 = lean_array_push(x_93, x_87);
x_95 = lean_array_push(x_94, x_88);
x_96 = lean_array_push(x_95, x_89);
x_97 = lean_array_push(x_96, x_90);
x_98 = lean_array_push(x_97, x_82);
x_99 = l_Tactic_Ring_evalAdd___closed__2;
x_100 = l_Tactic_Ring_mkAppCS(x_99, x_98, x_3, x_4, x_5, x_6, x_7, x_8, x_85);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_101 = !lean_is_exclusive(x_100);
if (x_101 == 0)
{
lean_object* x_102; 
x_102 = lean_ctor_get(x_100, 0);
lean_ctor_set(x_78, 1, x_102);
lean_ctor_set(x_78, 0, x_84);
lean_ctor_set(x_100, 0, x_78);
return x_100;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_103 = lean_ctor_get(x_100, 0);
x_104 = lean_ctor_get(x_100, 1);
lean_inc(x_104);
lean_inc(x_103);
lean_dec(x_100);
lean_ctor_set(x_78, 1, x_103);
lean_ctor_set(x_78, 0, x_84);
x_105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_105, 0, x_78);
lean_ctor_set(x_105, 1, x_104);
return x_105;
}
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_106 = lean_ctor_get(x_78, 0);
x_107 = lean_ctor_get(x_78, 1);
lean_inc(x_107);
lean_inc(x_106);
lean_dec(x_78);
lean_inc(x_3);
lean_inc(x_106);
lean_inc(x_73);
lean_inc(x_72);
lean_inc(x_71);
x_108 = l_Tactic_Ring_HornerExpr_xadd_x27(x_71, x_72, x_73, x_106, x_3, x_4, x_5, x_6, x_7, x_8, x_79);
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
x_110 = lean_ctor_get(x_108, 1);
lean_inc(x_110);
lean_dec(x_108);
x_111 = l_Tactic_Ring_HornerExpr_e(x_71);
lean_dec(x_71);
x_112 = lean_ctor_get(x_72, 0);
lean_inc(x_112);
lean_dec(x_72);
x_113 = lean_ctor_get(x_73, 0);
lean_inc(x_113);
lean_dec(x_73);
x_114 = l_Tactic_Ring_HornerExpr_e(x_74);
lean_dec(x_74);
x_115 = l_Tactic_Ring_HornerExpr_e(x_106);
lean_dec(x_106);
x_116 = l_Tactic_Ring_evalHorner___closed__8;
x_117 = lean_array_push(x_116, x_68);
x_118 = lean_array_push(x_117, x_111);
x_119 = lean_array_push(x_118, x_112);
x_120 = lean_array_push(x_119, x_113);
x_121 = lean_array_push(x_120, x_114);
x_122 = lean_array_push(x_121, x_115);
x_123 = lean_array_push(x_122, x_107);
x_124 = l_Tactic_Ring_evalAdd___closed__2;
x_125 = l_Tactic_Ring_mkAppCS(x_124, x_123, x_3, x_4, x_5, x_6, x_7, x_8, x_110);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
if (lean_is_exclusive(x_125)) {
 lean_ctor_release(x_125, 0);
 lean_ctor_release(x_125, 1);
 x_128 = x_125;
} else {
 lean_dec_ref(x_125);
 x_128 = lean_box(0);
}
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_109);
lean_ctor_set(x_129, 1, x_126);
if (lean_is_scalar(x_128)) {
 x_130 = lean_alloc_ctor(0, 2, 0);
} else {
 x_130 = x_128;
}
lean_ctor_set(x_130, 0, x_129);
lean_ctor_set(x_130, 1, x_127);
return x_130;
}
}
else
{
uint8_t x_131; 
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_131 = !lean_is_exclusive(x_77);
if (x_131 == 0)
{
return x_77;
}
else
{
lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_132 = lean_ctor_get(x_77, 0);
x_133 = lean_ctor_get(x_77, 1);
lean_inc(x_133);
lean_inc(x_132);
lean_dec(x_77);
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_132);
lean_ctor_set(x_134, 1, x_133);
return x_134;
}
}
}
else
{
lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
lean_dec(x_68);
lean_dec(x_3);
lean_dec(x_1);
x_135 = l_Tactic_Ring_evalAdd___closed__5;
x_136 = lean_array_push(x_135, x_70);
x_137 = l_Tactic_Ring_evalAdd___closed__4;
x_138 = l_Lean_Meta_mkAppM(x_137, x_136, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_138) == 0)
{
uint8_t x_139; 
x_139 = !lean_is_exclusive(x_138);
if (x_139 == 0)
{
lean_object* x_140; lean_object* x_141; 
x_140 = lean_ctor_get(x_138, 0);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_2);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_138, 0, x_141);
return x_138;
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; 
x_142 = lean_ctor_get(x_138, 0);
x_143 = lean_ctor_get(x_138, 1);
lean_inc(x_143);
lean_inc(x_142);
lean_dec(x_138);
x_144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_144, 0, x_2);
lean_ctor_set(x_144, 1, x_142);
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
return x_145;
}
}
else
{
uint8_t x_146; 
lean_dec(x_2);
x_146 = !lean_is_exclusive(x_138);
if (x_146 == 0)
{
return x_138;
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_147 = lean_ctor_get(x_138, 0);
x_148 = lean_ctor_get(x_138, 1);
lean_inc(x_148);
lean_inc(x_147);
lean_dec(x_138);
x_149 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
return x_149;
}
}
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; 
x_150 = lean_ctor_get(x_1, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_1, 1);
lean_inc(x_151);
x_152 = lean_ctor_get(x_1, 2);
lean_inc(x_152);
x_153 = lean_ctor_get(x_1, 3);
lean_inc(x_153);
x_154 = lean_ctor_get(x_1, 4);
lean_inc(x_154);
x_155 = lean_ctor_get(x_2, 0);
lean_inc(x_155);
x_156 = lean_ctor_get(x_2, 1);
lean_inc(x_156);
x_157 = lean_unsigned_to_nat(0u);
x_158 = lean_nat_dec_eq(x_156, x_157);
lean_dec(x_156);
if (x_158 == 0)
{
lean_object* x_159; 
lean_dec(x_150);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_154);
x_159 = l_Tactic_Ring_evalAdd(x_154, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; lean_object* x_161; uint8_t x_162; 
x_160 = lean_ctor_get(x_159, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_159, 1);
lean_inc(x_161);
lean_dec(x_159);
x_162 = !lean_is_exclusive(x_160);
if (x_162 == 0)
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_163 = lean_ctor_get(x_160, 0);
x_164 = lean_ctor_get(x_160, 1);
lean_inc(x_3);
lean_inc(x_163);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
x_165 = l_Tactic_Ring_HornerExpr_xadd_x27(x_151, x_152, x_153, x_163, x_3, x_4, x_5, x_6, x_7, x_8, x_161);
x_166 = lean_ctor_get(x_165, 0);
lean_inc(x_166);
x_167 = lean_ctor_get(x_165, 1);
lean_inc(x_167);
lean_dec(x_165);
x_168 = l_Tactic_Ring_HornerExpr_e(x_151);
lean_dec(x_151);
x_169 = lean_ctor_get(x_152, 0);
lean_inc(x_169);
lean_dec(x_152);
x_170 = lean_ctor_get(x_153, 0);
lean_inc(x_170);
lean_dec(x_153);
x_171 = l_Tactic_Ring_HornerExpr_e(x_154);
lean_dec(x_154);
x_172 = l_Tactic_Ring_HornerExpr_e(x_163);
lean_dec(x_163);
x_173 = l_Tactic_Ring_evalHorner___closed__8;
x_174 = lean_array_push(x_173, x_168);
x_175 = lean_array_push(x_174, x_169);
x_176 = lean_array_push(x_175, x_170);
x_177 = lean_array_push(x_176, x_171);
x_178 = lean_array_push(x_177, x_155);
x_179 = lean_array_push(x_178, x_172);
x_180 = lean_array_push(x_179, x_164);
x_181 = l_Tactic_Ring_evalAdd___closed__7;
x_182 = l_Tactic_Ring_mkAppCS(x_181, x_180, x_3, x_4, x_5, x_6, x_7, x_8, x_167);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_183 = !lean_is_exclusive(x_182);
if (x_183 == 0)
{
lean_object* x_184; 
x_184 = lean_ctor_get(x_182, 0);
lean_ctor_set(x_160, 1, x_184);
lean_ctor_set(x_160, 0, x_166);
lean_ctor_set(x_182, 0, x_160);
return x_182;
}
else
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_185 = lean_ctor_get(x_182, 0);
x_186 = lean_ctor_get(x_182, 1);
lean_inc(x_186);
lean_inc(x_185);
lean_dec(x_182);
lean_ctor_set(x_160, 1, x_185);
lean_ctor_set(x_160, 0, x_166);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_160);
lean_ctor_set(x_187, 1, x_186);
return x_187;
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; 
x_188 = lean_ctor_get(x_160, 0);
x_189 = lean_ctor_get(x_160, 1);
lean_inc(x_189);
lean_inc(x_188);
lean_dec(x_160);
lean_inc(x_3);
lean_inc(x_188);
lean_inc(x_153);
lean_inc(x_152);
lean_inc(x_151);
x_190 = l_Tactic_Ring_HornerExpr_xadd_x27(x_151, x_152, x_153, x_188, x_3, x_4, x_5, x_6, x_7, x_8, x_161);
x_191 = lean_ctor_get(x_190, 0);
lean_inc(x_191);
x_192 = lean_ctor_get(x_190, 1);
lean_inc(x_192);
lean_dec(x_190);
x_193 = l_Tactic_Ring_HornerExpr_e(x_151);
lean_dec(x_151);
x_194 = lean_ctor_get(x_152, 0);
lean_inc(x_194);
lean_dec(x_152);
x_195 = lean_ctor_get(x_153, 0);
lean_inc(x_195);
lean_dec(x_153);
x_196 = l_Tactic_Ring_HornerExpr_e(x_154);
lean_dec(x_154);
x_197 = l_Tactic_Ring_HornerExpr_e(x_188);
lean_dec(x_188);
x_198 = l_Tactic_Ring_evalHorner___closed__8;
x_199 = lean_array_push(x_198, x_193);
x_200 = lean_array_push(x_199, x_194);
x_201 = lean_array_push(x_200, x_195);
x_202 = lean_array_push(x_201, x_196);
x_203 = lean_array_push(x_202, x_155);
x_204 = lean_array_push(x_203, x_197);
x_205 = lean_array_push(x_204, x_189);
x_206 = l_Tactic_Ring_evalAdd___closed__7;
x_207 = l_Tactic_Ring_mkAppCS(x_206, x_205, x_3, x_4, x_5, x_6, x_7, x_8, x_192);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_208 = lean_ctor_get(x_207, 0);
lean_inc(x_208);
x_209 = lean_ctor_get(x_207, 1);
lean_inc(x_209);
if (lean_is_exclusive(x_207)) {
 lean_ctor_release(x_207, 0);
 lean_ctor_release(x_207, 1);
 x_210 = x_207;
} else {
 lean_dec_ref(x_207);
 x_210 = lean_box(0);
}
x_211 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_211, 0, x_191);
lean_ctor_set(x_211, 1, x_208);
if (lean_is_scalar(x_210)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_210;
}
lean_ctor_set(x_212, 0, x_211);
lean_ctor_set(x_212, 1, x_209);
return x_212;
}
}
else
{
uint8_t x_213; 
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_151);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_213 = !lean_is_exclusive(x_159);
if (x_213 == 0)
{
return x_159;
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; 
x_214 = lean_ctor_get(x_159, 0);
x_215 = lean_ctor_get(x_159, 1);
lean_inc(x_215);
lean_inc(x_214);
lean_dec(x_159);
x_216 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_216, 0, x_214);
lean_ctor_set(x_216, 1, x_215);
return x_216;
}
}
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
lean_dec(x_155);
lean_dec(x_154);
lean_dec(x_153);
lean_dec(x_152);
lean_dec(x_151);
lean_dec(x_3);
lean_dec(x_2);
x_217 = l_Tactic_Ring_evalAdd___closed__5;
x_218 = lean_array_push(x_217, x_150);
x_219 = l_Tactic_Ring_evalAdd___closed__9;
x_220 = l_Lean_Meta_mkAppM(x_219, x_218, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_220) == 0)
{
uint8_t x_221; 
x_221 = !lean_is_exclusive(x_220);
if (x_221 == 0)
{
lean_object* x_222; lean_object* x_223; 
x_222 = lean_ctor_get(x_220, 0);
x_223 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_223, 0, x_1);
lean_ctor_set(x_223, 1, x_222);
lean_ctor_set(x_220, 0, x_223);
return x_220;
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_224 = lean_ctor_get(x_220, 0);
x_225 = lean_ctor_get(x_220, 1);
lean_inc(x_225);
lean_inc(x_224);
lean_dec(x_220);
x_226 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_226, 0, x_1);
lean_ctor_set(x_226, 1, x_224);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_225);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_dec(x_1);
x_228 = !lean_is_exclusive(x_220);
if (x_228 == 0)
{
return x_220;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_220, 0);
x_230 = lean_ctor_get(x_220, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_220);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; uint8_t x_248; 
x_232 = lean_ctor_get(x_1, 0);
lean_inc(x_232);
x_233 = lean_ctor_get(x_1, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_1, 2);
lean_inc(x_234);
x_235 = lean_ctor_get(x_1, 3);
lean_inc(x_235);
x_236 = lean_ctor_get(x_1, 4);
lean_inc(x_236);
x_237 = lean_ctor_get(x_2, 0);
lean_inc(x_237);
x_238 = lean_ctor_get(x_2, 1);
lean_inc(x_238);
x_239 = lean_ctor_get(x_2, 2);
lean_inc(x_239);
x_240 = lean_ctor_get(x_2, 3);
lean_inc(x_240);
x_241 = lean_ctor_get(x_2, 4);
lean_inc(x_241);
x_242 = lean_st_ref_get(x_8, x_9);
x_243 = lean_ctor_get(x_242, 1);
lean_inc(x_243);
lean_dec(x_242);
x_244 = lean_st_ref_get(x_4, x_243);
x_245 = lean_ctor_get(x_244, 1);
lean_inc(x_245);
lean_dec(x_244);
x_246 = lean_ctor_get(x_234, 1);
lean_inc(x_246);
x_247 = lean_ctor_get(x_239, 1);
lean_inc(x_247);
x_248 = lean_nat_dec_lt(x_246, x_247);
if (x_248 == 0)
{
uint8_t x_249; uint8_t x_250; 
lean_dec(x_237);
lean_dec(x_2);
x_249 = lean_nat_dec_eq(x_246, x_247);
lean_dec(x_247);
lean_dec(x_246);
x_250 = l_instDecidableNot___rarg(x_249);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; uint8_t x_253; 
lean_dec(x_239);
lean_dec(x_232);
lean_dec(x_1);
x_251 = lean_ctor_get(x_235, 1);
lean_inc(x_251);
x_252 = lean_ctor_get(x_240, 1);
lean_inc(x_252);
x_253 = lean_nat_dec_lt(x_251, x_252);
if (x_253 == 0)
{
uint8_t x_254; uint8_t x_255; 
x_254 = lean_nat_dec_eq(x_251, x_252);
x_255 = l_instDecidableNot___rarg(x_254);
if (x_255 == 0)
{
lean_object* x_256; 
lean_dec(x_252);
lean_dec(x_251);
lean_dec(x_240);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_238);
lean_inc(x_233);
x_256 = l_Tactic_Ring_evalAdd(x_233, x_238, x_3, x_4, x_5, x_6, x_7, x_8, x_245);
if (lean_obj_tag(x_256) == 0)
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
x_257 = lean_ctor_get(x_256, 0);
lean_inc(x_257);
x_258 = lean_ctor_get(x_256, 1);
lean_inc(x_258);
lean_dec(x_256);
x_259 = lean_ctor_get(x_257, 0);
lean_inc(x_259);
x_260 = lean_ctor_get(x_257, 1);
lean_inc(x_260);
lean_dec(x_257);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_241);
lean_inc(x_236);
x_261 = l_Tactic_Ring_evalAdd(x_236, x_241, x_3, x_4, x_5, x_6, x_7, x_8, x_258);
if (lean_obj_tag(x_261) == 0)
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; 
x_262 = lean_ctor_get(x_261, 0);
lean_inc(x_262);
x_263 = lean_ctor_get(x_261, 1);
lean_inc(x_263);
lean_dec(x_261);
x_264 = lean_ctor_get(x_262, 0);
lean_inc(x_264);
x_265 = lean_ctor_get(x_262, 1);
lean_inc(x_265);
lean_dec(x_262);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_264);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_259);
x_266 = l_Tactic_Ring_evalHorner(x_259, x_234, x_235, x_264, x_3, x_4, x_5, x_6, x_7, x_8, x_263);
if (lean_obj_tag(x_266) == 0)
{
lean_object* x_267; lean_object* x_268; uint8_t x_269; 
x_267 = lean_ctor_get(x_266, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_266, 1);
lean_inc(x_268);
lean_dec(x_266);
x_269 = !lean_is_exclusive(x_267);
if (x_269 == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; uint8_t x_296; 
x_270 = lean_ctor_get(x_267, 0);
x_271 = lean_ctor_get(x_267, 1);
x_272 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_273 = lean_ctor_get(x_234, 0);
lean_inc(x_273);
lean_dec(x_234);
x_274 = lean_ctor_get(x_235, 0);
lean_inc(x_274);
lean_dec(x_235);
x_275 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_276 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_277 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_278 = l_Tactic_Ring_HornerExpr_e(x_259);
lean_dec(x_259);
x_279 = l_Tactic_Ring_HornerExpr_e(x_264);
lean_dec(x_264);
x_280 = l_Tactic_Ring_HornerExpr_e(x_270);
x_281 = l_Tactic_Ring_evalAdd___closed__12;
x_282 = lean_array_push(x_281, x_272);
x_283 = lean_array_push(x_282, x_273);
x_284 = lean_array_push(x_283, x_274);
x_285 = lean_array_push(x_284, x_275);
x_286 = lean_array_push(x_285, x_276);
x_287 = lean_array_push(x_286, x_277);
x_288 = lean_array_push(x_287, x_278);
x_289 = lean_array_push(x_288, x_279);
x_290 = lean_array_push(x_289, x_280);
x_291 = lean_array_push(x_290, x_260);
x_292 = lean_array_push(x_291, x_265);
x_293 = lean_array_push(x_292, x_271);
x_294 = l_Tactic_Ring_evalAdd___closed__11;
x_295 = l_Tactic_Ring_mkAppCS(x_294, x_293, x_3, x_4, x_5, x_6, x_7, x_8, x_268);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_296 = !lean_is_exclusive(x_295);
if (x_296 == 0)
{
lean_object* x_297; 
x_297 = lean_ctor_get(x_295, 0);
lean_ctor_set(x_267, 1, x_297);
lean_ctor_set(x_295, 0, x_267);
return x_295;
}
else
{
lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_298 = lean_ctor_get(x_295, 0);
x_299 = lean_ctor_get(x_295, 1);
lean_inc(x_299);
lean_inc(x_298);
lean_dec(x_295);
lean_ctor_set(x_267, 1, x_298);
x_300 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_300, 0, x_267);
lean_ctor_set(x_300, 1, x_299);
return x_300;
}
}
else
{
lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_301 = lean_ctor_get(x_267, 0);
x_302 = lean_ctor_get(x_267, 1);
lean_inc(x_302);
lean_inc(x_301);
lean_dec(x_267);
x_303 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_304 = lean_ctor_get(x_234, 0);
lean_inc(x_304);
lean_dec(x_234);
x_305 = lean_ctor_get(x_235, 0);
lean_inc(x_305);
lean_dec(x_235);
x_306 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_307 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_308 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_309 = l_Tactic_Ring_HornerExpr_e(x_259);
lean_dec(x_259);
x_310 = l_Tactic_Ring_HornerExpr_e(x_264);
lean_dec(x_264);
x_311 = l_Tactic_Ring_HornerExpr_e(x_301);
x_312 = l_Tactic_Ring_evalAdd___closed__12;
x_313 = lean_array_push(x_312, x_303);
x_314 = lean_array_push(x_313, x_304);
x_315 = lean_array_push(x_314, x_305);
x_316 = lean_array_push(x_315, x_306);
x_317 = lean_array_push(x_316, x_307);
x_318 = lean_array_push(x_317, x_308);
x_319 = lean_array_push(x_318, x_309);
x_320 = lean_array_push(x_319, x_310);
x_321 = lean_array_push(x_320, x_311);
x_322 = lean_array_push(x_321, x_260);
x_323 = lean_array_push(x_322, x_265);
x_324 = lean_array_push(x_323, x_302);
x_325 = l_Tactic_Ring_evalAdd___closed__11;
x_326 = l_Tactic_Ring_mkAppCS(x_325, x_324, x_3, x_4, x_5, x_6, x_7, x_8, x_268);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_327 = lean_ctor_get(x_326, 0);
lean_inc(x_327);
x_328 = lean_ctor_get(x_326, 1);
lean_inc(x_328);
if (lean_is_exclusive(x_326)) {
 lean_ctor_release(x_326, 0);
 lean_ctor_release(x_326, 1);
 x_329 = x_326;
} else {
 lean_dec_ref(x_326);
 x_329 = lean_box(0);
}
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_301);
lean_ctor_set(x_330, 1, x_327);
if (lean_is_scalar(x_329)) {
 x_331 = lean_alloc_ctor(0, 2, 0);
} else {
 x_331 = x_329;
}
lean_ctor_set(x_331, 0, x_330);
lean_ctor_set(x_331, 1, x_328);
return x_331;
}
}
else
{
uint8_t x_332; 
lean_dec(x_265);
lean_dec(x_264);
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_332 = !lean_is_exclusive(x_266);
if (x_332 == 0)
{
return x_266;
}
else
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; 
x_333 = lean_ctor_get(x_266, 0);
x_334 = lean_ctor_get(x_266, 1);
lean_inc(x_334);
lean_inc(x_333);
lean_dec(x_266);
x_335 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_335, 0, x_333);
lean_ctor_set(x_335, 1, x_334);
return x_335;
}
}
}
else
{
uint8_t x_336; 
lean_dec(x_260);
lean_dec(x_259);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_336 = !lean_is_exclusive(x_261);
if (x_336 == 0)
{
return x_261;
}
else
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_337 = lean_ctor_get(x_261, 0);
x_338 = lean_ctor_get(x_261, 1);
lean_inc(x_338);
lean_inc(x_337);
lean_dec(x_261);
x_339 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_339, 0, x_337);
lean_ctor_set(x_339, 1, x_338);
return x_339;
}
}
}
else
{
uint8_t x_340; 
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_340 = !lean_is_exclusive(x_256);
if (x_340 == 0)
{
return x_256;
}
else
{
lean_object* x_341; lean_object* x_342; lean_object* x_343; 
x_341 = lean_ctor_get(x_256, 0);
x_342 = lean_ctor_get(x_256, 1);
lean_inc(x_342);
lean_inc(x_341);
lean_dec(x_256);
x_343 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_343, 0, x_341);
lean_ctor_set(x_343, 1, x_342);
return x_343;
}
}
}
else
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_344 = lean_nat_sub(x_251, x_252);
lean_dec(x_252);
lean_dec(x_251);
lean_inc(x_344);
x_345 = l_Lean_mkRawNatLit(x_344);
x_346 = lean_ctor_get(x_235, 0);
lean_inc(x_346);
lean_dec(x_235);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_346);
x_347 = l_Lean_Meta_mkEqRefl(x_346, x_5, x_6, x_7, x_8, x_245);
if (lean_obj_tag(x_347) == 0)
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_348 = lean_ctor_get(x_347, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_347, 1);
lean_inc(x_349);
lean_dec(x_347);
x_350 = lean_ctor_get(x_3, 0);
lean_inc(x_350);
x_351 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_351, 0, x_350);
x_352 = lean_box(0);
x_353 = l_Tactic_Ring_evalHorner___closed__3;
x_354 = lean_array_push(x_353, x_351);
x_355 = l_Tactic_Ring_evalAdd___closed__17;
x_356 = lean_array_push(x_354, x_355);
x_357 = lean_array_push(x_356, x_352);
x_358 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_359 = l_Lean_Meta_mkAppOptM(x_358, x_357, x_5, x_6, x_7, x_8, x_349);
if (lean_obj_tag(x_359) == 0)
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
lean_dec(x_359);
lean_inc(x_345);
x_362 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_362, 0, x_345);
lean_ctor_set(x_362, 1, x_344);
x_363 = lean_unsigned_to_nat(0u);
x_364 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_364, 0, x_360);
lean_ctor_set(x_364, 1, x_363);
lean_inc(x_3);
lean_inc(x_234);
lean_inc(x_233);
x_365 = l_Tactic_Ring_HornerExpr_xadd_x27(x_233, x_234, x_362, x_364, x_3, x_4, x_5, x_6, x_7, x_8, x_361);
x_366 = lean_ctor_get(x_365, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_238);
x_368 = l_Tactic_Ring_evalAdd(x_366, x_238, x_3, x_4, x_5, x_6, x_7, x_8, x_367);
if (lean_obj_tag(x_368) == 0)
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_369 = lean_ctor_get(x_368, 0);
lean_inc(x_369);
x_370 = lean_ctor_get(x_368, 1);
lean_inc(x_370);
lean_dec(x_368);
x_371 = lean_ctor_get(x_369, 0);
lean_inc(x_371);
x_372 = lean_ctor_get(x_369, 1);
lean_inc(x_372);
lean_dec(x_369);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_241);
lean_inc(x_236);
x_373 = l_Tactic_Ring_evalAdd(x_236, x_241, x_3, x_4, x_5, x_6, x_7, x_8, x_370);
if (lean_obj_tag(x_373) == 0)
{
lean_object* x_374; lean_object* x_375; uint8_t x_376; 
x_374 = lean_ctor_get(x_373, 0);
lean_inc(x_374);
x_375 = lean_ctor_get(x_373, 1);
lean_inc(x_375);
lean_dec(x_373);
x_376 = !lean_is_exclusive(x_374);
if (x_376 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; uint8_t x_406; 
x_377 = lean_ctor_get(x_374, 0);
x_378 = lean_ctor_get(x_374, 1);
lean_inc(x_3);
lean_inc(x_377);
lean_inc(x_240);
lean_inc(x_234);
lean_inc(x_371);
x_379 = l_Tactic_Ring_HornerExpr_xadd_x27(x_371, x_234, x_240, x_377, x_3, x_4, x_5, x_6, x_7, x_8, x_375);
x_380 = lean_ctor_get(x_379, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_379, 1);
lean_inc(x_381);
lean_dec(x_379);
x_382 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_383 = lean_ctor_get(x_234, 0);
lean_inc(x_383);
lean_dec(x_234);
x_384 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_385 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_386 = lean_ctor_get(x_240, 0);
lean_inc(x_386);
lean_dec(x_240);
x_387 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_388 = l_Tactic_Ring_HornerExpr_e(x_371);
lean_dec(x_371);
x_389 = l_Tactic_Ring_HornerExpr_e(x_377);
lean_dec(x_377);
x_390 = l_Tactic_Ring_evalAdd___closed__20;
x_391 = lean_array_push(x_390, x_382);
x_392 = lean_array_push(x_391, x_383);
x_393 = lean_array_push(x_392, x_346);
x_394 = lean_array_push(x_393, x_384);
x_395 = lean_array_push(x_394, x_385);
x_396 = lean_array_push(x_395, x_386);
x_397 = lean_array_push(x_396, x_387);
x_398 = lean_array_push(x_397, x_345);
x_399 = lean_array_push(x_398, x_388);
x_400 = lean_array_push(x_399, x_389);
x_401 = lean_array_push(x_400, x_348);
x_402 = lean_array_push(x_401, x_372);
x_403 = lean_array_push(x_402, x_378);
x_404 = l_Tactic_Ring_evalAdd___closed__19;
x_405 = l_Tactic_Ring_mkAppCS(x_404, x_403, x_3, x_4, x_5, x_6, x_7, x_8, x_381);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_406 = !lean_is_exclusive(x_405);
if (x_406 == 0)
{
lean_object* x_407; 
x_407 = lean_ctor_get(x_405, 0);
lean_ctor_set(x_374, 1, x_407);
lean_ctor_set(x_374, 0, x_380);
lean_ctor_set(x_405, 0, x_374);
return x_405;
}
else
{
lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_408 = lean_ctor_get(x_405, 0);
x_409 = lean_ctor_get(x_405, 1);
lean_inc(x_409);
lean_inc(x_408);
lean_dec(x_405);
lean_ctor_set(x_374, 1, x_408);
lean_ctor_set(x_374, 0, x_380);
x_410 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_410, 0, x_374);
lean_ctor_set(x_410, 1, x_409);
return x_410;
}
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; 
x_411 = lean_ctor_get(x_374, 0);
x_412 = lean_ctor_get(x_374, 1);
lean_inc(x_412);
lean_inc(x_411);
lean_dec(x_374);
lean_inc(x_3);
lean_inc(x_411);
lean_inc(x_240);
lean_inc(x_234);
lean_inc(x_371);
x_413 = l_Tactic_Ring_HornerExpr_xadd_x27(x_371, x_234, x_240, x_411, x_3, x_4, x_5, x_6, x_7, x_8, x_375);
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_416 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_417 = lean_ctor_get(x_234, 0);
lean_inc(x_417);
lean_dec(x_234);
x_418 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_419 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_420 = lean_ctor_get(x_240, 0);
lean_inc(x_420);
lean_dec(x_240);
x_421 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_422 = l_Tactic_Ring_HornerExpr_e(x_371);
lean_dec(x_371);
x_423 = l_Tactic_Ring_HornerExpr_e(x_411);
lean_dec(x_411);
x_424 = l_Tactic_Ring_evalAdd___closed__20;
x_425 = lean_array_push(x_424, x_416);
x_426 = lean_array_push(x_425, x_417);
x_427 = lean_array_push(x_426, x_346);
x_428 = lean_array_push(x_427, x_418);
x_429 = lean_array_push(x_428, x_419);
x_430 = lean_array_push(x_429, x_420);
x_431 = lean_array_push(x_430, x_421);
x_432 = lean_array_push(x_431, x_345);
x_433 = lean_array_push(x_432, x_422);
x_434 = lean_array_push(x_433, x_423);
x_435 = lean_array_push(x_434, x_348);
x_436 = lean_array_push(x_435, x_372);
x_437 = lean_array_push(x_436, x_412);
x_438 = l_Tactic_Ring_evalAdd___closed__19;
x_439 = l_Tactic_Ring_mkAppCS(x_438, x_437, x_3, x_4, x_5, x_6, x_7, x_8, x_415);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_440 = lean_ctor_get(x_439, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_439, 1);
lean_inc(x_441);
if (lean_is_exclusive(x_439)) {
 lean_ctor_release(x_439, 0);
 lean_ctor_release(x_439, 1);
 x_442 = x_439;
} else {
 lean_dec_ref(x_439);
 x_442 = lean_box(0);
}
x_443 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_443, 0, x_414);
lean_ctor_set(x_443, 1, x_440);
if (lean_is_scalar(x_442)) {
 x_444 = lean_alloc_ctor(0, 2, 0);
} else {
 x_444 = x_442;
}
lean_ctor_set(x_444, 0, x_443);
lean_ctor_set(x_444, 1, x_441);
return x_444;
}
}
else
{
uint8_t x_445; 
lean_dec(x_372);
lean_dec(x_371);
lean_dec(x_348);
lean_dec(x_346);
lean_dec(x_345);
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_445 = !lean_is_exclusive(x_373);
if (x_445 == 0)
{
return x_373;
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; 
x_446 = lean_ctor_get(x_373, 0);
x_447 = lean_ctor_get(x_373, 1);
lean_inc(x_447);
lean_inc(x_446);
lean_dec(x_373);
x_448 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_448, 0, x_446);
lean_ctor_set(x_448, 1, x_447);
return x_448;
}
}
}
else
{
uint8_t x_449; 
lean_dec(x_348);
lean_dec(x_346);
lean_dec(x_345);
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_449 = !lean_is_exclusive(x_368);
if (x_449 == 0)
{
return x_368;
}
else
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_450 = lean_ctor_get(x_368, 0);
x_451 = lean_ctor_get(x_368, 1);
lean_inc(x_451);
lean_inc(x_450);
lean_dec(x_368);
x_452 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_452, 0, x_450);
lean_ctor_set(x_452, 1, x_451);
return x_452;
}
}
}
else
{
uint8_t x_453; 
lean_dec(x_348);
lean_dec(x_346);
lean_dec(x_345);
lean_dec(x_344);
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_453 = !lean_is_exclusive(x_359);
if (x_453 == 0)
{
return x_359;
}
else
{
lean_object* x_454; lean_object* x_455; lean_object* x_456; 
x_454 = lean_ctor_get(x_359, 0);
x_455 = lean_ctor_get(x_359, 1);
lean_inc(x_455);
lean_inc(x_454);
lean_dec(x_359);
x_456 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_456, 0, x_454);
lean_ctor_set(x_456, 1, x_455);
return x_456;
}
}
}
else
{
uint8_t x_457; 
lean_dec(x_346);
lean_dec(x_345);
lean_dec(x_344);
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_457 = !lean_is_exclusive(x_347);
if (x_457 == 0)
{
return x_347;
}
else
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; 
x_458 = lean_ctor_get(x_347, 0);
x_459 = lean_ctor_get(x_347, 1);
lean_inc(x_459);
lean_inc(x_458);
lean_dec(x_347);
x_460 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_460, 0, x_458);
lean_ctor_set(x_460, 1, x_459);
return x_460;
}
}
}
}
else
{
lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; 
x_461 = lean_nat_sub(x_252, x_251);
lean_dec(x_251);
lean_dec(x_252);
lean_inc(x_461);
x_462 = l_Lean_mkRawNatLit(x_461);
x_463 = lean_ctor_get(x_240, 0);
lean_inc(x_463);
lean_dec(x_240);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_463);
x_464 = l_Lean_Meta_mkEqRefl(x_463, x_5, x_6, x_7, x_8, x_245);
if (lean_obj_tag(x_464) == 0)
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_465 = lean_ctor_get(x_464, 0);
lean_inc(x_465);
x_466 = lean_ctor_get(x_464, 1);
lean_inc(x_466);
lean_dec(x_464);
x_467 = lean_ctor_get(x_3, 0);
lean_inc(x_467);
x_468 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_468, 0, x_467);
x_469 = lean_box(0);
x_470 = l_Tactic_Ring_evalHorner___closed__3;
x_471 = lean_array_push(x_470, x_468);
x_472 = l_Tactic_Ring_evalAdd___closed__17;
x_473 = lean_array_push(x_471, x_472);
x_474 = lean_array_push(x_473, x_469);
x_475 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_476 = l_Lean_Meta_mkAppOptM(x_475, x_474, x_5, x_6, x_7, x_8, x_466);
if (lean_obj_tag(x_476) == 0)
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; 
x_477 = lean_ctor_get(x_476, 0);
lean_inc(x_477);
x_478 = lean_ctor_get(x_476, 1);
lean_inc(x_478);
lean_dec(x_476);
lean_inc(x_462);
x_479 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_479, 0, x_462);
lean_ctor_set(x_479, 1, x_461);
x_480 = lean_unsigned_to_nat(0u);
x_481 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_481, 0, x_477);
lean_ctor_set(x_481, 1, x_480);
lean_inc(x_3);
lean_inc(x_234);
lean_inc(x_238);
x_482 = l_Tactic_Ring_HornerExpr_xadd_x27(x_238, x_234, x_479, x_481, x_3, x_4, x_5, x_6, x_7, x_8, x_478);
x_483 = lean_ctor_get(x_482, 0);
lean_inc(x_483);
x_484 = lean_ctor_get(x_482, 1);
lean_inc(x_484);
lean_dec(x_482);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_233);
x_485 = l_Tactic_Ring_evalAdd(x_233, x_483, x_3, x_4, x_5, x_6, x_7, x_8, x_484);
if (lean_obj_tag(x_485) == 0)
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; 
x_486 = lean_ctor_get(x_485, 0);
lean_inc(x_486);
x_487 = lean_ctor_get(x_485, 1);
lean_inc(x_487);
lean_dec(x_485);
x_488 = lean_ctor_get(x_486, 0);
lean_inc(x_488);
x_489 = lean_ctor_get(x_486, 1);
lean_inc(x_489);
lean_dec(x_486);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_241);
lean_inc(x_236);
x_490 = l_Tactic_Ring_evalAdd(x_236, x_241, x_3, x_4, x_5, x_6, x_7, x_8, x_487);
if (lean_obj_tag(x_490) == 0)
{
lean_object* x_491; lean_object* x_492; uint8_t x_493; 
x_491 = lean_ctor_get(x_490, 0);
lean_inc(x_491);
x_492 = lean_ctor_get(x_490, 1);
lean_inc(x_492);
lean_dec(x_490);
x_493 = !lean_is_exclusive(x_491);
if (x_493 == 0)
{
lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; uint8_t x_523; 
x_494 = lean_ctor_get(x_491, 0);
x_495 = lean_ctor_get(x_491, 1);
lean_inc(x_3);
lean_inc(x_494);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_488);
x_496 = l_Tactic_Ring_HornerExpr_xadd_x27(x_488, x_234, x_235, x_494, x_3, x_4, x_5, x_6, x_7, x_8, x_492);
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
x_498 = lean_ctor_get(x_496, 1);
lean_inc(x_498);
lean_dec(x_496);
x_499 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_500 = lean_ctor_get(x_234, 0);
lean_inc(x_500);
lean_dec(x_234);
x_501 = lean_ctor_get(x_235, 0);
lean_inc(x_501);
lean_dec(x_235);
x_502 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_503 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_504 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_505 = l_Tactic_Ring_HornerExpr_e(x_488);
lean_dec(x_488);
x_506 = l_Tactic_Ring_HornerExpr_e(x_494);
lean_dec(x_494);
x_507 = l_Tactic_Ring_evalAdd___closed__20;
x_508 = lean_array_push(x_507, x_499);
x_509 = lean_array_push(x_508, x_500);
x_510 = lean_array_push(x_509, x_501);
x_511 = lean_array_push(x_510, x_502);
x_512 = lean_array_push(x_511, x_503);
x_513 = lean_array_push(x_512, x_463);
x_514 = lean_array_push(x_513, x_504);
x_515 = lean_array_push(x_514, x_462);
x_516 = lean_array_push(x_515, x_505);
x_517 = lean_array_push(x_516, x_506);
x_518 = lean_array_push(x_517, x_465);
x_519 = lean_array_push(x_518, x_489);
x_520 = lean_array_push(x_519, x_495);
x_521 = l_Tactic_Ring_evalAdd___closed__22;
x_522 = l_Tactic_Ring_mkAppCS(x_521, x_520, x_3, x_4, x_5, x_6, x_7, x_8, x_498);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_523 = !lean_is_exclusive(x_522);
if (x_523 == 0)
{
lean_object* x_524; 
x_524 = lean_ctor_get(x_522, 0);
lean_ctor_set(x_491, 1, x_524);
lean_ctor_set(x_491, 0, x_497);
lean_ctor_set(x_522, 0, x_491);
return x_522;
}
else
{
lean_object* x_525; lean_object* x_526; lean_object* x_527; 
x_525 = lean_ctor_get(x_522, 0);
x_526 = lean_ctor_get(x_522, 1);
lean_inc(x_526);
lean_inc(x_525);
lean_dec(x_522);
lean_ctor_set(x_491, 1, x_525);
lean_ctor_set(x_491, 0, x_497);
x_527 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_527, 0, x_491);
lean_ctor_set(x_527, 1, x_526);
return x_527;
}
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; 
x_528 = lean_ctor_get(x_491, 0);
x_529 = lean_ctor_get(x_491, 1);
lean_inc(x_529);
lean_inc(x_528);
lean_dec(x_491);
lean_inc(x_3);
lean_inc(x_528);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_488);
x_530 = l_Tactic_Ring_HornerExpr_xadd_x27(x_488, x_234, x_235, x_528, x_3, x_4, x_5, x_6, x_7, x_8, x_492);
x_531 = lean_ctor_get(x_530, 0);
lean_inc(x_531);
x_532 = lean_ctor_get(x_530, 1);
lean_inc(x_532);
lean_dec(x_530);
x_533 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_534 = lean_ctor_get(x_234, 0);
lean_inc(x_534);
lean_dec(x_234);
x_535 = lean_ctor_get(x_235, 0);
lean_inc(x_535);
lean_dec(x_235);
x_536 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_537 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_538 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_539 = l_Tactic_Ring_HornerExpr_e(x_488);
lean_dec(x_488);
x_540 = l_Tactic_Ring_HornerExpr_e(x_528);
lean_dec(x_528);
x_541 = l_Tactic_Ring_evalAdd___closed__20;
x_542 = lean_array_push(x_541, x_533);
x_543 = lean_array_push(x_542, x_534);
x_544 = lean_array_push(x_543, x_535);
x_545 = lean_array_push(x_544, x_536);
x_546 = lean_array_push(x_545, x_537);
x_547 = lean_array_push(x_546, x_463);
x_548 = lean_array_push(x_547, x_538);
x_549 = lean_array_push(x_548, x_462);
x_550 = lean_array_push(x_549, x_539);
x_551 = lean_array_push(x_550, x_540);
x_552 = lean_array_push(x_551, x_465);
x_553 = lean_array_push(x_552, x_489);
x_554 = lean_array_push(x_553, x_529);
x_555 = l_Tactic_Ring_evalAdd___closed__22;
x_556 = l_Tactic_Ring_mkAppCS(x_555, x_554, x_3, x_4, x_5, x_6, x_7, x_8, x_532);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_557 = lean_ctor_get(x_556, 0);
lean_inc(x_557);
x_558 = lean_ctor_get(x_556, 1);
lean_inc(x_558);
if (lean_is_exclusive(x_556)) {
 lean_ctor_release(x_556, 0);
 lean_ctor_release(x_556, 1);
 x_559 = x_556;
} else {
 lean_dec_ref(x_556);
 x_559 = lean_box(0);
}
x_560 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_560, 0, x_531);
lean_ctor_set(x_560, 1, x_557);
if (lean_is_scalar(x_559)) {
 x_561 = lean_alloc_ctor(0, 2, 0);
} else {
 x_561 = x_559;
}
lean_ctor_set(x_561, 0, x_560);
lean_ctor_set(x_561, 1, x_558);
return x_561;
}
}
else
{
uint8_t x_562; 
lean_dec(x_489);
lean_dec(x_488);
lean_dec(x_465);
lean_dec(x_463);
lean_dec(x_462);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_562 = !lean_is_exclusive(x_490);
if (x_562 == 0)
{
return x_490;
}
else
{
lean_object* x_563; lean_object* x_564; lean_object* x_565; 
x_563 = lean_ctor_get(x_490, 0);
x_564 = lean_ctor_get(x_490, 1);
lean_inc(x_564);
lean_inc(x_563);
lean_dec(x_490);
x_565 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_565, 0, x_563);
lean_ctor_set(x_565, 1, x_564);
return x_565;
}
}
}
else
{
uint8_t x_566; 
lean_dec(x_465);
lean_dec(x_463);
lean_dec(x_462);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_566 = !lean_is_exclusive(x_485);
if (x_566 == 0)
{
return x_485;
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; 
x_567 = lean_ctor_get(x_485, 0);
x_568 = lean_ctor_get(x_485, 1);
lean_inc(x_568);
lean_inc(x_567);
lean_dec(x_485);
x_569 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_569, 0, x_567);
lean_ctor_set(x_569, 1, x_568);
return x_569;
}
}
}
else
{
uint8_t x_570; 
lean_dec(x_465);
lean_dec(x_463);
lean_dec(x_462);
lean_dec(x_461);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_570 = !lean_is_exclusive(x_476);
if (x_570 == 0)
{
return x_476;
}
else
{
lean_object* x_571; lean_object* x_572; lean_object* x_573; 
x_571 = lean_ctor_get(x_476, 0);
x_572 = lean_ctor_get(x_476, 1);
lean_inc(x_572);
lean_inc(x_571);
lean_dec(x_476);
x_573 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_573, 0, x_571);
lean_ctor_set(x_573, 1, x_572);
return x_573;
}
}
}
else
{
uint8_t x_574; 
lean_dec(x_463);
lean_dec(x_462);
lean_dec(x_461);
lean_dec(x_241);
lean_dec(x_238);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_574 = !lean_is_exclusive(x_464);
if (x_574 == 0)
{
return x_464;
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; 
x_575 = lean_ctor_get(x_464, 0);
x_576 = lean_ctor_get(x_464, 1);
lean_inc(x_576);
lean_inc(x_575);
lean_dec(x_464);
x_577 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_577, 0, x_575);
lean_ctor_set(x_577, 1, x_576);
return x_577;
}
}
}
}
else
{
lean_object* x_578; 
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_241);
x_578 = l_Tactic_Ring_evalAdd(x_1, x_241, x_3, x_4, x_5, x_6, x_7, x_8, x_245);
if (lean_obj_tag(x_578) == 0)
{
lean_object* x_579; lean_object* x_580; uint8_t x_581; 
x_579 = lean_ctor_get(x_578, 0);
lean_inc(x_579);
x_580 = lean_ctor_get(x_578, 1);
lean_inc(x_580);
lean_dec(x_578);
x_581 = !lean_is_exclusive(x_579);
if (x_581 == 0)
{
lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; uint8_t x_602; 
x_582 = lean_ctor_get(x_579, 0);
x_583 = lean_ctor_get(x_579, 1);
lean_inc(x_3);
lean_inc(x_582);
lean_inc(x_240);
lean_inc(x_239);
lean_inc(x_238);
x_584 = l_Tactic_Ring_HornerExpr_xadd_x27(x_238, x_239, x_240, x_582, x_3, x_4, x_5, x_6, x_7, x_8, x_580);
x_585 = lean_ctor_get(x_584, 0);
lean_inc(x_585);
x_586 = lean_ctor_get(x_584, 1);
lean_inc(x_586);
lean_dec(x_584);
x_587 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_588 = lean_ctor_get(x_239, 0);
lean_inc(x_588);
lean_dec(x_239);
x_589 = lean_ctor_get(x_240, 0);
lean_inc(x_589);
lean_dec(x_240);
x_590 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_591 = l_Tactic_Ring_HornerExpr_e(x_582);
lean_dec(x_582);
x_592 = l_Tactic_Ring_evalHorner___closed__8;
x_593 = lean_array_push(x_592, x_232);
x_594 = lean_array_push(x_593, x_587);
x_595 = lean_array_push(x_594, x_588);
x_596 = lean_array_push(x_595, x_589);
x_597 = lean_array_push(x_596, x_590);
x_598 = lean_array_push(x_597, x_591);
x_599 = lean_array_push(x_598, x_583);
x_600 = l_Tactic_Ring_evalAdd___closed__2;
x_601 = l_Tactic_Ring_mkAppCS(x_600, x_599, x_3, x_4, x_5, x_6, x_7, x_8, x_586);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_602 = !lean_is_exclusive(x_601);
if (x_602 == 0)
{
lean_object* x_603; 
x_603 = lean_ctor_get(x_601, 0);
lean_ctor_set(x_579, 1, x_603);
lean_ctor_set(x_579, 0, x_585);
lean_ctor_set(x_601, 0, x_579);
return x_601;
}
else
{
lean_object* x_604; lean_object* x_605; lean_object* x_606; 
x_604 = lean_ctor_get(x_601, 0);
x_605 = lean_ctor_get(x_601, 1);
lean_inc(x_605);
lean_inc(x_604);
lean_dec(x_601);
lean_ctor_set(x_579, 1, x_604);
lean_ctor_set(x_579, 0, x_585);
x_606 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_606, 0, x_579);
lean_ctor_set(x_606, 1, x_605);
return x_606;
}
}
else
{
lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; 
x_607 = lean_ctor_get(x_579, 0);
x_608 = lean_ctor_get(x_579, 1);
lean_inc(x_608);
lean_inc(x_607);
lean_dec(x_579);
lean_inc(x_3);
lean_inc(x_607);
lean_inc(x_240);
lean_inc(x_239);
lean_inc(x_238);
x_609 = l_Tactic_Ring_HornerExpr_xadd_x27(x_238, x_239, x_240, x_607, x_3, x_4, x_5, x_6, x_7, x_8, x_580);
x_610 = lean_ctor_get(x_609, 0);
lean_inc(x_610);
x_611 = lean_ctor_get(x_609, 1);
lean_inc(x_611);
lean_dec(x_609);
x_612 = l_Tactic_Ring_HornerExpr_e(x_238);
lean_dec(x_238);
x_613 = lean_ctor_get(x_239, 0);
lean_inc(x_613);
lean_dec(x_239);
x_614 = lean_ctor_get(x_240, 0);
lean_inc(x_614);
lean_dec(x_240);
x_615 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_616 = l_Tactic_Ring_HornerExpr_e(x_607);
lean_dec(x_607);
x_617 = l_Tactic_Ring_evalHorner___closed__8;
x_618 = lean_array_push(x_617, x_232);
x_619 = lean_array_push(x_618, x_612);
x_620 = lean_array_push(x_619, x_613);
x_621 = lean_array_push(x_620, x_614);
x_622 = lean_array_push(x_621, x_615);
x_623 = lean_array_push(x_622, x_616);
x_624 = lean_array_push(x_623, x_608);
x_625 = l_Tactic_Ring_evalAdd___closed__2;
x_626 = l_Tactic_Ring_mkAppCS(x_625, x_624, x_3, x_4, x_5, x_6, x_7, x_8, x_611);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_627 = lean_ctor_get(x_626, 0);
lean_inc(x_627);
x_628 = lean_ctor_get(x_626, 1);
lean_inc(x_628);
if (lean_is_exclusive(x_626)) {
 lean_ctor_release(x_626, 0);
 lean_ctor_release(x_626, 1);
 x_629 = x_626;
} else {
 lean_dec_ref(x_626);
 x_629 = lean_box(0);
}
x_630 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_630, 0, x_610);
lean_ctor_set(x_630, 1, x_627);
if (lean_is_scalar(x_629)) {
 x_631 = lean_alloc_ctor(0, 2, 0);
} else {
 x_631 = x_629;
}
lean_ctor_set(x_631, 0, x_630);
lean_ctor_set(x_631, 1, x_628);
return x_631;
}
}
else
{
uint8_t x_632; 
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_239);
lean_dec(x_238);
lean_dec(x_232);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_632 = !lean_is_exclusive(x_578);
if (x_632 == 0)
{
return x_578;
}
else
{
lean_object* x_633; lean_object* x_634; lean_object* x_635; 
x_633 = lean_ctor_get(x_578, 0);
x_634 = lean_ctor_get(x_578, 1);
lean_inc(x_634);
lean_inc(x_633);
lean_dec(x_578);
x_635 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_635, 0, x_633);
lean_ctor_set(x_635, 1, x_634);
return x_635;
}
}
}
}
else
{
lean_object* x_636; 
lean_dec(x_247);
lean_dec(x_246);
lean_dec(x_241);
lean_dec(x_240);
lean_dec(x_239);
lean_dec(x_238);
lean_dec(x_232);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_236);
x_636 = l_Tactic_Ring_evalAdd(x_236, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_245);
if (lean_obj_tag(x_636) == 0)
{
lean_object* x_637; lean_object* x_638; uint8_t x_639; 
x_637 = lean_ctor_get(x_636, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_636, 1);
lean_inc(x_638);
lean_dec(x_636);
x_639 = !lean_is_exclusive(x_637);
if (x_639 == 0)
{
lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; uint8_t x_660; 
x_640 = lean_ctor_get(x_637, 0);
x_641 = lean_ctor_get(x_637, 1);
lean_inc(x_3);
lean_inc(x_640);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
x_642 = l_Tactic_Ring_HornerExpr_xadd_x27(x_233, x_234, x_235, x_640, x_3, x_4, x_5, x_6, x_7, x_8, x_638);
x_643 = lean_ctor_get(x_642, 0);
lean_inc(x_643);
x_644 = lean_ctor_get(x_642, 1);
lean_inc(x_644);
lean_dec(x_642);
x_645 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_646 = lean_ctor_get(x_234, 0);
lean_inc(x_646);
lean_dec(x_234);
x_647 = lean_ctor_get(x_235, 0);
lean_inc(x_647);
lean_dec(x_235);
x_648 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_649 = l_Tactic_Ring_HornerExpr_e(x_640);
lean_dec(x_640);
x_650 = l_Tactic_Ring_evalHorner___closed__8;
x_651 = lean_array_push(x_650, x_645);
x_652 = lean_array_push(x_651, x_646);
x_653 = lean_array_push(x_652, x_647);
x_654 = lean_array_push(x_653, x_648);
x_655 = lean_array_push(x_654, x_237);
x_656 = lean_array_push(x_655, x_649);
x_657 = lean_array_push(x_656, x_641);
x_658 = l_Tactic_Ring_evalAdd___closed__7;
x_659 = l_Tactic_Ring_mkAppCS(x_658, x_657, x_3, x_4, x_5, x_6, x_7, x_8, x_644);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_660 = !lean_is_exclusive(x_659);
if (x_660 == 0)
{
lean_object* x_661; 
x_661 = lean_ctor_get(x_659, 0);
lean_ctor_set(x_637, 1, x_661);
lean_ctor_set(x_637, 0, x_643);
lean_ctor_set(x_659, 0, x_637);
return x_659;
}
else
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; 
x_662 = lean_ctor_get(x_659, 0);
x_663 = lean_ctor_get(x_659, 1);
lean_inc(x_663);
lean_inc(x_662);
lean_dec(x_659);
lean_ctor_set(x_637, 1, x_662);
lean_ctor_set(x_637, 0, x_643);
x_664 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_664, 0, x_637);
lean_ctor_set(x_664, 1, x_663);
return x_664;
}
}
else
{
lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; 
x_665 = lean_ctor_get(x_637, 0);
x_666 = lean_ctor_get(x_637, 1);
lean_inc(x_666);
lean_inc(x_665);
lean_dec(x_637);
lean_inc(x_3);
lean_inc(x_665);
lean_inc(x_235);
lean_inc(x_234);
lean_inc(x_233);
x_667 = l_Tactic_Ring_HornerExpr_xadd_x27(x_233, x_234, x_235, x_665, x_3, x_4, x_5, x_6, x_7, x_8, x_638);
x_668 = lean_ctor_get(x_667, 0);
lean_inc(x_668);
x_669 = lean_ctor_get(x_667, 1);
lean_inc(x_669);
lean_dec(x_667);
x_670 = l_Tactic_Ring_HornerExpr_e(x_233);
lean_dec(x_233);
x_671 = lean_ctor_get(x_234, 0);
lean_inc(x_671);
lean_dec(x_234);
x_672 = lean_ctor_get(x_235, 0);
lean_inc(x_672);
lean_dec(x_235);
x_673 = l_Tactic_Ring_HornerExpr_e(x_236);
lean_dec(x_236);
x_674 = l_Tactic_Ring_HornerExpr_e(x_665);
lean_dec(x_665);
x_675 = l_Tactic_Ring_evalHorner___closed__8;
x_676 = lean_array_push(x_675, x_670);
x_677 = lean_array_push(x_676, x_671);
x_678 = lean_array_push(x_677, x_672);
x_679 = lean_array_push(x_678, x_673);
x_680 = lean_array_push(x_679, x_237);
x_681 = lean_array_push(x_680, x_674);
x_682 = lean_array_push(x_681, x_666);
x_683 = l_Tactic_Ring_evalAdd___closed__7;
x_684 = l_Tactic_Ring_mkAppCS(x_683, x_682, x_3, x_4, x_5, x_6, x_7, x_8, x_669);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_685 = lean_ctor_get(x_684, 0);
lean_inc(x_685);
x_686 = lean_ctor_get(x_684, 1);
lean_inc(x_686);
if (lean_is_exclusive(x_684)) {
 lean_ctor_release(x_684, 0);
 lean_ctor_release(x_684, 1);
 x_687 = x_684;
} else {
 lean_dec_ref(x_684);
 x_687 = lean_box(0);
}
x_688 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_688, 0, x_668);
lean_ctor_set(x_688, 1, x_685);
if (lean_is_scalar(x_687)) {
 x_689 = lean_alloc_ctor(0, 2, 0);
} else {
 x_689 = x_687;
}
lean_ctor_set(x_689, 0, x_688);
lean_ctor_set(x_689, 1, x_686);
return x_689;
}
}
else
{
uint8_t x_690; 
lean_dec(x_237);
lean_dec(x_236);
lean_dec(x_235);
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_690 = !lean_is_exclusive(x_636);
if (x_690 == 0)
{
return x_636;
}
else
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; 
x_691 = lean_ctor_get(x_636, 0);
x_692 = lean_ctor_get(x_636, 1);
lean_inc(x_692);
lean_inc(x_691);
lean_dec(x_636);
x_693 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_693, 0, x_691);
lean_ctor_set(x_693, 1, x_692);
return x_693;
}
}
}
}
}
}
}
lean_object* l_Tactic_Ring_evalAdd___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_evalAdd(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
static lean_object* _init_l_Tactic_Ring_evalConstMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_const_mul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalConstMul___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalConstMul___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalConstMul___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalConstMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_10; 
lean_dec(x_3);
x_10 = !lean_is_exclusive(x_2);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_2, 0);
x_12 = lean_ctor_get(x_2, 1);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Meta_mkMul(x_13, x_11, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Meta_NormNum_eval(x_15, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_17) == 0)
{
uint8_t x_18; 
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = !lean_is_exclusive(x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_19, 0);
x_22 = lean_ctor_get(x_1, 1);
lean_inc(x_22);
lean_dec(x_1);
x_23 = lean_nat_mul(x_22, x_12);
lean_dec(x_12);
lean_dec(x_22);
lean_ctor_set(x_2, 1, x_23);
lean_ctor_set(x_2, 0, x_21);
lean_ctor_set(x_19, 0, x_2);
return x_17;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get(x_19, 0);
x_25 = lean_ctor_get(x_19, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_19);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
lean_dec(x_1);
x_27 = lean_nat_mul(x_26, x_12);
lean_dec(x_12);
lean_dec(x_26);
lean_ctor_set(x_2, 1, x_27);
lean_ctor_set(x_2, 0, x_24);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_2);
lean_ctor_set(x_28, 1, x_25);
lean_ctor_set(x_17, 0, x_28);
return x_17;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_29 = lean_ctor_get(x_17, 0);
x_30 = lean_ctor_get(x_17, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_17);
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_29, 1);
lean_inc(x_32);
if (lean_is_exclusive(x_29)) {
 lean_ctor_release(x_29, 0);
 lean_ctor_release(x_29, 1);
 x_33 = x_29;
} else {
 lean_dec_ref(x_29);
 x_33 = lean_box(0);
}
x_34 = lean_ctor_get(x_1, 1);
lean_inc(x_34);
lean_dec(x_1);
x_35 = lean_nat_mul(x_34, x_12);
lean_dec(x_12);
lean_dec(x_34);
lean_ctor_set(x_2, 1, x_35);
lean_ctor_set(x_2, 0, x_31);
if (lean_is_scalar(x_33)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_33;
}
lean_ctor_set(x_36, 0, x_2);
lean_ctor_set(x_36, 1, x_32);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_30);
return x_37;
}
}
else
{
uint8_t x_38; 
lean_free_object(x_2);
lean_dec(x_12);
lean_dec(x_1);
x_38 = !lean_is_exclusive(x_17);
if (x_38 == 0)
{
return x_17;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_17, 0);
x_40 = lean_ctor_get(x_17, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_17);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
else
{
uint8_t x_42; 
lean_free_object(x_2);
lean_dec(x_12);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_42 = !lean_is_exclusive(x_14);
if (x_42 == 0)
{
return x_14;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_14, 0);
x_44 = lean_ctor_get(x_14, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_14);
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_44);
return x_45;
}
}
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_2, 0);
x_47 = lean_ctor_get(x_2, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_2);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_49 = l_Lean_Meta_mkMul(x_48, x_46, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
lean_dec(x_49);
x_52 = l_Lean_Meta_NormNum_eval(x_50, x_5, x_6, x_7, x_8, x_51);
if (lean_obj_tag(x_52) == 0)
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_53 = lean_ctor_get(x_52, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_52, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_55 = x_52;
} else {
 lean_dec_ref(x_52);
 x_55 = lean_box(0);
}
x_56 = lean_ctor_get(x_53, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_53, 1);
lean_inc(x_57);
if (lean_is_exclusive(x_53)) {
 lean_ctor_release(x_53, 0);
 lean_ctor_release(x_53, 1);
 x_58 = x_53;
} else {
 lean_dec_ref(x_53);
 x_58 = lean_box(0);
}
x_59 = lean_ctor_get(x_1, 1);
lean_inc(x_59);
lean_dec(x_1);
x_60 = lean_nat_mul(x_59, x_47);
lean_dec(x_47);
lean_dec(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_56);
lean_ctor_set(x_61, 1, x_60);
if (lean_is_scalar(x_58)) {
 x_62 = lean_alloc_ctor(0, 2, 0);
} else {
 x_62 = x_58;
}
lean_ctor_set(x_62, 0, x_61);
lean_ctor_set(x_62, 1, x_57);
if (lean_is_scalar(x_55)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_55;
}
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_54);
return x_63;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_47);
lean_dec(x_1);
x_64 = lean_ctor_get(x_52, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_52, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_52)) {
 lean_ctor_release(x_52, 0);
 lean_ctor_release(x_52, 1);
 x_66 = x_52;
} else {
 lean_dec_ref(x_52);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_47);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_68 = lean_ctor_get(x_49, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_49, 1);
lean_inc(x_69);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_70 = x_49;
} else {
 lean_dec_ref(x_49);
 x_70 = lean_box(0);
}
if (lean_is_scalar(x_70)) {
 x_71 = lean_alloc_ctor(1, 2, 0);
} else {
 x_71 = x_70;
}
lean_ctor_set(x_71, 0, x_68);
lean_ctor_set(x_71, 1, x_69);
return x_71;
}
}
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_72 = lean_ctor_get(x_2, 1);
lean_inc(x_72);
x_73 = lean_ctor_get(x_2, 2);
lean_inc(x_73);
x_74 = lean_ctor_get(x_2, 3);
lean_inc(x_74);
x_75 = lean_ctor_get(x_2, 4);
lean_inc(x_75);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_72);
lean_inc(x_1);
x_76 = l_Tactic_Ring_evalConstMul(x_1, x_72, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_76) == 0)
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_77 = lean_ctor_get(x_76, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 1);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 0);
lean_inc(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_75);
lean_inc(x_1);
x_81 = l_Tactic_Ring_evalConstMul(x_1, x_75, x_3, x_4, x_5, x_6, x_7, x_8, x_78);
if (lean_obj_tag(x_81) == 0)
{
lean_object* x_82; lean_object* x_83; uint8_t x_84; 
x_82 = lean_ctor_get(x_81, 0);
lean_inc(x_82);
x_83 = lean_ctor_get(x_81, 1);
lean_inc(x_83);
lean_dec(x_81);
x_84 = !lean_is_exclusive(x_82);
if (x_84 == 0)
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; uint8_t x_109; 
x_85 = lean_ctor_get(x_82, 0);
x_86 = lean_ctor_get(x_82, 1);
lean_inc(x_3);
lean_inc(x_85);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_79);
x_87 = l_Tactic_Ring_HornerExpr_xadd_x27(x_79, x_73, x_74, x_85, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lean_ctor_get(x_1, 0);
lean_inc(x_90);
lean_dec(x_1);
x_91 = l_Tactic_Ring_HornerExpr_e(x_72);
lean_dec(x_72);
x_92 = lean_ctor_get(x_73, 0);
lean_inc(x_92);
lean_dec(x_73);
x_93 = lean_ctor_get(x_74, 0);
lean_inc(x_93);
lean_dec(x_74);
x_94 = l_Tactic_Ring_HornerExpr_e(x_75);
lean_dec(x_75);
x_95 = l_Tactic_Ring_HornerExpr_e(x_79);
lean_dec(x_79);
x_96 = l_Tactic_Ring_HornerExpr_e(x_85);
lean_dec(x_85);
x_97 = l_Tactic_Ring_evalConstMul___closed__3;
x_98 = lean_array_push(x_97, x_90);
x_99 = lean_array_push(x_98, x_91);
x_100 = lean_array_push(x_99, x_92);
x_101 = lean_array_push(x_100, x_93);
x_102 = lean_array_push(x_101, x_94);
x_103 = lean_array_push(x_102, x_95);
x_104 = lean_array_push(x_103, x_96);
x_105 = lean_array_push(x_104, x_80);
x_106 = lean_array_push(x_105, x_86);
x_107 = l_Tactic_Ring_evalConstMul___closed__2;
x_108 = l_Tactic_Ring_mkAppCS(x_107, x_106, x_3, x_4, x_5, x_6, x_7, x_8, x_89);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_109 = !lean_is_exclusive(x_108);
if (x_109 == 0)
{
lean_object* x_110; 
x_110 = lean_ctor_get(x_108, 0);
lean_ctor_set(x_82, 1, x_110);
lean_ctor_set(x_82, 0, x_88);
lean_ctor_set(x_108, 0, x_82);
return x_108;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_108, 0);
x_112 = lean_ctor_get(x_108, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_108);
lean_ctor_set(x_82, 1, x_111);
lean_ctor_set(x_82, 0, x_88);
x_113 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_113, 0, x_82);
lean_ctor_set(x_113, 1, x_112);
return x_113;
}
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_114 = lean_ctor_get(x_82, 0);
x_115 = lean_ctor_get(x_82, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_82);
lean_inc(x_3);
lean_inc(x_114);
lean_inc(x_74);
lean_inc(x_73);
lean_inc(x_79);
x_116 = l_Tactic_Ring_HornerExpr_xadd_x27(x_79, x_73, x_74, x_114, x_3, x_4, x_5, x_6, x_7, x_8, x_83);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = lean_ctor_get(x_1, 0);
lean_inc(x_119);
lean_dec(x_1);
x_120 = l_Tactic_Ring_HornerExpr_e(x_72);
lean_dec(x_72);
x_121 = lean_ctor_get(x_73, 0);
lean_inc(x_121);
lean_dec(x_73);
x_122 = lean_ctor_get(x_74, 0);
lean_inc(x_122);
lean_dec(x_74);
x_123 = l_Tactic_Ring_HornerExpr_e(x_75);
lean_dec(x_75);
x_124 = l_Tactic_Ring_HornerExpr_e(x_79);
lean_dec(x_79);
x_125 = l_Tactic_Ring_HornerExpr_e(x_114);
lean_dec(x_114);
x_126 = l_Tactic_Ring_evalConstMul___closed__3;
x_127 = lean_array_push(x_126, x_119);
x_128 = lean_array_push(x_127, x_120);
x_129 = lean_array_push(x_128, x_121);
x_130 = lean_array_push(x_129, x_122);
x_131 = lean_array_push(x_130, x_123);
x_132 = lean_array_push(x_131, x_124);
x_133 = lean_array_push(x_132, x_125);
x_134 = lean_array_push(x_133, x_80);
x_135 = lean_array_push(x_134, x_115);
x_136 = l_Tactic_Ring_evalConstMul___closed__2;
x_137 = l_Tactic_Ring_mkAppCS(x_136, x_135, x_3, x_4, x_5, x_6, x_7, x_8, x_118);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_117);
lean_ctor_set(x_141, 1, x_138);
if (lean_is_scalar(x_140)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_140;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_139);
return x_142;
}
}
else
{
uint8_t x_143; 
lean_dec(x_80);
lean_dec(x_79);
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_143 = !lean_is_exclusive(x_81);
if (x_143 == 0)
{
return x_81;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_144 = lean_ctor_get(x_81, 0);
x_145 = lean_ctor_get(x_81, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_81);
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_144);
lean_ctor_set(x_146, 1, x_145);
return x_146;
}
}
}
else
{
uint8_t x_147; 
lean_dec(x_75);
lean_dec(x_74);
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_147 = !lean_is_exclusive(x_76);
if (x_147 == 0)
{
return x_76;
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; 
x_148 = lean_ctor_get(x_76, 0);
x_149 = lean_ctor_get(x_76, 1);
lean_inc(x_149);
lean_inc(x_148);
lean_dec(x_76);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_148);
lean_ctor_set(x_150, 1, x_149);
return x_150;
}
}
}
}
}
lean_object* l_Tactic_Ring_evalConstMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_evalConstMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Tactic_Ring_evalMul_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_6);
lean_dec(x_5);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_dec(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec(x_1);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_apply_4(x_3, x_7, x_8, x_9, x_10);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_3);
x_12 = lean_ctor_get(x_1, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_1, 1);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_apply_3(x_4, x_12, x_13, x_2);
return x_14;
}
}
else
{
lean_dec(x_4);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; 
lean_dec(x_6);
x_15 = lean_ctor_get(x_2, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
x_17 = lean_apply_4(x_5, x_1, x_2, x_15, x_16);
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_5);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_ctor_get(x_2, 2);
lean_inc(x_25);
x_26 = lean_ctor_get(x_2, 3);
lean_inc(x_26);
x_27 = lean_ctor_get(x_2, 4);
lean_inc(x_27);
x_28 = lean_apply_12(x_6, x_1, x_18, x_19, x_20, x_21, x_22, x_2, x_23, x_24, x_25, x_26, x_27);
return x_28;
}
}
}
}
lean_object* l_Tactic_Ring_evalMul_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalMul_match__1___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("one_mul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalMul___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("zero_mul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalMul___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("mul_comm");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalMul___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_mul_horner");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalMul___closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(17u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_mul_horner_zero");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalMul___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_mul_const");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalMul___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalMul___closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_evalMul(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_3);
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_dec(x_1);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_15 = l_Lean_Meta_mkMul(x_10, x_13, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_15) == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = l_Lean_Meta_NormNum_eval(x_16, x_5, x_6, x_7, x_8, x_17);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_nat_mul(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_23);
lean_ctor_set(x_2, 0, x_22);
lean_ctor_set(x_20, 0, x_2);
return x_18;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_20, 0);
x_25 = lean_ctor_get(x_20, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_20);
x_26 = lean_nat_mul(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_26);
lean_ctor_set(x_2, 0, x_24);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_2);
lean_ctor_set(x_27, 1, x_25);
lean_ctor_set(x_18, 0, x_27);
return x_18;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_28 = lean_ctor_get(x_18, 0);
x_29 = lean_ctor_get(x_18, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_18);
x_30 = lean_ctor_get(x_28, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_28, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_32 = x_28;
} else {
 lean_dec_ref(x_28);
 x_32 = lean_box(0);
}
x_33 = lean_nat_mul(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_2, 1, x_33);
lean_ctor_set(x_2, 0, x_30);
if (lean_is_scalar(x_32)) {
 x_34 = lean_alloc_ctor(0, 2, 0);
} else {
 x_34 = x_32;
}
lean_ctor_set(x_34, 0, x_2);
lean_ctor_set(x_34, 1, x_31);
x_35 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_29);
return x_35;
}
}
else
{
uint8_t x_36; 
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_11);
x_36 = !lean_is_exclusive(x_18);
if (x_36 == 0)
{
return x_18;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_37 = lean_ctor_get(x_18, 0);
x_38 = lean_ctor_get(x_18, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_18);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
uint8_t x_40; 
lean_free_object(x_2);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_40 = !lean_is_exclusive(x_15);
if (x_40 == 0)
{
return x_15;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_41 = lean_ctor_get(x_15, 0);
x_42 = lean_ctor_get(x_15, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_15);
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_41);
lean_ctor_set(x_43, 1, x_42);
return x_43;
}
}
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_2, 0);
x_45 = lean_ctor_get(x_2, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_2);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_46 = l_Lean_Meta_mkMul(x_10, x_44, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_46) == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_46, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_46, 1);
lean_inc(x_48);
lean_dec(x_46);
x_49 = l_Lean_Meta_NormNum_eval(x_47, x_5, x_6, x_7, x_8, x_48);
if (lean_obj_tag(x_49) == 0)
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_50 = lean_ctor_get(x_49, 0);
lean_inc(x_50);
x_51 = lean_ctor_get(x_49, 1);
lean_inc(x_51);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_52 = x_49;
} else {
 lean_dec_ref(x_49);
 x_52 = lean_box(0);
}
x_53 = lean_ctor_get(x_50, 0);
lean_inc(x_53);
x_54 = lean_ctor_get(x_50, 1);
lean_inc(x_54);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_55 = x_50;
} else {
 lean_dec_ref(x_50);
 x_55 = lean_box(0);
}
x_56 = lean_nat_mul(x_11, x_45);
lean_dec(x_45);
lean_dec(x_11);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
if (lean_is_scalar(x_55)) {
 x_58 = lean_alloc_ctor(0, 2, 0);
} else {
 x_58 = x_55;
}
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
if (lean_is_scalar(x_52)) {
 x_59 = lean_alloc_ctor(0, 2, 0);
} else {
 x_59 = x_52;
}
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_51);
return x_59;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_45);
lean_dec(x_11);
x_60 = lean_ctor_get(x_49, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_49, 1);
lean_inc(x_61);
if (lean_is_exclusive(x_49)) {
 lean_ctor_release(x_49, 0);
 lean_ctor_release(x_49, 1);
 x_62 = x_49;
} else {
 lean_dec_ref(x_49);
 x_62 = lean_box(0);
}
if (lean_is_scalar(x_62)) {
 x_63 = lean_alloc_ctor(1, 2, 0);
} else {
 x_63 = x_62;
}
lean_ctor_set(x_63, 0, x_60);
lean_ctor_set(x_63, 1, x_61);
return x_63;
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_45);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_64 = lean_ctor_get(x_46, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_46, 1);
lean_inc(x_65);
if (lean_is_exclusive(x_46)) {
 lean_ctor_release(x_46, 0);
 lean_ctor_release(x_46, 1);
 x_66 = x_46;
} else {
 lean_dec_ref(x_46);
 x_66 = lean_box(0);
}
if (lean_is_scalar(x_66)) {
 x_67 = lean_alloc_ctor(1, 2, 0);
} else {
 x_67 = x_66;
}
lean_ctor_set(x_67, 0, x_64);
lean_ctor_set(x_67, 1, x_65);
return x_67;
}
}
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_1);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_69 = lean_ctor_get(x_1, 0);
x_70 = lean_ctor_get(x_1, 1);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_nat_dec_eq(x_70, x_71);
if (x_72 == 0)
{
lean_object* x_73; uint8_t x_74; 
lean_free_object(x_1);
x_73 = lean_unsigned_to_nat(1u);
x_74 = lean_nat_dec_eq(x_70, x_73);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; 
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_69);
lean_ctor_set(x_75, 1, x_70);
x_76 = l_Tactic_Ring_evalConstMul(x_75, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_76;
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_3);
x_77 = l_Tactic_Ring_HornerExpr_e(x_2);
x_78 = l_Tactic_Ring_evalAdd___closed__5;
x_79 = lean_array_push(x_78, x_77);
x_80 = l_Tactic_Ring_evalMul___closed__2;
x_81 = l_Lean_Meta_mkAppM(x_80, x_79, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_81, 0);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_2);
lean_ctor_set(x_84, 1, x_83);
lean_ctor_set(x_81, 0, x_84);
return x_81;
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
x_85 = lean_ctor_get(x_81, 0);
x_86 = lean_ctor_get(x_81, 1);
lean_inc(x_86);
lean_inc(x_85);
lean_dec(x_81);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_2);
lean_ctor_set(x_87, 1, x_85);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_86);
return x_88;
}
}
else
{
uint8_t x_89; 
lean_dec(x_2);
x_89 = !lean_is_exclusive(x_81);
if (x_89 == 0)
{
return x_81;
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_90 = lean_ctor_get(x_81, 0);
x_91 = lean_ctor_get(x_81, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_81);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_90);
lean_ctor_set(x_92, 1, x_91);
return x_92;
}
}
}
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; 
lean_dec(x_70);
lean_dec(x_69);
x_93 = lean_ctor_get(x_3, 0);
lean_inc(x_93);
lean_dec(x_3);
x_94 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_94, 0, x_93);
x_95 = lean_box(0);
x_96 = l_Tactic_Ring_evalHorner___closed__3;
x_97 = lean_array_push(x_96, x_94);
x_98 = l_Tactic_Ring_evalAdd___closed__17;
x_99 = lean_array_push(x_97, x_98);
x_100 = lean_array_push(x_99, x_95);
x_101 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_102 = l_Lean_Meta_mkAppOptM(x_101, x_100, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_102) == 0)
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; 
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
x_105 = l_Tactic_Ring_HornerExpr_e(x_2);
lean_dec(x_2);
x_106 = l_Tactic_Ring_evalAdd___closed__5;
x_107 = lean_array_push(x_106, x_105);
x_108 = l_Tactic_Ring_evalMul___closed__4;
x_109 = l_Lean_Meta_mkAppM(x_108, x_107, x_5, x_6, x_7, x_8, x_104);
if (lean_obj_tag(x_109) == 0)
{
uint8_t x_110; 
x_110 = !lean_is_exclusive(x_109);
if (x_110 == 0)
{
lean_object* x_111; lean_object* x_112; 
x_111 = lean_ctor_get(x_109, 0);
lean_ctor_set(x_1, 1, x_71);
lean_ctor_set(x_1, 0, x_103);
x_112 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_112, 0, x_1);
lean_ctor_set(x_112, 1, x_111);
lean_ctor_set(x_109, 0, x_112);
return x_109;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_109, 0);
x_114 = lean_ctor_get(x_109, 1);
lean_inc(x_114);
lean_inc(x_113);
lean_dec(x_109);
lean_ctor_set(x_1, 1, x_71);
lean_ctor_set(x_1, 0, x_103);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_1);
lean_ctor_set(x_115, 1, x_113);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_115);
lean_ctor_set(x_116, 1, x_114);
return x_116;
}
}
else
{
uint8_t x_117; 
lean_dec(x_103);
lean_free_object(x_1);
x_117 = !lean_is_exclusive(x_109);
if (x_117 == 0)
{
return x_109;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; 
x_118 = lean_ctor_get(x_109, 0);
x_119 = lean_ctor_get(x_109, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_109);
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_118);
lean_ctor_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
uint8_t x_121; 
lean_free_object(x_1);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_121 = !lean_is_exclusive(x_102);
if (x_121 == 0)
{
return x_102;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
x_122 = lean_ctor_get(x_102, 0);
x_123 = lean_ctor_get(x_102, 1);
lean_inc(x_123);
lean_inc(x_122);
lean_dec(x_102);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_122);
lean_ctor_set(x_124, 1, x_123);
return x_124;
}
}
}
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
x_125 = lean_ctor_get(x_1, 0);
x_126 = lean_ctor_get(x_1, 1);
lean_inc(x_126);
lean_inc(x_125);
lean_dec(x_1);
x_127 = lean_unsigned_to_nat(0u);
x_128 = lean_nat_dec_eq(x_126, x_127);
if (x_128 == 0)
{
lean_object* x_129; uint8_t x_130; 
x_129 = lean_unsigned_to_nat(1u);
x_130 = lean_nat_dec_eq(x_126, x_129);
if (x_130 == 0)
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_125);
lean_ctor_set(x_131, 1, x_126);
x_132 = l_Tactic_Ring_evalConstMul(x_131, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; 
lean_dec(x_126);
lean_dec(x_125);
lean_dec(x_3);
x_133 = l_Tactic_Ring_HornerExpr_e(x_2);
x_134 = l_Tactic_Ring_evalAdd___closed__5;
x_135 = lean_array_push(x_134, x_133);
x_136 = l_Tactic_Ring_evalMul___closed__2;
x_137 = l_Lean_Meta_mkAppM(x_136, x_135, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_138 = lean_ctor_get(x_137, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_137, 1);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_2);
lean_ctor_set(x_141, 1, x_138);
if (lean_is_scalar(x_140)) {
 x_142 = lean_alloc_ctor(0, 2, 0);
} else {
 x_142 = x_140;
}
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_139);
return x_142;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
lean_dec(x_2);
x_143 = lean_ctor_get(x_137, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_137, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 lean_ctor_release(x_137, 1);
 x_145 = x_137;
} else {
 lean_dec_ref(x_137);
 x_145 = lean_box(0);
}
if (lean_is_scalar(x_145)) {
 x_146 = lean_alloc_ctor(1, 2, 0);
} else {
 x_146 = x_145;
}
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_144);
return x_146;
}
}
}
else
{
lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; 
lean_dec(x_126);
lean_dec(x_125);
x_147 = lean_ctor_get(x_3, 0);
lean_inc(x_147);
lean_dec(x_3);
x_148 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_148, 0, x_147);
x_149 = lean_box(0);
x_150 = l_Tactic_Ring_evalHorner___closed__3;
x_151 = lean_array_push(x_150, x_148);
x_152 = l_Tactic_Ring_evalAdd___closed__17;
x_153 = lean_array_push(x_151, x_152);
x_154 = lean_array_push(x_153, x_149);
x_155 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_156 = l_Lean_Meta_mkAppOptM(x_155, x_154, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_156) == 0)
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; 
x_157 = lean_ctor_get(x_156, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_156, 1);
lean_inc(x_158);
lean_dec(x_156);
x_159 = l_Tactic_Ring_HornerExpr_e(x_2);
lean_dec(x_2);
x_160 = l_Tactic_Ring_evalAdd___closed__5;
x_161 = lean_array_push(x_160, x_159);
x_162 = l_Tactic_Ring_evalMul___closed__4;
x_163 = l_Lean_Meta_mkAppM(x_162, x_161, x_5, x_6, x_7, x_8, x_158);
if (lean_obj_tag(x_163) == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
x_164 = lean_ctor_get(x_163, 0);
lean_inc(x_164);
x_165 = lean_ctor_get(x_163, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_166 = x_163;
} else {
 lean_dec_ref(x_163);
 x_166 = lean_box(0);
}
x_167 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_167, 0, x_157);
lean_ctor_set(x_167, 1, x_127);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_164);
if (lean_is_scalar(x_166)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_166;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_165);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
lean_dec(x_157);
x_170 = lean_ctor_get(x_163, 0);
lean_inc(x_170);
x_171 = lean_ctor_get(x_163, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_163)) {
 lean_ctor_release(x_163, 0);
 lean_ctor_release(x_163, 1);
 x_172 = x_163;
} else {
 lean_dec_ref(x_163);
 x_172 = lean_box(0);
}
if (lean_is_scalar(x_172)) {
 x_173 = lean_alloc_ctor(1, 2, 0);
} else {
 x_173 = x_172;
}
lean_ctor_set(x_173, 0, x_170);
lean_ctor_set(x_173, 1, x_171);
return x_173;
}
}
else
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
x_174 = lean_ctor_get(x_156, 0);
lean_inc(x_174);
x_175 = lean_ctor_get(x_156, 1);
lean_inc(x_175);
if (lean_is_exclusive(x_156)) {
 lean_ctor_release(x_156, 0);
 lean_ctor_release(x_156, 1);
 x_176 = x_156;
} else {
 lean_dec_ref(x_156);
 x_176 = lean_box(0);
}
if (lean_is_scalar(x_176)) {
 x_177 = lean_alloc_ctor(1, 2, 0);
} else {
 x_177 = x_176;
}
lean_ctor_set(x_177, 0, x_174);
lean_ctor_set(x_177, 1, x_175);
return x_177;
}
}
}
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_178 = lean_ctor_get(x_2, 0);
lean_inc(x_178);
x_179 = l_Tactic_Ring_HornerExpr_e(x_1);
x_180 = l_Tactic_Ring_mkAppCS___closed__1;
x_181 = lean_array_push(x_180, x_179);
x_182 = lean_array_push(x_181, x_178);
x_183 = l_Tactic_Ring_evalMul___closed__6;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_184 = l_Lean_Meta_mkAppM(x_183, x_182, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; 
x_185 = lean_ctor_get(x_184, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_184, 1);
lean_inc(x_186);
lean_dec(x_184);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_187 = l_Tactic_Ring_evalMul(x_2, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_186);
if (lean_obj_tag(x_187) == 0)
{
lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_188 = lean_ctor_get(x_187, 0);
lean_inc(x_188);
x_189 = lean_ctor_get(x_187, 1);
lean_inc(x_189);
lean_dec(x_187);
x_190 = !lean_is_exclusive(x_188);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; 
x_191 = lean_ctor_get(x_188, 0);
x_192 = lean_ctor_get(x_188, 1);
x_193 = l_Lean_Meta_mkEqTrans(x_185, x_192, x_5, x_6, x_7, x_8, x_189);
if (lean_obj_tag(x_193) == 0)
{
uint8_t x_194; 
x_194 = !lean_is_exclusive(x_193);
if (x_194 == 0)
{
lean_object* x_195; 
x_195 = lean_ctor_get(x_193, 0);
lean_ctor_set(x_188, 1, x_195);
lean_ctor_set(x_193, 0, x_188);
return x_193;
}
else
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_196 = lean_ctor_get(x_193, 0);
x_197 = lean_ctor_get(x_193, 1);
lean_inc(x_197);
lean_inc(x_196);
lean_dec(x_193);
lean_ctor_set(x_188, 1, x_196);
x_198 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_198, 0, x_188);
lean_ctor_set(x_198, 1, x_197);
return x_198;
}
}
else
{
uint8_t x_199; 
lean_free_object(x_188);
lean_dec(x_191);
x_199 = !lean_is_exclusive(x_193);
if (x_199 == 0)
{
return x_193;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_200 = lean_ctor_get(x_193, 0);
x_201 = lean_ctor_get(x_193, 1);
lean_inc(x_201);
lean_inc(x_200);
lean_dec(x_193);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_200);
lean_ctor_set(x_202, 1, x_201);
return x_202;
}
}
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_203 = lean_ctor_get(x_188, 0);
x_204 = lean_ctor_get(x_188, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_188);
x_205 = l_Lean_Meta_mkEqTrans(x_185, x_204, x_5, x_6, x_7, x_8, x_189);
if (lean_obj_tag(x_205) == 0)
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; 
x_206 = lean_ctor_get(x_205, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_205, 1);
lean_inc(x_207);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_208 = x_205;
} else {
 lean_dec_ref(x_205);
 x_208 = lean_box(0);
}
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_203);
lean_ctor_set(x_209, 1, x_206);
if (lean_is_scalar(x_208)) {
 x_210 = lean_alloc_ctor(0, 2, 0);
} else {
 x_210 = x_208;
}
lean_ctor_set(x_210, 0, x_209);
lean_ctor_set(x_210, 1, x_207);
return x_210;
}
else
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; 
lean_dec(x_203);
x_211 = lean_ctor_get(x_205, 0);
lean_inc(x_211);
x_212 = lean_ctor_get(x_205, 1);
lean_inc(x_212);
if (lean_is_exclusive(x_205)) {
 lean_ctor_release(x_205, 0);
 lean_ctor_release(x_205, 1);
 x_213 = x_205;
} else {
 lean_dec_ref(x_205);
 x_213 = lean_box(0);
}
if (lean_is_scalar(x_213)) {
 x_214 = lean_alloc_ctor(1, 2, 0);
} else {
 x_214 = x_213;
}
lean_ctor_set(x_214, 0, x_211);
lean_ctor_set(x_214, 1, x_212);
return x_214;
}
}
}
else
{
uint8_t x_215; 
lean_dec(x_185);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_215 = !lean_is_exclusive(x_187);
if (x_215 == 0)
{
return x_187;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; 
x_216 = lean_ctor_get(x_187, 0);
x_217 = lean_ctor_get(x_187, 1);
lean_inc(x_217);
lean_inc(x_216);
lean_dec(x_187);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_216);
lean_ctor_set(x_218, 1, x_217);
return x_218;
}
}
}
else
{
uint8_t x_219; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_219 = !lean_is_exclusive(x_184);
if (x_219 == 0)
{
return x_184;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_220 = lean_ctor_get(x_184, 0);
x_221 = lean_ctor_get(x_184, 1);
lean_inc(x_221);
lean_inc(x_220);
lean_dec(x_184);
x_222 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_222, 0, x_220);
lean_ctor_set(x_222, 1, x_221);
return x_222;
}
}
}
else
{
lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_235; 
x_223 = lean_ctor_get(x_1, 0);
lean_inc(x_223);
x_224 = lean_ctor_get(x_1, 1);
lean_inc(x_224);
x_225 = lean_ctor_get(x_1, 2);
lean_inc(x_225);
x_226 = lean_ctor_get(x_1, 3);
lean_inc(x_226);
x_227 = lean_ctor_get(x_1, 4);
lean_inc(x_227);
x_228 = lean_ctor_get(x_2, 0);
lean_inc(x_228);
x_229 = lean_ctor_get(x_2, 1);
lean_inc(x_229);
x_230 = lean_ctor_get(x_2, 2);
lean_inc(x_230);
x_231 = lean_ctor_get(x_2, 3);
lean_inc(x_231);
x_232 = lean_ctor_get(x_2, 4);
lean_inc(x_232);
x_233 = lean_ctor_get(x_225, 1);
lean_inc(x_233);
x_234 = lean_ctor_get(x_230, 1);
lean_inc(x_234);
x_235 = lean_nat_dec_lt(x_233, x_234);
if (x_235 == 0)
{
uint8_t x_236; uint8_t x_237; 
lean_dec(x_228);
lean_dec(x_2);
x_236 = lean_nat_dec_eq(x_233, x_234);
lean_dec(x_234);
lean_dec(x_233);
x_237 = l_instDecidableNot___rarg(x_236);
if (x_237 == 0)
{
lean_object* x_238; 
lean_dec(x_230);
lean_dec(x_223);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_229);
x_238 = l_Tactic_Ring_evalMul(x_1, x_229, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_238) == 0)
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_239 = lean_ctor_get(x_238, 0);
lean_inc(x_239);
x_240 = lean_ctor_get(x_238, 1);
lean_inc(x_240);
lean_dec(x_238);
x_241 = lean_ctor_get(x_239, 0);
lean_inc(x_241);
x_242 = lean_ctor_get(x_239, 1);
lean_inc(x_242);
lean_dec(x_239);
x_243 = lean_ctor_get(x_3, 0);
lean_inc(x_243);
x_244 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_244, 0, x_243);
x_245 = lean_box(0);
x_246 = l_Tactic_Ring_evalHorner___closed__3;
x_247 = lean_array_push(x_246, x_244);
x_248 = l_Tactic_Ring_evalAdd___closed__17;
x_249 = lean_array_push(x_247, x_248);
x_250 = lean_array_push(x_249, x_245);
x_251 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_252 = l_Lean_Meta_mkAppOptM(x_251, x_250, x_5, x_6, x_7, x_8, x_240);
if (lean_obj_tag(x_252) == 0)
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; 
x_253 = lean_ctor_get(x_252, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_252, 1);
lean_inc(x_254);
lean_dec(x_252);
x_255 = lean_unsigned_to_nat(0u);
x_256 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_255);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_231);
lean_inc(x_225);
lean_inc(x_241);
x_257 = l_Tactic_Ring_evalHorner(x_241, x_225, x_231, x_256, x_3, x_4, x_5, x_6, x_7, x_8, x_254);
if (lean_obj_tag(x_257) == 0)
{
lean_object* x_258; lean_object* x_259; uint8_t x_260; 
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec(x_257);
x_260 = !lean_is_exclusive(x_258);
if (x_260 == 0)
{
lean_object* x_261; lean_object* x_262; uint8_t x_263; 
x_261 = lean_ctor_get(x_258, 0);
x_262 = lean_ctor_get(x_258, 1);
x_263 = l_Tactic_Ring_HornerExpr_isZero(x_232);
if (x_263 == 0)
{
lean_object* x_264; 
lean_free_object(x_258);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_232);
lean_inc(x_224);
x_264 = l_Tactic_Ring_evalMul(x_224, x_232, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
if (lean_obj_tag(x_264) == 0)
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; 
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
lean_dec(x_264);
x_267 = lean_ctor_get(x_265, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_265, 1);
lean_inc(x_268);
lean_dec(x_265);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_232);
lean_inc(x_227);
x_269 = l_Tactic_Ring_evalMul(x_227, x_232, x_3, x_4, x_5, x_6, x_7, x_8, x_266);
if (lean_obj_tag(x_269) == 0)
{
lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; 
x_270 = lean_ctor_get(x_269, 0);
lean_inc(x_270);
x_271 = lean_ctor_get(x_269, 1);
lean_inc(x_271);
lean_dec(x_269);
x_272 = lean_ctor_get(x_270, 0);
lean_inc(x_272);
x_273 = lean_ctor_get(x_270, 1);
lean_inc(x_273);
lean_dec(x_270);
lean_inc(x_3);
lean_inc(x_272);
lean_inc(x_226);
lean_inc(x_225);
lean_inc(x_267);
x_274 = l_Tactic_Ring_HornerExpr_xadd_x27(x_267, x_225, x_226, x_272, x_3, x_4, x_5, x_6, x_7, x_8, x_271);
x_275 = lean_ctor_get(x_274, 0);
lean_inc(x_275);
x_276 = lean_ctor_get(x_274, 1);
lean_inc(x_276);
lean_dec(x_274);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_261);
x_277 = l_Tactic_Ring_evalAdd(x_261, x_275, x_3, x_4, x_5, x_6, x_7, x_8, x_276);
if (lean_obj_tag(x_277) == 0)
{
lean_object* x_278; lean_object* x_279; uint8_t x_280; 
x_278 = lean_ctor_get(x_277, 0);
lean_inc(x_278);
x_279 = lean_ctor_get(x_277, 1);
lean_inc(x_279);
lean_dec(x_277);
x_280 = !lean_is_exclusive(x_278);
if (x_280 == 0)
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; uint8_t x_315; 
x_281 = lean_ctor_get(x_278, 0);
x_282 = lean_ctor_get(x_278, 1);
x_283 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_284 = lean_ctor_get(x_225, 0);
lean_inc(x_284);
lean_dec(x_225);
x_285 = lean_ctor_get(x_226, 0);
lean_inc(x_285);
lean_dec(x_226);
x_286 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_287 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_288 = lean_ctor_get(x_231, 0);
lean_inc(x_288);
lean_dec(x_231);
x_289 = l_Tactic_Ring_HornerExpr_e(x_232);
lean_dec(x_232);
x_290 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_291 = l_Tactic_Ring_HornerExpr_e(x_261);
lean_dec(x_261);
x_292 = l_Tactic_Ring_HornerExpr_e(x_267);
lean_dec(x_267);
x_293 = l_Tactic_Ring_HornerExpr_e(x_272);
lean_dec(x_272);
x_294 = l_Tactic_Ring_HornerExpr_e(x_281);
x_295 = l_Tactic_Ring_evalMul___closed__9;
x_296 = lean_array_push(x_295, x_283);
x_297 = lean_array_push(x_296, x_284);
x_298 = lean_array_push(x_297, x_285);
x_299 = lean_array_push(x_298, x_286);
x_300 = lean_array_push(x_299, x_287);
x_301 = lean_array_push(x_300, x_288);
x_302 = lean_array_push(x_301, x_289);
x_303 = lean_array_push(x_302, x_290);
x_304 = lean_array_push(x_303, x_291);
x_305 = lean_array_push(x_304, x_292);
x_306 = lean_array_push(x_305, x_293);
x_307 = lean_array_push(x_306, x_294);
x_308 = lean_array_push(x_307, x_242);
x_309 = lean_array_push(x_308, x_262);
x_310 = lean_array_push(x_309, x_268);
x_311 = lean_array_push(x_310, x_273);
x_312 = lean_array_push(x_311, x_282);
x_313 = l_Tactic_Ring_evalMul___closed__8;
x_314 = l_Tactic_Ring_mkAppCS(x_313, x_312, x_3, x_4, x_5, x_6, x_7, x_8, x_279);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_315 = !lean_is_exclusive(x_314);
if (x_315 == 0)
{
lean_object* x_316; 
x_316 = lean_ctor_get(x_314, 0);
lean_ctor_set(x_278, 1, x_316);
lean_ctor_set(x_314, 0, x_278);
return x_314;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_317 = lean_ctor_get(x_314, 0);
x_318 = lean_ctor_get(x_314, 1);
lean_inc(x_318);
lean_inc(x_317);
lean_dec(x_314);
lean_ctor_set(x_278, 1, x_317);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_278);
lean_ctor_set(x_319, 1, x_318);
return x_319;
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; 
x_320 = lean_ctor_get(x_278, 0);
x_321 = lean_ctor_get(x_278, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_278);
x_322 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_323 = lean_ctor_get(x_225, 0);
lean_inc(x_323);
lean_dec(x_225);
x_324 = lean_ctor_get(x_226, 0);
lean_inc(x_324);
lean_dec(x_226);
x_325 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_326 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_327 = lean_ctor_get(x_231, 0);
lean_inc(x_327);
lean_dec(x_231);
x_328 = l_Tactic_Ring_HornerExpr_e(x_232);
lean_dec(x_232);
x_329 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_330 = l_Tactic_Ring_HornerExpr_e(x_261);
lean_dec(x_261);
x_331 = l_Tactic_Ring_HornerExpr_e(x_267);
lean_dec(x_267);
x_332 = l_Tactic_Ring_HornerExpr_e(x_272);
lean_dec(x_272);
x_333 = l_Tactic_Ring_HornerExpr_e(x_320);
x_334 = l_Tactic_Ring_evalMul___closed__9;
x_335 = lean_array_push(x_334, x_322);
x_336 = lean_array_push(x_335, x_323);
x_337 = lean_array_push(x_336, x_324);
x_338 = lean_array_push(x_337, x_325);
x_339 = lean_array_push(x_338, x_326);
x_340 = lean_array_push(x_339, x_327);
x_341 = lean_array_push(x_340, x_328);
x_342 = lean_array_push(x_341, x_329);
x_343 = lean_array_push(x_342, x_330);
x_344 = lean_array_push(x_343, x_331);
x_345 = lean_array_push(x_344, x_332);
x_346 = lean_array_push(x_345, x_333);
x_347 = lean_array_push(x_346, x_242);
x_348 = lean_array_push(x_347, x_262);
x_349 = lean_array_push(x_348, x_268);
x_350 = lean_array_push(x_349, x_273);
x_351 = lean_array_push(x_350, x_321);
x_352 = l_Tactic_Ring_evalMul___closed__8;
x_353 = l_Tactic_Ring_mkAppCS(x_352, x_351, x_3, x_4, x_5, x_6, x_7, x_8, x_279);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_354 = lean_ctor_get(x_353, 0);
lean_inc(x_354);
x_355 = lean_ctor_get(x_353, 1);
lean_inc(x_355);
if (lean_is_exclusive(x_353)) {
 lean_ctor_release(x_353, 0);
 lean_ctor_release(x_353, 1);
 x_356 = x_353;
} else {
 lean_dec_ref(x_353);
 x_356 = lean_box(0);
}
x_357 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_357, 0, x_320);
lean_ctor_set(x_357, 1, x_354);
if (lean_is_scalar(x_356)) {
 x_358 = lean_alloc_ctor(0, 2, 0);
} else {
 x_358 = x_356;
}
lean_ctor_set(x_358, 0, x_357);
lean_ctor_set(x_358, 1, x_355);
return x_358;
}
}
else
{
uint8_t x_359; 
lean_dec(x_273);
lean_dec(x_272);
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_359 = !lean_is_exclusive(x_277);
if (x_359 == 0)
{
return x_277;
}
else
{
lean_object* x_360; lean_object* x_361; lean_object* x_362; 
x_360 = lean_ctor_get(x_277, 0);
x_361 = lean_ctor_get(x_277, 1);
lean_inc(x_361);
lean_inc(x_360);
lean_dec(x_277);
x_362 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_362, 0, x_360);
lean_ctor_set(x_362, 1, x_361);
return x_362;
}
}
}
else
{
uint8_t x_363; 
lean_dec(x_268);
lean_dec(x_267);
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_363 = !lean_is_exclusive(x_269);
if (x_363 == 0)
{
return x_269;
}
else
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; 
x_364 = lean_ctor_get(x_269, 0);
x_365 = lean_ctor_get(x_269, 1);
lean_inc(x_365);
lean_inc(x_364);
lean_dec(x_269);
x_366 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_366, 0, x_364);
lean_ctor_set(x_366, 1, x_365);
return x_366;
}
}
}
else
{
uint8_t x_367; 
lean_dec(x_262);
lean_dec(x_261);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_367 = !lean_is_exclusive(x_264);
if (x_367 == 0)
{
return x_264;
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; 
x_368 = lean_ctor_get(x_264, 0);
x_369 = lean_ctor_get(x_264, 1);
lean_inc(x_369);
lean_inc(x_368);
lean_dec(x_264);
x_370 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_370, 0, x_368);
lean_ctor_set(x_370, 1, x_369);
return x_370;
}
}
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; uint8_t x_392; 
lean_dec(x_232);
x_371 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_372 = lean_ctor_get(x_225, 0);
lean_inc(x_372);
lean_dec(x_225);
x_373 = lean_ctor_get(x_226, 0);
lean_inc(x_373);
lean_dec(x_226);
x_374 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_375 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_376 = lean_ctor_get(x_231, 0);
lean_inc(x_376);
lean_dec(x_231);
x_377 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_378 = l_Tactic_Ring_HornerExpr_e(x_261);
x_379 = l_Tactic_Ring_evalMul___closed__12;
x_380 = lean_array_push(x_379, x_371);
x_381 = lean_array_push(x_380, x_372);
x_382 = lean_array_push(x_381, x_373);
x_383 = lean_array_push(x_382, x_374);
x_384 = lean_array_push(x_383, x_375);
x_385 = lean_array_push(x_384, x_376);
x_386 = lean_array_push(x_385, x_377);
x_387 = lean_array_push(x_386, x_378);
x_388 = lean_array_push(x_387, x_242);
x_389 = lean_array_push(x_388, x_262);
x_390 = l_Tactic_Ring_evalMul___closed__11;
x_391 = l_Tactic_Ring_mkAppCS(x_390, x_389, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_392 = !lean_is_exclusive(x_391);
if (x_392 == 0)
{
lean_object* x_393; 
x_393 = lean_ctor_get(x_391, 0);
lean_ctor_set(x_258, 1, x_393);
lean_ctor_set(x_391, 0, x_258);
return x_391;
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_394 = lean_ctor_get(x_391, 0);
x_395 = lean_ctor_get(x_391, 1);
lean_inc(x_395);
lean_inc(x_394);
lean_dec(x_391);
lean_ctor_set(x_258, 1, x_394);
x_396 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_396, 0, x_258);
lean_ctor_set(x_396, 1, x_395);
return x_396;
}
}
}
else
{
lean_object* x_397; lean_object* x_398; uint8_t x_399; 
x_397 = lean_ctor_get(x_258, 0);
x_398 = lean_ctor_get(x_258, 1);
lean_inc(x_398);
lean_inc(x_397);
lean_dec(x_258);
x_399 = l_Tactic_Ring_HornerExpr_isZero(x_232);
if (x_399 == 0)
{
lean_object* x_400; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_232);
lean_inc(x_224);
x_400 = l_Tactic_Ring_evalMul(x_224, x_232, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
if (lean_obj_tag(x_400) == 0)
{
lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_401 = lean_ctor_get(x_400, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_400, 1);
lean_inc(x_402);
lean_dec(x_400);
x_403 = lean_ctor_get(x_401, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_401, 1);
lean_inc(x_404);
lean_dec(x_401);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_232);
lean_inc(x_227);
x_405 = l_Tactic_Ring_evalMul(x_227, x_232, x_3, x_4, x_5, x_6, x_7, x_8, x_402);
if (lean_obj_tag(x_405) == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_406 = lean_ctor_get(x_405, 0);
lean_inc(x_406);
x_407 = lean_ctor_get(x_405, 1);
lean_inc(x_407);
lean_dec(x_405);
x_408 = lean_ctor_get(x_406, 0);
lean_inc(x_408);
x_409 = lean_ctor_get(x_406, 1);
lean_inc(x_409);
lean_dec(x_406);
lean_inc(x_3);
lean_inc(x_408);
lean_inc(x_226);
lean_inc(x_225);
lean_inc(x_403);
x_410 = l_Tactic_Ring_HornerExpr_xadd_x27(x_403, x_225, x_226, x_408, x_3, x_4, x_5, x_6, x_7, x_8, x_407);
x_411 = lean_ctor_get(x_410, 0);
lean_inc(x_411);
x_412 = lean_ctor_get(x_410, 1);
lean_inc(x_412);
lean_dec(x_410);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_397);
x_413 = l_Tactic_Ring_evalAdd(x_397, x_411, x_3, x_4, x_5, x_6, x_7, x_8, x_412);
if (lean_obj_tag(x_413) == 0)
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
x_414 = lean_ctor_get(x_413, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_413, 1);
lean_inc(x_415);
lean_dec(x_413);
x_416 = lean_ctor_get(x_414, 0);
lean_inc(x_416);
x_417 = lean_ctor_get(x_414, 1);
lean_inc(x_417);
if (lean_is_exclusive(x_414)) {
 lean_ctor_release(x_414, 0);
 lean_ctor_release(x_414, 1);
 x_418 = x_414;
} else {
 lean_dec_ref(x_414);
 x_418 = lean_box(0);
}
x_419 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_420 = lean_ctor_get(x_225, 0);
lean_inc(x_420);
lean_dec(x_225);
x_421 = lean_ctor_get(x_226, 0);
lean_inc(x_421);
lean_dec(x_226);
x_422 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_423 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_424 = lean_ctor_get(x_231, 0);
lean_inc(x_424);
lean_dec(x_231);
x_425 = l_Tactic_Ring_HornerExpr_e(x_232);
lean_dec(x_232);
x_426 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_427 = l_Tactic_Ring_HornerExpr_e(x_397);
lean_dec(x_397);
x_428 = l_Tactic_Ring_HornerExpr_e(x_403);
lean_dec(x_403);
x_429 = l_Tactic_Ring_HornerExpr_e(x_408);
lean_dec(x_408);
x_430 = l_Tactic_Ring_HornerExpr_e(x_416);
x_431 = l_Tactic_Ring_evalMul___closed__9;
x_432 = lean_array_push(x_431, x_419);
x_433 = lean_array_push(x_432, x_420);
x_434 = lean_array_push(x_433, x_421);
x_435 = lean_array_push(x_434, x_422);
x_436 = lean_array_push(x_435, x_423);
x_437 = lean_array_push(x_436, x_424);
x_438 = lean_array_push(x_437, x_425);
x_439 = lean_array_push(x_438, x_426);
x_440 = lean_array_push(x_439, x_427);
x_441 = lean_array_push(x_440, x_428);
x_442 = lean_array_push(x_441, x_429);
x_443 = lean_array_push(x_442, x_430);
x_444 = lean_array_push(x_443, x_242);
x_445 = lean_array_push(x_444, x_398);
x_446 = lean_array_push(x_445, x_404);
x_447 = lean_array_push(x_446, x_409);
x_448 = lean_array_push(x_447, x_417);
x_449 = l_Tactic_Ring_evalMul___closed__8;
x_450 = l_Tactic_Ring_mkAppCS(x_449, x_448, x_3, x_4, x_5, x_6, x_7, x_8, x_415);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_451 = lean_ctor_get(x_450, 0);
lean_inc(x_451);
x_452 = lean_ctor_get(x_450, 1);
lean_inc(x_452);
if (lean_is_exclusive(x_450)) {
 lean_ctor_release(x_450, 0);
 lean_ctor_release(x_450, 1);
 x_453 = x_450;
} else {
 lean_dec_ref(x_450);
 x_453 = lean_box(0);
}
if (lean_is_scalar(x_418)) {
 x_454 = lean_alloc_ctor(0, 2, 0);
} else {
 x_454 = x_418;
}
lean_ctor_set(x_454, 0, x_416);
lean_ctor_set(x_454, 1, x_451);
if (lean_is_scalar(x_453)) {
 x_455 = lean_alloc_ctor(0, 2, 0);
} else {
 x_455 = x_453;
}
lean_ctor_set(x_455, 0, x_454);
lean_ctor_set(x_455, 1, x_452);
return x_455;
}
else
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; 
lean_dec(x_409);
lean_dec(x_408);
lean_dec(x_404);
lean_dec(x_403);
lean_dec(x_398);
lean_dec(x_397);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_456 = lean_ctor_get(x_413, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_413, 1);
lean_inc(x_457);
if (lean_is_exclusive(x_413)) {
 lean_ctor_release(x_413, 0);
 lean_ctor_release(x_413, 1);
 x_458 = x_413;
} else {
 lean_dec_ref(x_413);
 x_458 = lean_box(0);
}
if (lean_is_scalar(x_458)) {
 x_459 = lean_alloc_ctor(1, 2, 0);
} else {
 x_459 = x_458;
}
lean_ctor_set(x_459, 0, x_456);
lean_ctor_set(x_459, 1, x_457);
return x_459;
}
}
else
{
lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_404);
lean_dec(x_403);
lean_dec(x_398);
lean_dec(x_397);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_460 = lean_ctor_get(x_405, 0);
lean_inc(x_460);
x_461 = lean_ctor_get(x_405, 1);
lean_inc(x_461);
if (lean_is_exclusive(x_405)) {
 lean_ctor_release(x_405, 0);
 lean_ctor_release(x_405, 1);
 x_462 = x_405;
} else {
 lean_dec_ref(x_405);
 x_462 = lean_box(0);
}
if (lean_is_scalar(x_462)) {
 x_463 = lean_alloc_ctor(1, 2, 0);
} else {
 x_463 = x_462;
}
lean_ctor_set(x_463, 0, x_460);
lean_ctor_set(x_463, 1, x_461);
return x_463;
}
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; 
lean_dec(x_398);
lean_dec(x_397);
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_464 = lean_ctor_get(x_400, 0);
lean_inc(x_464);
x_465 = lean_ctor_get(x_400, 1);
lean_inc(x_465);
if (lean_is_exclusive(x_400)) {
 lean_ctor_release(x_400, 0);
 lean_ctor_release(x_400, 1);
 x_466 = x_400;
} else {
 lean_dec_ref(x_400);
 x_466 = lean_box(0);
}
if (lean_is_scalar(x_466)) {
 x_467 = lean_alloc_ctor(1, 2, 0);
} else {
 x_467 = x_466;
}
lean_ctor_set(x_467, 0, x_464);
lean_ctor_set(x_467, 1, x_465);
return x_467;
}
}
else
{
lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; 
lean_dec(x_232);
x_468 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_469 = lean_ctor_get(x_225, 0);
lean_inc(x_469);
lean_dec(x_225);
x_470 = lean_ctor_get(x_226, 0);
lean_inc(x_470);
lean_dec(x_226);
x_471 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_472 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_473 = lean_ctor_get(x_231, 0);
lean_inc(x_473);
lean_dec(x_231);
x_474 = l_Tactic_Ring_HornerExpr_e(x_241);
lean_dec(x_241);
x_475 = l_Tactic_Ring_HornerExpr_e(x_397);
x_476 = l_Tactic_Ring_evalMul___closed__12;
x_477 = lean_array_push(x_476, x_468);
x_478 = lean_array_push(x_477, x_469);
x_479 = lean_array_push(x_478, x_470);
x_480 = lean_array_push(x_479, x_471);
x_481 = lean_array_push(x_480, x_472);
x_482 = lean_array_push(x_481, x_473);
x_483 = lean_array_push(x_482, x_474);
x_484 = lean_array_push(x_483, x_475);
x_485 = lean_array_push(x_484, x_242);
x_486 = lean_array_push(x_485, x_398);
x_487 = l_Tactic_Ring_evalMul___closed__11;
x_488 = l_Tactic_Ring_mkAppCS(x_487, x_486, x_3, x_4, x_5, x_6, x_7, x_8, x_259);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_489 = lean_ctor_get(x_488, 0);
lean_inc(x_489);
x_490 = lean_ctor_get(x_488, 1);
lean_inc(x_490);
if (lean_is_exclusive(x_488)) {
 lean_ctor_release(x_488, 0);
 lean_ctor_release(x_488, 1);
 x_491 = x_488;
} else {
 lean_dec_ref(x_488);
 x_491 = lean_box(0);
}
x_492 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_492, 0, x_397);
lean_ctor_set(x_492, 1, x_489);
if (lean_is_scalar(x_491)) {
 x_493 = lean_alloc_ctor(0, 2, 0);
} else {
 x_493 = x_491;
}
lean_ctor_set(x_493, 0, x_492);
lean_ctor_set(x_493, 1, x_490);
return x_493;
}
}
}
else
{
uint8_t x_494; 
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_494 = !lean_is_exclusive(x_257);
if (x_494 == 0)
{
return x_257;
}
else
{
lean_object* x_495; lean_object* x_496; lean_object* x_497; 
x_495 = lean_ctor_get(x_257, 0);
x_496 = lean_ctor_get(x_257, 1);
lean_inc(x_496);
lean_inc(x_495);
lean_dec(x_257);
x_497 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_497, 0, x_495);
lean_ctor_set(x_497, 1, x_496);
return x_497;
}
}
}
else
{
uint8_t x_498; 
lean_dec(x_242);
lean_dec(x_241);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_498 = !lean_is_exclusive(x_252);
if (x_498 == 0)
{
return x_252;
}
else
{
lean_object* x_499; lean_object* x_500; lean_object* x_501; 
x_499 = lean_ctor_get(x_252, 0);
x_500 = lean_ctor_get(x_252, 1);
lean_inc(x_500);
lean_inc(x_499);
lean_dec(x_252);
x_501 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_501, 0, x_499);
lean_ctor_set(x_501, 1, x_500);
return x_501;
}
}
}
else
{
uint8_t x_502; 
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_502 = !lean_is_exclusive(x_238);
if (x_502 == 0)
{
return x_238;
}
else
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_503 = lean_ctor_get(x_238, 0);
x_504 = lean_ctor_get(x_238, 1);
lean_inc(x_504);
lean_inc(x_503);
lean_dec(x_238);
x_505 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_505, 0, x_503);
lean_ctor_set(x_505, 1, x_504);
return x_505;
}
}
}
else
{
lean_object* x_506; 
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_229);
lean_inc(x_1);
x_506 = l_Tactic_Ring_evalMul(x_1, x_229, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_506) == 0)
{
lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; 
x_507 = lean_ctor_get(x_506, 0);
lean_inc(x_507);
x_508 = lean_ctor_get(x_506, 1);
lean_inc(x_508);
lean_dec(x_506);
x_509 = lean_ctor_get(x_507, 0);
lean_inc(x_509);
x_510 = lean_ctor_get(x_507, 1);
lean_inc(x_510);
lean_dec(x_507);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_232);
x_511 = l_Tactic_Ring_evalMul(x_1, x_232, x_3, x_4, x_5, x_6, x_7, x_8, x_508);
if (lean_obj_tag(x_511) == 0)
{
lean_object* x_512; lean_object* x_513; uint8_t x_514; 
x_512 = lean_ctor_get(x_511, 0);
lean_inc(x_512);
x_513 = lean_ctor_get(x_511, 1);
lean_inc(x_513);
lean_dec(x_511);
x_514 = !lean_is_exclusive(x_512);
if (x_514 == 0)
{
lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; uint8_t x_538; 
x_515 = lean_ctor_get(x_512, 0);
x_516 = lean_ctor_get(x_512, 1);
lean_inc(x_3);
lean_inc(x_515);
lean_inc(x_231);
lean_inc(x_230);
lean_inc(x_509);
x_517 = l_Tactic_Ring_HornerExpr_xadd_x27(x_509, x_230, x_231, x_515, x_3, x_4, x_5, x_6, x_7, x_8, x_513);
x_518 = lean_ctor_get(x_517, 0);
lean_inc(x_518);
x_519 = lean_ctor_get(x_517, 1);
lean_inc(x_519);
lean_dec(x_517);
x_520 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_521 = lean_ctor_get(x_230, 0);
lean_inc(x_521);
lean_dec(x_230);
x_522 = lean_ctor_get(x_231, 0);
lean_inc(x_522);
lean_dec(x_231);
x_523 = l_Tactic_Ring_HornerExpr_e(x_232);
lean_dec(x_232);
x_524 = l_Tactic_Ring_HornerExpr_e(x_509);
lean_dec(x_509);
x_525 = l_Tactic_Ring_HornerExpr_e(x_515);
lean_dec(x_515);
x_526 = l_Tactic_Ring_evalConstMul___closed__3;
x_527 = lean_array_push(x_526, x_223);
x_528 = lean_array_push(x_527, x_520);
x_529 = lean_array_push(x_528, x_521);
x_530 = lean_array_push(x_529, x_522);
x_531 = lean_array_push(x_530, x_523);
x_532 = lean_array_push(x_531, x_524);
x_533 = lean_array_push(x_532, x_525);
x_534 = lean_array_push(x_533, x_510);
x_535 = lean_array_push(x_534, x_516);
x_536 = l_Tactic_Ring_evalConstMul___closed__2;
x_537 = l_Tactic_Ring_mkAppCS(x_536, x_535, x_3, x_4, x_5, x_6, x_7, x_8, x_519);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_538 = !lean_is_exclusive(x_537);
if (x_538 == 0)
{
lean_object* x_539; 
x_539 = lean_ctor_get(x_537, 0);
lean_ctor_set(x_512, 1, x_539);
lean_ctor_set(x_512, 0, x_518);
lean_ctor_set(x_537, 0, x_512);
return x_537;
}
else
{
lean_object* x_540; lean_object* x_541; lean_object* x_542; 
x_540 = lean_ctor_get(x_537, 0);
x_541 = lean_ctor_get(x_537, 1);
lean_inc(x_541);
lean_inc(x_540);
lean_dec(x_537);
lean_ctor_set(x_512, 1, x_540);
lean_ctor_set(x_512, 0, x_518);
x_542 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_542, 0, x_512);
lean_ctor_set(x_542, 1, x_541);
return x_542;
}
}
else
{
lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; 
x_543 = lean_ctor_get(x_512, 0);
x_544 = lean_ctor_get(x_512, 1);
lean_inc(x_544);
lean_inc(x_543);
lean_dec(x_512);
lean_inc(x_3);
lean_inc(x_543);
lean_inc(x_231);
lean_inc(x_230);
lean_inc(x_509);
x_545 = l_Tactic_Ring_HornerExpr_xadd_x27(x_509, x_230, x_231, x_543, x_3, x_4, x_5, x_6, x_7, x_8, x_513);
x_546 = lean_ctor_get(x_545, 0);
lean_inc(x_546);
x_547 = lean_ctor_get(x_545, 1);
lean_inc(x_547);
lean_dec(x_545);
x_548 = l_Tactic_Ring_HornerExpr_e(x_229);
lean_dec(x_229);
x_549 = lean_ctor_get(x_230, 0);
lean_inc(x_549);
lean_dec(x_230);
x_550 = lean_ctor_get(x_231, 0);
lean_inc(x_550);
lean_dec(x_231);
x_551 = l_Tactic_Ring_HornerExpr_e(x_232);
lean_dec(x_232);
x_552 = l_Tactic_Ring_HornerExpr_e(x_509);
lean_dec(x_509);
x_553 = l_Tactic_Ring_HornerExpr_e(x_543);
lean_dec(x_543);
x_554 = l_Tactic_Ring_evalConstMul___closed__3;
x_555 = lean_array_push(x_554, x_223);
x_556 = lean_array_push(x_555, x_548);
x_557 = lean_array_push(x_556, x_549);
x_558 = lean_array_push(x_557, x_550);
x_559 = lean_array_push(x_558, x_551);
x_560 = lean_array_push(x_559, x_552);
x_561 = lean_array_push(x_560, x_553);
x_562 = lean_array_push(x_561, x_510);
x_563 = lean_array_push(x_562, x_544);
x_564 = l_Tactic_Ring_evalConstMul___closed__2;
x_565 = l_Tactic_Ring_mkAppCS(x_564, x_563, x_3, x_4, x_5, x_6, x_7, x_8, x_547);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_566 = lean_ctor_get(x_565, 0);
lean_inc(x_566);
x_567 = lean_ctor_get(x_565, 1);
lean_inc(x_567);
if (lean_is_exclusive(x_565)) {
 lean_ctor_release(x_565, 0);
 lean_ctor_release(x_565, 1);
 x_568 = x_565;
} else {
 lean_dec_ref(x_565);
 x_568 = lean_box(0);
}
x_569 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_569, 0, x_546);
lean_ctor_set(x_569, 1, x_566);
if (lean_is_scalar(x_568)) {
 x_570 = lean_alloc_ctor(0, 2, 0);
} else {
 x_570 = x_568;
}
lean_ctor_set(x_570, 0, x_569);
lean_ctor_set(x_570, 1, x_567);
return x_570;
}
}
else
{
uint8_t x_571; 
lean_dec(x_510);
lean_dec(x_509);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_223);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_571 = !lean_is_exclusive(x_511);
if (x_571 == 0)
{
return x_511;
}
else
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; 
x_572 = lean_ctor_get(x_511, 0);
x_573 = lean_ctor_get(x_511, 1);
lean_inc(x_573);
lean_inc(x_572);
lean_dec(x_511);
x_574 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_574, 0, x_572);
lean_ctor_set(x_574, 1, x_573);
return x_574;
}
}
}
else
{
uint8_t x_575; 
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_223);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_575 = !lean_is_exclusive(x_506);
if (x_575 == 0)
{
return x_506;
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; 
x_576 = lean_ctor_get(x_506, 0);
x_577 = lean_ctor_get(x_506, 1);
lean_inc(x_577);
lean_inc(x_576);
lean_dec(x_506);
x_578 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_578, 0, x_576);
lean_ctor_set(x_578, 1, x_577);
return x_578;
}
}
}
}
else
{
lean_object* x_579; 
lean_dec(x_234);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_231);
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_223);
lean_dec(x_1);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_224);
x_579 = l_Tactic_Ring_evalMul(x_224, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_579) == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; 
x_580 = lean_ctor_get(x_579, 0);
lean_inc(x_580);
x_581 = lean_ctor_get(x_579, 1);
lean_inc(x_581);
lean_dec(x_579);
x_582 = lean_ctor_get(x_580, 0);
lean_inc(x_582);
x_583 = lean_ctor_get(x_580, 1);
lean_inc(x_583);
lean_dec(x_580);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_227);
x_584 = l_Tactic_Ring_evalMul(x_227, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_581);
if (lean_obj_tag(x_584) == 0)
{
lean_object* x_585; lean_object* x_586; uint8_t x_587; 
x_585 = lean_ctor_get(x_584, 0);
lean_inc(x_585);
x_586 = lean_ctor_get(x_584, 1);
lean_inc(x_586);
lean_dec(x_584);
x_587 = !lean_is_exclusive(x_585);
if (x_587 == 0)
{
lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; uint8_t x_611; 
x_588 = lean_ctor_get(x_585, 0);
x_589 = lean_ctor_get(x_585, 1);
lean_inc(x_3);
lean_inc(x_588);
lean_inc(x_226);
lean_inc(x_225);
lean_inc(x_582);
x_590 = l_Tactic_Ring_HornerExpr_xadd_x27(x_582, x_225, x_226, x_588, x_3, x_4, x_5, x_6, x_7, x_8, x_586);
x_591 = lean_ctor_get(x_590, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_590, 1);
lean_inc(x_592);
lean_dec(x_590);
x_593 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_594 = lean_ctor_get(x_225, 0);
lean_inc(x_594);
lean_dec(x_225);
x_595 = lean_ctor_get(x_226, 0);
lean_inc(x_595);
lean_dec(x_226);
x_596 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_597 = l_Tactic_Ring_HornerExpr_e(x_582);
lean_dec(x_582);
x_598 = l_Tactic_Ring_HornerExpr_e(x_588);
lean_dec(x_588);
x_599 = l_Tactic_Ring_evalConstMul___closed__3;
x_600 = lean_array_push(x_599, x_593);
x_601 = lean_array_push(x_600, x_594);
x_602 = lean_array_push(x_601, x_595);
x_603 = lean_array_push(x_602, x_596);
x_604 = lean_array_push(x_603, x_228);
x_605 = lean_array_push(x_604, x_597);
x_606 = lean_array_push(x_605, x_598);
x_607 = lean_array_push(x_606, x_583);
x_608 = lean_array_push(x_607, x_589);
x_609 = l_Tactic_Ring_evalMul___closed__14;
x_610 = l_Tactic_Ring_mkAppCS(x_609, x_608, x_3, x_4, x_5, x_6, x_7, x_8, x_592);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_611 = !lean_is_exclusive(x_610);
if (x_611 == 0)
{
lean_object* x_612; 
x_612 = lean_ctor_get(x_610, 0);
lean_ctor_set(x_585, 1, x_612);
lean_ctor_set(x_585, 0, x_591);
lean_ctor_set(x_610, 0, x_585);
return x_610;
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; 
x_613 = lean_ctor_get(x_610, 0);
x_614 = lean_ctor_get(x_610, 1);
lean_inc(x_614);
lean_inc(x_613);
lean_dec(x_610);
lean_ctor_set(x_585, 1, x_613);
lean_ctor_set(x_585, 0, x_591);
x_615 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_615, 0, x_585);
lean_ctor_set(x_615, 1, x_614);
return x_615;
}
}
else
{
lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; 
x_616 = lean_ctor_get(x_585, 0);
x_617 = lean_ctor_get(x_585, 1);
lean_inc(x_617);
lean_inc(x_616);
lean_dec(x_585);
lean_inc(x_3);
lean_inc(x_616);
lean_inc(x_226);
lean_inc(x_225);
lean_inc(x_582);
x_618 = l_Tactic_Ring_HornerExpr_xadd_x27(x_582, x_225, x_226, x_616, x_3, x_4, x_5, x_6, x_7, x_8, x_586);
x_619 = lean_ctor_get(x_618, 0);
lean_inc(x_619);
x_620 = lean_ctor_get(x_618, 1);
lean_inc(x_620);
lean_dec(x_618);
x_621 = l_Tactic_Ring_HornerExpr_e(x_224);
lean_dec(x_224);
x_622 = lean_ctor_get(x_225, 0);
lean_inc(x_622);
lean_dec(x_225);
x_623 = lean_ctor_get(x_226, 0);
lean_inc(x_623);
lean_dec(x_226);
x_624 = l_Tactic_Ring_HornerExpr_e(x_227);
lean_dec(x_227);
x_625 = l_Tactic_Ring_HornerExpr_e(x_582);
lean_dec(x_582);
x_626 = l_Tactic_Ring_HornerExpr_e(x_616);
lean_dec(x_616);
x_627 = l_Tactic_Ring_evalConstMul___closed__3;
x_628 = lean_array_push(x_627, x_621);
x_629 = lean_array_push(x_628, x_622);
x_630 = lean_array_push(x_629, x_623);
x_631 = lean_array_push(x_630, x_624);
x_632 = lean_array_push(x_631, x_228);
x_633 = lean_array_push(x_632, x_625);
x_634 = lean_array_push(x_633, x_626);
x_635 = lean_array_push(x_634, x_583);
x_636 = lean_array_push(x_635, x_617);
x_637 = l_Tactic_Ring_evalMul___closed__14;
x_638 = l_Tactic_Ring_mkAppCS(x_637, x_636, x_3, x_4, x_5, x_6, x_7, x_8, x_620);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_639 = lean_ctor_get(x_638, 0);
lean_inc(x_639);
x_640 = lean_ctor_get(x_638, 1);
lean_inc(x_640);
if (lean_is_exclusive(x_638)) {
 lean_ctor_release(x_638, 0);
 lean_ctor_release(x_638, 1);
 x_641 = x_638;
} else {
 lean_dec_ref(x_638);
 x_641 = lean_box(0);
}
x_642 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_642, 0, x_619);
lean_ctor_set(x_642, 1, x_639);
if (lean_is_scalar(x_641)) {
 x_643 = lean_alloc_ctor(0, 2, 0);
} else {
 x_643 = x_641;
}
lean_ctor_set(x_643, 0, x_642);
lean_ctor_set(x_643, 1, x_640);
return x_643;
}
}
else
{
uint8_t x_644; 
lean_dec(x_583);
lean_dec(x_582);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_644 = !lean_is_exclusive(x_584);
if (x_644 == 0)
{
return x_584;
}
else
{
lean_object* x_645; lean_object* x_646; lean_object* x_647; 
x_645 = lean_ctor_get(x_584, 0);
x_646 = lean_ctor_get(x_584, 1);
lean_inc(x_646);
lean_inc(x_645);
lean_dec(x_584);
x_647 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_647, 0, x_645);
lean_ctor_set(x_647, 1, x_646);
return x_647;
}
}
}
else
{
uint8_t x_648; 
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_648 = !lean_is_exclusive(x_579);
if (x_648 == 0)
{
return x_579;
}
else
{
lean_object* x_649; lean_object* x_650; lean_object* x_651; 
x_649 = lean_ctor_get(x_579, 0);
x_650 = lean_ctor_get(x_579, 1);
lean_inc(x_650);
lean_inc(x_649);
lean_dec(x_579);
x_651 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_651, 0, x_649);
lean_ctor_set(x_651, 1, x_650);
return x_651;
}
}
}
}
}
}
}
lean_object* l_Tactic_Ring_evalMul___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_evalMul(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
lean_object* l_Tactic_Ring_evalPow_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
lean_dec(x_5);
if (x_7 == 0)
{
lean_object* x_8; 
lean_dec(x_2);
x_8 = lean_apply_1(x_3, x_1);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_3);
lean_dec(x_1);
x_9 = lean_box(0);
x_10 = lean_apply_1(x_2, x_9);
return x_10;
}
}
}
}
lean_object* l_Tactic_Ring_evalPow_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalPow_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalPow_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
lean_dec(x_6);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
lean_dec(x_2);
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_10, x_11);
if (x_12 == 0)
{
lean_object* x_13; uint8_t x_14; 
lean_dec(x_3);
x_13 = lean_unsigned_to_nat(1u);
x_14 = lean_nat_dec_eq(x_10, x_13);
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_4);
lean_dec(x_1);
x_15 = lean_apply_4(x_5, x_7, x_8, x_9, x_10);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
x_16 = lean_apply_2(x_4, x_1, x_9);
return x_16;
}
}
else
{
lean_object* x_17; 
lean_dec(x_10);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_5);
lean_dec(x_4);
x_17 = lean_apply_2(x_3, x_1, x_9);
return x_17;
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
lean_dec(x_5);
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_1, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_1, 3);
lean_inc(x_21);
x_22 = lean_ctor_get(x_1, 4);
lean_inc(x_22);
x_23 = lean_ctor_get(x_2, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_2, 1);
lean_inc(x_24);
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_nat_dec_eq(x_24, x_25);
if (x_26 == 0)
{
lean_object* x_27; uint8_t x_28; 
lean_dec(x_3);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_dec_eq(x_24, x_27);
lean_dec(x_24);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_23);
lean_dec(x_4);
x_29 = lean_apply_7(x_6, x_1, x_18, x_19, x_20, x_21, x_22, x_2);
return x_29;
}
else
{
lean_object* x_30; 
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_2);
x_30 = lean_apply_2(x_4, x_1, x_23);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_24);
lean_dec(x_22);
lean_dec(x_21);
lean_dec(x_20);
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_31 = lean_apply_2(x_3, x_1, x_23);
return x_31;
}
}
}
}
lean_object* l_Tactic_Ring_evalPow_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_evalPow_match__2___rarg), 6, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HPow");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalPow___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hPow");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_evalPow___closed__2;
x_2 = l_Tactic_Ring_evalPow___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pow_one");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalPow___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = l_Lean_mkRawNatLit(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_evalPow___closed__7;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pow_zero");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Tactic_Ring_evalPow___closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pow_succ_eq");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalPow___closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(6u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_pow");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalPow___closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalPow___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_evalPow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_10 = lean_ctor_get(x_1, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
x_12 = !lean_is_exclusive(x_2);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_2, 0);
x_14 = lean_ctor_get(x_2, 1);
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
lean_dec(x_3);
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_dec_eq(x_14, x_17);
if (x_18 == 0)
{
uint8_t x_19; 
lean_free_object(x_2);
x_19 = !lean_is_exclusive(x_1);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_20 = lean_ctor_get(x_1, 1);
lean_dec(x_20);
x_21 = lean_ctor_get(x_1, 0);
lean_dec(x_21);
x_22 = l_Tactic_Ring_mkAppCS___closed__1;
x_23 = lean_array_push(x_22, x_10);
x_24 = lean_array_push(x_23, x_13);
x_25 = l_Tactic_Ring_evalPow___closed__4;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_26 = l_Lean_Meta_mkAppM(x_25, x_24, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
x_28 = lean_ctor_get(x_26, 1);
lean_inc(x_28);
lean_dec(x_26);
x_29 = l_Lean_Meta_NormNum_eval(x_27, x_5, x_6, x_7, x_8, x_28);
if (lean_obj_tag(x_29) == 0)
{
uint8_t x_30; 
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = !lean_is_exclusive(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_31, 0);
x_34 = lean_nat_pow(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_34);
lean_ctor_set(x_1, 0, x_33);
lean_ctor_set(x_31, 0, x_1);
return x_29;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_35 = lean_ctor_get(x_31, 0);
x_36 = lean_ctor_get(x_31, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_31);
x_37 = lean_nat_pow(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_37);
lean_ctor_set(x_1, 0, x_35);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_1);
lean_ctor_set(x_38, 1, x_36);
lean_ctor_set(x_29, 0, x_38);
return x_29;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_29, 0);
x_40 = lean_ctor_get(x_29, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_29);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_39, 1);
lean_inc(x_42);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_43 = x_39;
} else {
 lean_dec_ref(x_39);
 x_43 = lean_box(0);
}
x_44 = lean_nat_pow(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
lean_ctor_set(x_1, 1, x_44);
lean_ctor_set(x_1, 0, x_41);
if (lean_is_scalar(x_43)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_43;
}
lean_ctor_set(x_45, 0, x_1);
lean_ctor_set(x_45, 1, x_42);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_40);
return x_46;
}
}
else
{
uint8_t x_47; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_11);
x_47 = !lean_is_exclusive(x_29);
if (x_47 == 0)
{
return x_29;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_48 = lean_ctor_get(x_29, 0);
x_49 = lean_ctor_get(x_29, 1);
lean_inc(x_49);
lean_inc(x_48);
lean_dec(x_29);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
return x_50;
}
}
}
else
{
uint8_t x_51; 
lean_free_object(x_1);
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_51 = !lean_is_exclusive(x_26);
if (x_51 == 0)
{
return x_26;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_52 = lean_ctor_get(x_26, 0);
x_53 = lean_ctor_get(x_26, 1);
lean_inc(x_53);
lean_inc(x_52);
lean_dec(x_26);
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_52);
lean_ctor_set(x_54, 1, x_53);
return x_54;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_1);
x_55 = l_Tactic_Ring_mkAppCS___closed__1;
x_56 = lean_array_push(x_55, x_10);
x_57 = lean_array_push(x_56, x_13);
x_58 = l_Tactic_Ring_evalPow___closed__4;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_59 = l_Lean_Meta_mkAppM(x_58, x_57, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_59) == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; 
x_60 = lean_ctor_get(x_59, 0);
lean_inc(x_60);
x_61 = lean_ctor_get(x_59, 1);
lean_inc(x_61);
lean_dec(x_59);
x_62 = l_Lean_Meta_NormNum_eval(x_60, x_5, x_6, x_7, x_8, x_61);
if (lean_obj_tag(x_62) == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = lean_ctor_get(x_63, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_63, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_63)) {
 lean_ctor_release(x_63, 0);
 lean_ctor_release(x_63, 1);
 x_68 = x_63;
} else {
 lean_dec_ref(x_63);
 x_68 = lean_box(0);
}
x_69 = lean_nat_pow(x_11, x_14);
lean_dec(x_14);
lean_dec(x_11);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_66);
lean_ctor_set(x_70, 1, x_69);
if (lean_is_scalar(x_68)) {
 x_71 = lean_alloc_ctor(0, 2, 0);
} else {
 x_71 = x_68;
}
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_67);
if (lean_is_scalar(x_65)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_65;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_64);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_14);
lean_dec(x_11);
x_73 = lean_ctor_get(x_62, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_62, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_75 = x_62;
} else {
 lean_dec_ref(x_62);
 x_75 = lean_box(0);
}
if (lean_is_scalar(x_75)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_75;
}
lean_ctor_set(x_76, 0, x_73);
lean_ctor_set(x_76, 1, x_74);
return x_76;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_77 = lean_ctor_get(x_59, 0);
lean_inc(x_77);
x_78 = lean_ctor_get(x_59, 1);
lean_inc(x_78);
if (lean_is_exclusive(x_59)) {
 lean_ctor_release(x_59, 0);
 lean_ctor_release(x_59, 1);
 x_79 = x_59;
} else {
 lean_dec_ref(x_59);
 x_79 = lean_box(0);
}
if (lean_is_scalar(x_79)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_79;
}
lean_ctor_set(x_80, 0, x_77);
lean_ctor_set(x_80, 1, x_78);
return x_80;
}
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
x_81 = l_Tactic_Ring_HornerExpr_e(x_1);
x_82 = l_Tactic_Ring_evalAdd___closed__5;
x_83 = lean_array_push(x_82, x_81);
x_84 = l_Tactic_Ring_evalPow___closed__6;
x_85 = l_Lean_Meta_mkAppM(x_84, x_83, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
lean_object* x_87; 
x_87 = lean_ctor_get(x_85, 0);
lean_ctor_set(x_2, 1, x_87);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_85, 0, x_2);
return x_85;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_88 = lean_ctor_get(x_85, 0);
x_89 = lean_ctor_get(x_85, 1);
lean_inc(x_89);
lean_inc(x_88);
lean_dec(x_85);
lean_ctor_set(x_2, 1, x_88);
lean_ctor_set(x_2, 0, x_1);
x_90 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_90, 0, x_2);
lean_ctor_set(x_90, 1, x_89);
return x_90;
}
}
else
{
uint8_t x_91; 
lean_free_object(x_2);
lean_dec(x_1);
x_91 = !lean_is_exclusive(x_85);
if (x_91 == 0)
{
return x_85;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_85, 0);
x_93 = lean_ctor_get(x_85, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_85);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_92);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
}
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; 
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
x_95 = lean_ctor_get(x_3, 0);
lean_inc(x_95);
lean_dec(x_3);
x_96 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_96, 0, x_95);
x_97 = lean_box(0);
x_98 = l_Tactic_Ring_evalHorner___closed__3;
x_99 = lean_array_push(x_98, x_96);
x_100 = l_Tactic_Ring_evalPow___closed__8;
x_101 = lean_array_push(x_99, x_100);
x_102 = lean_array_push(x_101, x_97);
x_103 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_104 = l_Lean_Meta_mkAppOptM(x_103, x_102, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_104) == 0)
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; uint8_t x_108; 
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_104, 1);
lean_inc(x_106);
lean_dec(x_104);
x_107 = l_Tactic_Ring_HornerExpr_e(x_1);
x_108 = !lean_is_exclusive(x_1);
if (x_108 == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_109 = lean_ctor_get(x_1, 1);
lean_dec(x_109);
x_110 = lean_ctor_get(x_1, 0);
lean_dec(x_110);
x_111 = l_Tactic_Ring_evalAdd___closed__5;
x_112 = lean_array_push(x_111, x_107);
x_113 = l_Tactic_Ring_evalPow___closed__10;
x_114 = l_Lean_Meta_mkAppM(x_113, x_112, x_5, x_6, x_7, x_8, x_106);
if (lean_obj_tag(x_114) == 0)
{
uint8_t x_115; 
x_115 = !lean_is_exclusive(x_114);
if (x_115 == 0)
{
lean_object* x_116; lean_object* x_117; 
x_116 = lean_ctor_get(x_114, 0);
x_117 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_1, 1, x_117);
lean_ctor_set(x_1, 0, x_105);
lean_ctor_set(x_2, 1, x_116);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_114, 0, x_2);
return x_114;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_118 = lean_ctor_get(x_114, 0);
x_119 = lean_ctor_get(x_114, 1);
lean_inc(x_119);
lean_inc(x_118);
lean_dec(x_114);
x_120 = lean_unsigned_to_nat(1u);
lean_ctor_set(x_1, 1, x_120);
lean_ctor_set(x_1, 0, x_105);
lean_ctor_set(x_2, 1, x_118);
lean_ctor_set(x_2, 0, x_1);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_2);
lean_ctor_set(x_121, 1, x_119);
return x_121;
}
}
else
{
uint8_t x_122; 
lean_free_object(x_1);
lean_dec(x_105);
lean_free_object(x_2);
x_122 = !lean_is_exclusive(x_114);
if (x_122 == 0)
{
return x_114;
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_123 = lean_ctor_get(x_114, 0);
x_124 = lean_ctor_get(x_114, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_114);
x_125 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_125, 0, x_123);
lean_ctor_set(x_125, 1, x_124);
return x_125;
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_1);
x_126 = l_Tactic_Ring_evalAdd___closed__5;
x_127 = lean_array_push(x_126, x_107);
x_128 = l_Tactic_Ring_evalPow___closed__10;
x_129 = l_Lean_Meta_mkAppM(x_128, x_127, x_5, x_6, x_7, x_8, x_106);
if (lean_obj_tag(x_129) == 0)
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_130 = lean_ctor_get(x_129, 0);
lean_inc(x_130);
x_131 = lean_ctor_get(x_129, 1);
lean_inc(x_131);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_132 = x_129;
} else {
 lean_dec_ref(x_129);
 x_132 = lean_box(0);
}
x_133 = lean_unsigned_to_nat(1u);
x_134 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_134, 0, x_105);
lean_ctor_set(x_134, 1, x_133);
lean_ctor_set(x_2, 1, x_130);
lean_ctor_set(x_2, 0, x_134);
if (lean_is_scalar(x_132)) {
 x_135 = lean_alloc_ctor(0, 2, 0);
} else {
 x_135 = x_132;
}
lean_ctor_set(x_135, 0, x_2);
lean_ctor_set(x_135, 1, x_131);
return x_135;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_105);
lean_free_object(x_2);
x_136 = lean_ctor_get(x_129, 0);
lean_inc(x_136);
x_137 = lean_ctor_get(x_129, 1);
lean_inc(x_137);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_138 = x_129;
} else {
 lean_dec_ref(x_129);
 x_138 = lean_box(0);
}
if (lean_is_scalar(x_138)) {
 x_139 = lean_alloc_ctor(1, 2, 0);
} else {
 x_139 = x_138;
}
lean_ctor_set(x_139, 0, x_136);
lean_ctor_set(x_139, 1, x_137);
return x_139;
}
}
}
else
{
uint8_t x_140; 
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_140 = !lean_is_exclusive(x_104);
if (x_140 == 0)
{
return x_104;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_104, 0);
x_142 = lean_ctor_get(x_104, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_104);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; uint8_t x_147; 
x_144 = lean_ctor_get(x_2, 0);
x_145 = lean_ctor_get(x_2, 1);
lean_inc(x_145);
lean_inc(x_144);
lean_dec(x_2);
x_146 = lean_unsigned_to_nat(0u);
x_147 = lean_nat_dec_eq(x_145, x_146);
if (x_147 == 0)
{
lean_object* x_148; uint8_t x_149; 
lean_dec(x_3);
x_148 = lean_unsigned_to_nat(1u);
x_149 = lean_nat_dec_eq(x_145, x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_150 = x_1;
} else {
 lean_dec_ref(x_1);
 x_150 = lean_box(0);
}
x_151 = l_Tactic_Ring_mkAppCS___closed__1;
x_152 = lean_array_push(x_151, x_10);
x_153 = lean_array_push(x_152, x_144);
x_154 = l_Tactic_Ring_evalPow___closed__4;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_155 = l_Lean_Meta_mkAppM(x_154, x_153, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_155) == 0)
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; 
x_156 = lean_ctor_get(x_155, 0);
lean_inc(x_156);
x_157 = lean_ctor_get(x_155, 1);
lean_inc(x_157);
lean_dec(x_155);
x_158 = l_Lean_Meta_NormNum_eval(x_156, x_5, x_6, x_7, x_8, x_157);
if (lean_obj_tag(x_158) == 0)
{
lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_159 = lean_ctor_get(x_158, 0);
lean_inc(x_159);
x_160 = lean_ctor_get(x_158, 1);
lean_inc(x_160);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_161 = x_158;
} else {
 lean_dec_ref(x_158);
 x_161 = lean_box(0);
}
x_162 = lean_ctor_get(x_159, 0);
lean_inc(x_162);
x_163 = lean_ctor_get(x_159, 1);
lean_inc(x_163);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 lean_ctor_release(x_159, 1);
 x_164 = x_159;
} else {
 lean_dec_ref(x_159);
 x_164 = lean_box(0);
}
x_165 = lean_nat_pow(x_11, x_145);
lean_dec(x_145);
lean_dec(x_11);
if (lean_is_scalar(x_150)) {
 x_166 = lean_alloc_ctor(0, 2, 0);
} else {
 x_166 = x_150;
}
lean_ctor_set(x_166, 0, x_162);
lean_ctor_set(x_166, 1, x_165);
if (lean_is_scalar(x_164)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_164;
}
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_163);
if (lean_is_scalar(x_161)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_161;
}
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_160);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_11);
x_169 = lean_ctor_get(x_158, 0);
lean_inc(x_169);
x_170 = lean_ctor_get(x_158, 1);
lean_inc(x_170);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_171 = x_158;
} else {
 lean_dec_ref(x_158);
 x_171 = lean_box(0);
}
if (lean_is_scalar(x_171)) {
 x_172 = lean_alloc_ctor(1, 2, 0);
} else {
 x_172 = x_171;
}
lean_ctor_set(x_172, 0, x_169);
lean_ctor_set(x_172, 1, x_170);
return x_172;
}
}
else
{
lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec(x_150);
lean_dec(x_145);
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_173 = lean_ctor_get(x_155, 0);
lean_inc(x_173);
x_174 = lean_ctor_get(x_155, 1);
lean_inc(x_174);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_175 = x_155;
} else {
 lean_dec_ref(x_155);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(1, 2, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_173);
lean_ctor_set(x_176, 1, x_174);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_11);
lean_dec(x_10);
x_177 = l_Tactic_Ring_HornerExpr_e(x_1);
x_178 = l_Tactic_Ring_evalAdd___closed__5;
x_179 = lean_array_push(x_178, x_177);
x_180 = l_Tactic_Ring_evalPow___closed__6;
x_181 = l_Lean_Meta_mkAppM(x_180, x_179, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_181) == 0)
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; 
x_182 = lean_ctor_get(x_181, 0);
lean_inc(x_182);
x_183 = lean_ctor_get(x_181, 1);
lean_inc(x_183);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_184 = x_181;
} else {
 lean_dec_ref(x_181);
 x_184 = lean_box(0);
}
x_185 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_185, 0, x_1);
lean_ctor_set(x_185, 1, x_182);
if (lean_is_scalar(x_184)) {
 x_186 = lean_alloc_ctor(0, 2, 0);
} else {
 x_186 = x_184;
}
lean_ctor_set(x_186, 0, x_185);
lean_ctor_set(x_186, 1, x_183);
return x_186;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; 
lean_dec(x_1);
x_187 = lean_ctor_get(x_181, 0);
lean_inc(x_187);
x_188 = lean_ctor_get(x_181, 1);
lean_inc(x_188);
if (lean_is_exclusive(x_181)) {
 lean_ctor_release(x_181, 0);
 lean_ctor_release(x_181, 1);
 x_189 = x_181;
} else {
 lean_dec_ref(x_181);
 x_189 = lean_box(0);
}
if (lean_is_scalar(x_189)) {
 x_190 = lean_alloc_ctor(1, 2, 0);
} else {
 x_190 = x_189;
}
lean_ctor_set(x_190, 0, x_187);
lean_ctor_set(x_190, 1, x_188);
return x_190;
}
}
}
else
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; 
lean_dec(x_145);
lean_dec(x_144);
lean_dec(x_11);
lean_dec(x_10);
x_191 = lean_ctor_get(x_3, 0);
lean_inc(x_191);
lean_dec(x_3);
x_192 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_192, 0, x_191);
x_193 = lean_box(0);
x_194 = l_Tactic_Ring_evalHorner___closed__3;
x_195 = lean_array_push(x_194, x_192);
x_196 = l_Tactic_Ring_evalPow___closed__8;
x_197 = lean_array_push(x_195, x_196);
x_198 = lean_array_push(x_197, x_193);
x_199 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_200 = l_Lean_Meta_mkAppOptM(x_199, x_198, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_200) == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; 
x_201 = lean_ctor_get(x_200, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_200, 1);
lean_inc(x_202);
lean_dec(x_200);
x_203 = l_Tactic_Ring_HornerExpr_e(x_1);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_204 = x_1;
} else {
 lean_dec_ref(x_1);
 x_204 = lean_box(0);
}
x_205 = l_Tactic_Ring_evalAdd___closed__5;
x_206 = lean_array_push(x_205, x_203);
x_207 = l_Tactic_Ring_evalPow___closed__10;
x_208 = l_Lean_Meta_mkAppM(x_207, x_206, x_5, x_6, x_7, x_8, x_202);
if (lean_obj_tag(x_208) == 0)
{
lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_209 = lean_ctor_get(x_208, 0);
lean_inc(x_209);
x_210 = lean_ctor_get(x_208, 1);
lean_inc(x_210);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_211 = x_208;
} else {
 lean_dec_ref(x_208);
 x_211 = lean_box(0);
}
x_212 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_204)) {
 x_213 = lean_alloc_ctor(0, 2, 0);
} else {
 x_213 = x_204;
}
lean_ctor_set(x_213, 0, x_201);
lean_ctor_set(x_213, 1, x_212);
x_214 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_209);
if (lean_is_scalar(x_211)) {
 x_215 = lean_alloc_ctor(0, 2, 0);
} else {
 x_215 = x_211;
}
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_210);
return x_215;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_204);
lean_dec(x_201);
x_216 = lean_ctor_get(x_208, 0);
lean_inc(x_216);
x_217 = lean_ctor_get(x_208, 1);
lean_inc(x_217);
if (lean_is_exclusive(x_208)) {
 lean_ctor_release(x_208, 0);
 lean_ctor_release(x_208, 1);
 x_218 = x_208;
} else {
 lean_dec_ref(x_208);
 x_218 = lean_box(0);
}
if (lean_is_scalar(x_218)) {
 x_219 = lean_alloc_ctor(1, 2, 0);
} else {
 x_219 = x_218;
}
lean_ctor_set(x_219, 0, x_216);
lean_ctor_set(x_219, 1, x_217);
return x_219;
}
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_220 = lean_ctor_get(x_200, 0);
lean_inc(x_220);
x_221 = lean_ctor_get(x_200, 1);
lean_inc(x_221);
if (lean_is_exclusive(x_200)) {
 lean_ctor_release(x_200, 0);
 lean_ctor_release(x_200, 1);
 x_222 = x_200;
} else {
 lean_dec_ref(x_200);
 x_222 = lean_box(0);
}
if (lean_is_scalar(x_222)) {
 x_223 = lean_alloc_ctor(1, 2, 0);
} else {
 x_223 = x_222;
}
lean_ctor_set(x_223, 0, x_220);
lean_ctor_set(x_223, 1, x_221);
return x_223;
}
}
}
}
else
{
lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint8_t x_232; 
x_224 = lean_ctor_get(x_1, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_1, 1);
lean_inc(x_225);
x_226 = lean_ctor_get(x_1, 2);
lean_inc(x_226);
x_227 = lean_ctor_get(x_1, 3);
lean_inc(x_227);
x_228 = lean_ctor_get(x_1, 4);
lean_inc(x_228);
x_229 = lean_ctor_get(x_2, 0);
lean_inc(x_229);
x_230 = lean_ctor_get(x_2, 1);
lean_inc(x_230);
x_231 = lean_unsigned_to_nat(0u);
x_232 = lean_nat_dec_eq(x_230, x_231);
if (x_232 == 0)
{
lean_object* x_233; uint8_t x_234; 
x_233 = lean_unsigned_to_nat(1u);
x_234 = lean_nat_dec_eq(x_230, x_233);
if (x_234 == 0)
{
lean_object* x_235; lean_object* x_236; 
x_235 = l_Tactic_Ring_HornerExpr_e(x_228);
lean_dec(x_228);
x_236 = l_Lean_Expr_numeral_x3f(x_235);
if (lean_obj_tag(x_236) == 0)
{
uint8_t x_237; 
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
x_237 = !lean_is_exclusive(x_2);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; 
x_238 = lean_ctor_get(x_2, 1);
lean_dec(x_238);
x_239 = lean_ctor_get(x_2, 0);
lean_dec(x_239);
x_240 = lean_nat_sub(x_230, x_233);
lean_dec(x_230);
lean_inc(x_240);
x_241 = l_Lean_mkRawNatLit(x_240);
lean_inc(x_241);
lean_ctor_set(x_2, 1, x_240);
lean_ctor_set(x_2, 0, x_241);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_242 = l_Tactic_Ring_evalPow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_242) == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_243 = lean_ctor_get(x_242, 0);
lean_inc(x_243);
x_244 = lean_ctor_get(x_242, 1);
lean_inc(x_244);
lean_dec(x_242);
x_245 = lean_ctor_get(x_243, 0);
lean_inc(x_245);
x_246 = lean_ctor_get(x_243, 1);
lean_inc(x_246);
lean_dec(x_243);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_245);
x_247 = l_Tactic_Ring_evalMul(x_245, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_244);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; uint8_t x_250; 
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
lean_dec(x_247);
x_250 = !lean_is_exclusive(x_248);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; 
x_251 = lean_ctor_get(x_248, 0);
x_252 = lean_ctor_get(x_248, 1);
x_253 = l_Tactic_Ring_HornerExpr_e(x_245);
lean_dec(x_245);
x_254 = l_Tactic_Ring_HornerExpr_e(x_251);
x_255 = l_Tactic_Ring_evalPow___closed__13;
x_256 = lean_array_push(x_255, x_224);
x_257 = lean_array_push(x_256, x_241);
x_258 = lean_array_push(x_257, x_253);
x_259 = lean_array_push(x_258, x_254);
x_260 = lean_array_push(x_259, x_246);
x_261 = lean_array_push(x_260, x_252);
x_262 = l_Tactic_Ring_evalPow___closed__12;
x_263 = l_Tactic_Ring_mkAppCS(x_262, x_261, x_3, x_4, x_5, x_6, x_7, x_8, x_249);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_264 = !lean_is_exclusive(x_263);
if (x_264 == 0)
{
lean_object* x_265; 
x_265 = lean_ctor_get(x_263, 0);
lean_ctor_set(x_248, 1, x_265);
lean_ctor_set(x_263, 0, x_248);
return x_263;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_263, 0);
x_267 = lean_ctor_get(x_263, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_263);
lean_ctor_set(x_248, 1, x_266);
x_268 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_268, 0, x_248);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
else
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; 
x_269 = lean_ctor_get(x_248, 0);
x_270 = lean_ctor_get(x_248, 1);
lean_inc(x_270);
lean_inc(x_269);
lean_dec(x_248);
x_271 = l_Tactic_Ring_HornerExpr_e(x_245);
lean_dec(x_245);
x_272 = l_Tactic_Ring_HornerExpr_e(x_269);
x_273 = l_Tactic_Ring_evalPow___closed__13;
x_274 = lean_array_push(x_273, x_224);
x_275 = lean_array_push(x_274, x_241);
x_276 = lean_array_push(x_275, x_271);
x_277 = lean_array_push(x_276, x_272);
x_278 = lean_array_push(x_277, x_246);
x_279 = lean_array_push(x_278, x_270);
x_280 = l_Tactic_Ring_evalPow___closed__12;
x_281 = l_Tactic_Ring_mkAppCS(x_280, x_279, x_3, x_4, x_5, x_6, x_7, x_8, x_249);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_282 = lean_ctor_get(x_281, 0);
lean_inc(x_282);
x_283 = lean_ctor_get(x_281, 1);
lean_inc(x_283);
if (lean_is_exclusive(x_281)) {
 lean_ctor_release(x_281, 0);
 lean_ctor_release(x_281, 1);
 x_284 = x_281;
} else {
 lean_dec_ref(x_281);
 x_284 = lean_box(0);
}
x_285 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_285, 0, x_269);
lean_ctor_set(x_285, 1, x_282);
if (lean_is_scalar(x_284)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_284;
}
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_283);
return x_286;
}
}
else
{
uint8_t x_287; 
lean_dec(x_246);
lean_dec(x_245);
lean_dec(x_241);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_287 = !lean_is_exclusive(x_247);
if (x_287 == 0)
{
return x_247;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_288 = lean_ctor_get(x_247, 0);
x_289 = lean_ctor_get(x_247, 1);
lean_inc(x_289);
lean_inc(x_288);
lean_dec(x_247);
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_288);
lean_ctor_set(x_290, 1, x_289);
return x_290;
}
}
}
else
{
uint8_t x_291; 
lean_dec(x_241);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_291 = !lean_is_exclusive(x_242);
if (x_291 == 0)
{
return x_242;
}
else
{
lean_object* x_292; lean_object* x_293; lean_object* x_294; 
x_292 = lean_ctor_get(x_242, 0);
x_293 = lean_ctor_get(x_242, 1);
lean_inc(x_293);
lean_inc(x_292);
lean_dec(x_242);
x_294 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_294, 0, x_292);
lean_ctor_set(x_294, 1, x_293);
return x_294;
}
}
}
else
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec(x_2);
x_295 = lean_nat_sub(x_230, x_233);
lean_dec(x_230);
lean_inc(x_295);
x_296 = l_Lean_mkRawNatLit(x_295);
lean_inc(x_296);
x_297 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_297, 0, x_296);
lean_ctor_set(x_297, 1, x_295);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_298 = l_Tactic_Ring_evalPow(x_1, x_297, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; 
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
lean_dec(x_298);
x_301 = lean_ctor_get(x_299, 0);
lean_inc(x_301);
x_302 = lean_ctor_get(x_299, 1);
lean_inc(x_302);
lean_dec(x_299);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_301);
x_303 = l_Tactic_Ring_evalMul(x_301, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_300);
if (lean_obj_tag(x_303) == 0)
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; 
x_304 = lean_ctor_get(x_303, 0);
lean_inc(x_304);
x_305 = lean_ctor_get(x_303, 1);
lean_inc(x_305);
lean_dec(x_303);
x_306 = lean_ctor_get(x_304, 0);
lean_inc(x_306);
x_307 = lean_ctor_get(x_304, 1);
lean_inc(x_307);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 lean_ctor_release(x_304, 1);
 x_308 = x_304;
} else {
 lean_dec_ref(x_304);
 x_308 = lean_box(0);
}
x_309 = l_Tactic_Ring_HornerExpr_e(x_301);
lean_dec(x_301);
x_310 = l_Tactic_Ring_HornerExpr_e(x_306);
x_311 = l_Tactic_Ring_evalPow___closed__13;
x_312 = lean_array_push(x_311, x_224);
x_313 = lean_array_push(x_312, x_296);
x_314 = lean_array_push(x_313, x_309);
x_315 = lean_array_push(x_314, x_310);
x_316 = lean_array_push(x_315, x_302);
x_317 = lean_array_push(x_316, x_307);
x_318 = l_Tactic_Ring_evalPow___closed__12;
x_319 = l_Tactic_Ring_mkAppCS(x_318, x_317, x_3, x_4, x_5, x_6, x_7, x_8, x_305);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_320 = lean_ctor_get(x_319, 0);
lean_inc(x_320);
x_321 = lean_ctor_get(x_319, 1);
lean_inc(x_321);
if (lean_is_exclusive(x_319)) {
 lean_ctor_release(x_319, 0);
 lean_ctor_release(x_319, 1);
 x_322 = x_319;
} else {
 lean_dec_ref(x_319);
 x_322 = lean_box(0);
}
if (lean_is_scalar(x_308)) {
 x_323 = lean_alloc_ctor(0, 2, 0);
} else {
 x_323 = x_308;
}
lean_ctor_set(x_323, 0, x_306);
lean_ctor_set(x_323, 1, x_320);
if (lean_is_scalar(x_322)) {
 x_324 = lean_alloc_ctor(0, 2, 0);
} else {
 x_324 = x_322;
}
lean_ctor_set(x_324, 0, x_323);
lean_ctor_set(x_324, 1, x_321);
return x_324;
}
else
{
lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; 
lean_dec(x_302);
lean_dec(x_301);
lean_dec(x_296);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_325 = lean_ctor_get(x_303, 0);
lean_inc(x_325);
x_326 = lean_ctor_get(x_303, 1);
lean_inc(x_326);
if (lean_is_exclusive(x_303)) {
 lean_ctor_release(x_303, 0);
 lean_ctor_release(x_303, 1);
 x_327 = x_303;
} else {
 lean_dec_ref(x_303);
 x_327 = lean_box(0);
}
if (lean_is_scalar(x_327)) {
 x_328 = lean_alloc_ctor(1, 2, 0);
} else {
 x_328 = x_327;
}
lean_ctor_set(x_328, 0, x_325);
lean_ctor_set(x_328, 1, x_326);
return x_328;
}
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
lean_dec(x_296);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_329 = lean_ctor_get(x_298, 0);
lean_inc(x_329);
x_330 = lean_ctor_get(x_298, 1);
lean_inc(x_330);
if (lean_is_exclusive(x_298)) {
 lean_ctor_release(x_298, 0);
 lean_ctor_release(x_298, 1);
 x_331 = x_298;
} else {
 lean_dec_ref(x_298);
 x_331 = lean_box(0);
}
if (lean_is_scalar(x_331)) {
 x_332 = lean_alloc_ctor(1, 2, 0);
} else {
 x_332 = x_331;
}
lean_ctor_set(x_332, 0, x_329);
lean_ctor_set(x_332, 1, x_330);
return x_332;
}
}
}
else
{
uint8_t x_333; 
x_333 = !lean_is_exclusive(x_236);
if (x_333 == 0)
{
lean_object* x_334; uint8_t x_335; 
x_334 = lean_ctor_get(x_236, 0);
x_335 = lean_nat_dec_eq(x_334, x_231);
lean_dec(x_334);
if (x_335 == 0)
{
uint8_t x_336; 
lean_free_object(x_236);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
x_336 = !lean_is_exclusive(x_2);
if (x_336 == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; 
x_337 = lean_ctor_get(x_2, 1);
lean_dec(x_337);
x_338 = lean_ctor_get(x_2, 0);
lean_dec(x_338);
x_339 = lean_nat_sub(x_230, x_233);
lean_dec(x_230);
lean_inc(x_339);
x_340 = l_Lean_mkRawNatLit(x_339);
lean_inc(x_340);
lean_ctor_set(x_2, 1, x_339);
lean_ctor_set(x_2, 0, x_340);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_341 = l_Tactic_Ring_evalPow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_341) == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; 
x_342 = lean_ctor_get(x_341, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_341, 1);
lean_inc(x_343);
lean_dec(x_341);
x_344 = lean_ctor_get(x_342, 0);
lean_inc(x_344);
x_345 = lean_ctor_get(x_342, 1);
lean_inc(x_345);
lean_dec(x_342);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_344);
x_346 = l_Tactic_Ring_evalMul(x_344, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_343);
if (lean_obj_tag(x_346) == 0)
{
lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_347 = lean_ctor_get(x_346, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_346, 1);
lean_inc(x_348);
lean_dec(x_346);
x_349 = !lean_is_exclusive(x_347);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; uint8_t x_363; 
x_350 = lean_ctor_get(x_347, 0);
x_351 = lean_ctor_get(x_347, 1);
x_352 = l_Tactic_Ring_HornerExpr_e(x_344);
lean_dec(x_344);
x_353 = l_Tactic_Ring_HornerExpr_e(x_350);
x_354 = l_Tactic_Ring_evalPow___closed__13;
x_355 = lean_array_push(x_354, x_224);
x_356 = lean_array_push(x_355, x_340);
x_357 = lean_array_push(x_356, x_352);
x_358 = lean_array_push(x_357, x_353);
x_359 = lean_array_push(x_358, x_345);
x_360 = lean_array_push(x_359, x_351);
x_361 = l_Tactic_Ring_evalPow___closed__12;
x_362 = l_Tactic_Ring_mkAppCS(x_361, x_360, x_3, x_4, x_5, x_6, x_7, x_8, x_348);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_363 = !lean_is_exclusive(x_362);
if (x_363 == 0)
{
lean_object* x_364; 
x_364 = lean_ctor_get(x_362, 0);
lean_ctor_set(x_347, 1, x_364);
lean_ctor_set(x_362, 0, x_347);
return x_362;
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; 
x_365 = lean_ctor_get(x_362, 0);
x_366 = lean_ctor_get(x_362, 1);
lean_inc(x_366);
lean_inc(x_365);
lean_dec(x_362);
lean_ctor_set(x_347, 1, x_365);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_347);
lean_ctor_set(x_367, 1, x_366);
return x_367;
}
}
else
{
lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_368 = lean_ctor_get(x_347, 0);
x_369 = lean_ctor_get(x_347, 1);
lean_inc(x_369);
lean_inc(x_368);
lean_dec(x_347);
x_370 = l_Tactic_Ring_HornerExpr_e(x_344);
lean_dec(x_344);
x_371 = l_Tactic_Ring_HornerExpr_e(x_368);
x_372 = l_Tactic_Ring_evalPow___closed__13;
x_373 = lean_array_push(x_372, x_224);
x_374 = lean_array_push(x_373, x_340);
x_375 = lean_array_push(x_374, x_370);
x_376 = lean_array_push(x_375, x_371);
x_377 = lean_array_push(x_376, x_345);
x_378 = lean_array_push(x_377, x_369);
x_379 = l_Tactic_Ring_evalPow___closed__12;
x_380 = l_Tactic_Ring_mkAppCS(x_379, x_378, x_3, x_4, x_5, x_6, x_7, x_8, x_348);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_381 = lean_ctor_get(x_380, 0);
lean_inc(x_381);
x_382 = lean_ctor_get(x_380, 1);
lean_inc(x_382);
if (lean_is_exclusive(x_380)) {
 lean_ctor_release(x_380, 0);
 lean_ctor_release(x_380, 1);
 x_383 = x_380;
} else {
 lean_dec_ref(x_380);
 x_383 = lean_box(0);
}
x_384 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_384, 0, x_368);
lean_ctor_set(x_384, 1, x_381);
if (lean_is_scalar(x_383)) {
 x_385 = lean_alloc_ctor(0, 2, 0);
} else {
 x_385 = x_383;
}
lean_ctor_set(x_385, 0, x_384);
lean_ctor_set(x_385, 1, x_382);
return x_385;
}
}
else
{
uint8_t x_386; 
lean_dec(x_345);
lean_dec(x_344);
lean_dec(x_340);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_386 = !lean_is_exclusive(x_346);
if (x_386 == 0)
{
return x_346;
}
else
{
lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_387 = lean_ctor_get(x_346, 0);
x_388 = lean_ctor_get(x_346, 1);
lean_inc(x_388);
lean_inc(x_387);
lean_dec(x_346);
x_389 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_389, 0, x_387);
lean_ctor_set(x_389, 1, x_388);
return x_389;
}
}
}
else
{
uint8_t x_390; 
lean_dec(x_340);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_390 = !lean_is_exclusive(x_341);
if (x_390 == 0)
{
return x_341;
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; 
x_391 = lean_ctor_get(x_341, 0);
x_392 = lean_ctor_get(x_341, 1);
lean_inc(x_392);
lean_inc(x_391);
lean_dec(x_341);
x_393 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_393, 0, x_391);
lean_ctor_set(x_393, 1, x_392);
return x_393;
}
}
}
else
{
lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; 
lean_dec(x_2);
x_394 = lean_nat_sub(x_230, x_233);
lean_dec(x_230);
lean_inc(x_394);
x_395 = l_Lean_mkRawNatLit(x_394);
lean_inc(x_395);
x_396 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_396, 0, x_395);
lean_ctor_set(x_396, 1, x_394);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_397 = l_Tactic_Ring_evalPow(x_1, x_396, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_397) == 0)
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; 
x_398 = lean_ctor_get(x_397, 0);
lean_inc(x_398);
x_399 = lean_ctor_get(x_397, 1);
lean_inc(x_399);
lean_dec(x_397);
x_400 = lean_ctor_get(x_398, 0);
lean_inc(x_400);
x_401 = lean_ctor_get(x_398, 1);
lean_inc(x_401);
lean_dec(x_398);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_400);
x_402 = l_Tactic_Ring_evalMul(x_400, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_399);
if (lean_obj_tag(x_402) == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_403 = lean_ctor_get(x_402, 0);
lean_inc(x_403);
x_404 = lean_ctor_get(x_402, 1);
lean_inc(x_404);
lean_dec(x_402);
x_405 = lean_ctor_get(x_403, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_403, 1);
lean_inc(x_406);
if (lean_is_exclusive(x_403)) {
 lean_ctor_release(x_403, 0);
 lean_ctor_release(x_403, 1);
 x_407 = x_403;
} else {
 lean_dec_ref(x_403);
 x_407 = lean_box(0);
}
x_408 = l_Tactic_Ring_HornerExpr_e(x_400);
lean_dec(x_400);
x_409 = l_Tactic_Ring_HornerExpr_e(x_405);
x_410 = l_Tactic_Ring_evalPow___closed__13;
x_411 = lean_array_push(x_410, x_224);
x_412 = lean_array_push(x_411, x_395);
x_413 = lean_array_push(x_412, x_408);
x_414 = lean_array_push(x_413, x_409);
x_415 = lean_array_push(x_414, x_401);
x_416 = lean_array_push(x_415, x_406);
x_417 = l_Tactic_Ring_evalPow___closed__12;
x_418 = l_Tactic_Ring_mkAppCS(x_417, x_416, x_3, x_4, x_5, x_6, x_7, x_8, x_404);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_419 = lean_ctor_get(x_418, 0);
lean_inc(x_419);
x_420 = lean_ctor_get(x_418, 1);
lean_inc(x_420);
if (lean_is_exclusive(x_418)) {
 lean_ctor_release(x_418, 0);
 lean_ctor_release(x_418, 1);
 x_421 = x_418;
} else {
 lean_dec_ref(x_418);
 x_421 = lean_box(0);
}
if (lean_is_scalar(x_407)) {
 x_422 = lean_alloc_ctor(0, 2, 0);
} else {
 x_422 = x_407;
}
lean_ctor_set(x_422, 0, x_405);
lean_ctor_set(x_422, 1, x_419);
if (lean_is_scalar(x_421)) {
 x_423 = lean_alloc_ctor(0, 2, 0);
} else {
 x_423 = x_421;
}
lean_ctor_set(x_423, 0, x_422);
lean_ctor_set(x_423, 1, x_420);
return x_423;
}
else
{
lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; 
lean_dec(x_401);
lean_dec(x_400);
lean_dec(x_395);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_424 = lean_ctor_get(x_402, 0);
lean_inc(x_424);
x_425 = lean_ctor_get(x_402, 1);
lean_inc(x_425);
if (lean_is_exclusive(x_402)) {
 lean_ctor_release(x_402, 0);
 lean_ctor_release(x_402, 1);
 x_426 = x_402;
} else {
 lean_dec_ref(x_402);
 x_426 = lean_box(0);
}
if (lean_is_scalar(x_426)) {
 x_427 = lean_alloc_ctor(1, 2, 0);
} else {
 x_427 = x_426;
}
lean_ctor_set(x_427, 0, x_424);
lean_ctor_set(x_427, 1, x_425);
return x_427;
}
}
else
{
lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_395);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_428 = lean_ctor_get(x_397, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_397, 1);
lean_inc(x_429);
if (lean_is_exclusive(x_397)) {
 lean_ctor_release(x_397, 0);
 lean_ctor_release(x_397, 1);
 x_430 = x_397;
} else {
 lean_dec_ref(x_397);
 x_430 = lean_box(0);
}
if (lean_is_scalar(x_430)) {
 x_431 = lean_alloc_ctor(1, 2, 0);
} else {
 x_431 = x_430;
}
lean_ctor_set(x_431, 0, x_428);
lean_ctor_set(x_431, 1, x_429);
return x_431;
}
}
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
lean_dec(x_224);
lean_dec(x_1);
x_432 = lean_ctor_get(x_227, 1);
lean_inc(x_432);
x_433 = lean_nat_mul(x_432, x_230);
lean_dec(x_230);
lean_dec(x_432);
lean_inc(x_433);
x_434 = l_Lean_mkRawNatLit(x_433);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_434);
x_435 = l_Lean_Meta_mkEqRefl(x_434, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_435) == 0)
{
lean_object* x_436; lean_object* x_437; lean_object* x_438; uint8_t x_439; 
x_436 = lean_ctor_get(x_435, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_435, 1);
lean_inc(x_437);
lean_dec(x_435);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_225);
x_438 = l_Tactic_Ring_evalPow(x_225, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_437);
x_439 = !lean_is_exclusive(x_2);
if (x_439 == 0)
{
lean_object* x_440; lean_object* x_441; 
x_440 = lean_ctor_get(x_2, 1);
lean_dec(x_440);
x_441 = lean_ctor_get(x_2, 0);
lean_dec(x_441);
if (lean_obj_tag(x_438) == 0)
{
lean_object* x_442; lean_object* x_443; uint8_t x_444; 
x_442 = lean_ctor_get(x_438, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_438, 1);
lean_inc(x_443);
lean_dec(x_438);
x_444 = !lean_is_exclusive(x_442);
if (x_444 == 0)
{
lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; 
x_445 = lean_ctor_get(x_442, 0);
x_446 = lean_ctor_get(x_442, 1);
x_447 = lean_ctor_get(x_3, 0);
lean_inc(x_447);
lean_ctor_set(x_236, 0, x_447);
x_448 = lean_box(0);
x_449 = l_Tactic_Ring_evalHorner___closed__3;
x_450 = lean_array_push(x_449, x_236);
x_451 = l_Tactic_Ring_evalAdd___closed__17;
x_452 = lean_array_push(x_450, x_451);
x_453 = lean_array_push(x_452, x_448);
x_454 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_455 = l_Lean_Meta_mkAppOptM(x_454, x_453, x_5, x_6, x_7, x_8, x_443);
if (lean_obj_tag(x_455) == 0)
{
lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; uint8_t x_477; 
x_456 = lean_ctor_get(x_455, 0);
lean_inc(x_456);
x_457 = lean_ctor_get(x_455, 1);
lean_inc(x_457);
lean_dec(x_455);
lean_inc(x_434);
lean_ctor_set(x_442, 1, x_433);
lean_ctor_set(x_442, 0, x_434);
x_458 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_458, 0, x_456);
lean_ctor_set(x_458, 1, x_231);
lean_inc(x_3);
lean_inc(x_226);
lean_inc(x_445);
x_459 = l_Tactic_Ring_HornerExpr_xadd_x27(x_445, x_226, x_442, x_458, x_3, x_4, x_5, x_6, x_7, x_8, x_457);
x_460 = lean_ctor_get(x_459, 0);
lean_inc(x_460);
x_461 = lean_ctor_get(x_459, 1);
lean_inc(x_461);
lean_dec(x_459);
x_462 = l_Tactic_Ring_HornerExpr_e(x_225);
lean_dec(x_225);
x_463 = lean_ctor_get(x_226, 0);
lean_inc(x_463);
lean_dec(x_226);
x_464 = lean_ctor_get(x_227, 0);
lean_inc(x_464);
lean_dec(x_227);
x_465 = l_Tactic_Ring_HornerExpr_e(x_445);
lean_dec(x_445);
x_466 = l_Tactic_Ring_evalPow___closed__16;
x_467 = lean_array_push(x_466, x_462);
x_468 = lean_array_push(x_467, x_463);
x_469 = lean_array_push(x_468, x_464);
x_470 = lean_array_push(x_469, x_229);
x_471 = lean_array_push(x_470, x_434);
x_472 = lean_array_push(x_471, x_465);
x_473 = lean_array_push(x_472, x_436);
x_474 = lean_array_push(x_473, x_446);
x_475 = l_Tactic_Ring_evalPow___closed__15;
x_476 = l_Tactic_Ring_mkAppCS(x_475, x_474, x_3, x_4, x_5, x_6, x_7, x_8, x_461);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_477 = !lean_is_exclusive(x_476);
if (x_477 == 0)
{
lean_object* x_478; 
x_478 = lean_ctor_get(x_476, 0);
lean_ctor_set(x_2, 1, x_478);
lean_ctor_set(x_2, 0, x_460);
lean_ctor_set(x_476, 0, x_2);
return x_476;
}
else
{
lean_object* x_479; lean_object* x_480; lean_object* x_481; 
x_479 = lean_ctor_get(x_476, 0);
x_480 = lean_ctor_get(x_476, 1);
lean_inc(x_480);
lean_inc(x_479);
lean_dec(x_476);
lean_ctor_set(x_2, 1, x_479);
lean_ctor_set(x_2, 0, x_460);
x_481 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_481, 0, x_2);
lean_ctor_set(x_481, 1, x_480);
return x_481;
}
}
else
{
uint8_t x_482; 
lean_free_object(x_442);
lean_dec(x_446);
lean_dec(x_445);
lean_free_object(x_2);
lean_dec(x_436);
lean_dec(x_434);
lean_dec(x_433);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_482 = !lean_is_exclusive(x_455);
if (x_482 == 0)
{
return x_455;
}
else
{
lean_object* x_483; lean_object* x_484; lean_object* x_485; 
x_483 = lean_ctor_get(x_455, 0);
x_484 = lean_ctor_get(x_455, 1);
lean_inc(x_484);
lean_inc(x_483);
lean_dec(x_455);
x_485 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_485, 0, x_483);
lean_ctor_set(x_485, 1, x_484);
return x_485;
}
}
}
else
{
lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; 
x_486 = lean_ctor_get(x_442, 0);
x_487 = lean_ctor_get(x_442, 1);
lean_inc(x_487);
lean_inc(x_486);
lean_dec(x_442);
x_488 = lean_ctor_get(x_3, 0);
lean_inc(x_488);
lean_ctor_set(x_236, 0, x_488);
x_489 = lean_box(0);
x_490 = l_Tactic_Ring_evalHorner___closed__3;
x_491 = lean_array_push(x_490, x_236);
x_492 = l_Tactic_Ring_evalAdd___closed__17;
x_493 = lean_array_push(x_491, x_492);
x_494 = lean_array_push(x_493, x_489);
x_495 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_496 = l_Lean_Meta_mkAppOptM(x_495, x_494, x_5, x_6, x_7, x_8, x_443);
if (lean_obj_tag(x_496) == 0)
{
lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; 
x_497 = lean_ctor_get(x_496, 0);
lean_inc(x_497);
x_498 = lean_ctor_get(x_496, 1);
lean_inc(x_498);
lean_dec(x_496);
lean_inc(x_434);
x_499 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_499, 0, x_434);
lean_ctor_set(x_499, 1, x_433);
x_500 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_500, 0, x_497);
lean_ctor_set(x_500, 1, x_231);
lean_inc(x_3);
lean_inc(x_226);
lean_inc(x_486);
x_501 = l_Tactic_Ring_HornerExpr_xadd_x27(x_486, x_226, x_499, x_500, x_3, x_4, x_5, x_6, x_7, x_8, x_498);
x_502 = lean_ctor_get(x_501, 0);
lean_inc(x_502);
x_503 = lean_ctor_get(x_501, 1);
lean_inc(x_503);
lean_dec(x_501);
x_504 = l_Tactic_Ring_HornerExpr_e(x_225);
lean_dec(x_225);
x_505 = lean_ctor_get(x_226, 0);
lean_inc(x_505);
lean_dec(x_226);
x_506 = lean_ctor_get(x_227, 0);
lean_inc(x_506);
lean_dec(x_227);
x_507 = l_Tactic_Ring_HornerExpr_e(x_486);
lean_dec(x_486);
x_508 = l_Tactic_Ring_evalPow___closed__16;
x_509 = lean_array_push(x_508, x_504);
x_510 = lean_array_push(x_509, x_505);
x_511 = lean_array_push(x_510, x_506);
x_512 = lean_array_push(x_511, x_229);
x_513 = lean_array_push(x_512, x_434);
x_514 = lean_array_push(x_513, x_507);
x_515 = lean_array_push(x_514, x_436);
x_516 = lean_array_push(x_515, x_487);
x_517 = l_Tactic_Ring_evalPow___closed__15;
x_518 = l_Tactic_Ring_mkAppCS(x_517, x_516, x_3, x_4, x_5, x_6, x_7, x_8, x_503);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_519 = lean_ctor_get(x_518, 0);
lean_inc(x_519);
x_520 = lean_ctor_get(x_518, 1);
lean_inc(x_520);
if (lean_is_exclusive(x_518)) {
 lean_ctor_release(x_518, 0);
 lean_ctor_release(x_518, 1);
 x_521 = x_518;
} else {
 lean_dec_ref(x_518);
 x_521 = lean_box(0);
}
lean_ctor_set(x_2, 1, x_519);
lean_ctor_set(x_2, 0, x_502);
if (lean_is_scalar(x_521)) {
 x_522 = lean_alloc_ctor(0, 2, 0);
} else {
 x_522 = x_521;
}
lean_ctor_set(x_522, 0, x_2);
lean_ctor_set(x_522, 1, x_520);
return x_522;
}
else
{
lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
lean_dec(x_487);
lean_dec(x_486);
lean_free_object(x_2);
lean_dec(x_436);
lean_dec(x_434);
lean_dec(x_433);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_523 = lean_ctor_get(x_496, 0);
lean_inc(x_523);
x_524 = lean_ctor_get(x_496, 1);
lean_inc(x_524);
if (lean_is_exclusive(x_496)) {
 lean_ctor_release(x_496, 0);
 lean_ctor_release(x_496, 1);
 x_525 = x_496;
} else {
 lean_dec_ref(x_496);
 x_525 = lean_box(0);
}
if (lean_is_scalar(x_525)) {
 x_526 = lean_alloc_ctor(1, 2, 0);
} else {
 x_526 = x_525;
}
lean_ctor_set(x_526, 0, x_523);
lean_ctor_set(x_526, 1, x_524);
return x_526;
}
}
}
else
{
uint8_t x_527; 
lean_free_object(x_2);
lean_dec(x_436);
lean_dec(x_434);
lean_dec(x_433);
lean_free_object(x_236);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_527 = !lean_is_exclusive(x_438);
if (x_527 == 0)
{
return x_438;
}
else
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; 
x_528 = lean_ctor_get(x_438, 0);
x_529 = lean_ctor_get(x_438, 1);
lean_inc(x_529);
lean_inc(x_528);
lean_dec(x_438);
x_530 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_530, 0, x_528);
lean_ctor_set(x_530, 1, x_529);
return x_530;
}
}
}
else
{
lean_dec(x_2);
if (lean_obj_tag(x_438) == 0)
{
lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; 
x_531 = lean_ctor_get(x_438, 0);
lean_inc(x_531);
x_532 = lean_ctor_get(x_438, 1);
lean_inc(x_532);
lean_dec(x_438);
x_533 = lean_ctor_get(x_531, 0);
lean_inc(x_533);
x_534 = lean_ctor_get(x_531, 1);
lean_inc(x_534);
if (lean_is_exclusive(x_531)) {
 lean_ctor_release(x_531, 0);
 lean_ctor_release(x_531, 1);
 x_535 = x_531;
} else {
 lean_dec_ref(x_531);
 x_535 = lean_box(0);
}
x_536 = lean_ctor_get(x_3, 0);
lean_inc(x_536);
lean_ctor_set(x_236, 0, x_536);
x_537 = lean_box(0);
x_538 = l_Tactic_Ring_evalHorner___closed__3;
x_539 = lean_array_push(x_538, x_236);
x_540 = l_Tactic_Ring_evalAdd___closed__17;
x_541 = lean_array_push(x_539, x_540);
x_542 = lean_array_push(x_541, x_537);
x_543 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_544 = l_Lean_Meta_mkAppOptM(x_543, x_542, x_5, x_6, x_7, x_8, x_532);
if (lean_obj_tag(x_544) == 0)
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; 
x_545 = lean_ctor_get(x_544, 0);
lean_inc(x_545);
x_546 = lean_ctor_get(x_544, 1);
lean_inc(x_546);
lean_dec(x_544);
lean_inc(x_434);
if (lean_is_scalar(x_535)) {
 x_547 = lean_alloc_ctor(0, 2, 0);
} else {
 x_547 = x_535;
}
lean_ctor_set(x_547, 0, x_434);
lean_ctor_set(x_547, 1, x_433);
x_548 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_548, 0, x_545);
lean_ctor_set(x_548, 1, x_231);
lean_inc(x_3);
lean_inc(x_226);
lean_inc(x_533);
x_549 = l_Tactic_Ring_HornerExpr_xadd_x27(x_533, x_226, x_547, x_548, x_3, x_4, x_5, x_6, x_7, x_8, x_546);
x_550 = lean_ctor_get(x_549, 0);
lean_inc(x_550);
x_551 = lean_ctor_get(x_549, 1);
lean_inc(x_551);
lean_dec(x_549);
x_552 = l_Tactic_Ring_HornerExpr_e(x_225);
lean_dec(x_225);
x_553 = lean_ctor_get(x_226, 0);
lean_inc(x_553);
lean_dec(x_226);
x_554 = lean_ctor_get(x_227, 0);
lean_inc(x_554);
lean_dec(x_227);
x_555 = l_Tactic_Ring_HornerExpr_e(x_533);
lean_dec(x_533);
x_556 = l_Tactic_Ring_evalPow___closed__16;
x_557 = lean_array_push(x_556, x_552);
x_558 = lean_array_push(x_557, x_553);
x_559 = lean_array_push(x_558, x_554);
x_560 = lean_array_push(x_559, x_229);
x_561 = lean_array_push(x_560, x_434);
x_562 = lean_array_push(x_561, x_555);
x_563 = lean_array_push(x_562, x_436);
x_564 = lean_array_push(x_563, x_534);
x_565 = l_Tactic_Ring_evalPow___closed__15;
x_566 = l_Tactic_Ring_mkAppCS(x_565, x_564, x_3, x_4, x_5, x_6, x_7, x_8, x_551);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_567 = lean_ctor_get(x_566, 0);
lean_inc(x_567);
x_568 = lean_ctor_get(x_566, 1);
lean_inc(x_568);
if (lean_is_exclusive(x_566)) {
 lean_ctor_release(x_566, 0);
 lean_ctor_release(x_566, 1);
 x_569 = x_566;
} else {
 lean_dec_ref(x_566);
 x_569 = lean_box(0);
}
x_570 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_570, 0, x_550);
lean_ctor_set(x_570, 1, x_567);
if (lean_is_scalar(x_569)) {
 x_571 = lean_alloc_ctor(0, 2, 0);
} else {
 x_571 = x_569;
}
lean_ctor_set(x_571, 0, x_570);
lean_ctor_set(x_571, 1, x_568);
return x_571;
}
else
{
lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; 
lean_dec(x_535);
lean_dec(x_534);
lean_dec(x_533);
lean_dec(x_436);
lean_dec(x_434);
lean_dec(x_433);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_572 = lean_ctor_get(x_544, 0);
lean_inc(x_572);
x_573 = lean_ctor_get(x_544, 1);
lean_inc(x_573);
if (lean_is_exclusive(x_544)) {
 lean_ctor_release(x_544, 0);
 lean_ctor_release(x_544, 1);
 x_574 = x_544;
} else {
 lean_dec_ref(x_544);
 x_574 = lean_box(0);
}
if (lean_is_scalar(x_574)) {
 x_575 = lean_alloc_ctor(1, 2, 0);
} else {
 x_575 = x_574;
}
lean_ctor_set(x_575, 0, x_572);
lean_ctor_set(x_575, 1, x_573);
return x_575;
}
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_436);
lean_dec(x_434);
lean_dec(x_433);
lean_free_object(x_236);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_576 = lean_ctor_get(x_438, 0);
lean_inc(x_576);
x_577 = lean_ctor_get(x_438, 1);
lean_inc(x_577);
if (lean_is_exclusive(x_438)) {
 lean_ctor_release(x_438, 0);
 lean_ctor_release(x_438, 1);
 x_578 = x_438;
} else {
 lean_dec_ref(x_438);
 x_578 = lean_box(0);
}
if (lean_is_scalar(x_578)) {
 x_579 = lean_alloc_ctor(1, 2, 0);
} else {
 x_579 = x_578;
}
lean_ctor_set(x_579, 0, x_576);
lean_ctor_set(x_579, 1, x_577);
return x_579;
}
}
}
else
{
uint8_t x_580; 
lean_dec(x_434);
lean_dec(x_433);
lean_free_object(x_236);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_580 = !lean_is_exclusive(x_435);
if (x_580 == 0)
{
return x_435;
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; 
x_581 = lean_ctor_get(x_435, 0);
x_582 = lean_ctor_get(x_435, 1);
lean_inc(x_582);
lean_inc(x_581);
lean_dec(x_435);
x_583 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_583, 0, x_581);
lean_ctor_set(x_583, 1, x_582);
return x_583;
}
}
}
}
else
{
lean_object* x_584; uint8_t x_585; 
x_584 = lean_ctor_get(x_236, 0);
lean_inc(x_584);
lean_dec(x_236);
x_585 = lean_nat_dec_eq(x_584, x_231);
lean_dec(x_584);
if (x_585 == 0)
{
lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; 
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_586 = x_2;
} else {
 lean_dec_ref(x_2);
 x_586 = lean_box(0);
}
x_587 = lean_nat_sub(x_230, x_233);
lean_dec(x_230);
lean_inc(x_587);
x_588 = l_Lean_mkRawNatLit(x_587);
lean_inc(x_588);
if (lean_is_scalar(x_586)) {
 x_589 = lean_alloc_ctor(0, 2, 0);
} else {
 x_589 = x_586;
}
lean_ctor_set(x_589, 0, x_588);
lean_ctor_set(x_589, 1, x_587);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_1);
x_590 = l_Tactic_Ring_evalPow(x_1, x_589, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_590) == 0)
{
lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; 
x_591 = lean_ctor_get(x_590, 0);
lean_inc(x_591);
x_592 = lean_ctor_get(x_590, 1);
lean_inc(x_592);
lean_dec(x_590);
x_593 = lean_ctor_get(x_591, 0);
lean_inc(x_593);
x_594 = lean_ctor_get(x_591, 1);
lean_inc(x_594);
lean_dec(x_591);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_593);
x_595 = l_Tactic_Ring_evalMul(x_593, x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_592);
if (lean_obj_tag(x_595) == 0)
{
lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; 
x_596 = lean_ctor_get(x_595, 0);
lean_inc(x_596);
x_597 = lean_ctor_get(x_595, 1);
lean_inc(x_597);
lean_dec(x_595);
x_598 = lean_ctor_get(x_596, 0);
lean_inc(x_598);
x_599 = lean_ctor_get(x_596, 1);
lean_inc(x_599);
if (lean_is_exclusive(x_596)) {
 lean_ctor_release(x_596, 0);
 lean_ctor_release(x_596, 1);
 x_600 = x_596;
} else {
 lean_dec_ref(x_596);
 x_600 = lean_box(0);
}
x_601 = l_Tactic_Ring_HornerExpr_e(x_593);
lean_dec(x_593);
x_602 = l_Tactic_Ring_HornerExpr_e(x_598);
x_603 = l_Tactic_Ring_evalPow___closed__13;
x_604 = lean_array_push(x_603, x_224);
x_605 = lean_array_push(x_604, x_588);
x_606 = lean_array_push(x_605, x_601);
x_607 = lean_array_push(x_606, x_602);
x_608 = lean_array_push(x_607, x_594);
x_609 = lean_array_push(x_608, x_599);
x_610 = l_Tactic_Ring_evalPow___closed__12;
x_611 = l_Tactic_Ring_mkAppCS(x_610, x_609, x_3, x_4, x_5, x_6, x_7, x_8, x_597);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_612 = lean_ctor_get(x_611, 0);
lean_inc(x_612);
x_613 = lean_ctor_get(x_611, 1);
lean_inc(x_613);
if (lean_is_exclusive(x_611)) {
 lean_ctor_release(x_611, 0);
 lean_ctor_release(x_611, 1);
 x_614 = x_611;
} else {
 lean_dec_ref(x_611);
 x_614 = lean_box(0);
}
if (lean_is_scalar(x_600)) {
 x_615 = lean_alloc_ctor(0, 2, 0);
} else {
 x_615 = x_600;
}
lean_ctor_set(x_615, 0, x_598);
lean_ctor_set(x_615, 1, x_612);
if (lean_is_scalar(x_614)) {
 x_616 = lean_alloc_ctor(0, 2, 0);
} else {
 x_616 = x_614;
}
lean_ctor_set(x_616, 0, x_615);
lean_ctor_set(x_616, 1, x_613);
return x_616;
}
else
{
lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; 
lean_dec(x_594);
lean_dec(x_593);
lean_dec(x_588);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_617 = lean_ctor_get(x_595, 0);
lean_inc(x_617);
x_618 = lean_ctor_get(x_595, 1);
lean_inc(x_618);
if (lean_is_exclusive(x_595)) {
 lean_ctor_release(x_595, 0);
 lean_ctor_release(x_595, 1);
 x_619 = x_595;
} else {
 lean_dec_ref(x_595);
 x_619 = lean_box(0);
}
if (lean_is_scalar(x_619)) {
 x_620 = lean_alloc_ctor(1, 2, 0);
} else {
 x_620 = x_619;
}
lean_ctor_set(x_620, 0, x_617);
lean_ctor_set(x_620, 1, x_618);
return x_620;
}
}
else
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; 
lean_dec(x_588);
lean_dec(x_224);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_1);
x_621 = lean_ctor_get(x_590, 0);
lean_inc(x_621);
x_622 = lean_ctor_get(x_590, 1);
lean_inc(x_622);
if (lean_is_exclusive(x_590)) {
 lean_ctor_release(x_590, 0);
 lean_ctor_release(x_590, 1);
 x_623 = x_590;
} else {
 lean_dec_ref(x_590);
 x_623 = lean_box(0);
}
if (lean_is_scalar(x_623)) {
 x_624 = lean_alloc_ctor(1, 2, 0);
} else {
 x_624 = x_623;
}
lean_ctor_set(x_624, 0, x_621);
lean_ctor_set(x_624, 1, x_622);
return x_624;
}
}
else
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; 
lean_dec(x_224);
lean_dec(x_1);
x_625 = lean_ctor_get(x_227, 1);
lean_inc(x_625);
x_626 = lean_nat_mul(x_625, x_230);
lean_dec(x_230);
lean_dec(x_625);
lean_inc(x_626);
x_627 = l_Lean_mkRawNatLit(x_626);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_627);
x_628 = l_Lean_Meta_mkEqRefl(x_627, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_628) == 0)
{
lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; 
x_629 = lean_ctor_get(x_628, 0);
lean_inc(x_629);
x_630 = lean_ctor_get(x_628, 1);
lean_inc(x_630);
lean_dec(x_628);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_225);
x_631 = l_Tactic_Ring_evalPow(x_225, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_630);
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_632 = x_2;
} else {
 lean_dec_ref(x_2);
 x_632 = lean_box(0);
}
if (lean_obj_tag(x_631) == 0)
{
lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; 
x_633 = lean_ctor_get(x_631, 0);
lean_inc(x_633);
x_634 = lean_ctor_get(x_631, 1);
lean_inc(x_634);
lean_dec(x_631);
x_635 = lean_ctor_get(x_633, 0);
lean_inc(x_635);
x_636 = lean_ctor_get(x_633, 1);
lean_inc(x_636);
if (lean_is_exclusive(x_633)) {
 lean_ctor_release(x_633, 0);
 lean_ctor_release(x_633, 1);
 x_637 = x_633;
} else {
 lean_dec_ref(x_633);
 x_637 = lean_box(0);
}
x_638 = lean_ctor_get(x_3, 0);
lean_inc(x_638);
x_639 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_639, 0, x_638);
x_640 = lean_box(0);
x_641 = l_Tactic_Ring_evalHorner___closed__3;
x_642 = lean_array_push(x_641, x_639);
x_643 = l_Tactic_Ring_evalAdd___closed__17;
x_644 = lean_array_push(x_642, x_643);
x_645 = lean_array_push(x_644, x_640);
x_646 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_647 = l_Lean_Meta_mkAppOptM(x_646, x_645, x_5, x_6, x_7, x_8, x_634);
if (lean_obj_tag(x_647) == 0)
{
lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; 
x_648 = lean_ctor_get(x_647, 0);
lean_inc(x_648);
x_649 = lean_ctor_get(x_647, 1);
lean_inc(x_649);
lean_dec(x_647);
lean_inc(x_627);
if (lean_is_scalar(x_637)) {
 x_650 = lean_alloc_ctor(0, 2, 0);
} else {
 x_650 = x_637;
}
lean_ctor_set(x_650, 0, x_627);
lean_ctor_set(x_650, 1, x_626);
x_651 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_651, 0, x_648);
lean_ctor_set(x_651, 1, x_231);
lean_inc(x_3);
lean_inc(x_226);
lean_inc(x_635);
x_652 = l_Tactic_Ring_HornerExpr_xadd_x27(x_635, x_226, x_650, x_651, x_3, x_4, x_5, x_6, x_7, x_8, x_649);
x_653 = lean_ctor_get(x_652, 0);
lean_inc(x_653);
x_654 = lean_ctor_get(x_652, 1);
lean_inc(x_654);
lean_dec(x_652);
x_655 = l_Tactic_Ring_HornerExpr_e(x_225);
lean_dec(x_225);
x_656 = lean_ctor_get(x_226, 0);
lean_inc(x_656);
lean_dec(x_226);
x_657 = lean_ctor_get(x_227, 0);
lean_inc(x_657);
lean_dec(x_227);
x_658 = l_Tactic_Ring_HornerExpr_e(x_635);
lean_dec(x_635);
x_659 = l_Tactic_Ring_evalPow___closed__16;
x_660 = lean_array_push(x_659, x_655);
x_661 = lean_array_push(x_660, x_656);
x_662 = lean_array_push(x_661, x_657);
x_663 = lean_array_push(x_662, x_229);
x_664 = lean_array_push(x_663, x_627);
x_665 = lean_array_push(x_664, x_658);
x_666 = lean_array_push(x_665, x_629);
x_667 = lean_array_push(x_666, x_636);
x_668 = l_Tactic_Ring_evalPow___closed__15;
x_669 = l_Tactic_Ring_mkAppCS(x_668, x_667, x_3, x_4, x_5, x_6, x_7, x_8, x_654);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_670 = lean_ctor_get(x_669, 0);
lean_inc(x_670);
x_671 = lean_ctor_get(x_669, 1);
lean_inc(x_671);
if (lean_is_exclusive(x_669)) {
 lean_ctor_release(x_669, 0);
 lean_ctor_release(x_669, 1);
 x_672 = x_669;
} else {
 lean_dec_ref(x_669);
 x_672 = lean_box(0);
}
if (lean_is_scalar(x_632)) {
 x_673 = lean_alloc_ctor(0, 2, 0);
} else {
 x_673 = x_632;
}
lean_ctor_set(x_673, 0, x_653);
lean_ctor_set(x_673, 1, x_670);
if (lean_is_scalar(x_672)) {
 x_674 = lean_alloc_ctor(0, 2, 0);
} else {
 x_674 = x_672;
}
lean_ctor_set(x_674, 0, x_673);
lean_ctor_set(x_674, 1, x_671);
return x_674;
}
else
{
lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; 
lean_dec(x_637);
lean_dec(x_636);
lean_dec(x_635);
lean_dec(x_632);
lean_dec(x_629);
lean_dec(x_627);
lean_dec(x_626);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_675 = lean_ctor_get(x_647, 0);
lean_inc(x_675);
x_676 = lean_ctor_get(x_647, 1);
lean_inc(x_676);
if (lean_is_exclusive(x_647)) {
 lean_ctor_release(x_647, 0);
 lean_ctor_release(x_647, 1);
 x_677 = x_647;
} else {
 lean_dec_ref(x_647);
 x_677 = lean_box(0);
}
if (lean_is_scalar(x_677)) {
 x_678 = lean_alloc_ctor(1, 2, 0);
} else {
 x_678 = x_677;
}
lean_ctor_set(x_678, 0, x_675);
lean_ctor_set(x_678, 1, x_676);
return x_678;
}
}
else
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; 
lean_dec(x_632);
lean_dec(x_629);
lean_dec(x_627);
lean_dec(x_626);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
x_679 = lean_ctor_get(x_631, 0);
lean_inc(x_679);
x_680 = lean_ctor_get(x_631, 1);
lean_inc(x_680);
if (lean_is_exclusive(x_631)) {
 lean_ctor_release(x_631, 0);
 lean_ctor_release(x_631, 1);
 x_681 = x_631;
} else {
 lean_dec_ref(x_631);
 x_681 = lean_box(0);
}
if (lean_is_scalar(x_681)) {
 x_682 = lean_alloc_ctor(1, 2, 0);
} else {
 x_682 = x_681;
}
lean_ctor_set(x_682, 0, x_679);
lean_ctor_set(x_682, 1, x_680);
return x_682;
}
}
else
{
lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; 
lean_dec(x_627);
lean_dec(x_626);
lean_dec(x_229);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_3);
lean_dec(x_2);
x_683 = lean_ctor_get(x_628, 0);
lean_inc(x_683);
x_684 = lean_ctor_get(x_628, 1);
lean_inc(x_684);
if (lean_is_exclusive(x_628)) {
 lean_ctor_release(x_628, 0);
 lean_ctor_release(x_628, 1);
 x_685 = x_628;
} else {
 lean_dec_ref(x_628);
 x_685 = lean_box(0);
}
if (lean_is_scalar(x_685)) {
 x_686 = lean_alloc_ctor(1, 2, 0);
} else {
 x_686 = x_685;
}
lean_ctor_set(x_686, 0, x_683);
lean_ctor_set(x_686, 1, x_684);
return x_686;
}
}
}
}
}
else
{
uint8_t x_687; 
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
lean_dec(x_3);
x_687 = !lean_is_exclusive(x_2);
if (x_687 == 0)
{
lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; 
x_688 = lean_ctor_get(x_2, 1);
lean_dec(x_688);
x_689 = lean_ctor_get(x_2, 0);
lean_dec(x_689);
x_690 = l_Tactic_Ring_HornerExpr_e(x_1);
x_691 = l_Tactic_Ring_evalAdd___closed__5;
x_692 = lean_array_push(x_691, x_690);
x_693 = l_Tactic_Ring_evalPow___closed__6;
x_694 = l_Lean_Meta_mkAppM(x_693, x_692, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_694) == 0)
{
uint8_t x_695; 
x_695 = !lean_is_exclusive(x_694);
if (x_695 == 0)
{
lean_object* x_696; 
x_696 = lean_ctor_get(x_694, 0);
lean_ctor_set(x_2, 1, x_696);
lean_ctor_set(x_2, 0, x_1);
lean_ctor_set(x_694, 0, x_2);
return x_694;
}
else
{
lean_object* x_697; lean_object* x_698; lean_object* x_699; 
x_697 = lean_ctor_get(x_694, 0);
x_698 = lean_ctor_get(x_694, 1);
lean_inc(x_698);
lean_inc(x_697);
lean_dec(x_694);
lean_ctor_set(x_2, 1, x_697);
lean_ctor_set(x_2, 0, x_1);
x_699 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_699, 0, x_2);
lean_ctor_set(x_699, 1, x_698);
return x_699;
}
}
else
{
uint8_t x_700; 
lean_free_object(x_2);
lean_dec(x_1);
x_700 = !lean_is_exclusive(x_694);
if (x_700 == 0)
{
return x_694;
}
else
{
lean_object* x_701; lean_object* x_702; lean_object* x_703; 
x_701 = lean_ctor_get(x_694, 0);
x_702 = lean_ctor_get(x_694, 1);
lean_inc(x_702);
lean_inc(x_701);
lean_dec(x_694);
x_703 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_703, 0, x_701);
lean_ctor_set(x_703, 1, x_702);
return x_703;
}
}
}
else
{
lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; 
lean_dec(x_2);
x_704 = l_Tactic_Ring_HornerExpr_e(x_1);
x_705 = l_Tactic_Ring_evalAdd___closed__5;
x_706 = lean_array_push(x_705, x_704);
x_707 = l_Tactic_Ring_evalPow___closed__6;
x_708 = l_Lean_Meta_mkAppM(x_707, x_706, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_708) == 0)
{
lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; 
x_709 = lean_ctor_get(x_708, 0);
lean_inc(x_709);
x_710 = lean_ctor_get(x_708, 1);
lean_inc(x_710);
if (lean_is_exclusive(x_708)) {
 lean_ctor_release(x_708, 0);
 lean_ctor_release(x_708, 1);
 x_711 = x_708;
} else {
 lean_dec_ref(x_708);
 x_711 = lean_box(0);
}
x_712 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_712, 0, x_1);
lean_ctor_set(x_712, 1, x_709);
if (lean_is_scalar(x_711)) {
 x_713 = lean_alloc_ctor(0, 2, 0);
} else {
 x_713 = x_711;
}
lean_ctor_set(x_713, 0, x_712);
lean_ctor_set(x_713, 1, x_710);
return x_713;
}
else
{
lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; 
lean_dec(x_1);
x_714 = lean_ctor_get(x_708, 0);
lean_inc(x_714);
x_715 = lean_ctor_get(x_708, 1);
lean_inc(x_715);
if (lean_is_exclusive(x_708)) {
 lean_ctor_release(x_708, 0);
 lean_ctor_release(x_708, 1);
 x_716 = x_708;
} else {
 lean_dec_ref(x_708);
 x_716 = lean_box(0);
}
if (lean_is_scalar(x_716)) {
 x_717 = lean_alloc_ctor(1, 2, 0);
} else {
 x_717 = x_716;
}
lean_ctor_set(x_717, 0, x_714);
lean_ctor_set(x_717, 1, x_715);
return x_717;
}
}
}
}
else
{
uint8_t x_718; 
lean_dec(x_230);
lean_dec(x_229);
lean_dec(x_228);
lean_dec(x_227);
lean_dec(x_226);
lean_dec(x_225);
lean_dec(x_224);
x_718 = !lean_is_exclusive(x_2);
if (x_718 == 0)
{
lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; 
x_719 = lean_ctor_get(x_2, 1);
lean_dec(x_719);
x_720 = lean_ctor_get(x_2, 0);
lean_dec(x_720);
x_721 = lean_ctor_get(x_3, 0);
lean_inc(x_721);
lean_dec(x_3);
x_722 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_722, 0, x_721);
x_723 = lean_box(0);
x_724 = l_Tactic_Ring_evalHorner___closed__3;
x_725 = lean_array_push(x_724, x_722);
x_726 = l_Tactic_Ring_evalPow___closed__8;
x_727 = lean_array_push(x_725, x_726);
x_728 = lean_array_push(x_727, x_723);
x_729 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_730 = l_Lean_Meta_mkAppOptM(x_729, x_728, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_730) == 0)
{
lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; 
x_731 = lean_ctor_get(x_730, 0);
lean_inc(x_731);
x_732 = lean_ctor_get(x_730, 1);
lean_inc(x_732);
lean_dec(x_730);
x_733 = l_Tactic_Ring_HornerExpr_e(x_1);
lean_dec(x_1);
x_734 = l_Tactic_Ring_evalAdd___closed__5;
x_735 = lean_array_push(x_734, x_733);
x_736 = l_Tactic_Ring_evalPow___closed__10;
x_737 = l_Lean_Meta_mkAppM(x_736, x_735, x_5, x_6, x_7, x_8, x_732);
if (lean_obj_tag(x_737) == 0)
{
uint8_t x_738; 
x_738 = !lean_is_exclusive(x_737);
if (x_738 == 0)
{
lean_object* x_739; lean_object* x_740; lean_object* x_741; 
x_739 = lean_ctor_get(x_737, 0);
x_740 = lean_unsigned_to_nat(1u);
x_741 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_741, 0, x_731);
lean_ctor_set(x_741, 1, x_740);
lean_ctor_set(x_2, 1, x_739);
lean_ctor_set(x_2, 0, x_741);
lean_ctor_set(x_737, 0, x_2);
return x_737;
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; 
x_742 = lean_ctor_get(x_737, 0);
x_743 = lean_ctor_get(x_737, 1);
lean_inc(x_743);
lean_inc(x_742);
lean_dec(x_737);
x_744 = lean_unsigned_to_nat(1u);
x_745 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_745, 0, x_731);
lean_ctor_set(x_745, 1, x_744);
lean_ctor_set(x_2, 1, x_742);
lean_ctor_set(x_2, 0, x_745);
x_746 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_746, 0, x_2);
lean_ctor_set(x_746, 1, x_743);
return x_746;
}
}
else
{
uint8_t x_747; 
lean_dec(x_731);
lean_free_object(x_2);
x_747 = !lean_is_exclusive(x_737);
if (x_747 == 0)
{
return x_737;
}
else
{
lean_object* x_748; lean_object* x_749; lean_object* x_750; 
x_748 = lean_ctor_get(x_737, 0);
x_749 = lean_ctor_get(x_737, 1);
lean_inc(x_749);
lean_inc(x_748);
lean_dec(x_737);
x_750 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_750, 0, x_748);
lean_ctor_set(x_750, 1, x_749);
return x_750;
}
}
}
else
{
uint8_t x_751; 
lean_free_object(x_2);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_751 = !lean_is_exclusive(x_730);
if (x_751 == 0)
{
return x_730;
}
else
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; 
x_752 = lean_ctor_get(x_730, 0);
x_753 = lean_ctor_get(x_730, 1);
lean_inc(x_753);
lean_inc(x_752);
lean_dec(x_730);
x_754 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_754, 0, x_752);
lean_ctor_set(x_754, 1, x_753);
return x_754;
}
}
}
else
{
lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; 
lean_dec(x_2);
x_755 = lean_ctor_get(x_3, 0);
lean_inc(x_755);
lean_dec(x_3);
x_756 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_756, 0, x_755);
x_757 = lean_box(0);
x_758 = l_Tactic_Ring_evalHorner___closed__3;
x_759 = lean_array_push(x_758, x_756);
x_760 = l_Tactic_Ring_evalPow___closed__8;
x_761 = lean_array_push(x_759, x_760);
x_762 = lean_array_push(x_761, x_757);
x_763 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_764 = l_Lean_Meta_mkAppOptM(x_763, x_762, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_764) == 0)
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; 
x_765 = lean_ctor_get(x_764, 0);
lean_inc(x_765);
x_766 = lean_ctor_get(x_764, 1);
lean_inc(x_766);
lean_dec(x_764);
x_767 = l_Tactic_Ring_HornerExpr_e(x_1);
lean_dec(x_1);
x_768 = l_Tactic_Ring_evalAdd___closed__5;
x_769 = lean_array_push(x_768, x_767);
x_770 = l_Tactic_Ring_evalPow___closed__10;
x_771 = l_Lean_Meta_mkAppM(x_770, x_769, x_5, x_6, x_7, x_8, x_766);
if (lean_obj_tag(x_771) == 0)
{
lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; 
x_772 = lean_ctor_get(x_771, 0);
lean_inc(x_772);
x_773 = lean_ctor_get(x_771, 1);
lean_inc(x_773);
if (lean_is_exclusive(x_771)) {
 lean_ctor_release(x_771, 0);
 lean_ctor_release(x_771, 1);
 x_774 = x_771;
} else {
 lean_dec_ref(x_771);
 x_774 = lean_box(0);
}
x_775 = lean_unsigned_to_nat(1u);
x_776 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_776, 0, x_765);
lean_ctor_set(x_776, 1, x_775);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_776);
lean_ctor_set(x_777, 1, x_772);
if (lean_is_scalar(x_774)) {
 x_778 = lean_alloc_ctor(0, 2, 0);
} else {
 x_778 = x_774;
}
lean_ctor_set(x_778, 0, x_777);
lean_ctor_set(x_778, 1, x_773);
return x_778;
}
else
{
lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; 
lean_dec(x_765);
x_779 = lean_ctor_get(x_771, 0);
lean_inc(x_779);
x_780 = lean_ctor_get(x_771, 1);
lean_inc(x_780);
if (lean_is_exclusive(x_771)) {
 lean_ctor_release(x_771, 0);
 lean_ctor_release(x_771, 1);
 x_781 = x_771;
} else {
 lean_dec_ref(x_771);
 x_781 = lean_box(0);
}
if (lean_is_scalar(x_781)) {
 x_782 = lean_alloc_ctor(1, 2, 0);
} else {
 x_782 = x_781;
}
lean_ctor_set(x_782, 0, x_779);
lean_ctor_set(x_782, 1, x_780);
return x_782;
}
}
else
{
lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_1);
x_783 = lean_ctor_get(x_764, 0);
lean_inc(x_783);
x_784 = lean_ctor_get(x_764, 1);
lean_inc(x_784);
if (lean_is_exclusive(x_764)) {
 lean_ctor_release(x_764, 0);
 lean_ctor_release(x_764, 1);
 x_785 = x_764;
} else {
 lean_dec_ref(x_764);
 x_785 = lean_box(0);
}
if (lean_is_scalar(x_785)) {
 x_786 = lean_alloc_ctor(1, 2, 0);
} else {
 x_786 = x_785;
}
lean_ctor_set(x_786, 0, x_783);
lean_ctor_set(x_786, 1, x_784);
return x_786;
}
}
}
}
}
}
lean_object* l_Tactic_Ring_evalPow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_evalPow(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_4);
return x_10;
}
}
static lean_object* _init_l_Tactic_Ring_evalAtom___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_evalPow___closed__7;
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_evalAtom___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("horner_atom");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_evalAtom___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_evalAtom___closed__2;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_evalAtom(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_9 = l_Tactic_Ring_addAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_9) == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lean_ctor_get(x_2, 0);
lean_inc(x_12);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
x_14 = lean_box(0);
x_15 = l_Tactic_Ring_evalHorner___closed__3;
x_16 = lean_array_push(x_15, x_13);
x_17 = l_Tactic_Ring_evalAdd___closed__17;
lean_inc(x_16);
x_18 = lean_array_push(x_16, x_17);
x_19 = lean_array_push(x_18, x_14);
x_20 = l_Tactic_Ring_evalAdd___closed__16;
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_21 = l_Lean_Meta_mkAppOptM(x_20, x_19, x_4, x_5, x_6, x_7, x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_21, 1);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_unsigned_to_nat(0u);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_22);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Tactic_Ring_evalPow___closed__8;
x_27 = lean_array_push(x_16, x_26);
x_28 = lean_array_push(x_27, x_14);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_29 = l_Lean_Meta_mkAppOptM(x_20, x_28, x_4, x_5, x_6, x_7, x_23);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; 
x_30 = lean_ctor_get(x_29, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_29, 1);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
lean_inc(x_1);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_1);
lean_ctor_set(x_34, 1, x_10);
x_35 = l_Tactic_Ring_evalAtom___closed__1;
lean_inc(x_2);
x_36 = l_Tactic_Ring_HornerExpr_xadd_x27(x_33, x_34, x_35, x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_31);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec(x_36);
x_39 = l_Tactic_Ring_evalAdd___closed__5;
x_40 = lean_array_push(x_39, x_1);
x_41 = l_Tactic_Ring_evalAtom___closed__3;
x_42 = l_Tactic_Ring_mkAppCS(x_41, x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_38);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
x_43 = !lean_is_exclusive(x_42);
if (x_43 == 0)
{
lean_object* x_44; lean_object* x_45; 
x_44 = lean_ctor_get(x_42, 0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_37);
lean_ctor_set(x_45, 1, x_44);
lean_ctor_set(x_42, 0, x_45);
return x_42;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_46 = lean_ctor_get(x_42, 0);
x_47 = lean_ctor_get(x_42, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_42);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_37);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_47);
return x_49;
}
}
else
{
uint8_t x_50; 
lean_dec(x_25);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_50 = !lean_is_exclusive(x_29);
if (x_50 == 0)
{
return x_29;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_29, 0);
x_52 = lean_ctor_get(x_29, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_29);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_16);
lean_dec(x_10);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_54 = !lean_is_exclusive(x_21);
if (x_54 == 0)
{
return x_21;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_21, 0);
x_56 = lean_ctor_get(x_21, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_21);
x_57 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_57, 0, x_55);
lean_ctor_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
uint8_t x_58; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_58 = !lean_is_exclusive(x_9);
if (x_58 == 0)
{
return x_9;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_9, 0);
x_60 = lean_ctor_get(x_9, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_9);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
static lean_object* _init_l_Tactic_Ring_eval_match__1___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Monoid");
return x_1;
}
}
lean_object* l_Tactic_Ring_eval_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_5; 
lean_dec(x_3);
x_5 = lean_apply_2(x_4, x_1, x_2);
return x_5;
}
else
{
if (lean_obj_tag(x_2) == 4)
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_2, 1);
lean_inc(x_10);
x_11 = !lean_is_exclusive(x_6);
if (x_11 == 0)
{
uint64_t x_12; lean_object* x_13; uint64_t x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
x_13 = lean_ctor_get(x_6, 1);
x_14 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
x_15 = lean_ctor_get(x_6, 0);
lean_dec(x_15);
x_16 = !lean_is_exclusive(x_7);
if (x_16 == 0)
{
lean_object* x_17; uint64_t x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; 
x_17 = lean_ctor_get(x_7, 1);
x_18 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
x_19 = lean_ctor_get(x_7, 0);
lean_dec(x_19);
x_20 = l_Tactic_Ring_eval_match__1___rarg___closed__1;
x_21 = lean_string_dec_eq(x_17, x_20);
lean_dec(x_17);
if (x_21 == 0)
{
lean_object* x_22; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
x_22 = lean_apply_2(x_4, x_1, x_2);
return x_22;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_2);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_2, 1);
lean_dec(x_24);
x_25 = lean_ctor_get(x_2, 0);
lean_dec(x_25);
x_26 = l_Tactic_Ring_evalPow___closed__1;
x_27 = lean_string_dec_eq(x_13, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_9);
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
x_28 = lean_apply_2(x_4, x_1, x_2);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_2);
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_29 = lean_box_uint64(x_12);
x_30 = lean_box_uint64(x_18);
x_31 = lean_box_uint64(x_14);
x_32 = lean_apply_5(x_3, x_9, x_10, x_29, x_30, x_31);
return x_32;
}
}
else
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_2);
x_33 = l_Tactic_Ring_evalPow___closed__1;
x_34 = lean_string_dec_eq(x_13, x_33);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; 
lean_dec(x_9);
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
x_35 = lean_alloc_ctor(4, 2, 8);
lean_ctor_set(x_35, 0, x_6);
lean_ctor_set(x_35, 1, x_10);
lean_ctor_set_uint64(x_35, sizeof(void*)*2, x_12);
x_36 = lean_apply_2(x_4, x_1, x_35);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_37 = lean_box_uint64(x_12);
x_38 = lean_box_uint64(x_18);
x_39 = lean_box_uint64(x_14);
x_40 = lean_apply_5(x_3, x_9, x_10, x_37, x_38, x_39);
return x_40;
}
}
}
}
else
{
lean_object* x_41; uint64_t x_42; lean_object* x_43; uint8_t x_44; 
x_41 = lean_ctor_get(x_7, 1);
x_42 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_inc(x_41);
lean_dec(x_7);
x_43 = l_Tactic_Ring_eval_match__1___rarg___closed__1;
x_44 = lean_string_dec_eq(x_41, x_43);
lean_dec(x_41);
if (x_44 == 0)
{
lean_object* x_45; 
lean_free_object(x_6);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
x_45 = lean_apply_2(x_4, x_1, x_2);
return x_45;
}
else
{
lean_object* x_46; lean_object* x_47; uint8_t x_48; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_46 = x_2;
} else {
 lean_dec_ref(x_2);
 x_46 = lean_box(0);
}
x_47 = l_Tactic_Ring_evalPow___closed__1;
x_48 = lean_string_dec_eq(x_13, x_47);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_9);
lean_dec(x_3);
x_49 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_49, 0, x_8);
lean_ctor_set(x_49, 1, x_43);
lean_ctor_set_uint64(x_49, sizeof(void*)*2, x_42);
lean_ctor_set(x_6, 0, x_49);
if (lean_is_scalar(x_46)) {
 x_50 = lean_alloc_ctor(4, 2, 8);
} else {
 x_50 = x_46;
}
lean_ctor_set(x_50, 0, x_6);
lean_ctor_set(x_50, 1, x_10);
lean_ctor_set_uint64(x_50, sizeof(void*)*2, x_12);
x_51 = lean_apply_2(x_4, x_1, x_50);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_46);
lean_free_object(x_6);
lean_dec(x_13);
lean_dec(x_4);
lean_dec(x_1);
x_52 = lean_box_uint64(x_12);
x_53 = lean_box_uint64(x_42);
x_54 = lean_box_uint64(x_14);
x_55 = lean_apply_5(x_3, x_9, x_10, x_52, x_53, x_54);
return x_55;
}
}
}
}
else
{
uint64_t x_56; lean_object* x_57; uint64_t x_58; lean_object* x_59; uint64_t x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_56 = lean_ctor_get_uint64(x_2, sizeof(void*)*2);
x_57 = lean_ctor_get(x_6, 1);
x_58 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
lean_inc(x_57);
lean_dec(x_6);
x_59 = lean_ctor_get(x_7, 1);
lean_inc(x_59);
x_60 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_61 = x_7;
} else {
 lean_dec_ref(x_7);
 x_61 = lean_box(0);
}
x_62 = l_Tactic_Ring_eval_match__1___rarg___closed__1;
x_63 = lean_string_dec_eq(x_59, x_62);
lean_dec(x_59);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_61);
lean_dec(x_57);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_3);
x_64 = lean_apply_2(x_4, x_1, x_2);
return x_64;
}
else
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
if (lean_is_exclusive(x_2)) {
 lean_ctor_release(x_2, 0);
 lean_ctor_release(x_2, 1);
 x_65 = x_2;
} else {
 lean_dec_ref(x_2);
 x_65 = lean_box(0);
}
x_66 = l_Tactic_Ring_evalPow___closed__1;
x_67 = lean_string_dec_eq(x_57, x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; 
lean_dec(x_9);
lean_dec(x_3);
if (lean_is_scalar(x_61)) {
 x_68 = lean_alloc_ctor(1, 2, 8);
} else {
 x_68 = x_61;
}
lean_ctor_set(x_68, 0, x_8);
lean_ctor_set(x_68, 1, x_62);
lean_ctor_set_uint64(x_68, sizeof(void*)*2, x_60);
x_69 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_69, 0, x_68);
lean_ctor_set(x_69, 1, x_57);
lean_ctor_set_uint64(x_69, sizeof(void*)*2, x_58);
if (lean_is_scalar(x_65)) {
 x_70 = lean_alloc_ctor(4, 2, 8);
} else {
 x_70 = x_65;
}
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_10);
lean_ctor_set_uint64(x_70, sizeof(void*)*2, x_56);
x_71 = lean_apply_2(x_4, x_1, x_70);
return x_71;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
lean_dec(x_65);
lean_dec(x_61);
lean_dec(x_57);
lean_dec(x_4);
lean_dec(x_1);
x_72 = lean_box_uint64(x_56);
x_73 = lean_box_uint64(x_60);
x_74 = lean_box_uint64(x_58);
x_75 = lean_apply_5(x_3, x_9, x_10, x_72, x_73, x_74);
return x_75;
}
}
}
}
else
{
lean_object* x_76; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_76 = lean_apply_2(x_4, x_1, x_2);
return x_76;
}
}
else
{
lean_object* x_77; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_3);
x_77 = lean_apply_2(x_4, x_1, x_2);
return x_77;
}
}
else
{
lean_object* x_78; 
lean_dec(x_6);
lean_dec(x_3);
x_78 = lean_apply_2(x_4, x_1, x_2);
return x_78;
}
}
else
{
lean_object* x_79; 
lean_dec(x_3);
x_79 = lean_apply_2(x_4, x_1, x_2);
return x_79;
}
}
}
}
lean_object* l_Tactic_Ring_eval_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_eval_match__1___rarg), 4, 0);
return x_2;
}
}
lean_object* l_Tactic_Ring_eval_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_Tactic_Ring_eval_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_eval_match__2___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_eval_match__3___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HAdd");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval_match__3___rarg___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("HMul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval_match__3___rarg___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hMul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval_match__3___rarg___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hAdd");
return x_1;
}
}
lean_object* l_Tactic_Ring_eval_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 1)
{
lean_object* x_7; 
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_8; 
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
if (lean_obj_tag(x_8) == 0)
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_ctor_get(x_1, 1);
lean_inc(x_9);
x_10 = !lean_is_exclusive(x_6);
if (x_10 == 0)
{
lean_object* x_11; uint64_t x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_ctor_get(x_6, 1);
x_12 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
x_13 = lean_ctor_get(x_6, 0);
lean_dec(x_13);
x_14 = !lean_is_exclusive(x_7);
if (x_14 == 0)
{
lean_object* x_15; uint64_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_7, 1);
x_16 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
x_17 = lean_ctor_get(x_7, 0);
lean_dec(x_17);
x_18 = l_Tactic_Ring_eval_match__3___rarg___closed__1;
x_19 = lean_string_dec_eq(x_15, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
lean_dec(x_2);
x_20 = l_Tactic_Ring_eval_match__3___rarg___closed__2;
x_21 = lean_string_dec_eq(x_15, x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; 
lean_dec(x_3);
x_22 = l_Tactic_Ring_evalPow___closed__1;
x_23 = lean_string_dec_eq(x_15, x_22);
lean_dec(x_15);
if (x_23 == 0)
{
lean_object* x_24; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_4);
x_24 = lean_apply_1(x_5, x_1);
return x_24;
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_1);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_1, 1);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 0);
lean_dec(x_27);
x_28 = l_Tactic_Ring_evalPow___closed__3;
x_29 = lean_string_dec_eq(x_11, x_28);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_4);
lean_ctor_set(x_7, 1, x_22);
x_30 = lean_apply_1(x_5, x_1);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
lean_dec(x_11);
x_31 = lean_array_get_size(x_9);
x_32 = lean_unsigned_to_nat(6u);
x_33 = lean_nat_dec_eq(x_31, x_32);
lean_dec(x_31);
if (x_33 == 0)
{
lean_object* x_34; 
lean_dec(x_4);
lean_ctor_set(x_7, 1, x_22);
lean_ctor_set(x_6, 1, x_28);
x_34 = lean_apply_1(x_5, x_1);
return x_34;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_free_object(x_1);
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_array_fget(x_9, x_35);
x_37 = lean_unsigned_to_nat(1u);
x_38 = lean_array_fget(x_9, x_37);
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_array_fget(x_9, x_39);
x_41 = lean_unsigned_to_nat(3u);
x_42 = lean_array_fget(x_9, x_41);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_array_fget(x_9, x_43);
x_45 = lean_unsigned_to_nat(5u);
x_46 = lean_array_fget(x_9, x_45);
lean_dec(x_9);
x_47 = lean_box_uint64(x_16);
x_48 = lean_box_uint64(x_12);
x_49 = lean_apply_8(x_4, x_36, x_38, x_40, x_42, x_44, x_46, x_47, x_48);
return x_49;
}
}
}
else
{
lean_object* x_50; uint8_t x_51; 
lean_dec(x_1);
x_50 = l_Tactic_Ring_evalPow___closed__3;
x_51 = lean_string_dec_eq(x_11, x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_4);
lean_ctor_set(x_7, 1, x_22);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_6);
lean_ctor_set(x_52, 1, x_9);
x_53 = lean_apply_1(x_5, x_52);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; uint8_t x_56; 
lean_dec(x_11);
x_54 = lean_array_get_size(x_9);
x_55 = lean_unsigned_to_nat(6u);
x_56 = lean_nat_dec_eq(x_54, x_55);
lean_dec(x_54);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; 
lean_dec(x_4);
lean_ctor_set(x_7, 1, x_22);
lean_ctor_set(x_6, 1, x_50);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_6);
lean_ctor_set(x_57, 1, x_9);
x_58 = lean_apply_1(x_5, x_57);
return x_58;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_59 = lean_unsigned_to_nat(0u);
x_60 = lean_array_fget(x_9, x_59);
x_61 = lean_unsigned_to_nat(1u);
x_62 = lean_array_fget(x_9, x_61);
x_63 = lean_unsigned_to_nat(2u);
x_64 = lean_array_fget(x_9, x_63);
x_65 = lean_unsigned_to_nat(3u);
x_66 = lean_array_fget(x_9, x_65);
x_67 = lean_unsigned_to_nat(4u);
x_68 = lean_array_fget(x_9, x_67);
x_69 = lean_unsigned_to_nat(5u);
x_70 = lean_array_fget(x_9, x_69);
lean_dec(x_9);
x_71 = lean_box_uint64(x_16);
x_72 = lean_box_uint64(x_12);
x_73 = lean_apply_8(x_4, x_60, x_62, x_64, x_66, x_68, x_70, x_71, x_72);
return x_73;
}
}
}
}
}
else
{
uint8_t x_74; 
lean_dec(x_15);
lean_dec(x_4);
x_74 = !lean_is_exclusive(x_1);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_75 = lean_ctor_get(x_1, 1);
lean_dec(x_75);
x_76 = lean_ctor_get(x_1, 0);
lean_dec(x_76);
x_77 = l_Tactic_Ring_eval_match__3___rarg___closed__3;
x_78 = lean_string_dec_eq(x_11, x_77);
if (x_78 == 0)
{
lean_object* x_79; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
x_79 = lean_apply_1(x_5, x_1);
return x_79;
}
else
{
lean_object* x_80; lean_object* x_81; uint8_t x_82; 
lean_dec(x_11);
x_80 = lean_array_get_size(x_9);
x_81 = lean_unsigned_to_nat(6u);
x_82 = lean_nat_dec_eq(x_80, x_81);
lean_dec(x_80);
if (x_82 == 0)
{
lean_object* x_83; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
lean_ctor_set(x_6, 1, x_77);
x_83 = lean_apply_1(x_5, x_1);
return x_83;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_free_object(x_1);
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_84 = lean_unsigned_to_nat(0u);
x_85 = lean_array_fget(x_9, x_84);
x_86 = lean_unsigned_to_nat(1u);
x_87 = lean_array_fget(x_9, x_86);
x_88 = lean_unsigned_to_nat(2u);
x_89 = lean_array_fget(x_9, x_88);
x_90 = lean_unsigned_to_nat(3u);
x_91 = lean_array_fget(x_9, x_90);
x_92 = lean_unsigned_to_nat(4u);
x_93 = lean_array_fget(x_9, x_92);
x_94 = lean_unsigned_to_nat(5u);
x_95 = lean_array_fget(x_9, x_94);
lean_dec(x_9);
x_96 = lean_box_uint64(x_16);
x_97 = lean_box_uint64(x_12);
x_98 = lean_apply_8(x_3, x_85, x_87, x_89, x_91, x_93, x_95, x_96, x_97);
return x_98;
}
}
}
else
{
lean_object* x_99; uint8_t x_100; 
lean_dec(x_1);
x_99 = l_Tactic_Ring_eval_match__3___rarg___closed__3;
x_100 = lean_string_dec_eq(x_11, x_99);
if (x_100 == 0)
{
lean_object* x_101; lean_object* x_102; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_6);
lean_ctor_set(x_101, 1, x_9);
x_102 = lean_apply_1(x_5, x_101);
return x_102;
}
else
{
lean_object* x_103; lean_object* x_104; uint8_t x_105; 
lean_dec(x_11);
x_103 = lean_array_get_size(x_9);
x_104 = lean_unsigned_to_nat(6u);
x_105 = lean_nat_dec_eq(x_103, x_104);
lean_dec(x_103);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; 
lean_dec(x_3);
lean_ctor_set(x_7, 1, x_20);
lean_ctor_set(x_6, 1, x_99);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_6);
lean_ctor_set(x_106, 1, x_9);
x_107 = lean_apply_1(x_5, x_106);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_108 = lean_unsigned_to_nat(0u);
x_109 = lean_array_fget(x_9, x_108);
x_110 = lean_unsigned_to_nat(1u);
x_111 = lean_array_fget(x_9, x_110);
x_112 = lean_unsigned_to_nat(2u);
x_113 = lean_array_fget(x_9, x_112);
x_114 = lean_unsigned_to_nat(3u);
x_115 = lean_array_fget(x_9, x_114);
x_116 = lean_unsigned_to_nat(4u);
x_117 = lean_array_fget(x_9, x_116);
x_118 = lean_unsigned_to_nat(5u);
x_119 = lean_array_fget(x_9, x_118);
lean_dec(x_9);
x_120 = lean_box_uint64(x_16);
x_121 = lean_box_uint64(x_12);
x_122 = lean_apply_8(x_3, x_109, x_111, x_113, x_115, x_117, x_119, x_120, x_121);
return x_122;
}
}
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_15);
lean_dec(x_4);
lean_dec(x_3);
x_123 = !lean_is_exclusive(x_1);
if (x_123 == 0)
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_124 = lean_ctor_get(x_1, 1);
lean_dec(x_124);
x_125 = lean_ctor_get(x_1, 0);
lean_dec(x_125);
x_126 = l_Tactic_Ring_eval_match__3___rarg___closed__4;
x_127 = lean_string_dec_eq(x_11, x_126);
if (x_127 == 0)
{
lean_object* x_128; 
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_18);
x_128 = lean_apply_1(x_5, x_1);
return x_128;
}
else
{
lean_object* x_129; lean_object* x_130; uint8_t x_131; 
lean_dec(x_11);
x_129 = lean_array_get_size(x_9);
x_130 = lean_unsigned_to_nat(6u);
x_131 = lean_nat_dec_eq(x_129, x_130);
lean_dec(x_129);
if (x_131 == 0)
{
lean_object* x_132; 
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_18);
lean_ctor_set(x_6, 1, x_126);
x_132 = lean_apply_1(x_5, x_1);
return x_132;
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_free_object(x_1);
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_133 = lean_unsigned_to_nat(0u);
x_134 = lean_array_fget(x_9, x_133);
x_135 = lean_unsigned_to_nat(1u);
x_136 = lean_array_fget(x_9, x_135);
x_137 = lean_unsigned_to_nat(2u);
x_138 = lean_array_fget(x_9, x_137);
x_139 = lean_unsigned_to_nat(3u);
x_140 = lean_array_fget(x_9, x_139);
x_141 = lean_unsigned_to_nat(4u);
x_142 = lean_array_fget(x_9, x_141);
x_143 = lean_unsigned_to_nat(5u);
x_144 = lean_array_fget(x_9, x_143);
lean_dec(x_9);
x_145 = lean_box_uint64(x_16);
x_146 = lean_box_uint64(x_12);
x_147 = lean_apply_8(x_2, x_134, x_136, x_138, x_140, x_142, x_144, x_145, x_146);
return x_147;
}
}
}
else
{
lean_object* x_148; uint8_t x_149; 
lean_dec(x_1);
x_148 = l_Tactic_Ring_eval_match__3___rarg___closed__4;
x_149 = lean_string_dec_eq(x_11, x_148);
if (x_149 == 0)
{
lean_object* x_150; lean_object* x_151; 
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_18);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_6);
lean_ctor_set(x_150, 1, x_9);
x_151 = lean_apply_1(x_5, x_150);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; uint8_t x_154; 
lean_dec(x_11);
x_152 = lean_array_get_size(x_9);
x_153 = lean_unsigned_to_nat(6u);
x_154 = lean_nat_dec_eq(x_152, x_153);
lean_dec(x_152);
if (x_154 == 0)
{
lean_object* x_155; lean_object* x_156; 
lean_dec(x_2);
lean_ctor_set(x_7, 1, x_18);
lean_ctor_set(x_6, 1, x_148);
x_155 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_155, 0, x_6);
lean_ctor_set(x_155, 1, x_9);
x_156 = lean_apply_1(x_5, x_155);
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_free_object(x_7);
lean_free_object(x_6);
lean_dec(x_5);
x_157 = lean_unsigned_to_nat(0u);
x_158 = lean_array_fget(x_9, x_157);
x_159 = lean_unsigned_to_nat(1u);
x_160 = lean_array_fget(x_9, x_159);
x_161 = lean_unsigned_to_nat(2u);
x_162 = lean_array_fget(x_9, x_161);
x_163 = lean_unsigned_to_nat(3u);
x_164 = lean_array_fget(x_9, x_163);
x_165 = lean_unsigned_to_nat(4u);
x_166 = lean_array_fget(x_9, x_165);
x_167 = lean_unsigned_to_nat(5u);
x_168 = lean_array_fget(x_9, x_167);
lean_dec(x_9);
x_169 = lean_box_uint64(x_16);
x_170 = lean_box_uint64(x_12);
x_171 = lean_apply_8(x_2, x_158, x_160, x_162, x_164, x_166, x_168, x_169, x_170);
return x_171;
}
}
}
}
}
else
{
lean_object* x_172; uint64_t x_173; lean_object* x_174; uint8_t x_175; 
x_172 = lean_ctor_get(x_7, 1);
x_173 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
lean_inc(x_172);
lean_dec(x_7);
x_174 = l_Tactic_Ring_eval_match__3___rarg___closed__1;
x_175 = lean_string_dec_eq(x_172, x_174);
if (x_175 == 0)
{
lean_object* x_176; uint8_t x_177; 
lean_dec(x_2);
x_176 = l_Tactic_Ring_eval_match__3___rarg___closed__2;
x_177 = lean_string_dec_eq(x_172, x_176);
if (x_177 == 0)
{
lean_object* x_178; uint8_t x_179; 
lean_dec(x_3);
x_178 = l_Tactic_Ring_evalPow___closed__1;
x_179 = lean_string_dec_eq(x_172, x_178);
lean_dec(x_172);
if (x_179 == 0)
{
lean_object* x_180; 
lean_free_object(x_6);
lean_dec(x_11);
lean_dec(x_9);
lean_dec(x_4);
x_180 = lean_apply_1(x_5, x_1);
return x_180;
}
else
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_181 = x_1;
} else {
 lean_dec_ref(x_1);
 x_181 = lean_box(0);
}
x_182 = l_Tactic_Ring_evalPow___closed__3;
x_183 = lean_string_dec_eq(x_11, x_182);
if (x_183 == 0)
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; 
lean_dec(x_4);
x_184 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_184, 0, x_8);
lean_ctor_set(x_184, 1, x_178);
lean_ctor_set_uint64(x_184, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 0, x_184);
if (lean_is_scalar(x_181)) {
 x_185 = lean_alloc_ctor(0, 2, 0);
} else {
 x_185 = x_181;
}
lean_ctor_set(x_185, 0, x_6);
lean_ctor_set(x_185, 1, x_9);
x_186 = lean_apply_1(x_5, x_185);
return x_186;
}
else
{
lean_object* x_187; lean_object* x_188; uint8_t x_189; 
lean_dec(x_11);
x_187 = lean_array_get_size(x_9);
x_188 = lean_unsigned_to_nat(6u);
x_189 = lean_nat_dec_eq(x_187, x_188);
lean_dec(x_187);
if (x_189 == 0)
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec(x_4);
x_190 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_190, 0, x_8);
lean_ctor_set(x_190, 1, x_178);
lean_ctor_set_uint64(x_190, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 1, x_182);
lean_ctor_set(x_6, 0, x_190);
if (lean_is_scalar(x_181)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_181;
}
lean_ctor_set(x_191, 0, x_6);
lean_ctor_set(x_191, 1, x_9);
x_192 = lean_apply_1(x_5, x_191);
return x_192;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec(x_181);
lean_free_object(x_6);
lean_dec(x_5);
x_193 = lean_unsigned_to_nat(0u);
x_194 = lean_array_fget(x_9, x_193);
x_195 = lean_unsigned_to_nat(1u);
x_196 = lean_array_fget(x_9, x_195);
x_197 = lean_unsigned_to_nat(2u);
x_198 = lean_array_fget(x_9, x_197);
x_199 = lean_unsigned_to_nat(3u);
x_200 = lean_array_fget(x_9, x_199);
x_201 = lean_unsigned_to_nat(4u);
x_202 = lean_array_fget(x_9, x_201);
x_203 = lean_unsigned_to_nat(5u);
x_204 = lean_array_fget(x_9, x_203);
lean_dec(x_9);
x_205 = lean_box_uint64(x_173);
x_206 = lean_box_uint64(x_12);
x_207 = lean_apply_8(x_4, x_194, x_196, x_198, x_200, x_202, x_204, x_205, x_206);
return x_207;
}
}
}
}
else
{
lean_object* x_208; lean_object* x_209; uint8_t x_210; 
lean_dec(x_172);
lean_dec(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_208 = x_1;
} else {
 lean_dec_ref(x_1);
 x_208 = lean_box(0);
}
x_209 = l_Tactic_Ring_eval_match__3___rarg___closed__3;
x_210 = lean_string_dec_eq(x_11, x_209);
if (x_210 == 0)
{
lean_object* x_211; lean_object* x_212; lean_object* x_213; 
lean_dec(x_3);
x_211 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_211, 0, x_8);
lean_ctor_set(x_211, 1, x_176);
lean_ctor_set_uint64(x_211, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 0, x_211);
if (lean_is_scalar(x_208)) {
 x_212 = lean_alloc_ctor(0, 2, 0);
} else {
 x_212 = x_208;
}
lean_ctor_set(x_212, 0, x_6);
lean_ctor_set(x_212, 1, x_9);
x_213 = lean_apply_1(x_5, x_212);
return x_213;
}
else
{
lean_object* x_214; lean_object* x_215; uint8_t x_216; 
lean_dec(x_11);
x_214 = lean_array_get_size(x_9);
x_215 = lean_unsigned_to_nat(6u);
x_216 = lean_nat_dec_eq(x_214, x_215);
lean_dec(x_214);
if (x_216 == 0)
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; 
lean_dec(x_3);
x_217 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_217, 0, x_8);
lean_ctor_set(x_217, 1, x_176);
lean_ctor_set_uint64(x_217, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 1, x_209);
lean_ctor_set(x_6, 0, x_217);
if (lean_is_scalar(x_208)) {
 x_218 = lean_alloc_ctor(0, 2, 0);
} else {
 x_218 = x_208;
}
lean_ctor_set(x_218, 0, x_6);
lean_ctor_set(x_218, 1, x_9);
x_219 = lean_apply_1(x_5, x_218);
return x_219;
}
else
{
lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec(x_208);
lean_free_object(x_6);
lean_dec(x_5);
x_220 = lean_unsigned_to_nat(0u);
x_221 = lean_array_fget(x_9, x_220);
x_222 = lean_unsigned_to_nat(1u);
x_223 = lean_array_fget(x_9, x_222);
x_224 = lean_unsigned_to_nat(2u);
x_225 = lean_array_fget(x_9, x_224);
x_226 = lean_unsigned_to_nat(3u);
x_227 = lean_array_fget(x_9, x_226);
x_228 = lean_unsigned_to_nat(4u);
x_229 = lean_array_fget(x_9, x_228);
x_230 = lean_unsigned_to_nat(5u);
x_231 = lean_array_fget(x_9, x_230);
lean_dec(x_9);
x_232 = lean_box_uint64(x_173);
x_233 = lean_box_uint64(x_12);
x_234 = lean_apply_8(x_3, x_221, x_223, x_225, x_227, x_229, x_231, x_232, x_233);
return x_234;
}
}
}
}
else
{
lean_object* x_235; lean_object* x_236; uint8_t x_237; 
lean_dec(x_172);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_235 = x_1;
} else {
 lean_dec_ref(x_1);
 x_235 = lean_box(0);
}
x_236 = l_Tactic_Ring_eval_match__3___rarg___closed__4;
x_237 = lean_string_dec_eq(x_11, x_236);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_2);
x_238 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_238, 0, x_8);
lean_ctor_set(x_238, 1, x_174);
lean_ctor_set_uint64(x_238, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 0, x_238);
if (lean_is_scalar(x_235)) {
 x_239 = lean_alloc_ctor(0, 2, 0);
} else {
 x_239 = x_235;
}
lean_ctor_set(x_239, 0, x_6);
lean_ctor_set(x_239, 1, x_9);
x_240 = lean_apply_1(x_5, x_239);
return x_240;
}
else
{
lean_object* x_241; lean_object* x_242; uint8_t x_243; 
lean_dec(x_11);
x_241 = lean_array_get_size(x_9);
x_242 = lean_unsigned_to_nat(6u);
x_243 = lean_nat_dec_eq(x_241, x_242);
lean_dec(x_241);
if (x_243 == 0)
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; 
lean_dec(x_2);
x_244 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_244, 0, x_8);
lean_ctor_set(x_244, 1, x_174);
lean_ctor_set_uint64(x_244, sizeof(void*)*2, x_173);
lean_ctor_set(x_6, 1, x_236);
lean_ctor_set(x_6, 0, x_244);
if (lean_is_scalar(x_235)) {
 x_245 = lean_alloc_ctor(0, 2, 0);
} else {
 x_245 = x_235;
}
lean_ctor_set(x_245, 0, x_6);
lean_ctor_set(x_245, 1, x_9);
x_246 = lean_apply_1(x_5, x_245);
return x_246;
}
else
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; 
lean_dec(x_235);
lean_free_object(x_6);
lean_dec(x_5);
x_247 = lean_unsigned_to_nat(0u);
x_248 = lean_array_fget(x_9, x_247);
x_249 = lean_unsigned_to_nat(1u);
x_250 = lean_array_fget(x_9, x_249);
x_251 = lean_unsigned_to_nat(2u);
x_252 = lean_array_fget(x_9, x_251);
x_253 = lean_unsigned_to_nat(3u);
x_254 = lean_array_fget(x_9, x_253);
x_255 = lean_unsigned_to_nat(4u);
x_256 = lean_array_fget(x_9, x_255);
x_257 = lean_unsigned_to_nat(5u);
x_258 = lean_array_fget(x_9, x_257);
lean_dec(x_9);
x_259 = lean_box_uint64(x_173);
x_260 = lean_box_uint64(x_12);
x_261 = lean_apply_8(x_2, x_248, x_250, x_252, x_254, x_256, x_258, x_259, x_260);
return x_261;
}
}
}
}
}
else
{
lean_object* x_262; uint64_t x_263; lean_object* x_264; uint64_t x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; 
x_262 = lean_ctor_get(x_6, 1);
x_263 = lean_ctor_get_uint64(x_6, sizeof(void*)*2);
lean_inc(x_262);
lean_dec(x_6);
x_264 = lean_ctor_get(x_7, 1);
lean_inc(x_264);
x_265 = lean_ctor_get_uint64(x_7, sizeof(void*)*2);
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 x_266 = x_7;
} else {
 lean_dec_ref(x_7);
 x_266 = lean_box(0);
}
x_267 = l_Tactic_Ring_eval_match__3___rarg___closed__1;
x_268 = lean_string_dec_eq(x_264, x_267);
if (x_268 == 0)
{
lean_object* x_269; uint8_t x_270; 
lean_dec(x_2);
x_269 = l_Tactic_Ring_eval_match__3___rarg___closed__2;
x_270 = lean_string_dec_eq(x_264, x_269);
if (x_270 == 0)
{
lean_object* x_271; uint8_t x_272; 
lean_dec(x_3);
x_271 = l_Tactic_Ring_evalPow___closed__1;
x_272 = lean_string_dec_eq(x_264, x_271);
lean_dec(x_264);
if (x_272 == 0)
{
lean_object* x_273; 
lean_dec(x_266);
lean_dec(x_262);
lean_dec(x_9);
lean_dec(x_4);
x_273 = lean_apply_1(x_5, x_1);
return x_273;
}
else
{
lean_object* x_274; lean_object* x_275; uint8_t x_276; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_274 = x_1;
} else {
 lean_dec_ref(x_1);
 x_274 = lean_box(0);
}
x_275 = l_Tactic_Ring_evalPow___closed__3;
x_276 = lean_string_dec_eq(x_262, x_275);
if (x_276 == 0)
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; 
lean_dec(x_4);
if (lean_is_scalar(x_266)) {
 x_277 = lean_alloc_ctor(1, 2, 8);
} else {
 x_277 = x_266;
}
lean_ctor_set(x_277, 0, x_8);
lean_ctor_set(x_277, 1, x_271);
lean_ctor_set_uint64(x_277, sizeof(void*)*2, x_265);
x_278 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_278, 0, x_277);
lean_ctor_set(x_278, 1, x_262);
lean_ctor_set_uint64(x_278, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_274)) {
 x_279 = lean_alloc_ctor(0, 2, 0);
} else {
 x_279 = x_274;
}
lean_ctor_set(x_279, 0, x_278);
lean_ctor_set(x_279, 1, x_9);
x_280 = lean_apply_1(x_5, x_279);
return x_280;
}
else
{
lean_object* x_281; lean_object* x_282; uint8_t x_283; 
lean_dec(x_262);
x_281 = lean_array_get_size(x_9);
x_282 = lean_unsigned_to_nat(6u);
x_283 = lean_nat_dec_eq(x_281, x_282);
lean_dec(x_281);
if (x_283 == 0)
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; 
lean_dec(x_4);
if (lean_is_scalar(x_266)) {
 x_284 = lean_alloc_ctor(1, 2, 8);
} else {
 x_284 = x_266;
}
lean_ctor_set(x_284, 0, x_8);
lean_ctor_set(x_284, 1, x_271);
lean_ctor_set_uint64(x_284, sizeof(void*)*2, x_265);
x_285 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_285, 0, x_284);
lean_ctor_set(x_285, 1, x_275);
lean_ctor_set_uint64(x_285, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_274)) {
 x_286 = lean_alloc_ctor(0, 2, 0);
} else {
 x_286 = x_274;
}
lean_ctor_set(x_286, 0, x_285);
lean_ctor_set(x_286, 1, x_9);
x_287 = lean_apply_1(x_5, x_286);
return x_287;
}
else
{
lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
lean_dec(x_274);
lean_dec(x_266);
lean_dec(x_5);
x_288 = lean_unsigned_to_nat(0u);
x_289 = lean_array_fget(x_9, x_288);
x_290 = lean_unsigned_to_nat(1u);
x_291 = lean_array_fget(x_9, x_290);
x_292 = lean_unsigned_to_nat(2u);
x_293 = lean_array_fget(x_9, x_292);
x_294 = lean_unsigned_to_nat(3u);
x_295 = lean_array_fget(x_9, x_294);
x_296 = lean_unsigned_to_nat(4u);
x_297 = lean_array_fget(x_9, x_296);
x_298 = lean_unsigned_to_nat(5u);
x_299 = lean_array_fget(x_9, x_298);
lean_dec(x_9);
x_300 = lean_box_uint64(x_265);
x_301 = lean_box_uint64(x_263);
x_302 = lean_apply_8(x_4, x_289, x_291, x_293, x_295, x_297, x_299, x_300, x_301);
return x_302;
}
}
}
}
else
{
lean_object* x_303; lean_object* x_304; uint8_t x_305; 
lean_dec(x_264);
lean_dec(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_303 = x_1;
} else {
 lean_dec_ref(x_1);
 x_303 = lean_box(0);
}
x_304 = l_Tactic_Ring_eval_match__3___rarg___closed__3;
x_305 = lean_string_dec_eq(x_262, x_304);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
lean_dec(x_3);
if (lean_is_scalar(x_266)) {
 x_306 = lean_alloc_ctor(1, 2, 8);
} else {
 x_306 = x_266;
}
lean_ctor_set(x_306, 0, x_8);
lean_ctor_set(x_306, 1, x_269);
lean_ctor_set_uint64(x_306, sizeof(void*)*2, x_265);
x_307 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_307, 0, x_306);
lean_ctor_set(x_307, 1, x_262);
lean_ctor_set_uint64(x_307, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_303)) {
 x_308 = lean_alloc_ctor(0, 2, 0);
} else {
 x_308 = x_303;
}
lean_ctor_set(x_308, 0, x_307);
lean_ctor_set(x_308, 1, x_9);
x_309 = lean_apply_1(x_5, x_308);
return x_309;
}
else
{
lean_object* x_310; lean_object* x_311; uint8_t x_312; 
lean_dec(x_262);
x_310 = lean_array_get_size(x_9);
x_311 = lean_unsigned_to_nat(6u);
x_312 = lean_nat_dec_eq(x_310, x_311);
lean_dec(x_310);
if (x_312 == 0)
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; 
lean_dec(x_3);
if (lean_is_scalar(x_266)) {
 x_313 = lean_alloc_ctor(1, 2, 8);
} else {
 x_313 = x_266;
}
lean_ctor_set(x_313, 0, x_8);
lean_ctor_set(x_313, 1, x_269);
lean_ctor_set_uint64(x_313, sizeof(void*)*2, x_265);
x_314 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_314, 0, x_313);
lean_ctor_set(x_314, 1, x_304);
lean_ctor_set_uint64(x_314, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_303)) {
 x_315 = lean_alloc_ctor(0, 2, 0);
} else {
 x_315 = x_303;
}
lean_ctor_set(x_315, 0, x_314);
lean_ctor_set(x_315, 1, x_9);
x_316 = lean_apply_1(x_5, x_315);
return x_316;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; 
lean_dec(x_303);
lean_dec(x_266);
lean_dec(x_5);
x_317 = lean_unsigned_to_nat(0u);
x_318 = lean_array_fget(x_9, x_317);
x_319 = lean_unsigned_to_nat(1u);
x_320 = lean_array_fget(x_9, x_319);
x_321 = lean_unsigned_to_nat(2u);
x_322 = lean_array_fget(x_9, x_321);
x_323 = lean_unsigned_to_nat(3u);
x_324 = lean_array_fget(x_9, x_323);
x_325 = lean_unsigned_to_nat(4u);
x_326 = lean_array_fget(x_9, x_325);
x_327 = lean_unsigned_to_nat(5u);
x_328 = lean_array_fget(x_9, x_327);
lean_dec(x_9);
x_329 = lean_box_uint64(x_265);
x_330 = lean_box_uint64(x_263);
x_331 = lean_apply_8(x_3, x_318, x_320, x_322, x_324, x_326, x_328, x_329, x_330);
return x_331;
}
}
}
}
else
{
lean_object* x_332; lean_object* x_333; uint8_t x_334; 
lean_dec(x_264);
lean_dec(x_4);
lean_dec(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_332 = x_1;
} else {
 lean_dec_ref(x_1);
 x_332 = lean_box(0);
}
x_333 = l_Tactic_Ring_eval_match__3___rarg___closed__4;
x_334 = lean_string_dec_eq(x_262, x_333);
if (x_334 == 0)
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; 
lean_dec(x_2);
if (lean_is_scalar(x_266)) {
 x_335 = lean_alloc_ctor(1, 2, 8);
} else {
 x_335 = x_266;
}
lean_ctor_set(x_335, 0, x_8);
lean_ctor_set(x_335, 1, x_267);
lean_ctor_set_uint64(x_335, sizeof(void*)*2, x_265);
x_336 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_336, 0, x_335);
lean_ctor_set(x_336, 1, x_262);
lean_ctor_set_uint64(x_336, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_332)) {
 x_337 = lean_alloc_ctor(0, 2, 0);
} else {
 x_337 = x_332;
}
lean_ctor_set(x_337, 0, x_336);
lean_ctor_set(x_337, 1, x_9);
x_338 = lean_apply_1(x_5, x_337);
return x_338;
}
else
{
lean_object* x_339; lean_object* x_340; uint8_t x_341; 
lean_dec(x_262);
x_339 = lean_array_get_size(x_9);
x_340 = lean_unsigned_to_nat(6u);
x_341 = lean_nat_dec_eq(x_339, x_340);
lean_dec(x_339);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; 
lean_dec(x_2);
if (lean_is_scalar(x_266)) {
 x_342 = lean_alloc_ctor(1, 2, 8);
} else {
 x_342 = x_266;
}
lean_ctor_set(x_342, 0, x_8);
lean_ctor_set(x_342, 1, x_267);
lean_ctor_set_uint64(x_342, sizeof(void*)*2, x_265);
x_343 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_343, 0, x_342);
lean_ctor_set(x_343, 1, x_333);
lean_ctor_set_uint64(x_343, sizeof(void*)*2, x_263);
if (lean_is_scalar(x_332)) {
 x_344 = lean_alloc_ctor(0, 2, 0);
} else {
 x_344 = x_332;
}
lean_ctor_set(x_344, 0, x_343);
lean_ctor_set(x_344, 1, x_9);
x_345 = lean_apply_1(x_5, x_344);
return x_345;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; 
lean_dec(x_332);
lean_dec(x_266);
lean_dec(x_5);
x_346 = lean_unsigned_to_nat(0u);
x_347 = lean_array_fget(x_9, x_346);
x_348 = lean_unsigned_to_nat(1u);
x_349 = lean_array_fget(x_9, x_348);
x_350 = lean_unsigned_to_nat(2u);
x_351 = lean_array_fget(x_9, x_350);
x_352 = lean_unsigned_to_nat(3u);
x_353 = lean_array_fget(x_9, x_352);
x_354 = lean_unsigned_to_nat(4u);
x_355 = lean_array_fget(x_9, x_354);
x_356 = lean_unsigned_to_nat(5u);
x_357 = lean_array_fget(x_9, x_356);
lean_dec(x_9);
x_358 = lean_box_uint64(x_265);
x_359 = lean_box_uint64(x_263);
x_360 = lean_apply_8(x_2, x_347, x_349, x_351, x_353, x_355, x_357, x_358, x_359);
return x_360;
}
}
}
}
}
else
{
lean_object* x_361; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_361 = lean_apply_1(x_5, x_1);
return x_361;
}
}
else
{
lean_object* x_362; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_362 = lean_apply_1(x_5, x_1);
return x_362;
}
}
else
{
lean_object* x_363; 
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_363 = lean_apply_1(x_5, x_1);
return x_363;
}
}
}
lean_object* l_Tactic_Ring_eval_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_eval_match__3___rarg), 5, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("subst_into_pow");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_eval___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("subst_into_mul");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_eval___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("subst_into_add");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_eval___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_eval___closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_Tactic_Ring_eval(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
lean_inc(x_1);
x_9 = l_Lean_Expr_getAppFnArgs(x_1);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 1)
{
lean_object* x_12; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_13 = lean_ctor_get(x_9, 1);
lean_inc(x_13);
lean_dec(x_9);
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_ctor_get(x_11, 1);
lean_inc(x_15);
lean_dec(x_11);
x_16 = l_Tactic_Ring_eval_match__3___rarg___closed__1;
x_17 = lean_string_dec_eq(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; uint8_t x_19; 
x_18 = l_Tactic_Ring_eval_match__3___rarg___closed__2;
x_19 = lean_string_dec_eq(x_15, x_18);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = l_Tactic_Ring_evalPow___closed__1;
x_21 = lean_string_dec_eq(x_15, x_20);
lean_dec(x_15);
if (x_21 == 0)
{
lean_object* x_22; 
lean_dec(x_14);
lean_dec(x_13);
lean_inc(x_1);
x_22 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; 
x_23 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_1);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_Tactic_Ring_HornerExpr_reflConv(x_25, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_26;
}
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = l_Tactic_Ring_evalPow___closed__3;
x_28 = lean_string_dec_eq(x_14, x_27);
lean_dec(x_14);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_13);
lean_inc(x_1);
x_29 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_29) == 0)
{
lean_object* x_30; 
x_30 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_29, 0);
lean_inc(x_31);
lean_dec(x_29);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_1);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_Tactic_Ring_HornerExpr_reflConv(x_32, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_33;
}
}
else
{
lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_34 = lean_array_get_size(x_13);
x_35 = lean_unsigned_to_nat(6u);
x_36 = lean_nat_dec_eq(x_34, x_35);
lean_dec(x_34);
if (x_36 == 0)
{
lean_object* x_37; 
lean_dec(x_13);
lean_inc(x_1);
x_37 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_37) == 0)
{
lean_object* x_38; 
x_38 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_38;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
lean_inc(x_39);
lean_dec(x_37);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_1);
lean_ctor_set(x_40, 1, x_39);
x_41 = l_Tactic_Ring_HornerExpr_reflConv(x_40, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = lean_unsigned_to_nat(3u);
x_43 = lean_array_fget(x_13, x_42);
x_44 = lean_unsigned_to_nat(4u);
x_45 = lean_array_fget(x_13, x_44);
x_46 = lean_unsigned_to_nat(5u);
x_47 = lean_array_fget(x_13, x_46);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_47);
x_48 = l_Lean_Meta_mkEqRefl(x_47, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_48) == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_48, 0);
lean_inc(x_49);
x_50 = lean_ctor_get(x_48, 1);
lean_inc(x_50);
lean_dec(x_48);
lean_inc(x_47);
x_51 = l_Lean_Expr_numeral_x3f(x_47);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; 
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_43);
x_52 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_52;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
x_54 = l_Lean_Expr_getAppFn(x_43);
lean_dec(x_43);
if (lean_obj_tag(x_54) == 4)
{
lean_object* x_55; 
x_55 = lean_ctor_get(x_54, 0);
lean_inc(x_55);
lean_dec(x_54);
if (lean_obj_tag(x_55) == 1)
{
lean_object* x_56; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
if (lean_obj_tag(x_56) == 1)
{
lean_object* x_57; 
x_57 = lean_ctor_get(x_56, 0);
lean_inc(x_57);
if (lean_obj_tag(x_57) == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; uint8_t x_61; 
x_58 = lean_ctor_get(x_55, 1);
lean_inc(x_58);
lean_dec(x_55);
x_59 = lean_ctor_get(x_56, 1);
lean_inc(x_59);
lean_dec(x_56);
x_60 = l_Tactic_Ring_eval_match__1___rarg___closed__1;
x_61 = lean_string_dec_eq(x_59, x_60);
lean_dec(x_59);
if (x_61 == 0)
{
lean_object* x_62; 
lean_dec(x_58);
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_62 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_62;
}
else
{
uint8_t x_63; 
x_63 = lean_string_dec_eq(x_58, x_20);
lean_dec(x_58);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_64 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_64;
}
else
{
lean_object* x_65; 
lean_dec(x_1);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_45);
x_65 = l_Tactic_Ring_eval(x_45, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
lean_dec(x_65);
x_68 = !lean_is_exclusive(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_66, 0);
x_70 = lean_ctor_get(x_66, 1);
lean_inc(x_47);
lean_ctor_set(x_66, 1, x_53);
lean_ctor_set(x_66, 0, x_47);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_69);
x_71 = l_Tactic_Ring_evalPow(x_69, x_66, x_2, x_3, x_4, x_5, x_6, x_7, x_67);
lean_dec(x_3);
if (lean_obj_tag(x_71) == 0)
{
lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = !lean_is_exclusive(x_72);
if (x_74 == 0)
{
lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; 
x_75 = lean_ctor_get(x_72, 0);
x_76 = lean_ctor_get(x_72, 1);
x_77 = l_Tactic_Ring_HornerExpr_e(x_69);
lean_dec(x_69);
x_78 = l_Tactic_Ring_HornerExpr_e(x_75);
x_79 = l_Tactic_Ring_evalPow___closed__16;
x_80 = lean_array_push(x_79, x_45);
lean_inc(x_47);
x_81 = lean_array_push(x_80, x_47);
x_82 = lean_array_push(x_81, x_77);
x_83 = lean_array_push(x_82, x_47);
x_84 = lean_array_push(x_83, x_78);
x_85 = lean_array_push(x_84, x_70);
x_86 = lean_array_push(x_85, x_49);
x_87 = lean_array_push(x_86, x_76);
x_88 = l_Tactic_Ring_eval___closed__2;
x_89 = l_Lean_Meta_mkAppM(x_88, x_87, x_4, x_5, x_6, x_7, x_73);
if (lean_obj_tag(x_89) == 0)
{
uint8_t x_90; 
x_90 = !lean_is_exclusive(x_89);
if (x_90 == 0)
{
lean_object* x_91; 
x_91 = lean_ctor_get(x_89, 0);
lean_ctor_set(x_72, 1, x_91);
lean_ctor_set(x_89, 0, x_72);
return x_89;
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_92 = lean_ctor_get(x_89, 0);
x_93 = lean_ctor_get(x_89, 1);
lean_inc(x_93);
lean_inc(x_92);
lean_dec(x_89);
lean_ctor_set(x_72, 1, x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_72);
lean_ctor_set(x_94, 1, x_93);
return x_94;
}
}
else
{
uint8_t x_95; 
lean_free_object(x_72);
lean_dec(x_75);
x_95 = !lean_is_exclusive(x_89);
if (x_95 == 0)
{
return x_89;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_89, 0);
x_97 = lean_ctor_get(x_89, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_89);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_99 = lean_ctor_get(x_72, 0);
x_100 = lean_ctor_get(x_72, 1);
lean_inc(x_100);
lean_inc(x_99);
lean_dec(x_72);
x_101 = l_Tactic_Ring_HornerExpr_e(x_69);
lean_dec(x_69);
x_102 = l_Tactic_Ring_HornerExpr_e(x_99);
x_103 = l_Tactic_Ring_evalPow___closed__16;
x_104 = lean_array_push(x_103, x_45);
lean_inc(x_47);
x_105 = lean_array_push(x_104, x_47);
x_106 = lean_array_push(x_105, x_101);
x_107 = lean_array_push(x_106, x_47);
x_108 = lean_array_push(x_107, x_102);
x_109 = lean_array_push(x_108, x_70);
x_110 = lean_array_push(x_109, x_49);
x_111 = lean_array_push(x_110, x_100);
x_112 = l_Tactic_Ring_eval___closed__2;
x_113 = l_Lean_Meta_mkAppM(x_112, x_111, x_4, x_5, x_6, x_7, x_73);
if (lean_obj_tag(x_113) == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_116 = x_113;
} else {
 lean_dec_ref(x_113);
 x_116 = lean_box(0);
}
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_99);
lean_ctor_set(x_117, 1, x_114);
if (lean_is_scalar(x_116)) {
 x_118 = lean_alloc_ctor(0, 2, 0);
} else {
 x_118 = x_116;
}
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_115);
return x_118;
}
else
{
lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec(x_99);
x_119 = lean_ctor_get(x_113, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_113, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_113)) {
 lean_ctor_release(x_113, 0);
 lean_ctor_release(x_113, 1);
 x_121 = x_113;
} else {
 lean_dec_ref(x_113);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(1, 2, 0);
} else {
 x_122 = x_121;
}
lean_ctor_set(x_122, 0, x_119);
lean_ctor_set(x_122, 1, x_120);
return x_122;
}
}
}
else
{
uint8_t x_123; 
lean_dec(x_70);
lean_dec(x_69);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_123 = !lean_is_exclusive(x_71);
if (x_123 == 0)
{
return x_71;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_71, 0);
x_125 = lean_ctor_get(x_71, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_71);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_127 = lean_ctor_get(x_66, 0);
x_128 = lean_ctor_get(x_66, 1);
lean_inc(x_128);
lean_inc(x_127);
lean_dec(x_66);
lean_inc(x_47);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_47);
lean_ctor_set(x_129, 1, x_53);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_127);
x_130 = l_Tactic_Ring_evalPow(x_127, x_129, x_2, x_3, x_4, x_5, x_6, x_7, x_67);
lean_dec(x_3);
if (lean_obj_tag(x_130) == 0)
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
x_131 = lean_ctor_get(x_130, 0);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 1);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_131, 0);
lean_inc(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
if (lean_is_exclusive(x_131)) {
 lean_ctor_release(x_131, 0);
 lean_ctor_release(x_131, 1);
 x_135 = x_131;
} else {
 lean_dec_ref(x_131);
 x_135 = lean_box(0);
}
x_136 = l_Tactic_Ring_HornerExpr_e(x_127);
lean_dec(x_127);
x_137 = l_Tactic_Ring_HornerExpr_e(x_133);
x_138 = l_Tactic_Ring_evalPow___closed__16;
x_139 = lean_array_push(x_138, x_45);
lean_inc(x_47);
x_140 = lean_array_push(x_139, x_47);
x_141 = lean_array_push(x_140, x_136);
x_142 = lean_array_push(x_141, x_47);
x_143 = lean_array_push(x_142, x_137);
x_144 = lean_array_push(x_143, x_128);
x_145 = lean_array_push(x_144, x_49);
x_146 = lean_array_push(x_145, x_134);
x_147 = l_Tactic_Ring_eval___closed__2;
x_148 = l_Lean_Meta_mkAppM(x_147, x_146, x_4, x_5, x_6, x_7, x_132);
if (lean_obj_tag(x_148) == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_149 = lean_ctor_get(x_148, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_148, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_151 = x_148;
} else {
 lean_dec_ref(x_148);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_135)) {
 x_152 = lean_alloc_ctor(0, 2, 0);
} else {
 x_152 = x_135;
}
lean_ctor_set(x_152, 0, x_133);
lean_ctor_set(x_152, 1, x_149);
if (lean_is_scalar(x_151)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_151;
}
lean_ctor_set(x_153, 0, x_152);
lean_ctor_set(x_153, 1, x_150);
return x_153;
}
else
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; 
lean_dec(x_135);
lean_dec(x_133);
x_154 = lean_ctor_get(x_148, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_148, 1);
lean_inc(x_155);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_156 = x_148;
} else {
 lean_dec_ref(x_148);
 x_156 = lean_box(0);
}
if (lean_is_scalar(x_156)) {
 x_157 = lean_alloc_ctor(1, 2, 0);
} else {
 x_157 = x_156;
}
lean_ctor_set(x_157, 0, x_154);
lean_ctor_set(x_157, 1, x_155);
return x_157;
}
}
else
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; 
lean_dec(x_128);
lean_dec(x_127);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_158 = lean_ctor_get(x_130, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_130, 1);
lean_inc(x_159);
if (lean_is_exclusive(x_130)) {
 lean_ctor_release(x_130, 0);
 lean_ctor_release(x_130, 1);
 x_160 = x_130;
} else {
 lean_dec_ref(x_130);
 x_160 = lean_box(0);
}
if (lean_is_scalar(x_160)) {
 x_161 = lean_alloc_ctor(1, 2, 0);
} else {
 x_161 = x_160;
}
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_159);
return x_161;
}
}
}
else
{
uint8_t x_162; 
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_162 = !lean_is_exclusive(x_65);
if (x_162 == 0)
{
return x_65;
}
else
{
lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_163 = lean_ctor_get(x_65, 0);
x_164 = lean_ctor_get(x_65, 1);
lean_inc(x_164);
lean_inc(x_163);
lean_dec(x_65);
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_163);
lean_ctor_set(x_165, 1, x_164);
return x_165;
}
}
}
}
}
else
{
lean_object* x_166; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_166 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_166;
}
}
else
{
lean_object* x_167; 
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_167 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_167;
}
}
else
{
lean_object* x_168; 
lean_dec(x_55);
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_168 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_168;
}
}
else
{
lean_object* x_169; 
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_49);
lean_dec(x_47);
lean_dec(x_45);
x_169 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_50);
return x_169;
}
}
}
else
{
uint8_t x_170; 
lean_dec(x_47);
lean_dec(x_45);
lean_dec(x_43);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_170 = !lean_is_exclusive(x_48);
if (x_170 == 0)
{
return x_48;
}
else
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get(x_48, 0);
x_172 = lean_ctor_get(x_48, 1);
lean_inc(x_172);
lean_inc(x_171);
lean_dec(x_48);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_171);
lean_ctor_set(x_173, 1, x_172);
return x_173;
}
}
}
}
}
}
else
{
lean_object* x_174; uint8_t x_175; 
lean_dec(x_15);
x_174 = l_Tactic_Ring_eval_match__3___rarg___closed__3;
x_175 = lean_string_dec_eq(x_14, x_174);
lean_dec(x_14);
if (x_175 == 0)
{
lean_object* x_176; 
lean_dec(x_13);
lean_inc(x_1);
x_176 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_176) == 0)
{
lean_object* x_177; 
x_177 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_177;
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_176, 0);
lean_inc(x_178);
lean_dec(x_176);
x_179 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_179, 0, x_1);
lean_ctor_set(x_179, 1, x_178);
x_180 = l_Tactic_Ring_HornerExpr_reflConv(x_179, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_180;
}
}
else
{
lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_181 = lean_array_get_size(x_13);
x_182 = lean_unsigned_to_nat(6u);
x_183 = lean_nat_dec_eq(x_181, x_182);
lean_dec(x_181);
if (x_183 == 0)
{
lean_object* x_184; 
lean_dec(x_13);
lean_inc(x_1);
x_184 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_184) == 0)
{
lean_object* x_185; 
x_185 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; 
x_186 = lean_ctor_get(x_184, 0);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_187, 0, x_1);
lean_ctor_set(x_187, 1, x_186);
x_188 = l_Tactic_Ring_HornerExpr_reflConv(x_187, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_188;
}
}
else
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; 
lean_dec(x_1);
x_189 = lean_unsigned_to_nat(4u);
x_190 = lean_array_fget(x_13, x_189);
x_191 = lean_unsigned_to_nat(5u);
x_192 = lean_array_fget(x_13, x_191);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_190);
x_193 = l_Tactic_Ring_eval(x_190, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_193) == 0)
{
lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
x_194 = lean_ctor_get(x_193, 0);
lean_inc(x_194);
x_195 = lean_ctor_get(x_193, 1);
lean_inc(x_195);
lean_dec(x_193);
x_196 = lean_ctor_get(x_194, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_194, 1);
lean_inc(x_197);
lean_dec(x_194);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_192);
x_198 = l_Tactic_Ring_eval(x_192, x_2, x_3, x_4, x_5, x_6, x_7, x_195);
if (lean_obj_tag(x_198) == 0)
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_199 = lean_ctor_get(x_198, 0);
lean_inc(x_199);
x_200 = lean_ctor_get(x_198, 1);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_ctor_get(x_199, 0);
lean_inc(x_201);
x_202 = lean_ctor_get(x_199, 1);
lean_inc(x_202);
lean_dec(x_199);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_201);
lean_inc(x_196);
x_203 = l_Tactic_Ring_evalMul(x_196, x_201, x_2, x_3, x_4, x_5, x_6, x_7, x_200);
lean_dec(x_3);
if (lean_obj_tag(x_203) == 0)
{
lean_object* x_204; lean_object* x_205; uint8_t x_206; 
x_204 = lean_ctor_get(x_203, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_203, 1);
lean_inc(x_205);
lean_dec(x_203);
x_206 = !lean_is_exclusive(x_204);
if (x_206 == 0)
{
lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; 
x_207 = lean_ctor_get(x_204, 0);
x_208 = lean_ctor_get(x_204, 1);
x_209 = l_Tactic_Ring_HornerExpr_e(x_196);
lean_dec(x_196);
x_210 = l_Tactic_Ring_HornerExpr_e(x_201);
lean_dec(x_201);
x_211 = l_Tactic_Ring_HornerExpr_e(x_207);
x_212 = l_Tactic_Ring_evalPow___closed__16;
x_213 = lean_array_push(x_212, x_190);
x_214 = lean_array_push(x_213, x_192);
x_215 = lean_array_push(x_214, x_209);
x_216 = lean_array_push(x_215, x_210);
x_217 = lean_array_push(x_216, x_211);
x_218 = lean_array_push(x_217, x_197);
x_219 = lean_array_push(x_218, x_202);
x_220 = lean_array_push(x_219, x_208);
x_221 = l_Tactic_Ring_eval___closed__4;
x_222 = l_Lean_Meta_mkAppM(x_221, x_220, x_4, x_5, x_6, x_7, x_205);
if (lean_obj_tag(x_222) == 0)
{
uint8_t x_223; 
x_223 = !lean_is_exclusive(x_222);
if (x_223 == 0)
{
lean_object* x_224; 
x_224 = lean_ctor_get(x_222, 0);
lean_ctor_set(x_204, 1, x_224);
lean_ctor_set(x_222, 0, x_204);
return x_222;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; 
x_225 = lean_ctor_get(x_222, 0);
x_226 = lean_ctor_get(x_222, 1);
lean_inc(x_226);
lean_inc(x_225);
lean_dec(x_222);
lean_ctor_set(x_204, 1, x_225);
x_227 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_227, 0, x_204);
lean_ctor_set(x_227, 1, x_226);
return x_227;
}
}
else
{
uint8_t x_228; 
lean_free_object(x_204);
lean_dec(x_207);
x_228 = !lean_is_exclusive(x_222);
if (x_228 == 0)
{
return x_222;
}
else
{
lean_object* x_229; lean_object* x_230; lean_object* x_231; 
x_229 = lean_ctor_get(x_222, 0);
x_230 = lean_ctor_get(x_222, 1);
lean_inc(x_230);
lean_inc(x_229);
lean_dec(x_222);
x_231 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_231, 0, x_229);
lean_ctor_set(x_231, 1, x_230);
return x_231;
}
}
}
else
{
lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
x_232 = lean_ctor_get(x_204, 0);
x_233 = lean_ctor_get(x_204, 1);
lean_inc(x_233);
lean_inc(x_232);
lean_dec(x_204);
x_234 = l_Tactic_Ring_HornerExpr_e(x_196);
lean_dec(x_196);
x_235 = l_Tactic_Ring_HornerExpr_e(x_201);
lean_dec(x_201);
x_236 = l_Tactic_Ring_HornerExpr_e(x_232);
x_237 = l_Tactic_Ring_evalPow___closed__16;
x_238 = lean_array_push(x_237, x_190);
x_239 = lean_array_push(x_238, x_192);
x_240 = lean_array_push(x_239, x_234);
x_241 = lean_array_push(x_240, x_235);
x_242 = lean_array_push(x_241, x_236);
x_243 = lean_array_push(x_242, x_197);
x_244 = lean_array_push(x_243, x_202);
x_245 = lean_array_push(x_244, x_233);
x_246 = l_Tactic_Ring_eval___closed__4;
x_247 = l_Lean_Meta_mkAppM(x_246, x_245, x_4, x_5, x_6, x_7, x_205);
if (lean_obj_tag(x_247) == 0)
{
lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; 
x_248 = lean_ctor_get(x_247, 0);
lean_inc(x_248);
x_249 = lean_ctor_get(x_247, 1);
lean_inc(x_249);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_250 = x_247;
} else {
 lean_dec_ref(x_247);
 x_250 = lean_box(0);
}
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_232);
lean_ctor_set(x_251, 1, x_248);
if (lean_is_scalar(x_250)) {
 x_252 = lean_alloc_ctor(0, 2, 0);
} else {
 x_252 = x_250;
}
lean_ctor_set(x_252, 0, x_251);
lean_ctor_set(x_252, 1, x_249);
return x_252;
}
else
{
lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_232);
x_253 = lean_ctor_get(x_247, 0);
lean_inc(x_253);
x_254 = lean_ctor_get(x_247, 1);
lean_inc(x_254);
if (lean_is_exclusive(x_247)) {
 lean_ctor_release(x_247, 0);
 lean_ctor_release(x_247, 1);
 x_255 = x_247;
} else {
 lean_dec_ref(x_247);
 x_255 = lean_box(0);
}
if (lean_is_scalar(x_255)) {
 x_256 = lean_alloc_ctor(1, 2, 0);
} else {
 x_256 = x_255;
}
lean_ctor_set(x_256, 0, x_253);
lean_ctor_set(x_256, 1, x_254);
return x_256;
}
}
}
else
{
uint8_t x_257; 
lean_dec(x_202);
lean_dec(x_201);
lean_dec(x_197);
lean_dec(x_196);
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_257 = !lean_is_exclusive(x_203);
if (x_257 == 0)
{
return x_203;
}
else
{
lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_258 = lean_ctor_get(x_203, 0);
x_259 = lean_ctor_get(x_203, 1);
lean_inc(x_259);
lean_inc(x_258);
lean_dec(x_203);
x_260 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_260, 0, x_258);
lean_ctor_set(x_260, 1, x_259);
return x_260;
}
}
}
else
{
uint8_t x_261; 
lean_dec(x_197);
lean_dec(x_196);
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_261 = !lean_is_exclusive(x_198);
if (x_261 == 0)
{
return x_198;
}
else
{
lean_object* x_262; lean_object* x_263; lean_object* x_264; 
x_262 = lean_ctor_get(x_198, 0);
x_263 = lean_ctor_get(x_198, 1);
lean_inc(x_263);
lean_inc(x_262);
lean_dec(x_198);
x_264 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_264, 0, x_262);
lean_ctor_set(x_264, 1, x_263);
return x_264;
}
}
}
else
{
uint8_t x_265; 
lean_dec(x_192);
lean_dec(x_190);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_265 = !lean_is_exclusive(x_193);
if (x_265 == 0)
{
return x_193;
}
else
{
lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_266 = lean_ctor_get(x_193, 0);
x_267 = lean_ctor_get(x_193, 1);
lean_inc(x_267);
lean_inc(x_266);
lean_dec(x_193);
x_268 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_268, 0, x_266);
lean_ctor_set(x_268, 1, x_267);
return x_268;
}
}
}
}
}
}
else
{
lean_object* x_269; uint8_t x_270; 
lean_dec(x_15);
x_269 = l_Tactic_Ring_eval_match__3___rarg___closed__4;
x_270 = lean_string_dec_eq(x_14, x_269);
lean_dec(x_14);
if (x_270 == 0)
{
lean_object* x_271; 
lean_dec(x_13);
lean_inc(x_1);
x_271 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_271) == 0)
{
lean_object* x_272; 
x_272 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_272;
}
else
{
lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_273 = lean_ctor_get(x_271, 0);
lean_inc(x_273);
lean_dec(x_271);
x_274 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_274, 0, x_1);
lean_ctor_set(x_274, 1, x_273);
x_275 = l_Tactic_Ring_HornerExpr_reflConv(x_274, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_275;
}
}
else
{
lean_object* x_276; lean_object* x_277; uint8_t x_278; 
x_276 = lean_array_get_size(x_13);
x_277 = lean_unsigned_to_nat(6u);
x_278 = lean_nat_dec_eq(x_276, x_277);
lean_dec(x_276);
if (x_278 == 0)
{
lean_object* x_279; 
lean_dec(x_13);
lean_inc(x_1);
x_279 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_279) == 0)
{
lean_object* x_280; 
x_280 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_280;
}
else
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; 
x_281 = lean_ctor_get(x_279, 0);
lean_inc(x_281);
lean_dec(x_279);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_1);
lean_ctor_set(x_282, 1, x_281);
x_283 = l_Tactic_Ring_HornerExpr_reflConv(x_282, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_283;
}
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec(x_1);
x_284 = lean_unsigned_to_nat(4u);
x_285 = lean_array_fget(x_13, x_284);
x_286 = lean_unsigned_to_nat(5u);
x_287 = lean_array_fget(x_13, x_286);
lean_dec(x_13);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_285);
x_288 = l_Tactic_Ring_eval(x_285, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
if (lean_obj_tag(x_288) == 0)
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; 
x_289 = lean_ctor_get(x_288, 0);
lean_inc(x_289);
x_290 = lean_ctor_get(x_288, 1);
lean_inc(x_290);
lean_dec(x_288);
x_291 = lean_ctor_get(x_289, 0);
lean_inc(x_291);
x_292 = lean_ctor_get(x_289, 1);
lean_inc(x_292);
lean_dec(x_289);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_287);
x_293 = l_Tactic_Ring_eval(x_287, x_2, x_3, x_4, x_5, x_6, x_7, x_290);
if (lean_obj_tag(x_293) == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_294 = lean_ctor_get(x_293, 0);
lean_inc(x_294);
x_295 = lean_ctor_get(x_293, 1);
lean_inc(x_295);
lean_dec(x_293);
x_296 = lean_ctor_get(x_294, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_294, 1);
lean_inc(x_297);
lean_dec(x_294);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_296);
lean_inc(x_291);
x_298 = l_Tactic_Ring_evalAdd(x_291, x_296, x_2, x_3, x_4, x_5, x_6, x_7, x_295);
lean_dec(x_3);
if (lean_obj_tag(x_298) == 0)
{
lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_299 = lean_ctor_get(x_298, 0);
lean_inc(x_299);
x_300 = lean_ctor_get(x_298, 1);
lean_inc(x_300);
lean_dec(x_298);
x_301 = !lean_is_exclusive(x_299);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; 
x_302 = lean_ctor_get(x_299, 0);
x_303 = lean_ctor_get(x_299, 1);
x_304 = l_Tactic_Ring_HornerExpr_e(x_291);
lean_dec(x_291);
x_305 = l_Tactic_Ring_HornerExpr_e(x_296);
lean_dec(x_296);
x_306 = l_Tactic_Ring_HornerExpr_e(x_302);
x_307 = l_Tactic_Ring_evalPow___closed__16;
x_308 = lean_array_push(x_307, x_285);
x_309 = lean_array_push(x_308, x_287);
x_310 = lean_array_push(x_309, x_304);
x_311 = lean_array_push(x_310, x_305);
x_312 = lean_array_push(x_311, x_306);
x_313 = lean_array_push(x_312, x_292);
x_314 = lean_array_push(x_313, x_297);
x_315 = lean_array_push(x_314, x_303);
x_316 = l_Tactic_Ring_eval___closed__6;
x_317 = l_Lean_Meta_mkAppM(x_316, x_315, x_4, x_5, x_6, x_7, x_300);
if (lean_obj_tag(x_317) == 0)
{
uint8_t x_318; 
x_318 = !lean_is_exclusive(x_317);
if (x_318 == 0)
{
lean_object* x_319; 
x_319 = lean_ctor_get(x_317, 0);
lean_ctor_set(x_299, 1, x_319);
lean_ctor_set(x_317, 0, x_299);
return x_317;
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; 
x_320 = lean_ctor_get(x_317, 0);
x_321 = lean_ctor_get(x_317, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_317);
lean_ctor_set(x_299, 1, x_320);
x_322 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_322, 0, x_299);
lean_ctor_set(x_322, 1, x_321);
return x_322;
}
}
else
{
uint8_t x_323; 
lean_free_object(x_299);
lean_dec(x_302);
x_323 = !lean_is_exclusive(x_317);
if (x_323 == 0)
{
return x_317;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_324 = lean_ctor_get(x_317, 0);
x_325 = lean_ctor_get(x_317, 1);
lean_inc(x_325);
lean_inc(x_324);
lean_dec(x_317);
x_326 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_326, 0, x_324);
lean_ctor_set(x_326, 1, x_325);
return x_326;
}
}
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; 
x_327 = lean_ctor_get(x_299, 0);
x_328 = lean_ctor_get(x_299, 1);
lean_inc(x_328);
lean_inc(x_327);
lean_dec(x_299);
x_329 = l_Tactic_Ring_HornerExpr_e(x_291);
lean_dec(x_291);
x_330 = l_Tactic_Ring_HornerExpr_e(x_296);
lean_dec(x_296);
x_331 = l_Tactic_Ring_HornerExpr_e(x_327);
x_332 = l_Tactic_Ring_evalPow___closed__16;
x_333 = lean_array_push(x_332, x_285);
x_334 = lean_array_push(x_333, x_287);
x_335 = lean_array_push(x_334, x_329);
x_336 = lean_array_push(x_335, x_330);
x_337 = lean_array_push(x_336, x_331);
x_338 = lean_array_push(x_337, x_292);
x_339 = lean_array_push(x_338, x_297);
x_340 = lean_array_push(x_339, x_328);
x_341 = l_Tactic_Ring_eval___closed__6;
x_342 = l_Lean_Meta_mkAppM(x_341, x_340, x_4, x_5, x_6, x_7, x_300);
if (lean_obj_tag(x_342) == 0)
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; 
x_343 = lean_ctor_get(x_342, 0);
lean_inc(x_343);
x_344 = lean_ctor_get(x_342, 1);
lean_inc(x_344);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_345 = x_342;
} else {
 lean_dec_ref(x_342);
 x_345 = lean_box(0);
}
x_346 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_346, 0, x_327);
lean_ctor_set(x_346, 1, x_343);
if (lean_is_scalar(x_345)) {
 x_347 = lean_alloc_ctor(0, 2, 0);
} else {
 x_347 = x_345;
}
lean_ctor_set(x_347, 0, x_346);
lean_ctor_set(x_347, 1, x_344);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; 
lean_dec(x_327);
x_348 = lean_ctor_get(x_342, 0);
lean_inc(x_348);
x_349 = lean_ctor_get(x_342, 1);
lean_inc(x_349);
if (lean_is_exclusive(x_342)) {
 lean_ctor_release(x_342, 0);
 lean_ctor_release(x_342, 1);
 x_350 = x_342;
} else {
 lean_dec_ref(x_342);
 x_350 = lean_box(0);
}
if (lean_is_scalar(x_350)) {
 x_351 = lean_alloc_ctor(1, 2, 0);
} else {
 x_351 = x_350;
}
lean_ctor_set(x_351, 0, x_348);
lean_ctor_set(x_351, 1, x_349);
return x_351;
}
}
}
else
{
uint8_t x_352; 
lean_dec(x_297);
lean_dec(x_296);
lean_dec(x_292);
lean_dec(x_291);
lean_dec(x_287);
lean_dec(x_285);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_352 = !lean_is_exclusive(x_298);
if (x_352 == 0)
{
return x_298;
}
else
{
lean_object* x_353; lean_object* x_354; lean_object* x_355; 
x_353 = lean_ctor_get(x_298, 0);
x_354 = lean_ctor_get(x_298, 1);
lean_inc(x_354);
lean_inc(x_353);
lean_dec(x_298);
x_355 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_355, 0, x_353);
lean_ctor_set(x_355, 1, x_354);
return x_355;
}
}
}
else
{
uint8_t x_356; 
lean_dec(x_292);
lean_dec(x_291);
lean_dec(x_287);
lean_dec(x_285);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_356 = !lean_is_exclusive(x_293);
if (x_356 == 0)
{
return x_293;
}
else
{
lean_object* x_357; lean_object* x_358; lean_object* x_359; 
x_357 = lean_ctor_get(x_293, 0);
x_358 = lean_ctor_get(x_293, 1);
lean_inc(x_358);
lean_inc(x_357);
lean_dec(x_293);
x_359 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_359, 0, x_357);
lean_ctor_set(x_359, 1, x_358);
return x_359;
}
}
}
else
{
uint8_t x_360; 
lean_dec(x_287);
lean_dec(x_285);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_360 = !lean_is_exclusive(x_288);
if (x_360 == 0)
{
return x_288;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; 
x_361 = lean_ctor_get(x_288, 0);
x_362 = lean_ctor_get(x_288, 1);
lean_inc(x_362);
lean_inc(x_361);
lean_dec(x_288);
x_363 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_363, 0, x_361);
lean_ctor_set(x_363, 1, x_362);
return x_363;
}
}
}
}
}
}
else
{
lean_object* x_364; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_364 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_364) == 0)
{
lean_object* x_365; 
x_365 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_365;
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; 
x_366 = lean_ctor_get(x_364, 0);
lean_inc(x_366);
lean_dec(x_364);
x_367 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_367, 0, x_1);
lean_ctor_set(x_367, 1, x_366);
x_368 = l_Tactic_Ring_HornerExpr_reflConv(x_367, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_368;
}
}
}
else
{
lean_object* x_369; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_369 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_369) == 0)
{
lean_object* x_370; 
x_370 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_370;
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; 
x_371 = lean_ctor_get(x_369, 0);
lean_inc(x_371);
lean_dec(x_369);
x_372 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_372, 0, x_1);
lean_ctor_set(x_372, 1, x_371);
x_373 = l_Tactic_Ring_HornerExpr_reflConv(x_372, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_373;
}
}
}
else
{
lean_object* x_374; 
lean_dec(x_10);
lean_dec(x_9);
lean_inc(x_1);
x_374 = l_Lean_Expr_numeral_x3f(x_1);
if (lean_obj_tag(x_374) == 0)
{
lean_object* x_375; 
x_375 = l_Tactic_Ring_evalAtom(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
return x_375;
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_376 = lean_ctor_get(x_374, 0);
lean_inc(x_376);
lean_dec(x_374);
x_377 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_377, 0, x_1);
lean_ctor_set(x_377, 1, x_376);
x_378 = l_Tactic_Ring_HornerExpr_reflConv(x_377, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
return x_378;
}
}
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticRing");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_HornerExpr_xadd_x27___closed__4;
x_2 = l_Tactic_Ring_tacticRing___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ring");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_Tactic_Ring_tacticRing___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_Tactic_Ring_tacticRing___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_Tactic_Ring_tacticRing___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_Tactic_Ring_tacticRing() {
_start:
{
lean_object* x_1; 
x_1 = l_Tactic_Ring_tacticRing___closed__5;
return x_1;
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec(x_1);
x_5 = lean_ctor_get(x_3, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_6);
lean_dec(x_3);
x_7 = lean_ctor_get(x_4, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_apply_4(x_2, x_5, x_6, x_7, x_8);
return x_9;
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Eq");
return x_1;
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 1)
{
lean_object* x_5; 
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
if (lean_obj_tag(x_5) == 0)
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; uint64_t x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
x_10 = lean_ctor_get(x_4, 0);
lean_dec(x_10);
x_11 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1;
x_12 = lean_string_dec_eq(x_8, x_11);
lean_dec(x_8);
if (x_12 == 0)
{
lean_object* x_13; 
lean_free_object(x_4);
lean_dec(x_6);
lean_dec(x_2);
x_13 = lean_apply_1(x_3, x_1);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_1);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_15 = lean_ctor_get(x_1, 1);
lean_dec(x_15);
x_16 = lean_ctor_get(x_1, 0);
lean_dec(x_16);
x_17 = lean_array_get_size(x_6);
x_18 = lean_unsigned_to_nat(3u);
x_19 = lean_nat_dec_eq(x_17, x_18);
lean_dec(x_17);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_2);
lean_ctor_set(x_4, 1, x_11);
x_20 = lean_apply_1(x_3, x_1);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_free_object(x_1);
lean_free_object(x_4);
lean_dec(x_3);
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_array_fget(x_6, x_21);
x_23 = lean_unsigned_to_nat(1u);
x_24 = lean_array_fget(x_6, x_23);
x_25 = lean_unsigned_to_nat(2u);
x_26 = lean_array_fget(x_6, x_25);
lean_dec(x_6);
x_27 = lean_box_uint64(x_9);
x_28 = lean_apply_4(x_2, x_22, x_24, x_26, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec(x_1);
x_29 = lean_array_get_size(x_6);
x_30 = lean_unsigned_to_nat(3u);
x_31 = lean_nat_dec_eq(x_29, x_30);
lean_dec(x_29);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_2);
lean_ctor_set(x_4, 1, x_11);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_4);
lean_ctor_set(x_32, 1, x_6);
x_33 = lean_apply_1(x_3, x_32);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_free_object(x_4);
lean_dec(x_3);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_array_fget(x_6, x_34);
x_36 = lean_unsigned_to_nat(1u);
x_37 = lean_array_fget(x_6, x_36);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_array_fget(x_6, x_38);
lean_dec(x_6);
x_40 = lean_box_uint64(x_9);
x_41 = lean_apply_4(x_2, x_35, x_37, x_39, x_40);
return x_41;
}
}
}
}
else
{
lean_object* x_42; uint64_t x_43; lean_object* x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_4, 1);
x_43 = lean_ctor_get_uint64(x_4, sizeof(void*)*2);
lean_inc(x_42);
lean_dec(x_4);
x_44 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1;
x_45 = lean_string_dec_eq(x_42, x_44);
lean_dec(x_42);
if (x_45 == 0)
{
lean_object* x_46; 
lean_dec(x_6);
lean_dec(x_2);
x_46 = lean_apply_1(x_3, x_1);
return x_46;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; 
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_47 = x_1;
} else {
 lean_dec_ref(x_1);
 x_47 = lean_box(0);
}
x_48 = lean_array_get_size(x_6);
x_49 = lean_unsigned_to_nat(3u);
x_50 = lean_nat_dec_eq(x_48, x_49);
lean_dec(x_48);
if (x_50 == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_dec(x_2);
x_51 = lean_alloc_ctor(1, 2, 8);
lean_ctor_set(x_51, 0, x_5);
lean_ctor_set(x_51, 1, x_44);
lean_ctor_set_uint64(x_51, sizeof(void*)*2, x_43);
if (lean_is_scalar(x_47)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_47;
}
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_6);
x_53 = lean_apply_1(x_3, x_52);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
lean_dec(x_47);
lean_dec(x_3);
x_54 = lean_unsigned_to_nat(0u);
x_55 = lean_array_fget(x_6, x_54);
x_56 = lean_unsigned_to_nat(1u);
x_57 = lean_array_fget(x_6, x_56);
x_58 = lean_unsigned_to_nat(2u);
x_59 = lean_array_fget(x_6, x_58);
lean_dec(x_6);
x_60 = lean_box_uint64(x_43);
x_61 = lean_apply_4(x_2, x_55, x_57, x_59, x_60);
return x_61;
}
}
}
}
else
{
lean_object* x_62; 
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_62 = lean_apply_1(x_3, x_1);
return x_62;
}
}
else
{
lean_object* x_63; 
lean_dec(x_4);
lean_dec(x_2);
x_63 = lean_apply_1(x_3, x_1);
return x_63;
}
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_10 = lean_apply_7(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_apply_8(x_2, x_11, x_3, x_4, x_5, x_6, x_7, x_8, x_12);
return x_13;
}
else
{
uint8_t x_14; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
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
lean_object* l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1___rarg), 9, 0);
return x_3;
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = l_Tactic_Ring_eval(x_1, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_12);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_10, 0);
x_15 = lean_ctor_get(x_10, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_10);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_14);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_16);
lean_ctor_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8_t x_18; 
lean_dec(x_2);
x_18 = !lean_is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_10, 0);
x_20 = lean_ctor_get(x_10, 1);
lean_inc(x_20);
lean_inc(x_19);
lean_dec(x_10);
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
return x_21;
}
}
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed: not an equality");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed \n");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("\n");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_Tactic_Ring_tacticRing___closed__2;
x_12 = l_Lean_Syntax_isOfKind(x_1, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_14 = l_Lean_Elab_Tactic_getMainTarget(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = l_Lean_Expr_getAppFnArgs(x_15);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
if (lean_obj_tag(x_18) == 1)
{
lean_object* x_19; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_17, 1);
lean_inc(x_20);
lean_dec(x_17);
x_21 = lean_ctor_get(x_18, 1);
lean_inc(x_21);
lean_dec(x_18);
x_22 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1;
x_23 = lean_string_dec_eq(x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; 
lean_dec(x_20);
x_24 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2;
x_25 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_24, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_array_get_size(x_20);
x_27 = lean_unsigned_to_nat(3u);
x_28 = lean_nat_dec_eq(x_26, x_27);
lean_dec(x_26);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_20);
x_29 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2;
x_30 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_31 = lean_unsigned_to_nat(0u);
x_32 = lean_array_fget(x_20, x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_array_fget(x_20, x_33);
x_35 = lean_unsigned_to_nat(2u);
x_36 = lean_array_fget(x_20, x_35);
lean_dec(x_20);
x_37 = lean_alloc_closure((void*)(l_Tactic_Ring_eval), 8, 1);
lean_closure_set(x_37, 0, x_34);
x_38 = lean_alloc_closure((void*)(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____lambda__1), 9, 1);
lean_closure_set(x_38, 0, x_36);
x_39 = lean_alloc_closure((void*)(l_ReaderT_bind___at_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____spec__1___rarg), 9, 2);
lean_closure_set(x_39, 0, x_37);
lean_closure_set(x_39, 1, x_38);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_40 = l_Tactic_Ring_RingM_run___rarg(x_32, x_39, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_41, 0);
lean_inc(x_42);
x_43 = lean_ctor_get(x_41, 1);
lean_inc(x_43);
lean_dec(x_41);
x_44 = lean_ctor_get(x_40, 1);
lean_inc(x_44);
lean_dec(x_40);
x_45 = lean_ctor_get(x_42, 0);
lean_inc(x_45);
x_46 = lean_ctor_get(x_42, 1);
lean_inc(x_46);
lean_dec(x_42);
x_47 = lean_ctor_get(x_43, 0);
lean_inc(x_47);
x_48 = lean_ctor_get(x_43, 1);
lean_inc(x_48);
lean_dec(x_43);
x_49 = l_Tactic_Ring_HornerExpr_e(x_45);
x_50 = l_Tactic_Ring_HornerExpr_e(x_47);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_51 = l_Lean_Meta_isExprDefEq(x_49, x_50, x_6, x_7, x_8, x_9, x_44);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_ctor_get(x_51, 0);
lean_inc(x_52);
x_53 = lean_unbox(x_52);
lean_dec(x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
lean_dec(x_48);
lean_dec(x_46);
x_54 = lean_ctor_get(x_51, 1);
lean_inc(x_54);
lean_dec(x_51);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_55 = l_Tactic_Ring_HornerExpr_pp(x_45, x_6, x_7, x_8, x_9, x_54);
if (lean_obj_tag(x_55) == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_56 = lean_ctor_get(x_55, 0);
lean_inc(x_56);
x_57 = lean_ctor_get(x_55, 1);
lean_inc(x_57);
lean_dec(x_55);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_58 = l_Tactic_Ring_HornerExpr_pp(x_47, x_6, x_7, x_8, x_9, x_57);
if (lean_obj_tag(x_58) == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; 
x_59 = lean_ctor_get(x_58, 0);
lean_inc(x_59);
x_60 = lean_ctor_get(x_58, 1);
lean_inc(x_60);
lean_dec(x_58);
x_61 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_61, 0, x_56);
x_62 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4;
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_62);
lean_ctor_set(x_63, 1, x_61);
x_64 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_66, 0, x_59);
x_67 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_67, 0, x_65);
lean_ctor_set(x_67, 1, x_66);
x_68 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8;
x_69 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_69, 0, x_67);
lean_ctor_set(x_69, 1, x_68);
x_70 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_69, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_60);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_70;
}
else
{
uint8_t x_71; 
lean_dec(x_56);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_71 = !lean_is_exclusive(x_58);
if (x_71 == 0)
{
return x_58;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; 
x_72 = lean_ctor_get(x_58, 0);
x_73 = lean_ctor_get(x_58, 1);
lean_inc(x_73);
lean_inc(x_72);
lean_dec(x_58);
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
lean_dec(x_47);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
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
lean_object* x_79; lean_object* x_80; 
lean_dec(x_47);
lean_dec(x_45);
x_79 = lean_ctor_get(x_51, 1);
lean_inc(x_79);
lean_dec(x_51);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_80 = l_Lean_Meta_mkEqSymm(x_48, x_6, x_7, x_8, x_9, x_79);
if (lean_obj_tag(x_80) == 0)
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_80, 1);
lean_inc(x_82);
lean_dec(x_80);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_83 = l_Lean_Meta_mkEqTrans(x_46, x_81, x_6, x_7, x_8, x_9, x_82);
if (lean_obj_tag(x_83) == 0)
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
x_85 = lean_ctor_get(x_83, 1);
lean_inc(x_85);
lean_dec(x_83);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_84);
x_86 = l_Lean_Elab_Tactic_ensureHasNoMVars(x_84, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_85);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_86, 1);
lean_inc(x_87);
lean_dec(x_86);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_88 = l_Lean_Elab_Tactic_getMainGoal(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_87);
if (lean_obj_tag(x_88) == 0)
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
lean_dec(x_88);
x_91 = l_Lean_Meta_assignExprMVar(x_89, x_84, x_6, x_7, x_8, x_9, x_90);
x_92 = lean_ctor_get(x_91, 1);
lean_inc(x_92);
lean_dec(x_91);
x_93 = lean_box(0);
x_94 = l_Lean_Elab_Tactic_replaceMainGoal(x_93, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_92);
return x_94;
}
else
{
uint8_t x_95; 
lean_dec(x_84);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_95 = !lean_is_exclusive(x_88);
if (x_95 == 0)
{
return x_88;
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_96 = lean_ctor_get(x_88, 0);
x_97 = lean_ctor_get(x_88, 1);
lean_inc(x_97);
lean_inc(x_96);
lean_dec(x_88);
x_98 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
}
}
else
{
uint8_t x_99; 
lean_dec(x_84);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_99 = !lean_is_exclusive(x_86);
if (x_99 == 0)
{
return x_86;
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; 
x_100 = lean_ctor_get(x_86, 0);
x_101 = lean_ctor_get(x_86, 1);
lean_inc(x_101);
lean_inc(x_100);
lean_dec(x_86);
x_102 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_102, 0, x_100);
lean_ctor_set(x_102, 1, x_101);
return x_102;
}
}
}
else
{
uint8_t x_103; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_103 = !lean_is_exclusive(x_83);
if (x_103 == 0)
{
return x_83;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_104 = lean_ctor_get(x_83, 0);
x_105 = lean_ctor_get(x_83, 1);
lean_inc(x_105);
lean_inc(x_104);
lean_dec(x_83);
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_104);
lean_ctor_set(x_106, 1, x_105);
return x_106;
}
}
}
else
{
uint8_t x_107; 
lean_dec(x_46);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_107 = !lean_is_exclusive(x_80);
if (x_107 == 0)
{
return x_80;
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_108 = lean_ctor_get(x_80, 0);
x_109 = lean_ctor_get(x_80, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_80);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_109);
return x_110;
}
}
}
}
else
{
uint8_t x_111; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
lean_dec(x_45);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_111 = !lean_is_exclusive(x_51);
if (x_111 == 0)
{
return x_51;
}
else
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_51, 0);
x_113 = lean_ctor_get(x_51, 1);
lean_inc(x_113);
lean_inc(x_112);
lean_dec(x_51);
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
return x_114;
}
}
}
else
{
uint8_t x_115; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_115 = !lean_is_exclusive(x_40);
if (x_115 == 0)
{
return x_40;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_ctor_get(x_40, 0);
x_117 = lean_ctor_get(x_40, 1);
lean_inc(x_117);
lean_inc(x_116);
lean_dec(x_40);
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_116);
lean_ctor_set(x_118, 1, x_117);
return x_118;
}
}
}
}
}
else
{
lean_object* x_119; lean_object* x_120; 
lean_dec(x_19);
lean_dec(x_18);
lean_dec(x_17);
x_119 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2;
x_120 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_119, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_120;
}
}
else
{
lean_object* x_121; lean_object* x_122; 
lean_dec(x_18);
lean_dec(x_17);
x_121 = l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2;
x_122 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_121, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_122;
}
}
else
{
uint8_t x_123; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_123 = !lean_is_exclusive(x_14);
if (x_123 == 0)
{
return x_14;
}
else
{
lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_124 = lean_ctor_get(x_14, 0);
x_125 = lean_ctor_get(x_14, 1);
lean_inc(x_125);
lean_inc(x_124);
lean_dec(x_14);
x_126 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_126, 0, x_124);
lean_ctor_set(x_126, 1, x_125);
return x_126;
}
}
}
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Lean_Elab_Tactic_Basic(lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_Ring(lean_object* w) {
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
res = initialize_Mathlib_Tactic_NormNum(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Tactic_Ring_State_atoms___default___closed__1 = _init_l_Tactic_Ring_State_atoms___default___closed__1();
lean_mark_persistent(l_Tactic_Ring_State_atoms___default___closed__1);
l_Tactic_Ring_State_atoms___default = _init_l_Tactic_Ring_State_atoms___default();
lean_mark_persistent(l_Tactic_Ring_State_atoms___default);
l_Tactic_Ring_State_numAtoms___default = _init_l_Tactic_Ring_State_numAtoms___default();
lean_mark_persistent(l_Tactic_Ring_State_numAtoms___default);
l_Tactic_Ring_RingM_run___rarg___closed__1 = _init_l_Tactic_Ring_RingM_run___rarg___closed__1();
lean_mark_persistent(l_Tactic_Ring_RingM_run___rarg___closed__1);
l_Tactic_Ring_RingM_run___rarg___closed__2 = _init_l_Tactic_Ring_RingM_run___rarg___closed__2();
lean_mark_persistent(l_Tactic_Ring_RingM_run___rarg___closed__2);
l_Tactic_Ring_RingM_run___rarg___closed__3 = _init_l_Tactic_Ring_RingM_run___rarg___closed__3();
lean_mark_persistent(l_Tactic_Ring_RingM_run___rarg___closed__3);
l_Tactic_Ring_RingM_run___rarg___closed__4 = _init_l_Tactic_Ring_RingM_run___rarg___closed__4();
lean_mark_persistent(l_Tactic_Ring_RingM_run___rarg___closed__4);
l_Tactic_Ring_RingM_run___rarg___closed__5 = _init_l_Tactic_Ring_RingM_run___rarg___closed__5();
lean_mark_persistent(l_Tactic_Ring_RingM_run___rarg___closed__5);
l_Tactic_Ring_mkAppCS___closed__1 = _init_l_Tactic_Ring_mkAppCS___closed__1();
lean_mark_persistent(l_Tactic_Ring_mkAppCS___closed__1);
l_Tactic_Ring_addAtom___closed__1 = _init_l_Tactic_Ring_addAtom___closed__1();
lean_mark_persistent(l_Tactic_Ring_addAtom___closed__1);
l_Tactic_Ring_instInhabitedHornerExpr___closed__1 = _init_l_Tactic_Ring_instInhabitedHornerExpr___closed__1();
lean_mark_persistent(l_Tactic_Ring_instInhabitedHornerExpr___closed__1);
l_Tactic_Ring_instInhabitedHornerExpr___closed__2 = _init_l_Tactic_Ring_instInhabitedHornerExpr___closed__2();
lean_mark_persistent(l_Tactic_Ring_instInhabitedHornerExpr___closed__2);
l_Tactic_Ring_instInhabitedHornerExpr = _init_l_Tactic_Ring_instInhabitedHornerExpr();
lean_mark_persistent(l_Tactic_Ring_instInhabitedHornerExpr);
l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1 = _init_l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr___closed__1);
l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr = _init_l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_instCoeHornerExprExpr);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__1 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__1();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__1);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__2 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__2();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__2);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__3 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__3();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__3);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__4 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__4();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__4);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__5 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__5();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__5);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__6 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__6();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__6);
l_Tactic_Ring_HornerExpr_xadd_x27___closed__7 = _init_l_Tactic_Ring_HornerExpr_xadd_x27___closed__7();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_xadd_x27___closed__7);
l_Tactic_Ring_HornerExpr_pp___closed__1 = _init_l_Tactic_Ring_HornerExpr_pp___closed__1();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__1);
l_Tactic_Ring_HornerExpr_pp___closed__2 = _init_l_Tactic_Ring_HornerExpr_pp___closed__2();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__2);
l_Tactic_Ring_HornerExpr_pp___closed__3 = _init_l_Tactic_Ring_HornerExpr_pp___closed__3();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__3);
l_Tactic_Ring_HornerExpr_pp___closed__4 = _init_l_Tactic_Ring_HornerExpr_pp___closed__4();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__4);
l_Tactic_Ring_HornerExpr_pp___closed__5 = _init_l_Tactic_Ring_HornerExpr_pp___closed__5();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__5);
l_Tactic_Ring_HornerExpr_pp___closed__6 = _init_l_Tactic_Ring_HornerExpr_pp___closed__6();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__6);
l_Tactic_Ring_HornerExpr_pp___closed__7 = _init_l_Tactic_Ring_HornerExpr_pp___closed__7();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__7);
l_Tactic_Ring_HornerExpr_pp___closed__8 = _init_l_Tactic_Ring_HornerExpr_pp___closed__8();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__8);
l_Tactic_Ring_HornerExpr_pp___closed__9 = _init_l_Tactic_Ring_HornerExpr_pp___closed__9();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__9);
l_Tactic_Ring_HornerExpr_pp___closed__10 = _init_l_Tactic_Ring_HornerExpr_pp___closed__10();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__10);
l_Tactic_Ring_HornerExpr_pp___closed__11 = _init_l_Tactic_Ring_HornerExpr_pp___closed__11();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__11);
l_Tactic_Ring_HornerExpr_pp___closed__12 = _init_l_Tactic_Ring_HornerExpr_pp___closed__12();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__12);
l_Tactic_Ring_HornerExpr_pp___closed__13 = _init_l_Tactic_Ring_HornerExpr_pp___closed__13();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__13);
l_Tactic_Ring_HornerExpr_pp___closed__14 = _init_l_Tactic_Ring_HornerExpr_pp___closed__14();
lean_mark_persistent(l_Tactic_Ring_HornerExpr_pp___closed__14);
l_Tactic_Ring_evalHorner___closed__1 = _init_l_Tactic_Ring_evalHorner___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__1);
l_Tactic_Ring_evalHorner___closed__2 = _init_l_Tactic_Ring_evalHorner___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__2);
l_Tactic_Ring_evalHorner___closed__3 = _init_l_Tactic_Ring_evalHorner___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__3);
l_Tactic_Ring_evalHorner___closed__4 = _init_l_Tactic_Ring_evalHorner___closed__4();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__4);
l_Tactic_Ring_evalHorner___closed__5 = _init_l_Tactic_Ring_evalHorner___closed__5();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__5);
l_Tactic_Ring_evalHorner___closed__6 = _init_l_Tactic_Ring_evalHorner___closed__6();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__6);
l_Tactic_Ring_evalHorner___closed__7 = _init_l_Tactic_Ring_evalHorner___closed__7();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__7);
l_Tactic_Ring_evalHorner___closed__8 = _init_l_Tactic_Ring_evalHorner___closed__8();
lean_mark_persistent(l_Tactic_Ring_evalHorner___closed__8);
l_Tactic_Ring_evalAdd___closed__1 = _init_l_Tactic_Ring_evalAdd___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__1);
l_Tactic_Ring_evalAdd___closed__2 = _init_l_Tactic_Ring_evalAdd___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__2);
l_Tactic_Ring_evalAdd___closed__3 = _init_l_Tactic_Ring_evalAdd___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__3);
l_Tactic_Ring_evalAdd___closed__4 = _init_l_Tactic_Ring_evalAdd___closed__4();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__4);
l_Tactic_Ring_evalAdd___closed__5 = _init_l_Tactic_Ring_evalAdd___closed__5();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__5);
l_Tactic_Ring_evalAdd___closed__6 = _init_l_Tactic_Ring_evalAdd___closed__6();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__6);
l_Tactic_Ring_evalAdd___closed__7 = _init_l_Tactic_Ring_evalAdd___closed__7();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__7);
l_Tactic_Ring_evalAdd___closed__8 = _init_l_Tactic_Ring_evalAdd___closed__8();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__8);
l_Tactic_Ring_evalAdd___closed__9 = _init_l_Tactic_Ring_evalAdd___closed__9();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__9);
l_Tactic_Ring_evalAdd___closed__10 = _init_l_Tactic_Ring_evalAdd___closed__10();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__10);
l_Tactic_Ring_evalAdd___closed__11 = _init_l_Tactic_Ring_evalAdd___closed__11();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__11);
l_Tactic_Ring_evalAdd___closed__12 = _init_l_Tactic_Ring_evalAdd___closed__12();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__12);
l_Tactic_Ring_evalAdd___closed__13 = _init_l_Tactic_Ring_evalAdd___closed__13();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__13);
l_Tactic_Ring_evalAdd___closed__14 = _init_l_Tactic_Ring_evalAdd___closed__14();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__14);
l_Tactic_Ring_evalAdd___closed__15 = _init_l_Tactic_Ring_evalAdd___closed__15();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__15);
l_Tactic_Ring_evalAdd___closed__16 = _init_l_Tactic_Ring_evalAdd___closed__16();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__16);
l_Tactic_Ring_evalAdd___closed__17 = _init_l_Tactic_Ring_evalAdd___closed__17();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__17);
l_Tactic_Ring_evalAdd___closed__18 = _init_l_Tactic_Ring_evalAdd___closed__18();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__18);
l_Tactic_Ring_evalAdd___closed__19 = _init_l_Tactic_Ring_evalAdd___closed__19();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__19);
l_Tactic_Ring_evalAdd___closed__20 = _init_l_Tactic_Ring_evalAdd___closed__20();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__20);
l_Tactic_Ring_evalAdd___closed__21 = _init_l_Tactic_Ring_evalAdd___closed__21();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__21);
l_Tactic_Ring_evalAdd___closed__22 = _init_l_Tactic_Ring_evalAdd___closed__22();
lean_mark_persistent(l_Tactic_Ring_evalAdd___closed__22);
l_Tactic_Ring_evalConstMul___closed__1 = _init_l_Tactic_Ring_evalConstMul___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalConstMul___closed__1);
l_Tactic_Ring_evalConstMul___closed__2 = _init_l_Tactic_Ring_evalConstMul___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalConstMul___closed__2);
l_Tactic_Ring_evalConstMul___closed__3 = _init_l_Tactic_Ring_evalConstMul___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalConstMul___closed__3);
l_Tactic_Ring_evalMul___closed__1 = _init_l_Tactic_Ring_evalMul___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__1);
l_Tactic_Ring_evalMul___closed__2 = _init_l_Tactic_Ring_evalMul___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__2);
l_Tactic_Ring_evalMul___closed__3 = _init_l_Tactic_Ring_evalMul___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__3);
l_Tactic_Ring_evalMul___closed__4 = _init_l_Tactic_Ring_evalMul___closed__4();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__4);
l_Tactic_Ring_evalMul___closed__5 = _init_l_Tactic_Ring_evalMul___closed__5();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__5);
l_Tactic_Ring_evalMul___closed__6 = _init_l_Tactic_Ring_evalMul___closed__6();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__6);
l_Tactic_Ring_evalMul___closed__7 = _init_l_Tactic_Ring_evalMul___closed__7();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__7);
l_Tactic_Ring_evalMul___closed__8 = _init_l_Tactic_Ring_evalMul___closed__8();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__8);
l_Tactic_Ring_evalMul___closed__9 = _init_l_Tactic_Ring_evalMul___closed__9();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__9);
l_Tactic_Ring_evalMul___closed__10 = _init_l_Tactic_Ring_evalMul___closed__10();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__10);
l_Tactic_Ring_evalMul___closed__11 = _init_l_Tactic_Ring_evalMul___closed__11();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__11);
l_Tactic_Ring_evalMul___closed__12 = _init_l_Tactic_Ring_evalMul___closed__12();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__12);
l_Tactic_Ring_evalMul___closed__13 = _init_l_Tactic_Ring_evalMul___closed__13();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__13);
l_Tactic_Ring_evalMul___closed__14 = _init_l_Tactic_Ring_evalMul___closed__14();
lean_mark_persistent(l_Tactic_Ring_evalMul___closed__14);
l_Tactic_Ring_evalPow___closed__1 = _init_l_Tactic_Ring_evalPow___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__1);
l_Tactic_Ring_evalPow___closed__2 = _init_l_Tactic_Ring_evalPow___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__2);
l_Tactic_Ring_evalPow___closed__3 = _init_l_Tactic_Ring_evalPow___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__3);
l_Tactic_Ring_evalPow___closed__4 = _init_l_Tactic_Ring_evalPow___closed__4();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__4);
l_Tactic_Ring_evalPow___closed__5 = _init_l_Tactic_Ring_evalPow___closed__5();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__5);
l_Tactic_Ring_evalPow___closed__6 = _init_l_Tactic_Ring_evalPow___closed__6();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__6);
l_Tactic_Ring_evalPow___closed__7 = _init_l_Tactic_Ring_evalPow___closed__7();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__7);
l_Tactic_Ring_evalPow___closed__8 = _init_l_Tactic_Ring_evalPow___closed__8();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__8);
l_Tactic_Ring_evalPow___closed__9 = _init_l_Tactic_Ring_evalPow___closed__9();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__9);
l_Tactic_Ring_evalPow___closed__10 = _init_l_Tactic_Ring_evalPow___closed__10();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__10);
l_Tactic_Ring_evalPow___closed__11 = _init_l_Tactic_Ring_evalPow___closed__11();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__11);
l_Tactic_Ring_evalPow___closed__12 = _init_l_Tactic_Ring_evalPow___closed__12();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__12);
l_Tactic_Ring_evalPow___closed__13 = _init_l_Tactic_Ring_evalPow___closed__13();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__13);
l_Tactic_Ring_evalPow___closed__14 = _init_l_Tactic_Ring_evalPow___closed__14();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__14);
l_Tactic_Ring_evalPow___closed__15 = _init_l_Tactic_Ring_evalPow___closed__15();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__15);
l_Tactic_Ring_evalPow___closed__16 = _init_l_Tactic_Ring_evalPow___closed__16();
lean_mark_persistent(l_Tactic_Ring_evalPow___closed__16);
l_Tactic_Ring_evalAtom___closed__1 = _init_l_Tactic_Ring_evalAtom___closed__1();
lean_mark_persistent(l_Tactic_Ring_evalAtom___closed__1);
l_Tactic_Ring_evalAtom___closed__2 = _init_l_Tactic_Ring_evalAtom___closed__2();
lean_mark_persistent(l_Tactic_Ring_evalAtom___closed__2);
l_Tactic_Ring_evalAtom___closed__3 = _init_l_Tactic_Ring_evalAtom___closed__3();
lean_mark_persistent(l_Tactic_Ring_evalAtom___closed__3);
l_Tactic_Ring_eval_match__1___rarg___closed__1 = _init_l_Tactic_Ring_eval_match__1___rarg___closed__1();
lean_mark_persistent(l_Tactic_Ring_eval_match__1___rarg___closed__1);
l_Tactic_Ring_eval_match__3___rarg___closed__1 = _init_l_Tactic_Ring_eval_match__3___rarg___closed__1();
lean_mark_persistent(l_Tactic_Ring_eval_match__3___rarg___closed__1);
l_Tactic_Ring_eval_match__3___rarg___closed__2 = _init_l_Tactic_Ring_eval_match__3___rarg___closed__2();
lean_mark_persistent(l_Tactic_Ring_eval_match__3___rarg___closed__2);
l_Tactic_Ring_eval_match__3___rarg___closed__3 = _init_l_Tactic_Ring_eval_match__3___rarg___closed__3();
lean_mark_persistent(l_Tactic_Ring_eval_match__3___rarg___closed__3);
l_Tactic_Ring_eval_match__3___rarg___closed__4 = _init_l_Tactic_Ring_eval_match__3___rarg___closed__4();
lean_mark_persistent(l_Tactic_Ring_eval_match__3___rarg___closed__4);
l_Tactic_Ring_eval___closed__1 = _init_l_Tactic_Ring_eval___closed__1();
lean_mark_persistent(l_Tactic_Ring_eval___closed__1);
l_Tactic_Ring_eval___closed__2 = _init_l_Tactic_Ring_eval___closed__2();
lean_mark_persistent(l_Tactic_Ring_eval___closed__2);
l_Tactic_Ring_eval___closed__3 = _init_l_Tactic_Ring_eval___closed__3();
lean_mark_persistent(l_Tactic_Ring_eval___closed__3);
l_Tactic_Ring_eval___closed__4 = _init_l_Tactic_Ring_eval___closed__4();
lean_mark_persistent(l_Tactic_Ring_eval___closed__4);
l_Tactic_Ring_eval___closed__5 = _init_l_Tactic_Ring_eval___closed__5();
lean_mark_persistent(l_Tactic_Ring_eval___closed__5);
l_Tactic_Ring_eval___closed__6 = _init_l_Tactic_Ring_eval___closed__6();
lean_mark_persistent(l_Tactic_Ring_eval___closed__6);
l_Tactic_Ring_tacticRing___closed__1 = _init_l_Tactic_Ring_tacticRing___closed__1();
lean_mark_persistent(l_Tactic_Ring_tacticRing___closed__1);
l_Tactic_Ring_tacticRing___closed__2 = _init_l_Tactic_Ring_tacticRing___closed__2();
lean_mark_persistent(l_Tactic_Ring_tacticRing___closed__2);
l_Tactic_Ring_tacticRing___closed__3 = _init_l_Tactic_Ring_tacticRing___closed__3();
lean_mark_persistent(l_Tactic_Ring_tacticRing___closed__3);
l_Tactic_Ring_tacticRing___closed__4 = _init_l_Tactic_Ring_tacticRing___closed__4();
lean_mark_persistent(l_Tactic_Ring_tacticRing___closed__4);
l_Tactic_Ring_tacticRing___closed__5 = _init_l_Tactic_Ring_tacticRing___closed__5();
lean_mark_persistent(l_Tactic_Ring_tacticRing___closed__5);
l_Tactic_Ring_tacticRing = _init_l_Tactic_Ring_tacticRing();
lean_mark_persistent(l_Tactic_Ring_tacticRing);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892__match__2___rarg___closed__1);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__1);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__2);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__3);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__4);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__5);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__6);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__7);
l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8 = _init_l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8();
lean_mark_persistent(l_Tactic_Ring_elabFn____x40_Mathlib_Tactic_Ring___hyg_5892____closed__8);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
