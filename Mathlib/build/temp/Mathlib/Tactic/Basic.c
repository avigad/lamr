// Lean compiler output
// Module: Mathlib.Tactic.Basic
// Imports: Init Mathlib.Tactic.Split Mathlib.Tactic.NoMatch Mathlib.Tactic.Block Lean.Elab.Command
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
static lean_object* l_tacticBy__cases_____x3a_____closed__14;
static lean_object* l_tacticRwa_______closed__10;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19;
lean_object* l_Lean_Elab_Command_elabVariable(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_variables;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(lean_object*, lean_object*);
static lean_object* l_tacticMatchTarget_____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
size_t l_USize_add(size_t, size_t);
static lean_object* l_guardHyp___closed__3;
static lean_object* l_tacticRepeat_x27_____closed__3;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__7;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4;
lean_object* l_Lean_stringToMessageData(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11;
static lean_object* l_tacticIterate_______closed__10;
lean_object* l_evalGuardHyp_match__3(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1;
static lean_object* l_elabVariables___closed__1;
lean_object* l_evalGuardHyp___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
static lean_object* l_variables___closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
extern lean_object* l_Lean_nullKind;
static lean_object* l_tacticRepeat_x27_____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3;
lean_object* l_Lean_Elab_Tactic_SavedState_restore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2;
lean_object* lean_name_mk_string(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
static lean_object* l_elabVariables___closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
static lean_object* l_tacticRepeat_x27_____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
static lean_object* l_tacticTransitivity_______closed__6;
lean_object* l_command__Lemma______;
lean_object* l_List_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331__match__1(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2;
static lean_object* l_introv___closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22;
static lean_object* l_introv___closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12;
static lean_object* l_tacticRepeat_x27_____closed__1;
lean_object* l_Array_extract___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4;
static lean_object* l_tacticIterate_______closed__3;
lean_object* l_Lean_Elab_logAt___at_Lean_Elab_Command_runLinters___spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticAssumption_x27___closed__5;
static lean_object* l_guardHyp___closed__14;
static lean_object* l_command__Lemma_________closed__19;
static lean_object* l_elabVariables___closed__4;
static lean_object* l_evalGuardHyp___lambda__1___closed__1;
static lean_object* l_guardHyp___closed__5;
lean_object* l_Lean_Elab_Tactic_evalTacticAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_evalGuardHyp___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticExfalso___closed__4;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331__match__1___rarg(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4;
static lean_object* l_evalGuardHyp___lambda__1___closed__8;
static lean_object* l_tacticIterate_______closed__5;
static lean_object* l_byContra___closed__4;
static lean_object* l_tacticAnyGoals_____closed__6;
static lean_object* l_tacticBy__cases_____x3a_____closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16;
static lean_object* l_tacticGuardTarget_____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24;
static lean_object* l_elabVariables___closed__13;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7;
lean_object* l_tacticSorry;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
static lean_object* l_evalGuardHyp___lambda__1___closed__4;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571__match__1(lean_object*);
lean_object* l_evalIntrov_introsDep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__10;
static lean_object* l_tacticIterate_______closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
static lean_object* l_variables___closed__10;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3;
lean_object* lean_array_push(lean_object*, lean_object*);
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2;
lean_object* lean_array_get_size(lean_object*);
static lean_object* l_tacticAssumption_x27___closed__1;
static lean_object* l_tacticGuardTarget_____closed__5;
lean_object* l_evalIntrov_introsDep_match__1___rarg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticRepeat_x27_____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2;
static lean_object* l_tacticRwa_______closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1;
lean_object* l_evalGuardHyp_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_elabVariables___closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10;
static lean_object* l_evalGuardHyp___lambda__1___closed__2;
static lean_object* l_tacticAssumption_x27___closed__2;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4;
static lean_object* l_tacticTransitivity_______closed__3;
lean_object* lean_string_utf8_byte_size(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9;
lean_object* l_repeat_x27Aux_match__1(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1;
static lean_object* l_variables___closed__3;
static lean_object* l_tacticBy__cases_____x3a_____closed__5;
lean_object* l_Lean_Elab_Term_getMainModule___rarg(lean_object*, lean_object*);
uint8_t l_USize_decLt(size_t, size_t);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8;
static lean_object* l_command__Lemma_________closed__12;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__12;
static lean_object* l_tacticTransitivity_______closed__1;
static lean_object* l_variables___closed__2;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_byContra;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3;
lean_object* l_tacticAssumption_x27;
static lean_object* l_tacticTransitivity_______closed__5;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5138_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_guardHyp___closed__13;
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711__match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__10;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__6;
lean_object* l_tacticBy__cases__;
lean_object* l_tacticTransitivity____;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2;
static lean_object* l_variables___closed__9;
lean_object* l_evalIntrov_intro1PStep_match__1___rarg(lean_object*, lean_object*);
static lean_object* l_tacticRepeat_x27_____closed__4;
static lean_object* l_tacticBy__cases_____x3a_____closed__10;
lean_object* l_Lean_throwError___at_evalGuardHyp___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_evalIntrov___closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1;
static lean_object* l_tacticTransitivity_______closed__10;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8;
static lean_object* l_introv___closed__1;
static lean_object* l_tacticSorry__1___closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5;
lean_object* l_Lean_Syntax_SepArray_getElems___rarg(lean_object*);
static lean_object* l_tactic_____closed__5;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29;
lean_object* l_guardHyp;
static lean_object* l_command__Lemma_________closed__2;
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_introv___closed__8;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_evalGuardHyp___lambda__1___closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
static lean_object* l_tactic_____closed__2;
static lean_object* l_tacticTransitivity_______closed__7;
static lean_object* l_guardHyp___closed__2;
lean_object* l_tacticIterate____;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5;
lean_object* l_tacticGuardExprEq___x3a_x3d__;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3;
static lean_object* l_command__Lemma_________closed__13;
static lean_object* l_tacticBy__cases_____x3a_____closed__3;
static lean_object* l_command__Lemma_________closed__21;
static lean_object* l_tacticBy__cases_____x3a_____closed__15;
static lean_object* l_elabVariables___closed__12;
static lean_object* l_tacticRwa_______closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__15;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43;
lean_object* l_tacticRepeat_x27__;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__5;
static lean_object* l_tactic_____closed__4;
static lean_object* l_tactic_____closed__1;
lean_object* l_evalGuardHyp___lambda__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at_Array_appendList___spec__1___rarg(lean_object*, lean_object*);
lean_object* l_evalIntrov(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7;
static lean_object* l_elabVariables___closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4;
lean_object* l_elabVariables(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticBy__cases_____x3a_____closed__12;
static lean_object* l_introv___closed__6;
static lean_object* l_command__Lemma_________closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7;
static lean_object* l_command__Lemma_________closed__4;
lean_object* l_Lean_Elab_Tactic_getUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__14;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
lean_object* l_Lean_Elab_Tactic_getGoals___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3;
lean_object* l_Lean_throwError___at_evalGuardHyp___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticMatchTarget_____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2;
static lean_object* l_evalGuardHyp___lambda__1___closed__6;
static lean_object* l_variables___closed__5;
lean_object* l_evalIntrov_intro1PStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticGuardTarget_____closed__2;
static lean_object* l_command__Lemma_________closed__8;
static lean_object* l_command__Lemma_________closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33;
lean_object* l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_rwRuleSeq;
static lean_object* l_tacticMatchTarget_____closed__3;
static lean_object* l_tacticBy__cases_____x3a_____closed__16;
static lean_object* l_variables___closed__13;
static lean_object* l_tacticGuardTarget_____closed__1;
static lean_object* l_command__Lemma_________closed__1;
static lean_object* l_elabVariables___closed__2;
static lean_object* l_tacticAssumption_x27___closed__4;
static lean_object* l_byContra___closed__7;
static lean_object* l_guardHyp___closed__9;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__16;
lean_object* l_Lean_Elab_Term_getCurrMacroScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1;
lean_object* lean_array_to_list(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_Tactic_location;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7;
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticIterate_______closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6;
static lean_object* l_command__Lemma_________closed__17;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11;
lean_object* l_Lean_Elab_Tactic_getMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticMatchTarget_____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7;
static lean_object* l_tacticExfalso___closed__3;
static lean_object* l_command__Lemma_________closed__3;
lean_object* l_repeat_x27Aux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5;
static lean_object* l_byContra___closed__6;
static lean_object* l_tacticIterate_______closed__9;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5;
static lean_object* l_elabVariables___closed__7;
static lean_object* l_tacticBy__cases_____x3a_____closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10;
static lean_object* l_tacticSorry___closed__3;
static lean_object* l_tacticAnyGoals_____closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
static lean_object* l_tacticIterate_______closed__4;
static lean_object* l_command__Lemma_________closed__5;
static lean_object* l_command__Lemma_________closed__18;
static lean_object* l_tacticAnyGoals_____closed__2;
lean_object* l_repeat_x27Aux_match__1___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1;
lean_object* l_Lean_Expr_consumeMData(lean_object*);
static lean_object* l_tacticIterate_______closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15;
static lean_object* l_command__Lemma_________closed__15;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2;
static lean_object* l_tacticRwa_______closed__1;
lean_object* l_tacticAnyGoals__;
static lean_object* l_tacticBy__cases_____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14;
lean_object* l_evalIntrov_intro1PStep_match__1(lean_object*);
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
static lean_object* l_tacticGuardTarget_____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13;
static lean_object* l_tacticRwa_______closed__4;
size_t lean_usize_of_nat(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1;
static lean_object* l_command__Lemma_________closed__6;
static lean_object* l_tacticRwa_______closed__8;
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42;
lean_object* l_evalGuardHyp_match__2(lean_object*);
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3;
lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_evalTacticAux___spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2;
static lean_object* l_evalGuardHyp___lambda__1___closed__3;
static lean_object* l_byContra___closed__5;
static lean_object* l_tacticIterate_______closed__1;
static lean_object* l_variables___closed__8;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30;
lean_object* l_tacticGuardTarget__;
lean_object* l_evalGuardHyp___lambda__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1;
uint8_t l_Lean_Syntax_isNodeOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncoding_deriveWithRefInstance___spec__1(lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticSorry___closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1;
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*);
static lean_object* l_tacticSorry__1___closed__2;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__13;
static lean_object* l_guardHyp___closed__11;
static lean_object* l_tacticRwa_______closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14;
lean_object* l_Lean_Elab_Tactic_appendGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticBy__cases_____closed__2;
lean_object* l_tacticSorry__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3;
lean_object* l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
static lean_object* l_tacticIterate_______closed__11;
static lean_object* l_tacticExfalso___closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Command_elabNamespace___spec__1___rarg(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10;
static lean_object* l_introv___closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40;
static lean_object* l_tactic_____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15;
lean_object* l_evalIntrov_introsDep_match__1(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1;
static lean_object* l_tacticBy__cases_____x3a_____closed__9;
static lean_object* l_tacticBy__cases_____closed__1;
uint8_t lean_expr_eqv(lean_object*, lean_object*);
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4;
lean_object* l_Lean_Elab_Command_getCurrMacroScope(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2;
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_object* l_evalGuardHyp___lambda__1___closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_guardHyp___closed__6;
static lean_object* l_tacticBy__cases_____x3a_____closed__1;
static lean_object* l_variables___closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44;
static lean_object* l_guardHyp___closed__12;
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571__match__1___rarg(lean_object*, lean_object*);
lean_object* l_evalGuardHyp_match__1(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3;
lean_object* l_evalGuardHyp_match__2___rarg(lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9;
static lean_object* l_introv___closed__4;
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729_(lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticSorry__1___closed__1;
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632_(lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711_(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getMainModule___rarg(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7;
lean_object* l_evalGuardHyp_match__3___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprMVarAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45;
static lean_object* l_variables___closed__1;
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6;
static lean_object* l_tacticTransitivity_______closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13;
lean_object* l_evalGuardHyp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2;
lean_object* l_Lean_Elab_Tactic_evalTacticAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__2;
lean_object* l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_evalGuardHyp___lambda__3___closed__1;
static lean_object* l_byContra___closed__1;
static lean_object* l_introv___closed__2;
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38;
uint8_t l_Lean_Syntax_isNone(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10;
static lean_object* l_elabVariables___closed__6;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5;
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__1;
static lean_object* l_tacticGuardTarget_____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
lean_object* l_tacticRwa____;
lean_object* l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticTransitivity_______closed__2;
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
static lean_object* l_variables___closed__7;
static lean_object* l_tacticSorry___closed__1;
lean_object* l_tacticExacts_x5b___x2c_x2c_x5d;
static lean_object* l_tacticTransitivity_______closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4;
static lean_object* l_evalGuardHyp___lambda__3___closed__2;
lean_object* l_tacticBy__cases_____x3a__;
static lean_object* l_tacticTransitivity_______closed__4;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1;
lean_object* l_Lean_Meta_instantiateMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
static lean_object* l_byContra___closed__2;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
static lean_object* l_tacticBy__cases_____x3a_____closed__2;
static lean_object* l_evalGuardHyp___lambda__2___closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__8;
static lean_object* l_tacticExfalso___closed__2;
lean_object* l_tacticExfalso;
lean_object* l_evalGuardHyp___lambda__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_command__Lemma_________closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34;
static lean_object* l_guardHyp___closed__10;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711__match__1(lean_object*);
static lean_object* l_tacticMatchTarget_____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3;
static lean_object* l_tacticRwa_______closed__7;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2;
lean_object* l_Lean_Syntax_toNat(lean_object*);
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__9;
static lean_object* l_guardHyp___closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11;
static lean_object* l_tacticMatchTarget_____closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47;
static lean_object* l_evalIntrov_intro1PStep___closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__4;
static lean_object* l_tacticSorry___closed__4;
static lean_object* l_tacticAssumption_x27___closed__3;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__7;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1;
static lean_object* l_byContra___closed__3;
static lean_object* l_tacticTransitivity_______closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
static lean_object* l_elabVariables___closed__14;
static lean_object* l_tacticBy__cases_____x3a_____closed__6;
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
static lean_object* l_tacticBy__cases_____x3a_____closed__13;
static lean_object* l_guardHyp___closed__4;
static lean_object* l_evalIntrov___closed__2;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4;
static lean_object* l_guardHyp___closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__11;
static lean_object* l_evalGuardHyp___lambda__2___closed__1;
static lean_object* l_command__Lemma_________closed__16;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3;
static lean_object* l_tacticRwa_______closed__3;
lean_object* l_evalGuardHyp___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_tacticIterate_______closed__6;
static lean_object* l_tacticBy__cases_____closed__4;
static lean_object* l_tacticAnyGoals_____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1;
lean_object* l_evalIntrov_intro1PStep___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1;
lean_object* l_evalGuardHyp___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2;
static lean_object* l_tacticAnyGoals_____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__8;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
static lean_object* l_command__Lemma_________closed__10;
static lean_object* l_command__Lemma_________closed__20;
static lean_object* l_variables___closed__12;
static lean_object* l_tacticAnyGoals_____closed__3;
static lean_object* l_tacticBy__cases_____x3a_____closed__8;
static lean_object* l_elabVariables___closed__5;
static lean_object* l_tacticSorry___closed__2;
lean_object* l_List_appendTR___rarg(lean_object*, lean_object*);
static lean_object* l_variables___closed__11;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1;
static lean_object* l_command__Lemma_________closed__14;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8;
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(lean_object*);
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
static lean_object* l_elabVariables___closed__3;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__1;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12;
static lean_object* l_elabVariables___closed__10;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1;
static lean_object* l_tacticRwa_______closed__2;
static lean_object* l_tacticExfalso___closed__1;
lean_object* l_tactic__;
static lean_object* l_tacticGuardExprEq___x3a_x3d_____closed__5;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3;
static lean_object* l_tacticBy__cases_____x3a_____closed__4;
static lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13;
lean_object* l_introv;
lean_object* l_evalGuardHyp___lambda__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_tacticMatchTarget__;
static lean_object* l_tacticExacts_x5b___x2c_x2c_x5d___closed__4;
static lean_object* l_elabVariables___closed__15;
static lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
static lean_object* l_guardHyp___closed__7;
static lean_object* _init_l_variables___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("variables");
return x_1;
}
}
static lean_object* _init_l_variables___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_variables___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_variables___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("andthen");
return x_1;
}
}
static lean_object* _init_l_variables___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_variables___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_variables___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_variables___closed__1;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_variables___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("many");
return x_1;
}
}
static lean_object* _init_l_variables___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_variables___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_variables___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("bracketedBinder");
return x_1;
}
}
static lean_object* _init_l_variables___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_variables___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_variables___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_variables___closed__9;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_variables___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_variables___closed__7;
x_2 = l_variables___closed__10;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_variables___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_variables___closed__5;
x_3 = l_variables___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_variables___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_variables___closed__12;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_variables() {
_start:
{
lean_object* x_1; 
x_1 = l_variables___closed__13;
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("'variables' has been replaced by 'variable' in lean 4");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabVariables___closed__1;
x_2 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_elabVariables___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabVariables___closed__2;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_elabVariables___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Lean");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_elabVariables___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_elabVariables___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Parser");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__5;
x_2 = l_elabVariables___closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_elabVariables___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Command");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__7;
x_2 = l_elabVariables___closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_elabVariables___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("variable");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__9;
x_2 = l_elabVariables___closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_elabVariables___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("null");
return x_1;
}
}
static lean_object* _init_l_elabVariables___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_elabVariables___closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_elabVariables___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_elabVariables___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_elabVariables(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = l_variables___closed__2;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(1u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_Syntax_getArgs(x_11);
lean_dec(x_11);
x_13 = l_elabVariables___closed__3;
x_14 = 1;
x_15 = l_Lean_Elab_logAt___at_Lean_Elab_Command_runLinters___spec__2(x_9, x_13, x_14, x_2, x_3, x_4);
x_16 = lean_ctor_get(x_15, 1);
lean_inc(x_16);
lean_dec(x_15);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at___private_Lean_Server_Rpc_Deriving_0__Lean_Server_RpcEncoding_deriveWithRefInstance___spec__1(x_2, x_3, x_16);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Command_getCurrMacroScope(x_2, x_3, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_Command_getMainModule___rarg(x_3, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_Lean_Syntax_getHeadInfo_x3f(x_9);
lean_dec(x_9);
x_25 = l_elabVariables___closed__14;
x_26 = l_Array_append___rarg(x_25, x_12);
x_27 = l_elabVariables___closed__13;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
if (lean_obj_tag(x_24) == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_29 = l_elabVariables___closed__10;
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_18);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_elabVariables___closed__15;
x_32 = lean_array_push(x_31, x_30);
x_33 = lean_array_push(x_32, x_28);
x_34 = l_elabVariables___closed__11;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_Lean_Elab_Command_elabVariable(x_35, x_2, x_3, x_23);
return x_36;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; 
lean_dec(x_18);
x_37 = lean_ctor_get(x_24, 0);
lean_inc(x_37);
lean_dec(x_24);
x_38 = l_elabVariables___closed__10;
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_elabVariables___closed__15;
x_41 = lean_array_push(x_40, x_39);
x_42 = lean_array_push(x_41, x_28);
x_43 = l_elabVariables___closed__11;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_Lean_Elab_Command_elabVariable(x_44, x_2, x_3, x_23);
return x_45;
}
}
}
}
static lean_object* _init_l_command__Lemma_________closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("command_Lemma___");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_command__Lemma_________closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_command__Lemma_________closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declModifiers");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_command__Lemma_________closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_command__Lemma_________closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_command__Lemma_________closed__4;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_command__Lemma_________closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lemma");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_command__Lemma_________closed__6;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_command__Lemma_________closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_command__Lemma_________closed__5;
x_3 = l_command__Lemma_________closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_command__Lemma_________closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declId");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_command__Lemma_________closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_command__Lemma_________closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_command__Lemma_________closed__10;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_command__Lemma_________closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_command__Lemma_________closed__8;
x_3 = l_command__Lemma_________closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_command__Lemma_________closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declSig");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_command__Lemma_________closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_command__Lemma_________closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_command__Lemma_________closed__14;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_command__Lemma_________closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_command__Lemma_________closed__12;
x_3 = l_command__Lemma_________closed__15;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_command__Lemma_________closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declVal");
return x_1;
}
}
static lean_object* _init_l_command__Lemma_________closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_command__Lemma_________closed__17;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_command__Lemma_________closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_command__Lemma_________closed__18;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_command__Lemma_________closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_command__Lemma_________closed__16;
x_3 = l_command__Lemma_________closed__19;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_command__Lemma_________closed__21() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_command__Lemma_________closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_command__Lemma_________closed__20;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_command__Lemma______() {
_start:
{
lean_object* x_1; 
x_1 = l_command__Lemma_________closed__21;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("declaration");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__9;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("theorem");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__9;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_command__Lemma_________closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
x_12 = lean_unsigned_to_nat(3u);
x_13 = l_Lean_Syntax_getArg(x_1, x_12);
x_14 = lean_unsigned_to_nat(4u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_17 = !lean_is_exclusive(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_18 = lean_ctor_get(x_16, 0);
x_19 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_22 = lean_array_push(x_21, x_20);
x_23 = lean_array_push(x_22, x_11);
x_24 = lean_array_push(x_23, x_13);
x_25 = lean_array_push(x_24, x_15);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_elabVariables___closed__15;
x_29 = lean_array_push(x_28, x_9);
x_30 = lean_array_push(x_29, x_27);
x_31 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2;
x_32 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_30);
lean_ctor_set(x_16, 0, x_32);
return x_16;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_33 = lean_ctor_get(x_16, 0);
x_34 = lean_ctor_get(x_16, 1);
lean_inc(x_34);
lean_inc(x_33);
lean_dec(x_16);
x_35 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3;
x_36 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_36, 0, x_33);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_38 = lean_array_push(x_37, x_36);
x_39 = lean_array_push(x_38, x_11);
x_40 = lean_array_push(x_39, x_13);
x_41 = lean_array_push(x_40, x_15);
x_42 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_elabVariables___closed__15;
x_45 = lean_array_push(x_44, x_9);
x_46 = lean_array_push(x_45, x_43);
x_47 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_34);
return x_49;
}
}
}
}
static lean_object* _init_l_tacticExfalso___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticExfalso");
return x_1;
}
}
static lean_object* _init_l_tacticExfalso___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticExfalso___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticExfalso___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("exfalso");
return x_1;
}
}
static lean_object* _init_l_tacticExfalso___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticExfalso___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticExfalso___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticExfalso___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticExfalso___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticExfalso() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticExfalso___closed__5;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Tactic");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__7;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("seq1");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("apply");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("False.elim");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("False");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("elim");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticExfalso___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13;
x_16 = l_Lean_addMacroScope(x_12, x_15, x_11);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9;
x_18 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15;
x_19 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_elabVariables___closed__15;
x_21 = lean_array_push(x_20, x_14);
x_22 = lean_array_push(x_21, x_19);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_26 = lean_array_push(x_25, x_24);
x_27 = l_elabVariables___closed__13;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = lean_array_push(x_25, x_28);
x_30 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
lean_ctor_set(x_8, 0, x_31);
return x_8;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_32 = lean_ctor_get(x_8, 0);
x_33 = lean_ctor_get(x_8, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_8);
x_34 = lean_ctor_get(x_2, 2);
lean_inc(x_34);
x_35 = lean_ctor_get(x_2, 1);
lean_inc(x_35);
lean_dec(x_2);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_32);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13;
x_39 = l_Lean_addMacroScope(x_35, x_38, x_34);
x_40 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9;
x_41 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15;
x_42 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_42, 2, x_39);
lean_ctor_set(x_42, 3, x_41);
x_43 = l_elabVariables___closed__15;
x_44 = lean_array_push(x_43, x_37);
x_45 = lean_array_push(x_44, x_42);
x_46 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_49 = lean_array_push(x_48, x_47);
x_50 = l_elabVariables___closed__13;
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_array_push(x_48, x_51);
x_53 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_54 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_33);
return x_55;
}
}
}
}
static lean_object* _init_l_tactic_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tactic_");
return x_1;
}
}
static lean_object* _init_l_tactic_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tactic_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tactic_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("_");
return x_1;
}
}
static lean_object* _init_l_tactic_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tactic_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tactic_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tactic_____closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tactic_____closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tactic__() {
_start:
{
lean_object* x_1; 
x_1 = l_tactic_____closed__5;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeqBracketed");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("{");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__13;
x_2 = l_elabVariables___closed__14;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("}");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tactic_____closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_16 = lean_array_push(x_15, x_12);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_18 = lean_array_push(x_16, x_17);
x_19 = lean_array_push(x_18, x_14);
x_20 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_23 = lean_array_push(x_22, x_21);
x_24 = l_elabVariables___closed__13;
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = lean_array_push(x_22, x_25);
x_27 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
lean_ctor_set(x_8, 0, x_28);
return x_8;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_29 = lean_ctor_get(x_8, 0);
x_30 = lean_ctor_get(x_8, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_8);
x_31 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3;
lean_inc(x_29);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_29);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5;
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_29);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_36 = lean_array_push(x_35, x_32);
x_37 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_38 = lean_array_push(x_36, x_37);
x_39 = lean_array_push(x_38, x_34);
x_40 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_43 = lean_array_push(x_42, x_41);
x_44 = l_elabVariables___closed__13;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_array_push(x_42, x_45);
x_47 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_30);
return x_49;
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticRfl");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("exact");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Iff.rfl");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Iff");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rfl");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
lean_inc(x_2);
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_2, 2);
lean_inc(x_11);
x_12 = lean_ctor_get(x_2, 1);
lean_inc(x_12);
lean_dec(x_2);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
lean_inc(x_10);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11;
x_16 = l_Lean_addMacroScope(x_12, x_15, x_11);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7;
x_18 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13;
x_19 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_19, 0, x_10);
lean_ctor_set(x_19, 1, x_17);
lean_ctor_set(x_19, 2, x_16);
lean_ctor_set(x_19, 3, x_18);
x_20 = l_elabVariables___closed__15;
x_21 = lean_array_push(x_20, x_14);
x_22 = lean_array_push(x_21, x_19);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_8, 0, x_24);
return x_8;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_25 = lean_ctor_get(x_8, 0);
x_26 = lean_ctor_get(x_8, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_8);
x_27 = lean_ctor_get(x_2, 2);
lean_inc(x_27);
x_28 = lean_ctor_get(x_2, 1);
lean_inc(x_28);
lean_dec(x_2);
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
lean_inc(x_25);
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_25);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11;
x_32 = l_Lean_addMacroScope(x_28, x_31, x_27);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7;
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13;
x_35 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_35, 0, x_25);
lean_ctor_set(x_35, 1, x_33);
lean_ctor_set(x_35, 2, x_32);
lean_ctor_set(x_35, 3, x_34);
x_36 = l_elabVariables___closed__15;
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_35);
x_39 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_26);
return x_41;
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("change");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticShow_");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("show");
return x_1;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(2u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
x_12 = l_Lean_nullKind;
x_13 = lean_unsigned_to_nat(0u);
x_14 = l_Lean_Syntax_isNodeOf(x_11, x_12, x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_9);
lean_dec(x_2);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_3);
return x_16;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5;
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_elabVariables___closed__15;
x_23 = lean_array_push(x_22, x_21);
x_24 = lean_array_push(x_23, x_9);
x_25 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
lean_ctor_set(x_17, 0, x_26);
return x_17;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = lean_ctor_get(x_17, 0);
x_28 = lean_ctor_get(x_17, 1);
lean_inc(x_28);
lean_inc(x_27);
lean_dec(x_17);
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5;
x_30 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = l_elabVariables___closed__15;
x_32 = lean_array_push(x_31, x_30);
x_33 = lean_array_push(x_32, x_9);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_28);
return x_36;
}
}
}
}
}
static lean_object* _init_l_tacticSorry___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSorry");
return x_1;
}
}
static lean_object* _init_l_tacticSorry___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticSorry___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSorry___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("sorry");
return x_1;
}
}
static lean_object* _init_l_tacticSorry___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticSorry___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSorry___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticSorry___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticSorry___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticSorry() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticSorry___closed__5;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticAdmit");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("admit");
return x_1;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticSorry___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3;
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_14 = lean_array_push(x_13, x_12);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2;
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
lean_ctor_set(x_8, 0, x_16);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_17 = lean_ctor_get(x_8, 0);
x_18 = lean_ctor_get(x_8, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_8);
x_19 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3;
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_22 = lean_array_push(x_21, x_20);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_18);
return x_25;
}
}
}
}
static lean_object* _init_l_tacticRwa_______closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticRwa__");
return x_1;
}
}
static lean_object* _init_l_tacticRwa_______closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticRwa_______closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRwa_______closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rwa ");
return x_1;
}
}
static lean_object* _init_l_tacticRwa_______closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRwa_______closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticRwa_______closed__4;
x_3 = l_Lean_Parser_Tactic_rwRuleSeq;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticRwa_______closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("optional");
return x_1;
}
}
static lean_object* _init_l_tacticRwa_______closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticRwa_______closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRwa_______closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__7;
x_2 = l_Lean_Parser_Tactic_location;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRwa_______closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticRwa_______closed__5;
x_3 = l_tacticRwa_______closed__8;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticRwa_______closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticRwa_______closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticRwa_______closed__9;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticRwa____() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticRwa_______closed__10;
return x_1;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711__match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711__match__1___rarg), 3, 0);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rwSeq");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rw");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(";");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assumption");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabVariables___closed__14;
x_2 = l_Array_append___rarg(x_1, x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__13;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_5, x_6);
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3;
lean_inc(x_1);
x_11 = lean_name_mk_string(x_1, x_10);
x_12 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1;
lean_inc(x_1);
x_13 = lean_name_mk_string(x_1, x_12);
x_14 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2;
lean_inc(x_9);
x_15 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_15, 0, x_9);
lean_ctor_set(x_15, 1, x_14);
x_16 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_17 = lean_array_push(x_16, x_15);
x_18 = lean_array_push(x_17, x_2);
x_19 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_9);
x_20 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_20, 0, x_9);
lean_ctor_set(x_20, 1, x_19);
x_21 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
x_22 = lean_name_mk_string(x_1, x_21);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_9);
lean_ctor_set(x_23, 1, x_21);
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_25 = lean_array_push(x_24, x_23);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_22);
lean_ctor_set(x_26, 1, x_25);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_27 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6;
x_28 = lean_array_push(x_18, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_13);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_array_push(x_16, x_29);
x_31 = lean_array_push(x_30, x_20);
x_32 = lean_array_push(x_31, x_26);
x_33 = l_elabVariables___closed__13;
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_array_push(x_24, x_34);
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_35);
lean_ctor_set(x_7, 0, x_36);
return x_7;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_37 = lean_ctor_get(x_4, 0);
lean_inc(x_37);
lean_dec(x_4);
x_38 = lean_array_push(x_24, x_37);
x_39 = l_elabVariables___closed__14;
x_40 = l_Array_append___rarg(x_39, x_38);
x_41 = l_elabVariables___closed__13;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = lean_array_push(x_18, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_13);
lean_ctor_set(x_44, 1, x_43);
x_45 = lean_array_push(x_16, x_44);
x_46 = lean_array_push(x_45, x_20);
x_47 = lean_array_push(x_46, x_26);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_41);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_array_push(x_24, x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_11);
lean_ctor_set(x_50, 1, x_49);
lean_ctor_set(x_7, 0, x_50);
return x_7;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_51 = lean_ctor_get(x_7, 0);
x_52 = lean_ctor_get(x_7, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_7);
x_53 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3;
lean_inc(x_1);
x_54 = lean_name_mk_string(x_1, x_53);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1;
lean_inc(x_1);
x_56 = lean_name_mk_string(x_1, x_55);
x_57 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2;
lean_inc(x_51);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_57);
x_59 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_60 = lean_array_push(x_59, x_58);
x_61 = lean_array_push(x_60, x_2);
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_51);
x_63 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_63, 0, x_51);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
x_65 = lean_name_mk_string(x_1, x_64);
x_66 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_66, 0, x_51);
lean_ctor_set(x_66, 1, x_64);
x_67 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_68 = lean_array_push(x_67, x_66);
x_69 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_69, 0, x_65);
lean_ctor_set(x_69, 1, x_68);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_70 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6;
x_71 = lean_array_push(x_61, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_56);
lean_ctor_set(x_72, 1, x_71);
x_73 = lean_array_push(x_59, x_72);
x_74 = lean_array_push(x_73, x_63);
x_75 = lean_array_push(x_74, x_69);
x_76 = l_elabVariables___closed__13;
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_75);
x_78 = lean_array_push(x_67, x_77);
x_79 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_79, 0, x_54);
lean_ctor_set(x_79, 1, x_78);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_52);
return x_80;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_81 = lean_ctor_get(x_4, 0);
lean_inc(x_81);
lean_dec(x_4);
x_82 = lean_array_push(x_67, x_81);
x_83 = l_elabVariables___closed__14;
x_84 = l_Array_append___rarg(x_83, x_82);
x_85 = l_elabVariables___closed__13;
x_86 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_87 = lean_array_push(x_61, x_86);
x_88 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_88, 0, x_56);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_array_push(x_59, x_88);
x_90 = lean_array_push(x_89, x_63);
x_91 = lean_array_push(x_90, x_69);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_85);
lean_ctor_set(x_92, 1, x_91);
x_93 = lean_array_push(x_67, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_54);
lean_ctor_set(x_94, 1, x_93);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_94);
lean_ctor_set(x_95, 1, x_52);
return x_95;
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("rwRuleSeq");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("location");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticRwa_______closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2;
lean_inc(x_9);
x_11 = l_Lean_Syntax_isOfKind(x_9, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_2);
lean_dec(x_1);
x_12 = lean_box(1);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_3);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = l_Lean_nullKind;
lean_inc(x_15);
x_18 = l_Lean_Syntax_isNodeOf(x_15, x_17, x_8);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_2);
x_19 = lean_box(1);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_3);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = l_Lean_Syntax_getArg(x_15, x_21);
lean_dec(x_15);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4;
lean_inc(x_22);
x_24 = l_Lean_Syntax_isOfKind(x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; 
lean_dec(x_22);
lean_dec(x_9);
lean_dec(x_2);
x_25 = lean_box(1);
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_3);
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_27 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_27, 0, x_22);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_29 = lean_box(0);
x_30 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1(x_28, x_9, x_29, x_27, x_2, x_3);
return x_30;
}
}
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
lean_dec(x_15);
x_31 = lean_box(0);
x_32 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_33 = lean_box(0);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1(x_32, x_9, x_33, x_31, x_2, x_3);
return x_34;
}
}
}
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_3);
return x_7;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticBy_cases__:_");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticBy__cases_____x3a_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("by_cases ");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticBy__cases_____x3a_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("ident");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticBy__cases_____x3a_____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticBy__cases_____x3a_____closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticBy__cases_____x3a_____closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticBy__cases_____x3a_____closed__9;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticBy__cases_____x3a_____closed__8;
x_3 = l_tacticBy__cases_____x3a_____closed__10;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("term");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticBy__cases_____x3a_____closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticBy__cases_____x3a_____closed__13;
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticBy__cases_____x3a_____closed__11;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a_____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticBy__cases_____x3a_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticBy__cases_____x3a_____closed__15;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases_____x3a__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticBy__cases_____x3a_____closed__16;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("cases");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("casesTarget");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Term");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__7;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("app");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Decidable.em");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Decidable");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("em");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elabVariables___closed__15;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_3 = lean_array_push(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inductionAlts");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("with");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inductionAlt");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("|");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("group");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inl");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("=>");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("syntheticHole");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("?");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("pos");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(5u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("inr");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("neg");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticBy__cases_____x3a_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
x_10 = lean_unsigned_to_nat(3u);
x_11 = l_Lean_Syntax_getArg(x_1, x_10);
lean_dec(x_1);
lean_inc(x_2);
x_12 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_2, 2);
lean_inc(x_15);
x_16 = lean_ctor_get(x_2, 1);
lean_inc(x_16);
lean_dec(x_2);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
lean_inc(x_14);
x_18 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_17);
x_19 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
lean_inc(x_15);
lean_inc(x_16);
x_20 = l_Lean_addMacroScope(x_16, x_19, x_15);
x_21 = lean_box(0);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11;
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17;
lean_inc(x_14);
x_24 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_22);
lean_ctor_set(x_24, 2, x_20);
lean_ctor_set(x_24, 3, x_23);
x_25 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_26 = lean_array_push(x_25, x_11);
x_27 = l_elabVariables___closed__13;
x_28 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_26);
x_29 = l_elabVariables___closed__15;
x_30 = lean_array_push(x_29, x_24);
x_31 = lean_array_push(x_30, x_28);
x_32 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18;
x_35 = lean_array_push(x_34, x_33);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_array_push(x_25, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_27);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21;
lean_inc(x_14);
x_41 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_41, 0, x_14);
lean_ctor_set(x_41, 1, x_40);
x_42 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24;
lean_inc(x_14);
x_43 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_43, 0, x_14);
lean_ctor_set(x_43, 1, x_42);
x_44 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30;
lean_inc(x_15);
lean_inc(x_16);
x_45 = l_Lean_addMacroScope(x_16, x_44, x_15);
x_46 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29;
lean_inc(x_14);
x_47 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_47, 0, x_14);
lean_ctor_set(x_47, 1, x_46);
lean_ctor_set(x_47, 2, x_45);
lean_ctor_set(x_47, 3, x_21);
x_48 = lean_array_push(x_34, x_47);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_array_push(x_25, x_9);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_27);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31;
lean_inc(x_14);
x_54 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_54, 0, x_14);
lean_ctor_set(x_54, 1, x_53);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34;
lean_inc(x_14);
x_56 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_56, 0, x_14);
lean_ctor_set(x_56, 1, x_55);
x_57 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38;
lean_inc(x_15);
lean_inc(x_16);
x_58 = l_Lean_addMacroScope(x_16, x_57, x_15);
x_59 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37;
lean_inc(x_14);
x_60 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_60, 0, x_14);
lean_ctor_set(x_60, 1, x_59);
lean_ctor_set(x_60, 2, x_58);
lean_ctor_set(x_60, 3, x_21);
x_61 = lean_array_push(x_29, x_56);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_60);
x_63 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_66 = lean_array_push(x_65, x_43);
lean_inc(x_66);
x_67 = lean_array_push(x_66, x_50);
lean_inc(x_52);
x_68 = lean_array_push(x_67, x_52);
lean_inc(x_54);
x_69 = lean_array_push(x_68, x_54);
x_70 = lean_array_push(x_69, x_64);
x_71 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23;
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_70);
x_73 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43;
lean_inc(x_15);
lean_inc(x_16);
x_74 = l_Lean_addMacroScope(x_16, x_73, x_15);
x_75 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42;
lean_inc(x_14);
x_76 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_76, 0, x_14);
lean_ctor_set(x_76, 1, x_75);
lean_ctor_set(x_76, 2, x_74);
lean_ctor_set(x_76, 3, x_21);
x_77 = lean_array_push(x_34, x_76);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_49);
lean_ctor_set(x_78, 1, x_77);
x_79 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47;
x_80 = l_Lean_addMacroScope(x_16, x_79, x_15);
x_81 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46;
x_82 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_82, 0, x_14);
lean_ctor_set(x_82, 1, x_81);
lean_ctor_set(x_82, 2, x_80);
lean_ctor_set(x_82, 3, x_21);
x_83 = lean_array_push(x_61, x_82);
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_63);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_array_push(x_66, x_78);
x_86 = lean_array_push(x_85, x_52);
x_87 = lean_array_push(x_86, x_54);
x_88 = lean_array_push(x_87, x_84);
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_71);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_array_push(x_29, x_72);
x_91 = lean_array_push(x_90, x_89);
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_27);
lean_ctor_set(x_92, 1, x_91);
x_93 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_94 = lean_array_push(x_93, x_41);
x_95 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_96 = lean_array_push(x_94, x_95);
x_97 = lean_array_push(x_96, x_92);
x_98 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20;
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = lean_array_push(x_25, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_27);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_103 = lean_array_push(x_102, x_18);
x_104 = lean_array_push(x_103, x_39);
x_105 = lean_array_push(x_104, x_95);
x_106 = lean_array_push(x_105, x_101);
x_107 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
x_109 = lean_array_push(x_25, x_108);
x_110 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_110, 0, x_27);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_array_push(x_25, x_110);
x_112 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_112);
lean_ctor_set(x_113, 1, x_111);
lean_ctor_set(x_12, 0, x_113);
return x_12;
}
else
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_114 = lean_ctor_get(x_12, 0);
x_115 = lean_ctor_get(x_12, 1);
lean_inc(x_115);
lean_inc(x_114);
lean_dec(x_12);
x_116 = lean_ctor_get(x_2, 2);
lean_inc(x_116);
x_117 = lean_ctor_get(x_2, 1);
lean_inc(x_117);
lean_dec(x_2);
x_118 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
lean_inc(x_114);
x_119 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_119, 0, x_114);
lean_ctor_set(x_119, 1, x_118);
x_120 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
lean_inc(x_116);
lean_inc(x_117);
x_121 = l_Lean_addMacroScope(x_117, x_120, x_116);
x_122 = lean_box(0);
x_123 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11;
x_124 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17;
lean_inc(x_114);
x_125 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_125, 0, x_114);
lean_ctor_set(x_125, 1, x_123);
lean_ctor_set(x_125, 2, x_121);
lean_ctor_set(x_125, 3, x_124);
x_126 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_127 = lean_array_push(x_126, x_11);
x_128 = l_elabVariables___closed__13;
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_128);
lean_ctor_set(x_129, 1, x_127);
x_130 = l_elabVariables___closed__15;
x_131 = lean_array_push(x_130, x_125);
x_132 = lean_array_push(x_131, x_129);
x_133 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18;
x_136 = lean_array_push(x_135, x_134);
x_137 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4;
x_138 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_136);
x_139 = lean_array_push(x_126, x_138);
x_140 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_140, 0, x_128);
lean_ctor_set(x_140, 1, x_139);
x_141 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21;
lean_inc(x_114);
x_142 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_142, 0, x_114);
lean_ctor_set(x_142, 1, x_141);
x_143 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24;
lean_inc(x_114);
x_144 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_144, 0, x_114);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30;
lean_inc(x_116);
lean_inc(x_117);
x_146 = l_Lean_addMacroScope(x_117, x_145, x_116);
x_147 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29;
lean_inc(x_114);
x_148 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_148, 0, x_114);
lean_ctor_set(x_148, 1, x_147);
lean_ctor_set(x_148, 2, x_146);
lean_ctor_set(x_148, 3, x_122);
x_149 = lean_array_push(x_135, x_148);
x_150 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_151 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_151, 0, x_150);
lean_ctor_set(x_151, 1, x_149);
x_152 = lean_array_push(x_126, x_9);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_128);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31;
lean_inc(x_114);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_114);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34;
lean_inc(x_114);
x_157 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_157, 0, x_114);
lean_ctor_set(x_157, 1, x_156);
x_158 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38;
lean_inc(x_116);
lean_inc(x_117);
x_159 = l_Lean_addMacroScope(x_117, x_158, x_116);
x_160 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37;
lean_inc(x_114);
x_161 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_161, 0, x_114);
lean_ctor_set(x_161, 1, x_160);
lean_ctor_set(x_161, 2, x_159);
lean_ctor_set(x_161, 3, x_122);
x_162 = lean_array_push(x_130, x_157);
lean_inc(x_162);
x_163 = lean_array_push(x_162, x_161);
x_164 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33;
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_167 = lean_array_push(x_166, x_144);
lean_inc(x_167);
x_168 = lean_array_push(x_167, x_151);
lean_inc(x_153);
x_169 = lean_array_push(x_168, x_153);
lean_inc(x_155);
x_170 = lean_array_push(x_169, x_155);
x_171 = lean_array_push(x_170, x_165);
x_172 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23;
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_172);
lean_ctor_set(x_173, 1, x_171);
x_174 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43;
lean_inc(x_116);
lean_inc(x_117);
x_175 = l_Lean_addMacroScope(x_117, x_174, x_116);
x_176 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42;
lean_inc(x_114);
x_177 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_177, 0, x_114);
lean_ctor_set(x_177, 1, x_176);
lean_ctor_set(x_177, 2, x_175);
lean_ctor_set(x_177, 3, x_122);
x_178 = lean_array_push(x_135, x_177);
x_179 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_179, 0, x_150);
lean_ctor_set(x_179, 1, x_178);
x_180 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47;
x_181 = l_Lean_addMacroScope(x_117, x_180, x_116);
x_182 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46;
x_183 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_183, 0, x_114);
lean_ctor_set(x_183, 1, x_182);
lean_ctor_set(x_183, 2, x_181);
lean_ctor_set(x_183, 3, x_122);
x_184 = lean_array_push(x_162, x_183);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_164);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_array_push(x_167, x_179);
x_187 = lean_array_push(x_186, x_153);
x_188 = lean_array_push(x_187, x_155);
x_189 = lean_array_push(x_188, x_185);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_172);
lean_ctor_set(x_190, 1, x_189);
x_191 = lean_array_push(x_130, x_173);
x_192 = lean_array_push(x_191, x_190);
x_193 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_193, 0, x_128);
lean_ctor_set(x_193, 1, x_192);
x_194 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_195 = lean_array_push(x_194, x_142);
x_196 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_197 = lean_array_push(x_195, x_196);
x_198 = lean_array_push(x_197, x_193);
x_199 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20;
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_198);
x_201 = lean_array_push(x_126, x_200);
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_128);
lean_ctor_set(x_202, 1, x_201);
x_203 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_204 = lean_array_push(x_203, x_119);
x_205 = lean_array_push(x_204, x_140);
x_206 = lean_array_push(x_205, x_196);
x_207 = lean_array_push(x_206, x_202);
x_208 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2;
x_209 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_209, 0, x_208);
lean_ctor_set(x_209, 1, x_207);
x_210 = lean_array_push(x_126, x_209);
x_211 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_211, 0, x_128);
lean_ctor_set(x_211, 1, x_210);
x_212 = lean_array_push(x_126, x_211);
x_213 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_214 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_214, 0, x_213);
lean_ctor_set(x_214, 1, x_212);
x_215 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_115);
return x_215;
}
}
}
}
static lean_object* _init_l_tacticBy__cases_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticBy_cases_");
return x_1;
}
}
static lean_object* _init_l_tacticBy__cases_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticBy__cases_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticBy__cases_____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticBy__cases_____x3a_____closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases_____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticBy__cases_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticBy__cases_____closed__3;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticBy__cases__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticBy__cases_____closed__4;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("h");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticBy__cases_____closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
lean_inc(x_12);
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_box(0);
x_16 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11;
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
lean_inc(x_12);
x_18 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_18, 0, x_12);
lean_ctor_set(x_18, 1, x_16);
lean_ctor_set(x_18, 2, x_17);
lean_ctor_set(x_18, 3, x_15);
x_19 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_20 = lean_array_push(x_19, x_9);
x_21 = l_elabVariables___closed__13;
x_22 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_20);
x_23 = l_elabVariables___closed__15;
x_24 = lean_array_push(x_23, x_18);
x_25 = lean_array_push(x_24, x_22);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18;
x_29 = lean_array_push(x_28, x_27);
x_30 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4;
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_30);
lean_ctor_set(x_31, 1, x_29);
x_32 = lean_array_push(x_19, x_31);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_21);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21;
lean_inc(x_12);
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_12);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24;
lean_inc(x_12);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_12);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29;
x_39 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30;
lean_inc(x_12);
x_40 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_40, 0, x_12);
lean_ctor_set(x_40, 1, x_38);
lean_ctor_set(x_40, 2, x_39);
lean_ctor_set(x_40, 3, x_15);
x_41 = lean_array_push(x_28, x_40);
x_42 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_43 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set(x_43, 1, x_41);
x_44 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3;
x_45 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4;
lean_inc(x_12);
x_46 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_46, 0, x_12);
lean_ctor_set(x_46, 1, x_44);
lean_ctor_set(x_46, 2, x_45);
lean_ctor_set(x_46, 3, x_15);
x_47 = lean_array_push(x_19, x_46);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_21);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31;
lean_inc(x_12);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_12);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34;
lean_inc(x_12);
x_52 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_52, 0, x_12);
lean_ctor_set(x_52, 1, x_51);
x_53 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37;
x_54 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38;
lean_inc(x_12);
x_55 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_55, 0, x_12);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_55, 2, x_54);
lean_ctor_set(x_55, 3, x_15);
x_56 = lean_array_push(x_23, x_52);
lean_inc(x_56);
x_57 = lean_array_push(x_56, x_55);
x_58 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33;
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_61 = lean_array_push(x_60, x_37);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_43);
lean_inc(x_48);
x_63 = lean_array_push(x_62, x_48);
lean_inc(x_50);
x_64 = lean_array_push(x_63, x_50);
x_65 = lean_array_push(x_64, x_59);
x_66 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42;
x_69 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43;
lean_inc(x_12);
x_70 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_70, 0, x_12);
lean_ctor_set(x_70, 1, x_68);
lean_ctor_set(x_70, 2, x_69);
lean_ctor_set(x_70, 3, x_15);
x_71 = lean_array_push(x_28, x_70);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_42);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46;
x_74 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47;
x_75 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_75, 0, x_12);
lean_ctor_set(x_75, 1, x_73);
lean_ctor_set(x_75, 2, x_74);
lean_ctor_set(x_75, 3, x_15);
x_76 = lean_array_push(x_56, x_75);
x_77 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_77, 0, x_58);
lean_ctor_set(x_77, 1, x_76);
x_78 = lean_array_push(x_61, x_72);
x_79 = lean_array_push(x_78, x_48);
x_80 = lean_array_push(x_79, x_50);
x_81 = lean_array_push(x_80, x_77);
x_82 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_82, 0, x_66);
lean_ctor_set(x_82, 1, x_81);
x_83 = lean_array_push(x_23, x_67);
x_84 = lean_array_push(x_83, x_82);
x_85 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_85, 0, x_21);
lean_ctor_set(x_85, 1, x_84);
x_86 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_87 = lean_array_push(x_86, x_35);
x_88 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_89 = lean_array_push(x_87, x_88);
x_90 = lean_array_push(x_89, x_85);
x_91 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20;
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
x_93 = lean_array_push(x_19, x_92);
x_94 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_94, 0, x_21);
lean_ctor_set(x_94, 1, x_93);
x_95 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_96 = lean_array_push(x_95, x_14);
x_97 = lean_array_push(x_96, x_33);
x_98 = lean_array_push(x_97, x_88);
x_99 = lean_array_push(x_98, x_94);
x_100 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2;
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_99);
x_102 = lean_array_push(x_19, x_101);
x_103 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_103, 0, x_21);
lean_ctor_set(x_103, 1, x_102);
x_104 = lean_array_push(x_19, x_103);
x_105 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_106 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_106, 0, x_105);
lean_ctor_set(x_106, 1, x_104);
lean_ctor_set(x_10, 0, x_106);
return x_10;
}
else
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; 
x_107 = lean_ctor_get(x_10, 0);
x_108 = lean_ctor_get(x_10, 1);
lean_inc(x_108);
lean_inc(x_107);
lean_dec(x_10);
x_109 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1;
lean_inc(x_107);
x_110 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_110, 0, x_107);
lean_ctor_set(x_110, 1, x_109);
x_111 = lean_box(0);
x_112 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11;
x_113 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15;
lean_inc(x_107);
x_114 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_114, 0, x_107);
lean_ctor_set(x_114, 1, x_112);
lean_ctor_set(x_114, 2, x_113);
lean_ctor_set(x_114, 3, x_111);
x_115 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_116 = lean_array_push(x_115, x_9);
x_117 = l_elabVariables___closed__13;
x_118 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_118, 0, x_117);
lean_ctor_set(x_118, 1, x_116);
x_119 = l_elabVariables___closed__15;
x_120 = lean_array_push(x_119, x_114);
x_121 = lean_array_push(x_120, x_118);
x_122 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18;
x_125 = lean_array_push(x_124, x_123);
x_126 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4;
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_126);
lean_ctor_set(x_127, 1, x_125);
x_128 = lean_array_push(x_115, x_127);
x_129 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_129, 0, x_117);
lean_ctor_set(x_129, 1, x_128);
x_130 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21;
lean_inc(x_107);
x_131 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_131, 0, x_107);
lean_ctor_set(x_131, 1, x_130);
x_132 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24;
lean_inc(x_107);
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_107);
lean_ctor_set(x_133, 1, x_132);
x_134 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29;
x_135 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30;
lean_inc(x_107);
x_136 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_136, 0, x_107);
lean_ctor_set(x_136, 1, x_134);
lean_ctor_set(x_136, 2, x_135);
lean_ctor_set(x_136, 3, x_111);
x_137 = lean_array_push(x_124, x_136);
x_138 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3;
x_141 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4;
lean_inc(x_107);
x_142 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_142, 0, x_107);
lean_ctor_set(x_142, 1, x_140);
lean_ctor_set(x_142, 2, x_141);
lean_ctor_set(x_142, 3, x_111);
x_143 = lean_array_push(x_115, x_142);
x_144 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_144, 0, x_117);
lean_ctor_set(x_144, 1, x_143);
x_145 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31;
lean_inc(x_107);
x_146 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_146, 0, x_107);
lean_ctor_set(x_146, 1, x_145);
x_147 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34;
lean_inc(x_107);
x_148 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_148, 0, x_107);
lean_ctor_set(x_148, 1, x_147);
x_149 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37;
x_150 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38;
lean_inc(x_107);
x_151 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_151, 0, x_107);
lean_ctor_set(x_151, 1, x_149);
lean_ctor_set(x_151, 2, x_150);
lean_ctor_set(x_151, 3, x_111);
x_152 = lean_array_push(x_119, x_148);
lean_inc(x_152);
x_153 = lean_array_push(x_152, x_151);
x_154 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33;
x_155 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_155, 0, x_154);
lean_ctor_set(x_155, 1, x_153);
x_156 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_157 = lean_array_push(x_156, x_133);
lean_inc(x_157);
x_158 = lean_array_push(x_157, x_139);
lean_inc(x_144);
x_159 = lean_array_push(x_158, x_144);
lean_inc(x_146);
x_160 = lean_array_push(x_159, x_146);
x_161 = lean_array_push(x_160, x_155);
x_162 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23;
x_163 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_163, 0, x_162);
lean_ctor_set(x_163, 1, x_161);
x_164 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42;
x_165 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43;
lean_inc(x_107);
x_166 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_166, 0, x_107);
lean_ctor_set(x_166, 1, x_164);
lean_ctor_set(x_166, 2, x_165);
lean_ctor_set(x_166, 3, x_111);
x_167 = lean_array_push(x_124, x_166);
x_168 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_168, 0, x_138);
lean_ctor_set(x_168, 1, x_167);
x_169 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46;
x_170 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47;
x_171 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_171, 0, x_107);
lean_ctor_set(x_171, 1, x_169);
lean_ctor_set(x_171, 2, x_170);
lean_ctor_set(x_171, 3, x_111);
x_172 = lean_array_push(x_152, x_171);
x_173 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_173, 0, x_154);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_array_push(x_157, x_168);
x_175 = lean_array_push(x_174, x_144);
x_176 = lean_array_push(x_175, x_146);
x_177 = lean_array_push(x_176, x_173);
x_178 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_178, 0, x_162);
lean_ctor_set(x_178, 1, x_177);
x_179 = lean_array_push(x_119, x_163);
x_180 = lean_array_push(x_179, x_178);
x_181 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_181, 0, x_117);
lean_ctor_set(x_181, 1, x_180);
x_182 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_183 = lean_array_push(x_182, x_131);
x_184 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_185 = lean_array_push(x_183, x_184);
x_186 = lean_array_push(x_185, x_181);
x_187 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20;
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
x_189 = lean_array_push(x_115, x_188);
x_190 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_190, 0, x_117);
lean_ctor_set(x_190, 1, x_189);
x_191 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5;
x_192 = lean_array_push(x_191, x_110);
x_193 = lean_array_push(x_192, x_129);
x_194 = lean_array_push(x_193, x_184);
x_195 = lean_array_push(x_194, x_190);
x_196 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2;
x_197 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_197, 0, x_196);
lean_ctor_set(x_197, 1, x_195);
x_198 = lean_array_push(x_115, x_197);
x_199 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_199, 0, x_117);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_array_push(x_115, x_199);
x_201 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
x_203 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_203, 0, x_202);
lean_ctor_set(x_203, 1, x_108);
return x_203;
}
}
}
}
static lean_object* _init_l_tacticTransitivity_______closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticTransitivity__");
return x_1;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticTransitivity_______closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("transitivity");
return x_1;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticTransitivity_______closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("colGt");
return x_1;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticTransitivity_______closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticTransitivity_______closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticTransitivity_______closed__7;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__7;
x_2 = l_tacticTransitivity_______closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticTransitivity_______closed__4;
x_3 = l_tacticTransitivity_______closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticTransitivity_______closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticTransitivity_______closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticTransitivity_______closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticTransitivity____() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticTransitivity_______closed__11;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Nat.le_trans");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Nat");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("le_trans");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("namedArgument");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("(");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("m");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(":=");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(")");
return x_1;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticTransitivity_______closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = l_Lean_Syntax_getArg(x_9, x_11);
lean_dec(x_9);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_19);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_box(0);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3;
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7;
lean_inc(x_19);
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
lean_ctor_set(x_25, 3, x_22);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_19);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13;
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14;
lean_inc(x_19);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_22);
x_31 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15;
lean_inc(x_19);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_36 = lean_array_push(x_35, x_27);
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_32);
x_39 = lean_array_push(x_38, x_16);
x_40 = lean_array_push(x_39, x_34);
x_41 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_44 = lean_array_push(x_43, x_42);
x_45 = l_elabVariables___closed__13;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_elabVariables___closed__15;
x_48 = lean_array_push(x_47, x_25);
x_49 = lean_array_push(x_48, x_46);
x_50 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_array_push(x_47, x_21);
x_53 = lean_array_push(x_52, x_51);
x_54 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_17, 0, x_55);
return x_17;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_56 = lean_ctor_get(x_17, 0);
x_57 = lean_ctor_get(x_17, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_17);
x_58 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_56);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_box(0);
x_61 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3;
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7;
lean_inc(x_56);
x_63 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_62);
lean_ctor_set(x_63, 3, x_60);
x_64 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_56);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13;
x_67 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14;
lean_inc(x_56);
x_68 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_68, 0, x_56);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_67);
lean_ctor_set(x_68, 3, x_60);
x_69 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15;
lean_inc(x_56);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_56);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_74 = lean_array_push(x_73, x_65);
x_75 = lean_array_push(x_74, x_68);
x_76 = lean_array_push(x_75, x_70);
x_77 = lean_array_push(x_76, x_16);
x_78 = lean_array_push(x_77, x_72);
x_79 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_82 = lean_array_push(x_81, x_80);
x_83 = l_elabVariables___closed__13;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = l_elabVariables___closed__15;
x_86 = lean_array_push(x_85, x_63);
x_87 = lean_array_push(x_86, x_84);
x_88 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = lean_array_push(x_85, x_59);
x_91 = lean_array_push(x_90, x_89);
x_92 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_57);
return x_94;
}
}
}
else
{
lean_object* x_95; uint8_t x_96; 
lean_dec(x_9);
x_95 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_97);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_box(0);
x_101 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3;
x_102 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7;
x_103 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_103, 0, x_97);
lean_ctor_set(x_103, 1, x_101);
lean_ctor_set(x_103, 2, x_102);
lean_ctor_set(x_103, 3, x_100);
x_104 = l_elabVariables___closed__15;
x_105 = lean_array_push(x_104, x_99);
x_106 = lean_array_push(x_105, x_103);
x_107 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
lean_ctor_set(x_95, 0, x_108);
return x_95;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_109 = lean_ctor_get(x_95, 0);
x_110 = lean_ctor_get(x_95, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_95);
x_111 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_109);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_box(0);
x_114 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3;
x_115 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7;
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_109);
lean_ctor_set(x_116, 1, x_114);
lean_ctor_set(x_116, 2, x_115);
lean_ctor_set(x_116, 3, x_113);
x_117 = l_elabVariables___closed__15;
x_118 = lean_array_push(x_117, x_112);
x_119 = lean_array_push(x_118, x_116);
x_120 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_110);
return x_122;
}
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Nat.lt_trans");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("lt_trans");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticTransitivity_______closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = l_Lean_Syntax_getArg(x_9, x_11);
lean_dec(x_9);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_19);
x_21 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_box(0);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3;
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5;
lean_inc(x_19);
x_25 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_23);
lean_ctor_set(x_25, 2, x_24);
lean_ctor_set(x_25, 3, x_22);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_19);
x_27 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13;
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14;
lean_inc(x_19);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_29);
lean_ctor_set(x_30, 3, x_22);
x_31 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15;
lean_inc(x_19);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_34 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_34, 0, x_19);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_36 = lean_array_push(x_35, x_27);
x_37 = lean_array_push(x_36, x_30);
x_38 = lean_array_push(x_37, x_32);
x_39 = lean_array_push(x_38, x_16);
x_40 = lean_array_push(x_39, x_34);
x_41 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
x_43 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_44 = lean_array_push(x_43, x_42);
x_45 = l_elabVariables___closed__13;
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_45);
lean_ctor_set(x_46, 1, x_44);
x_47 = l_elabVariables___closed__15;
x_48 = lean_array_push(x_47, x_25);
x_49 = lean_array_push(x_48, x_46);
x_50 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_49);
x_52 = lean_array_push(x_47, x_21);
x_53 = lean_array_push(x_52, x_51);
x_54 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_55 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_53);
lean_ctor_set(x_17, 0, x_55);
return x_17;
}
else
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_56 = lean_ctor_get(x_17, 0);
x_57 = lean_ctor_get(x_17, 1);
lean_inc(x_57);
lean_inc(x_56);
lean_dec(x_17);
x_58 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_56);
x_59 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_59, 0, x_56);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_box(0);
x_61 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3;
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5;
lean_inc(x_56);
x_63 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_63, 0, x_56);
lean_ctor_set(x_63, 1, x_61);
lean_ctor_set(x_63, 2, x_62);
lean_ctor_set(x_63, 3, x_60);
x_64 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_56);
x_65 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_65, 0, x_56);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13;
x_67 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14;
lean_inc(x_56);
x_68 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_68, 0, x_56);
lean_ctor_set(x_68, 1, x_66);
lean_ctor_set(x_68, 2, x_67);
lean_ctor_set(x_68, 3, x_60);
x_69 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15;
lean_inc(x_56);
x_70 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_70, 0, x_56);
lean_ctor_set(x_70, 1, x_69);
x_71 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_72 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_72, 0, x_56);
lean_ctor_set(x_72, 1, x_71);
x_73 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_74 = lean_array_push(x_73, x_65);
x_75 = lean_array_push(x_74, x_68);
x_76 = lean_array_push(x_75, x_70);
x_77 = lean_array_push(x_76, x_16);
x_78 = lean_array_push(x_77, x_72);
x_79 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9;
x_80 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_78);
x_81 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_82 = lean_array_push(x_81, x_80);
x_83 = l_elabVariables___closed__13;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = l_elabVariables___closed__15;
x_86 = lean_array_push(x_85, x_63);
x_87 = lean_array_push(x_86, x_84);
x_88 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_89 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_89, 0, x_88);
lean_ctor_set(x_89, 1, x_87);
x_90 = lean_array_push(x_85, x_59);
x_91 = lean_array_push(x_90, x_89);
x_92 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_93 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_93, 0, x_92);
lean_ctor_set(x_93, 1, x_91);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_93);
lean_ctor_set(x_94, 1, x_57);
return x_94;
}
}
}
else
{
lean_object* x_95; uint8_t x_96; 
lean_dec(x_9);
x_95 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_96 = !lean_is_exclusive(x_95);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_97 = lean_ctor_get(x_95, 0);
x_98 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_97);
x_99 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_99, 0, x_97);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_box(0);
x_101 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3;
x_102 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5;
x_103 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_103, 0, x_97);
lean_ctor_set(x_103, 1, x_101);
lean_ctor_set(x_103, 2, x_102);
lean_ctor_set(x_103, 3, x_100);
x_104 = l_elabVariables___closed__15;
x_105 = lean_array_push(x_104, x_99);
x_106 = lean_array_push(x_105, x_103);
x_107 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_107);
lean_ctor_set(x_108, 1, x_106);
lean_ctor_set(x_95, 0, x_108);
return x_95;
}
else
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_109 = lean_ctor_get(x_95, 0);
x_110 = lean_ctor_get(x_95, 1);
lean_inc(x_110);
lean_inc(x_109);
lean_dec(x_95);
x_111 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_109);
x_112 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_112, 0, x_109);
lean_ctor_set(x_112, 1, x_111);
x_113 = lean_box(0);
x_114 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3;
x_115 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5;
x_116 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_116, 0, x_109);
lean_ctor_set(x_116, 1, x_114);
lean_ctor_set(x_116, 2, x_115);
lean_ctor_set(x_116, 3, x_113);
x_117 = l_elabVariables___closed__15;
x_118 = lean_array_push(x_117, x_112);
x_119 = lean_array_push(x_118, x_116);
x_120 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_121 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_121, 0, x_120);
lean_ctor_set(x_121, 1, x_119);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_110);
return x_122;
}
}
}
}
}
static lean_object* _init_l_introv___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("introv");
return x_1;
}
}
static lean_object* _init_l_introv___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_introv___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_introv___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("introv ");
return x_1;
}
}
static lean_object* _init_l_introv___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_introv___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_introv___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticTransitivity_______closed__7;
x_3 = l_tacticBy__cases_____x3a_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_introv___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_variables___closed__7;
x_2 = l_introv___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_introv___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_introv___closed__4;
x_3 = l_introv___closed__6;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_introv___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_introv___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_introv___closed__7;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_introv() {
_start:
{
lean_object* x_1; 
x_1 = l_introv___closed__8;
return x_1;
}
}
lean_object* l_evalIntrov_introsDep_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 7)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; uint64_t x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get_uint64(x_1, sizeof(void*)*3);
lean_dec(x_1);
x_8 = lean_box_uint64(x_7);
x_9 = lean_apply_4(x_2, x_4, x_5, x_6, x_8);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_1);
return x_10;
}
}
}
lean_object* l_evalIntrov_introsDep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_evalIntrov_introsDep_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_evalIntrov_intro1PStep_match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_evalIntrov_intro1PStep_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_evalIntrov_intro1PStep_match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_evalIntrov_intro1PStep___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainGoal(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_14 = l_Lean_Meta_intro1Core(x_11, x_13, x_5, x_6, x_7, x_8, x_12);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = l_Lean_Elab_Tactic_replaceMainGoal(x_19, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_16);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; 
x_22 = lean_ctor_get(x_20, 0);
lean_dec(x_22);
x_23 = lean_box(0);
lean_ctor_set(x_20, 0, x_23);
return x_20;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_dec(x_20);
x_25 = lean_box(0);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
return x_26;
}
}
else
{
uint8_t x_27; 
x_27 = !lean_is_exclusive(x_20);
if (x_27 == 0)
{
return x_20;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_20, 0);
x_29 = lean_ctor_get(x_20, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_20);
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
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_31 = !lean_is_exclusive(x_14);
if (x_31 == 0)
{
return x_14;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_32 = lean_ctor_get(x_14, 0);
x_33 = lean_ctor_get(x_14, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_14);
x_34 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
return x_34;
}
}
}
else
{
uint8_t x_35; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = !lean_is_exclusive(x_10);
if (x_35 == 0)
{
return x_10;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_36 = lean_ctor_get(x_10, 0);
x_37 = lean_ctor_get(x_10, 1);
lean_inc(x_37);
lean_inc(x_36);
lean_dec(x_10);
x_38 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
}
}
static lean_object* _init_l_evalIntrov_intro1PStep___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_evalIntrov_intro1PStep___lambda__1), 9, 0);
return x_1;
}
}
lean_object* l_evalIntrov_intro1PStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; lean_object* x_11; 
x_10 = l_evalIntrov_intro1PStep___closed__1;
x_11 = l_Lean_Elab_Tactic_withMainContext___rarg(x_10, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
return x_11;
}
}
lean_object* l_evalIntrov_introsDep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_10 = l_Lean_Elab_Tactic_getMainTarget(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 7)
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_10);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_ctor_get(x_10, 0);
lean_dec(x_14);
x_15 = lean_ctor_get(x_11, 2);
lean_inc(x_15);
lean_dec(x_11);
x_16 = l_Lean_Expr_hasLooseBVars(x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_17 = lean_box(0);
lean_ctor_set(x_10, 0, x_17);
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; 
lean_free_object(x_10);
x_18 = l_evalIntrov_intro1PStep___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_19 = l_Lean_Elab_Tactic_withMainContext___rarg(x_18, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; 
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
lean_dec(x_19);
x_9 = x_20;
goto _start;
}
else
{
uint8_t x_22; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_22 = !lean_is_exclusive(x_19);
if (x_22 == 0)
{
return x_19;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_19, 0);
x_24 = lean_ctor_get(x_19, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_19);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
else
{
lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_26 = lean_ctor_get(x_10, 1);
lean_inc(x_26);
lean_dec(x_10);
x_27 = lean_ctor_get(x_11, 2);
lean_inc(x_27);
lean_dec(x_11);
x_28 = l_Lean_Expr_hasLooseBVars(x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_29 = lean_box(0);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_26);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; 
x_31 = l_evalIntrov_intro1PStep___closed__1;
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
lean_inc(x_1);
x_32 = l_Lean_Elab_Tactic_withMainContext___rarg(x_31, x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_26);
if (lean_obj_tag(x_32) == 0)
{
lean_object* x_33; 
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
lean_dec(x_32);
x_9 = x_33;
goto _start;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_35 = lean_ctor_get(x_32, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_32, 1);
lean_inc(x_36);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_37 = x_32;
} else {
 lean_dec_ref(x_32);
 x_37 = lean_box(0);
}
if (lean_is_scalar(x_37)) {
 x_38 = lean_alloc_ctor(1, 2, 0);
} else {
 x_38 = x_37;
}
lean_ctor_set(x_38, 0, x_35);
lean_ctor_set(x_38, 1, x_36);
return x_38;
}
}
}
}
else
{
uint8_t x_39; 
lean_dec(x_11);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_39 = !lean_is_exclusive(x_10);
if (x_39 == 0)
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_10, 0);
lean_dec(x_40);
x_41 = lean_box(0);
lean_ctor_set(x_10, 0, x_41);
return x_10;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_10, 1);
lean_inc(x_42);
lean_dec(x_10);
x_43 = lean_box(0);
x_44 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
return x_44;
}
}
}
else
{
uint8_t x_45; 
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_45 = !lean_is_exclusive(x_10);
if (x_45 == 0)
{
return x_10;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_10, 0);
x_47 = lean_ctor_get(x_10, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_10);
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
return x_48;
}
}
}
}
static lean_object* _init_l_evalIntrov___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("intro");
return x_1;
}
}
static lean_object* _init_l_evalIntrov___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_evalIntrov___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_evalIntrov(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_introv___closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_nullKind;
x_17 = lean_unsigned_to_nat(0u);
lean_inc(x_15);
x_18 = l_Lean_Syntax_isNodeOf(x_15, x_16, x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_Syntax_getNumArgs(x_15);
x_20 = lean_nat_dec_le(x_14, x_19);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_22 = l_Lean_Syntax_getArg(x_15, x_17);
x_23 = l_tacticBy__cases_____x3a_____closed__6;
lean_inc(x_22);
x_24 = l_Lean_Syntax_isOfKind(x_22, x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_19);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_25 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_25;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_26 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_27 = lean_nat_sub(x_19, x_17);
lean_dec(x_19);
x_28 = l_Array_extract___rarg(x_26, x_14, x_27);
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_16);
lean_ctor_set(x_29, 1, x_28);
x_30 = l_Lean_Syntax_getArgs(x_29);
lean_dec(x_29);
lean_inc(x_8);
x_31 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(x_8, x_9, x_10);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 1);
lean_inc(x_33);
lean_dec(x_31);
x_34 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_33);
x_35 = lean_ctor_get(x_34, 1);
lean_inc(x_35);
lean_dec(x_34);
x_36 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_35);
x_37 = lean_ctor_get(x_36, 1);
lean_inc(x_37);
lean_dec(x_36);
x_38 = l_introv___closed__1;
lean_inc(x_32);
x_39 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_39, 0, x_32);
lean_ctor_set(x_39, 1, x_38);
x_40 = l_elabVariables___closed__15;
x_41 = lean_array_push(x_40, x_39);
x_42 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
lean_inc(x_41);
x_43 = lean_array_push(x_41, x_42);
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_11);
lean_ctor_set(x_44, 1, x_43);
x_45 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_32);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_32);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_evalIntrov___closed__1;
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_32);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_50 = lean_array_push(x_49, x_22);
x_51 = l_elabVariables___closed__13;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = lean_array_push(x_40, x_48);
x_54 = lean_array_push(x_53, x_52);
x_55 = l_evalIntrov___closed__2;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_elabVariables___closed__14;
x_58 = l_Array_append___rarg(x_57, x_30);
x_59 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_59, 0, x_51);
lean_ctor_set(x_59, 1, x_58);
x_60 = lean_array_push(x_41, x_59);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_11);
lean_ctor_set(x_61, 1, x_60);
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39;
x_63 = lean_array_push(x_62, x_44);
lean_inc(x_46);
x_64 = lean_array_push(x_63, x_46);
x_65 = lean_array_push(x_64, x_56);
x_66 = lean_array_push(x_65, x_46);
x_67 = lean_array_push(x_66, x_61);
x_68 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_68, 0, x_51);
lean_ctor_set(x_68, 1, x_67);
x_69 = lean_array_push(x_49, x_68);
x_70 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = l_Lean_Elab_Tactic_evalTacticAux(x_71, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_37);
return x_72;
}
}
}
else
{
lean_object* x_73; 
lean_dec(x_15);
x_73 = l_evalIntrov_introsDep(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_73;
}
}
}
}
static lean_object* _init_l_tacticAssumption_x27___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticAssumption'");
return x_1;
}
}
static lean_object* _init_l_tacticAssumption_x27___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticAssumption_x27___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticAssumption_x27___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("assumption'");
return x_1;
}
}
static lean_object* _init_l_tacticAssumption_x27___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticAssumption_x27___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticAssumption_x27___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticAssumption_x27___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticAssumption_x27___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticAssumption_x27() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticAssumption_x27___closed__5;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("allGoals");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeq");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSeq1Indented");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticAssumption_x27___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_16 = lean_array_push(x_15, x_14);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_elabVariables___closed__15;
x_20 = lean_array_push(x_19, x_18);
x_21 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_22 = lean_array_push(x_20, x_21);
x_23 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_22);
x_25 = lean_array_push(x_15, x_24);
x_26 = l_elabVariables___closed__13;
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_25);
x_28 = lean_array_push(x_15, x_27);
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = lean_array_push(x_15, x_30);
x_32 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_31);
x_34 = lean_array_push(x_19, x_12);
x_35 = lean_array_push(x_34, x_33);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2;
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_35);
x_38 = lean_array_push(x_15, x_37);
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_26);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_array_push(x_15, x_39);
x_41 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_42 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_40);
lean_ctor_set(x_8, 0, x_42);
return x_8;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_43 = lean_ctor_get(x_8, 0);
x_44 = lean_ctor_get(x_8, 1);
lean_inc(x_44);
lean_inc(x_43);
lean_dec(x_8);
x_45 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1;
lean_inc(x_43);
x_46 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4;
x_48 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_50 = lean_array_push(x_49, x_48);
x_51 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7;
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_51);
lean_ctor_set(x_52, 1, x_50);
x_53 = l_elabVariables___closed__15;
x_54 = lean_array_push(x_53, x_52);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_56 = lean_array_push(x_54, x_55);
x_57 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_56);
x_59 = lean_array_push(x_49, x_58);
x_60 = l_elabVariables___closed__13;
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_59);
x_62 = lean_array_push(x_49, x_61);
x_63 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_array_push(x_49, x_64);
x_66 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = lean_array_push(x_53, x_46);
x_69 = lean_array_push(x_68, x_67);
x_70 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_array_push(x_49, x_71);
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_60);
lean_ctor_set(x_73, 1, x_72);
x_74 = lean_array_push(x_49, x_73);
x_75 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_76 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_74);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_44);
return x_77;
}
}
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticExacts[_,,]");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("exacts");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("[");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__5;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__4;
x_3 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__6;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(", ");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__8;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(",");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; uint8_t x_4; lean_object* x_5; 
x_1 = l_tacticBy__cases_____x3a_____closed__14;
x_2 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__10;
x_3 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__9;
x_4 = 0;
x_5 = lean_alloc_ctor(10, 3, 1);
lean_ctor_set(x_5, 0, x_1);
lean_ctor_set(x_5, 1, x_2);
lean_ctor_set(x_5, 2, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*3, x_4);
return x_5;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__7;
x_3 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__11;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("]");
return x_1;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__13;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__12;
x_3 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__16() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__15;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticExacts_x5b___x2c_x2c_x5d() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__16;
return x_1;
}
}
lean_object* l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1(lean_object* x_1, size_t x_2, size_t x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
uint8_t x_14; 
x_14 = x_3 < x_2;
if (x_14 == 0)
{
lean_object* x_15; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_4);
lean_ctor_set(x_15, 1, x_13);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
lean_dec(x_4);
x_16 = lean_array_uget(x_1, x_3);
lean_inc(x_11);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(x_11, x_12, x_13);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = l_Lean_Elab_Term_getCurrMacroScope(x_7, x_8, x_9, x_10, x_11, x_12, x_19);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
lean_dec(x_20);
x_22 = l_Lean_Elab_Term_getMainModule___rarg(x_12, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_18);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_elabVariables___closed__15;
x_27 = lean_array_push(x_26, x_25);
x_28 = lean_array_push(x_27, x_16);
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
x_31 = l_Lean_Elab_Tactic_evalTacticAux(x_30, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_23);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; size_t x_33; size_t x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
lean_dec(x_31);
x_33 = 1;
x_34 = x_3 + x_33;
x_35 = lean_box(0);
x_3 = x_34;
x_4 = x_35;
x_13 = x_32;
goto _start;
}
else
{
uint8_t x_37; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_31);
if (x_37 == 0)
{
return x_31;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_31, 0);
x_39 = lean_ctor_get(x_31, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_31);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("done");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticExacts_x5b___x2c_x2c_x5d___closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_unsigned_to_nat(2u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_getArgs(x_15);
lean_dec(x_15);
x_17 = l_Lean_Syntax_SepArray_getElems___rarg(x_16);
lean_dec(x_16);
x_18 = lean_array_get_size(x_17);
x_19 = lean_usize_of_nat(x_18);
lean_dec(x_18);
x_20 = 0;
x_21 = lean_box(0);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_22 = l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1(x_17, x_19, x_20, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_17);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
lean_inc(x_8);
x_24 = l_Lean_MonadRef_mkInfoFromRefPos___at_Lean_Elab_Tactic_evalIntro___spec__1___rarg(x_8, x_9, x_23);
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_24, 1);
lean_inc(x_26);
lean_dec(x_24);
x_27 = l_Lean_Elab_Term_getCurrMacroScope(x_4, x_5, x_6, x_7, x_8, x_9, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_29 = l_Lean_Elab_Term_getMainModule___rarg(x_9, x_28);
x_30 = lean_ctor_get(x_29, 1);
lean_inc(x_30);
lean_dec(x_29);
x_31 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1;
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = l_Lean_Elab_Tactic_evalTacticAux(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_30);
return x_37;
}
else
{
uint8_t x_38; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_38 = !lean_is_exclusive(x_22);
if (x_38 == 0)
{
return x_22;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_22, 0);
x_40 = lean_ctor_get(x_22, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_22);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
}
}
}
lean_object* l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
size_t x_14; size_t x_15; lean_object* x_16; 
x_14 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_15 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_16 = l_Array_forInUnsafe_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____spec__1(x_1, x_14, x_15, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_1);
return x_16;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticGuardExprEq_:=_");
return x_1;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticGuardExprEq___x3a_x3d_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("guardExprEq ");
return x_1;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticGuardExprEq___x3a_x3d_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticGuardExprEq___x3a_x3d_____closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" := ");
return x_1;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticGuardExprEq___x3a_x3d_____closed__6;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticGuardExprEq___x3a_x3d_____closed__5;
x_3 = l_tacticGuardExprEq___x3a_x3d_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticGuardExprEq___x3a_x3d_____closed__8;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d_____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticGuardExprEq___x3a_x3d_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticGuardExprEq___x3a_x3d_____closed__9;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardExprEq___x3a_x3d__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticGuardExprEq___x3a_x3d_____closed__10;
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed: ");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" != ");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticGuardExprEq___x3a_x3d_____closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; lean_object* x_20; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(3u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = lean_box(0);
x_19 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_20 = l_Lean_Elab_Tactic_elabTerm(x_15, x_18, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec(x_20);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_23 = l_Lean_Elab_Tactic_elabTerm(x_17, x_18, x_19, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_22);
if (lean_obj_tag(x_23) == 0)
{
uint8_t x_24; 
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
x_27 = lean_expr_eqv(x_21, x_25);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_free_object(x_23);
x_28 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_28, 0, x_21);
x_29 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_25);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_36, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_26);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_37;
}
else
{
lean_object* x_38; 
lean_dec(x_25);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_38 = lean_box(0);
lean_ctor_set(x_23, 0, x_38);
return x_23;
}
}
else
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_ctor_get(x_23, 0);
x_40 = lean_ctor_get(x_23, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_23);
x_41 = lean_expr_eqv(x_21, x_39);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_42 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_42, 0, x_21);
x_43 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_39);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_50, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_40);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
return x_51;
}
else
{
lean_object* x_52; lean_object* x_53; 
lean_dec(x_39);
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_52 = lean_box(0);
x_53 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_40);
return x_53;
}
}
}
else
{
uint8_t x_54; 
lean_dec(x_21);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_54 = !lean_is_exclusive(x_23);
if (x_54 == 0)
{
return x_23;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_23, 0);
x_56 = lean_ctor_get(x_23, 1);
lean_inc(x_56);
lean_inc(x_55);
lean_dec(x_23);
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
lean_dec(x_17);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_58 = !lean_is_exclusive(x_20);
if (x_58 == 0)
{
return x_20;
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_20, 0);
x_60 = lean_ctor_get(x_20, 1);
lean_inc(x_60);
lean_inc(x_59);
lean_dec(x_20);
x_61 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
return x_61;
}
}
}
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699_(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticGuardTarget_");
return x_1;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticGuardTarget_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("guardTarget");
return x_1;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticGuardTarget_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticGuardTarget_____closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardTarget_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticGuardTarget_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticGuardTarget_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticGuardTarget__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticGuardTarget_____closed__6;
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("target of main goal is ");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticGuardTarget_____closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_box(0);
x_17 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_18 = l_Lean_Elab_Tactic_elabTerm(x_15, x_16, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_18) == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_Lean_Elab_Tactic_getMainTarget(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_20);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_23 = lean_ctor_get(x_21, 0);
x_24 = lean_ctor_get(x_21, 1);
x_25 = l_Lean_Expr_consumeMData(x_23);
lean_dec(x_23);
x_26 = lean_expr_eqv(x_19, x_25);
lean_dec(x_19);
if (x_26 == 0)
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
lean_free_object(x_21);
x_27 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_27, 0, x_25);
x_28 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2;
x_29 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
x_30 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_31 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_31, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_24);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_32;
}
else
{
lean_object* x_33; 
lean_dec(x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_33 = lean_box(0);
lean_ctor_set(x_21, 0, x_33);
return x_21;
}
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_34 = lean_ctor_get(x_21, 0);
x_35 = lean_ctor_get(x_21, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_21);
x_36 = l_Lean_Expr_consumeMData(x_34);
lean_dec(x_34);
x_37 = lean_expr_eqv(x_19, x_36);
lean_dec(x_19);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_38 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_38, 0, x_36);
x_39 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2;
x_40 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_40, 0, x_39);
lean_ctor_set(x_40, 1, x_38);
x_41 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_42 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_42, 0, x_40);
lean_ctor_set(x_42, 1, x_41);
x_43 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_42, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_35);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_43;
}
else
{
lean_object* x_44; lean_object* x_45; 
lean_dec(x_36);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_44 = lean_box(0);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_35);
return x_45;
}
}
}
else
{
uint8_t x_46; 
lean_dec(x_19);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_46 = !lean_is_exclusive(x_21);
if (x_46 == 0)
{
return x_21;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_47 = lean_ctor_get(x_21, 0);
x_48 = lean_ctor_get(x_21, 1);
lean_inc(x_48);
lean_inc(x_47);
lean_dec(x_21);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_48);
return x_49;
}
}
}
else
{
uint8_t x_50; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_50 = !lean_is_exclusive(x_18);
if (x_50 == 0)
{
return x_18;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_51 = lean_ctor_get(x_18, 0);
x_52 = lean_ctor_get(x_18, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_18);
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_51);
lean_ctor_set(x_53, 1, x_52);
return x_53;
}
}
}
}
}
static lean_object* _init_l_guardHyp___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("guardHyp");
return x_1;
}
}
static lean_object* _init_l_guardHyp___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_guardHyp___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_guardHyp___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("guardHyp ");
return x_1;
}
}
static lean_object* _init_l_guardHyp___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_guardHyp___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_guardHyp___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_guardHyp___closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" : ");
return x_1;
}
}
static lean_object* _init_l_guardHyp___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_guardHyp___closed__6;
x_2 = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_guardHyp___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_guardHyp___closed__7;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp___closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__7;
x_2 = l_guardHyp___closed__8;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_guardHyp___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_guardHyp___closed__5;
x_3 = l_guardHyp___closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp___closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticGuardExprEq___x3a_x3d_____closed__7;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp___closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__7;
x_2 = l_guardHyp___closed__11;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_guardHyp___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_guardHyp___closed__10;
x_3 = l_guardHyp___closed__12;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_guardHyp___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_guardHyp___closed__13;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_guardHyp() {
_start:
{
lean_object* x_1; 
x_1 = l_guardHyp___closed__14;
return x_1;
}
}
lean_object* l_evalGuardHyp_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_evalGuardHyp_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_evalGuardHyp_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_evalGuardHyp_match__2___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_evalGuardHyp_match__2(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_evalGuardHyp_match__2___rarg), 3, 0);
return x_2;
}
}
lean_object* l_evalGuardHyp_match__3___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_dec(x_5);
lean_dec(x_4);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_7; lean_object* x_8; 
lean_dec(x_3);
x_7 = lean_box(0);
x_8 = lean_apply_1(x_6, x_7);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; 
lean_dec(x_6);
x_9 = lean_ctor_get(x_2, 0);
lean_inc(x_9);
lean_dec(x_2);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
else
{
lean_dec(x_6);
lean_dec(x_3);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_11; lean_object* x_12; 
lean_dec(x_5);
x_11 = lean_ctor_get(x_1, 0);
lean_inc(x_11);
lean_dec(x_1);
x_12 = lean_apply_1(x_4, x_11);
return x_12;
}
else
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_dec(x_4);
x_13 = lean_ctor_get(x_1, 0);
lean_inc(x_13);
lean_dec(x_1);
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
lean_dec(x_2);
x_15 = lean_apply_2(x_5, x_13, x_14);
return x_15;
}
}
}
}
lean_object* l_evalGuardHyp_match__3(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_evalGuardHyp_match__3___rarg), 6, 0);
return x_2;
}
}
lean_object* l_Lean_throwError___at_evalGuardHyp___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_ctor_get(x_8, 3);
x_12 = l_Lean_addMessageContextFull___at_Lean_Meta_instAddMessageContextMetaM___spec__1(x_1, x_6, x_7, x_8, x_9, x_10);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_11);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_11);
lean_ctor_set(x_15, 1, x_14);
lean_ctor_set_tag(x_12, 1);
lean_ctor_set(x_12, 0, x_15);
return x_12;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_12, 0);
x_17 = lean_ctor_get(x_12, 1);
lean_inc(x_17);
lean_inc(x_16);
lean_dec(x_12);
lean_inc(x_11);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_11);
lean_ctor_set(x_18, 1, x_16);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
return x_19;
}
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" is not a let binding");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" is a let binding");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__1___closed__3;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hypothesis ");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__1___closed__5;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" has value ");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__1___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__1___closed__7;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_evalGuardHyp___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_Lean_LocalDecl_value_x3f(x_1);
if (lean_obj_tag(x_14) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_15; lean_object* x_16; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_15 = lean_box(0);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec(x_2);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_3);
x_18 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_19 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_19, 0, x_18);
lean_ctor_set(x_19, 1, x_17);
x_20 = l_evalGuardHyp___lambda__1___closed__2;
x_21 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_21, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_22;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_14);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_3);
x_24 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_25 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_25, 0, x_24);
lean_ctor_set(x_25, 1, x_23);
x_26 = l_evalGuardHyp___lambda__1___closed__4;
x_27 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
x_28 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_27, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; 
x_29 = lean_ctor_get(x_14, 0);
lean_inc(x_29);
lean_dec(x_14);
x_30 = lean_ctor_get(x_2, 0);
lean_inc(x_30);
lean_dec(x_2);
x_31 = lean_box(0);
x_32 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_33 = l_Lean_Elab_Tactic_elabTerm(x_30, x_31, x_32, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_33) == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec(x_33);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_36 = l_Lean_Meta_instantiateMVars(x_29, x_9, x_10, x_11, x_12, x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_36, 0);
x_39 = lean_ctor_get(x_36, 1);
x_40 = l_Lean_Expr_consumeMData(x_38);
lean_dec(x_38);
x_41 = lean_expr_eqv(x_34, x_40);
lean_dec(x_34);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_free_object(x_36);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_3);
x_43 = l_evalGuardHyp___lambda__1___closed__6;
x_44 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = l_evalGuardHyp___lambda__1___closed__8;
x_46 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_47, 0, x_40);
x_48 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_48, 0, x_46);
lean_ctor_set(x_48, 1, x_47);
x_49 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_50 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_50, 0, x_48);
lean_ctor_set(x_50, 1, x_49);
x_51 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_50, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_39);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_51;
}
else
{
lean_object* x_52; 
lean_dec(x_40);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_52 = lean_box(0);
lean_ctor_set(x_36, 0, x_52);
return x_36;
}
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = lean_ctor_get(x_36, 0);
x_54 = lean_ctor_get(x_36, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_36);
x_55 = l_Lean_Expr_consumeMData(x_53);
lean_dec(x_53);
x_56 = lean_expr_eqv(x_34, x_55);
lean_dec(x_34);
if (x_56 == 0)
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_57 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_57, 0, x_3);
x_58 = l_evalGuardHyp___lambda__1___closed__6;
x_59 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_59, 0, x_58);
lean_ctor_set(x_59, 1, x_57);
x_60 = l_evalGuardHyp___lambda__1___closed__8;
x_61 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_61, 0, x_59);
lean_ctor_set(x_61, 1, x_60);
x_62 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_62, 0, x_55);
x_63 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
x_64 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_65 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_66 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_65, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_54);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; 
lean_dec(x_55);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_67 = lean_box(0);
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_54);
return x_68;
}
}
}
else
{
uint8_t x_69; 
lean_dec(x_34);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_69 = !lean_is_exclusive(x_36);
if (x_69 == 0)
{
return x_36;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_ctor_get(x_36, 0);
x_71 = lean_ctor_get(x_36, 1);
lean_inc(x_71);
lean_inc(x_70);
lean_dec(x_36);
x_72 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_72, 0, x_70);
lean_ctor_set(x_72, 1, x_71);
return x_72;
}
}
}
else
{
uint8_t x_73; 
lean_dec(x_29);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_3);
x_73 = !lean_is_exclusive(x_33);
if (x_73 == 0)
{
return x_33;
}
else
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_74 = lean_ctor_get(x_33, 0);
x_75 = lean_ctor_get(x_33, 1);
lean_inc(x_75);
lean_inc(x_74);
lean_dec(x_33);
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
static lean_object* _init_l_evalGuardHyp___lambda__2___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" has type ");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__2___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__2___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_evalGuardHyp___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_box(0);
x_15 = l_evalGuardHyp___lambda__1(x_4, x_1, x_2, x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_4);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_16 = lean_ctor_get(x_3, 0);
lean_inc(x_16);
lean_dec(x_3);
x_17 = lean_box(0);
x_18 = 0;
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
x_19 = l_Lean_Elab_Tactic_elabTerm(x_16, x_17, x_18, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
x_22 = l_Lean_LocalDecl_type(x_4);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
x_23 = l_Lean_Meta_instantiateMVars(x_22, x_9, x_10, x_11, x_12, x_21);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = l_Lean_Expr_consumeMData(x_24);
lean_dec(x_24);
x_27 = lean_expr_eqv(x_20, x_26);
lean_dec(x_20);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
lean_dec(x_4);
lean_dec(x_1);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_2);
x_29 = l_evalGuardHyp___lambda__1___closed__6;
x_30 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_28);
x_31 = l_evalGuardHyp___lambda__2___closed__2;
x_32 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(x_33, 0, x_26);
x_34 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_34, 0, x_32);
lean_ctor_set(x_34, 1, x_33);
x_35 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6;
x_36 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_35);
x_37 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTacticAux___spec__2(x_36, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_38 = !lean_is_exclusive(x_37);
if (x_38 == 0)
{
return x_37;
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_39 = lean_ctor_get(x_37, 0);
x_40 = lean_ctor_get(x_37, 1);
lean_inc(x_40);
lean_inc(x_39);
lean_dec(x_37);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
else
{
lean_object* x_42; lean_object* x_43; 
lean_dec(x_26);
x_42 = lean_box(0);
x_43 = l_evalGuardHyp___lambda__1(x_4, x_1, x_2, x_42, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_25);
lean_dec(x_4);
return x_43;
}
}
else
{
uint8_t x_44; 
lean_dec(x_20);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_44 = !lean_is_exclusive(x_23);
if (x_44 == 0)
{
return x_23;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_45 = lean_ctor_get(x_23, 0);
x_46 = lean_ctor_get(x_23, 1);
lean_inc(x_46);
lean_inc(x_45);
lean_dec(x_23);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_45);
lean_ctor_set(x_47, 1, x_46);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_48 = !lean_is_exclusive(x_19);
if (x_48 == 0)
{
return x_19;
}
else
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_49 = lean_ctor_get(x_19, 0);
x_50 = lean_ctor_get(x_19, 1);
lean_inc(x_50);
lean_inc(x_49);
lean_dec(x_19);
x_51 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_51, 0, x_49);
lean_ctor_set(x_51, 1, x_50);
return x_51;
}
}
}
}
}
static lean_object* _init_l_evalGuardHyp___lambda__3___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string(" not found");
return x_1;
}
}
static lean_object* _init_l_evalGuardHyp___lambda__3___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_evalGuardHyp___lambda__3___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_evalGuardHyp___lambda__3(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12) {
_start:
{
lean_object* x_13; 
lean_inc(x_10);
lean_inc(x_8);
lean_inc(x_1);
x_13 = l_Lean_Elab_Tactic_getFVarId(x_1, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_13, 1);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_ctor_get(x_8, 1);
lean_inc(x_16);
x_17 = lean_local_ctx_find(x_16, x_14);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_3);
lean_dec(x_2);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = l_evalGuardHyp___lambda__1___closed__6;
x_20 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
x_21 = l_evalGuardHyp___lambda__3___closed__2;
x_22 = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = l_Lean_throwError___at_evalGuardHyp___spec__1(x_22, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
return x_23;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_inc(x_25);
lean_dec(x_23);
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_25);
lean_ctor_set(x_27, 1, x_26);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; 
x_28 = lean_ctor_get(x_17, 0);
lean_inc(x_28);
lean_dec(x_17);
x_29 = l_evalGuardHyp___lambda__2(x_2, x_1, x_3, x_28, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_15);
lean_dec(x_5);
lean_dec(x_4);
return x_29;
}
}
else
{
uint8_t x_30; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_30 = !lean_is_exclusive(x_13);
if (x_30 == 0)
{
return x_13;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_31 = lean_ctor_get(x_13, 0);
x_32 = lean_ctor_get(x_13, 1);
lean_inc(x_32);
lean_inc(x_31);
lean_dec(x_13);
x_33 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
lean_object* l_evalGuardHyp___lambda__4(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_alloc_closure((void*)(l_evalGuardHyp___lambda__3), 12, 3);
lean_closure_set(x_14, 0, x_1);
lean_closure_set(x_14, 1, x_4);
lean_closure_set(x_14, 2, x_2);
x_15 = l_Lean_Elab_Tactic_withMainContext___rarg(x_14, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_15;
}
}
lean_object* l_evalGuardHyp___lambda__5(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
lean_dec(x_3);
x_14 = lean_unsigned_to_nat(3u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Syntax_isNone(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint8_t x_19; 
x_17 = l_Lean_nullKind;
x_18 = lean_unsigned_to_nat(2u);
lean_inc(x_15);
x_19 = l_Lean_Syntax_isNodeOf(x_15, x_17, x_18);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_15);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_20 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_13);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_21 = lean_unsigned_to_nat(1u);
x_22 = l_Lean_Syntax_getArg(x_15, x_21);
lean_dec(x_15);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_box(0);
x_25 = l_evalGuardHyp___lambda__4(x_2, x_4, x_24, x_23, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_15);
x_26 = lean_box(0);
x_27 = lean_box(0);
x_28 = l_evalGuardHyp___lambda__4(x_2, x_4, x_27, x_26, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
return x_28;
}
}
}
lean_object* l_evalGuardHyp(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_guardHyp___closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
x_18 = l_Lean_Syntax_isNone(x_17);
if (x_18 == 0)
{
lean_object* x_19; uint8_t x_20; 
x_19 = l_Lean_nullKind;
lean_inc(x_17);
x_20 = l_Lean_Syntax_isNodeOf(x_17, x_19, x_16);
if (x_20 == 0)
{
lean_object* x_21; 
lean_dec(x_17);
lean_dec(x_15);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_21 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = l_Lean_Syntax_getArg(x_17, x_14);
lean_dec(x_17);
x_23 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_23, 0, x_22);
x_24 = lean_box(0);
x_25 = l_evalGuardHyp___lambda__5(x_1, x_15, x_24, x_23, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_17);
x_26 = lean_box(0);
x_27 = lean_box(0);
x_28 = l_evalGuardHyp___lambda__5(x_1, x_15, x_27, x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_28;
}
}
}
}
lean_object* l_Lean_throwError___at_evalGuardHyp___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = l_Lean_throwError___at_evalGuardHyp___spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_11;
}
}
lean_object* l_evalGuardHyp___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_evalGuardHyp___lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_1);
return x_14;
}
}
lean_object* l_evalGuardHyp___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_evalGuardHyp___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_6);
lean_dec(x_5);
return x_14;
}
}
lean_object* l_evalGuardHyp___lambda__4___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
lean_object* x_14; 
x_14 = l_evalGuardHyp___lambda__4(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13);
lean_dec(x_3);
return x_14;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticMatchTarget_");
return x_1;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticMatchTarget_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("matchTarget");
return x_1;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticMatchTarget_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticMatchTarget_____closed__4;
x_3 = l_tacticBy__cases_____x3a_____closed__14;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticMatchTarget_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticMatchTarget_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticMatchTarget_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticMatchTarget__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticMatchTarget_____closed__6;
return x_1;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571__match__1___rarg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lean_apply_1(x_2, x_1);
return x_3;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571__match__1___rarg), 2, 0);
return x_2;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_11 = l_Lean_Elab_Tactic_getMainTarget(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_11, 0);
lean_inc(x_12);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
lean_dec(x_11);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_14 = lean_infer_type(x_12, x_6, x_7, x_8, x_9, x_13);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; lean_object* x_19; 
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_15);
x_18 = 0;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
x_19 = l_Lean_Elab_Tactic_elabTerm(x_1, x_17, x_18, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_16);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_22 = l_Lean_Elab_Tactic_getMainTarget(x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_21);
if (lean_obj_tag(x_22) == 0)
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
x_25 = l_Lean_Meta_isExprDefEq(x_20, x_23, x_6, x_7, x_8, x_9, x_24);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; uint8_t x_27; 
x_26 = lean_ctor_get(x_25, 0);
lean_inc(x_26);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_25, 1);
lean_inc(x_28);
lean_dec(x_25);
x_29 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2;
x_30 = l_Lean_throwError___at___private_Lean_Elab_Tactic_Basic_0__Lean_Elab_Tactic_evalTacticUsing_loop___spec__2(x_29, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_28);
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
uint8_t x_31; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_31 = !lean_is_exclusive(x_25);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; 
x_32 = lean_ctor_get(x_25, 0);
lean_dec(x_32);
x_33 = lean_box(0);
lean_ctor_set(x_25, 0, x_33);
return x_25;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_34 = lean_ctor_get(x_25, 1);
lean_inc(x_34);
lean_dec(x_25);
x_35 = lean_box(0);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
return x_36;
}
}
}
else
{
uint8_t x_37; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_37 = !lean_is_exclusive(x_25);
if (x_37 == 0)
{
return x_25;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_25, 0);
x_39 = lean_ctor_get(x_25, 1);
lean_inc(x_39);
lean_inc(x_38);
lean_dec(x_25);
x_40 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
uint8_t x_41; 
lean_dec(x_20);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_41 = !lean_is_exclusive(x_22);
if (x_41 == 0)
{
return x_22;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; 
x_42 = lean_ctor_get(x_22, 0);
x_43 = lean_ctor_get(x_22, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_22);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_45 = !lean_is_exclusive(x_19);
if (x_45 == 0)
{
return x_19;
}
else
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_46 = lean_ctor_get(x_19, 0);
x_47 = lean_ctor_get(x_19, 1);
lean_inc(x_47);
lean_inc(x_46);
lean_dec(x_19);
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
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_49 = !lean_is_exclusive(x_14);
if (x_49 == 0)
{
return x_14;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_50 = lean_ctor_get(x_14, 0);
x_51 = lean_ctor_get(x_14, 1);
lean_inc(x_51);
lean_inc(x_50);
lean_dec(x_14);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
return x_52;
}
}
}
else
{
uint8_t x_53; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
x_53 = !lean_is_exclusive(x_11);
if (x_53 == 0)
{
return x_11;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; 
x_54 = lean_ctor_get(x_11, 0);
x_55 = lean_ctor_get(x_11, 1);
lean_inc(x_55);
lean_inc(x_54);
lean_dec(x_11);
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set(x_56, 1, x_55);
return x_56;
}
}
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticMatchTarget_____closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = lean_alloc_closure((void*)(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1), 10, 1);
lean_closure_set(x_16, 0, x_15);
x_17 = l_Lean_Elab_Tactic_withMainContext___rarg(x_16, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
return x_17;
}
}
}
static lean_object* _init_l_byContra___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("byContra");
return x_1;
}
}
static lean_object* _init_l_byContra___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_byContra___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_byContra___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("byContra ");
return x_1;
}
}
static lean_object* _init_l_byContra___closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_byContra___closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_byContra___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_tacticRwa_______closed__7;
x_2 = l_introv___closed__5;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_byContra___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_byContra___closed__4;
x_3 = l_byContra___closed__5;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_byContra___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_byContra___closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_byContra___closed__6;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_byContra() {
_start:
{
lean_object* x_1; 
x_1 = l_byContra___closed__7;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("paren");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Not");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("hole");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("choice");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("introMatch");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_byContra___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = l_Lean_Syntax_getArg(x_9, x_11);
lean_dec(x_9);
lean_inc(x_2);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_19);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_tacticMatchTarget_____closed__3;
lean_inc(x_19);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
x_27 = l_Lean_addMacroScope(x_21, x_26, x_20);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5;
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8;
lean_inc(x_19);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = l_tactic_____closed__3;
lean_inc(x_19);
x_32 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_32, 0, x_19);
lean_ctor_set(x_32, 1, x_31);
x_33 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_34 = lean_array_push(x_33, x_32);
x_35 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10;
x_36 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set(x_36, 1, x_34);
x_37 = lean_array_push(x_33, x_36);
x_38 = l_elabVariables___closed__13;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_elabVariables___closed__15;
x_41 = lean_array_push(x_40, x_30);
x_42 = lean_array_push(x_41, x_39);
x_43 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_40, x_25);
x_46 = lean_array_push(x_45, x_44);
x_47 = l_tacticMatchTarget_____closed__2;
x_48 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_46);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_19);
x_50 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_50, 0, x_19);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_array_push(x_33, x_50);
x_52 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_52, 0, x_38);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_array_push(x_40, x_48);
x_54 = lean_array_push(x_53, x_52);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = l_evalIntrov___closed__1;
lean_inc(x_19);
x_58 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_58, 0, x_19);
lean_ctor_set(x_58, 1, x_57);
lean_inc(x_16);
x_59 = lean_array_push(x_33, x_16);
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_38);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_array_push(x_40, x_58);
lean_inc(x_61);
x_62 = lean_array_push(x_61, x_60);
x_63 = l_evalIntrov___closed__2;
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set(x_64, 1, x_62);
x_65 = lean_array_push(x_61, x_16);
x_66 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_66);
lean_ctor_set(x_67, 1, x_65);
x_68 = lean_array_push(x_40, x_64);
x_69 = lean_array_push(x_68, x_67);
x_70 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_71 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_71, 0, x_70);
lean_ctor_set(x_71, 1, x_69);
x_72 = lean_array_push(x_40, x_71);
x_73 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_74 = lean_array_push(x_72, x_73);
x_75 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_75, 0, x_55);
lean_ctor_set(x_75, 1, x_74);
x_76 = lean_array_push(x_40, x_56);
x_77 = lean_array_push(x_76, x_75);
x_78 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_78, 0, x_38);
lean_ctor_set(x_78, 1, x_77);
x_79 = lean_array_push(x_33, x_78);
x_80 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
x_82 = lean_array_push(x_33, x_81);
x_83 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_84 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_82);
x_85 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_86 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_86, 0, x_19);
lean_ctor_set(x_86, 1, x_85);
x_87 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_88 = lean_array_push(x_87, x_23);
x_89 = lean_array_push(x_88, x_84);
x_90 = lean_array_push(x_89, x_86);
x_91 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_92 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_92, 0, x_91);
lean_ctor_set(x_92, 1, x_90);
lean_ctor_set(x_17, 0, x_92);
return x_17;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; 
x_93 = lean_ctor_get(x_17, 0);
x_94 = lean_ctor_get(x_17, 1);
lean_inc(x_94);
lean_inc(x_93);
lean_dec(x_17);
x_95 = lean_ctor_get(x_2, 2);
lean_inc(x_95);
x_96 = lean_ctor_get(x_2, 1);
lean_inc(x_96);
lean_dec(x_2);
x_97 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_93);
x_98 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_97);
x_99 = l_tacticMatchTarget_____closed__3;
lean_inc(x_93);
x_100 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_100, 0, x_93);
lean_ctor_set(x_100, 1, x_99);
x_101 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
x_102 = l_Lean_addMacroScope(x_96, x_101, x_95);
x_103 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5;
x_104 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8;
lean_inc(x_93);
x_105 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_105, 0, x_93);
lean_ctor_set(x_105, 1, x_103);
lean_ctor_set(x_105, 2, x_102);
lean_ctor_set(x_105, 3, x_104);
x_106 = l_tactic_____closed__3;
lean_inc(x_93);
x_107 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_107, 0, x_93);
lean_ctor_set(x_107, 1, x_106);
x_108 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_109 = lean_array_push(x_108, x_107);
x_110 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10;
x_111 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_111, 0, x_110);
lean_ctor_set(x_111, 1, x_109);
x_112 = lean_array_push(x_108, x_111);
x_113 = l_elabVariables___closed__13;
x_114 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_112);
x_115 = l_elabVariables___closed__15;
x_116 = lean_array_push(x_115, x_105);
x_117 = lean_array_push(x_116, x_114);
x_118 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_119 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_119, 0, x_118);
lean_ctor_set(x_119, 1, x_117);
x_120 = lean_array_push(x_115, x_100);
x_121 = lean_array_push(x_120, x_119);
x_122 = l_tacticMatchTarget_____closed__2;
x_123 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_121);
x_124 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_93);
x_125 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_125, 0, x_93);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_array_push(x_108, x_125);
x_127 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_127, 0, x_113);
lean_ctor_set(x_127, 1, x_126);
x_128 = lean_array_push(x_115, x_123);
x_129 = lean_array_push(x_128, x_127);
x_130 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_132 = l_evalIntrov___closed__1;
lean_inc(x_93);
x_133 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_133, 0, x_93);
lean_ctor_set(x_133, 1, x_132);
lean_inc(x_16);
x_134 = lean_array_push(x_108, x_16);
x_135 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_135, 0, x_113);
lean_ctor_set(x_135, 1, x_134);
x_136 = lean_array_push(x_115, x_133);
lean_inc(x_136);
x_137 = lean_array_push(x_136, x_135);
x_138 = l_evalIntrov___closed__2;
x_139 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_139, 0, x_138);
lean_ctor_set(x_139, 1, x_137);
x_140 = lean_array_push(x_136, x_16);
x_141 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_142 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_142, 0, x_141);
lean_ctor_set(x_142, 1, x_140);
x_143 = lean_array_push(x_115, x_139);
x_144 = lean_array_push(x_143, x_142);
x_145 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_146 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_144);
x_147 = lean_array_push(x_115, x_146);
x_148 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_149 = lean_array_push(x_147, x_148);
x_150 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_150, 0, x_130);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_array_push(x_115, x_131);
x_152 = lean_array_push(x_151, x_150);
x_153 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_153, 0, x_113);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_array_push(x_108, x_153);
x_155 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_156 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_156, 0, x_155);
lean_ctor_set(x_156, 1, x_154);
x_157 = lean_array_push(x_108, x_156);
x_158 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_159 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_159, 0, x_158);
lean_ctor_set(x_159, 1, x_157);
x_160 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_161 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_161, 0, x_93);
lean_ctor_set(x_161, 1, x_160);
x_162 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_163 = lean_array_push(x_162, x_98);
x_164 = lean_array_push(x_163, x_159);
x_165 = lean_array_push(x_164, x_161);
x_166 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_167 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_167, 0, x_166);
lean_ctor_set(x_167, 1, x_165);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_167);
lean_ctor_set(x_168, 1, x_94);
return x_168;
}
}
}
else
{
lean_object* x_169; uint8_t x_170; 
lean_dec(x_9);
lean_inc(x_2);
x_169 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_170 = !lean_is_exclusive(x_169);
if (x_170 == 0)
{
lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; 
x_171 = lean_ctor_get(x_169, 0);
x_172 = lean_ctor_get(x_2, 2);
lean_inc(x_172);
x_173 = lean_ctor_get(x_2, 1);
lean_inc(x_173);
lean_dec(x_2);
x_174 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_171);
x_175 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_175, 0, x_171);
lean_ctor_set(x_175, 1, x_174);
x_176 = l_tacticMatchTarget_____closed__3;
lean_inc(x_171);
x_177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_177, 0, x_171);
lean_ctor_set(x_177, 1, x_176);
x_178 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
x_179 = l_Lean_addMacroScope(x_173, x_178, x_172);
x_180 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5;
x_181 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8;
lean_inc(x_171);
x_182 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_182, 0, x_171);
lean_ctor_set(x_182, 1, x_180);
lean_ctor_set(x_182, 2, x_179);
lean_ctor_set(x_182, 3, x_181);
x_183 = l_tactic_____closed__3;
lean_inc(x_171);
x_184 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_184, 0, x_171);
lean_ctor_set(x_184, 1, x_183);
x_185 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_186 = lean_array_push(x_185, x_184);
x_187 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10;
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_187);
lean_ctor_set(x_188, 1, x_186);
x_189 = lean_array_push(x_185, x_188);
x_190 = l_elabVariables___closed__13;
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_189);
x_192 = l_elabVariables___closed__15;
x_193 = lean_array_push(x_192, x_182);
x_194 = lean_array_push(x_193, x_191);
x_195 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_196 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_196, 0, x_195);
lean_ctor_set(x_196, 1, x_194);
x_197 = lean_array_push(x_192, x_177);
x_198 = lean_array_push(x_197, x_196);
x_199 = l_tacticMatchTarget_____closed__2;
x_200 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_198);
x_201 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_171);
x_202 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_202, 0, x_171);
lean_ctor_set(x_202, 1, x_201);
x_203 = lean_array_push(x_185, x_202);
x_204 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_204, 0, x_190);
lean_ctor_set(x_204, 1, x_203);
x_205 = lean_array_push(x_192, x_200);
x_206 = lean_array_push(x_205, x_204);
x_207 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_208 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_208, 0, x_207);
lean_ctor_set(x_208, 1, x_206);
x_209 = l_evalIntrov___closed__1;
lean_inc(x_171);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_171);
lean_ctor_set(x_210, 1, x_209);
x_211 = lean_array_push(x_192, x_210);
x_212 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_213 = lean_array_push(x_211, x_212);
x_214 = l_evalIntrov___closed__2;
x_215 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_215, 0, x_214);
lean_ctor_set(x_215, 1, x_213);
x_216 = lean_array_push(x_192, x_215);
x_217 = lean_array_push(x_216, x_212);
x_218 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_218, 0, x_207);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_array_push(x_192, x_208);
x_220 = lean_array_push(x_219, x_218);
x_221 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_221, 0, x_190);
lean_ctor_set(x_221, 1, x_220);
x_222 = lean_array_push(x_185, x_221);
x_223 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_224 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_224, 0, x_223);
lean_ctor_set(x_224, 1, x_222);
x_225 = lean_array_push(x_185, x_224);
x_226 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_227 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_227, 0, x_226);
lean_ctor_set(x_227, 1, x_225);
x_228 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_229 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_229, 0, x_171);
lean_ctor_set(x_229, 1, x_228);
x_230 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_231 = lean_array_push(x_230, x_175);
x_232 = lean_array_push(x_231, x_227);
x_233 = lean_array_push(x_232, x_229);
x_234 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_235 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_235, 0, x_234);
lean_ctor_set(x_235, 1, x_233);
lean_ctor_set(x_169, 0, x_235);
return x_169;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_236 = lean_ctor_get(x_169, 0);
x_237 = lean_ctor_get(x_169, 1);
lean_inc(x_237);
lean_inc(x_236);
lean_dec(x_169);
x_238 = lean_ctor_get(x_2, 2);
lean_inc(x_238);
x_239 = lean_ctor_get(x_2, 1);
lean_inc(x_239);
lean_dec(x_2);
x_240 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_236);
x_241 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_241, 0, x_236);
lean_ctor_set(x_241, 1, x_240);
x_242 = l_tacticMatchTarget_____closed__3;
lean_inc(x_236);
x_243 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_243, 0, x_236);
lean_ctor_set(x_243, 1, x_242);
x_244 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6;
x_245 = l_Lean_addMacroScope(x_239, x_244, x_238);
x_246 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5;
x_247 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8;
lean_inc(x_236);
x_248 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_248, 0, x_236);
lean_ctor_set(x_248, 1, x_246);
lean_ctor_set(x_248, 2, x_245);
lean_ctor_set(x_248, 3, x_247);
x_249 = l_tactic_____closed__3;
lean_inc(x_236);
x_250 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_250, 0, x_236);
lean_ctor_set(x_250, 1, x_249);
x_251 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_252 = lean_array_push(x_251, x_250);
x_253 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10;
x_254 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_254, 0, x_253);
lean_ctor_set(x_254, 1, x_252);
x_255 = lean_array_push(x_251, x_254);
x_256 = l_elabVariables___closed__13;
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
x_258 = l_elabVariables___closed__15;
x_259 = lean_array_push(x_258, x_248);
x_260 = lean_array_push(x_259, x_257);
x_261 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8;
x_262 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_262, 0, x_261);
lean_ctor_set(x_262, 1, x_260);
x_263 = lean_array_push(x_258, x_243);
x_264 = lean_array_push(x_263, x_262);
x_265 = l_tacticMatchTarget_____closed__2;
x_266 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_266, 0, x_265);
lean_ctor_set(x_266, 1, x_264);
x_267 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_236);
x_268 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_268, 0, x_236);
lean_ctor_set(x_268, 1, x_267);
x_269 = lean_array_push(x_251, x_268);
x_270 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_270, 0, x_256);
lean_ctor_set(x_270, 1, x_269);
x_271 = lean_array_push(x_258, x_266);
x_272 = lean_array_push(x_271, x_270);
x_273 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_274 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_274, 0, x_273);
lean_ctor_set(x_274, 1, x_272);
x_275 = l_evalIntrov___closed__1;
lean_inc(x_236);
x_276 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_276, 0, x_236);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_array_push(x_258, x_276);
x_278 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_279 = lean_array_push(x_277, x_278);
x_280 = l_evalIntrov___closed__2;
x_281 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_281, 0, x_280);
lean_ctor_set(x_281, 1, x_279);
x_282 = lean_array_push(x_258, x_281);
x_283 = lean_array_push(x_282, x_278);
x_284 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_284, 0, x_273);
lean_ctor_set(x_284, 1, x_283);
x_285 = lean_array_push(x_258, x_274);
x_286 = lean_array_push(x_285, x_284);
x_287 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_287, 0, x_256);
lean_ctor_set(x_287, 1, x_286);
x_288 = lean_array_push(x_251, x_287);
x_289 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_290 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_290, 0, x_289);
lean_ctor_set(x_290, 1, x_288);
x_291 = lean_array_push(x_251, x_290);
x_292 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_293 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_293, 0, x_292);
lean_ctor_set(x_293, 1, x_291);
x_294 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_295 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_295, 0, x_236);
lean_ctor_set(x_295, 1, x_294);
x_296 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_297 = lean_array_push(x_296, x_241);
x_298 = lean_array_push(x_297, x_293);
x_299 = lean_array_push(x_298, x_295);
x_300 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_301 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_301, 0, x_300);
lean_ctor_set(x_301, 1, x_299);
x_302 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_302, 0, x_301);
lean_ctor_set(x_302, 1, x_237);
return x_302;
}
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Decidable.byContradiction");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("byContradiction");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_byContra___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = l_Lean_Syntax_getArg(x_9, x_11);
lean_dec(x_9);
lean_inc(x_2);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_19);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_19);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
x_27 = l_Lean_addMacroScope(x_21, x_26, x_20);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3;
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7;
lean_inc(x_19);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = l_elabVariables___closed__15;
x_32 = lean_array_push(x_31, x_25);
x_33 = lean_array_push(x_32, x_30);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_19);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_19);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_39 = lean_array_push(x_38, x_37);
x_40 = l_elabVariables___closed__13;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_array_push(x_31, x_35);
x_43 = lean_array_push(x_42, x_41);
x_44 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_evalIntrov___closed__1;
lean_inc(x_19);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_19);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_16);
x_48 = lean_array_push(x_38, x_16);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_40);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_array_push(x_31, x_47);
lean_inc(x_50);
x_51 = lean_array_push(x_50, x_49);
x_52 = l_evalIntrov___closed__2;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_array_push(x_50, x_16);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_array_push(x_31, x_53);
x_58 = lean_array_push(x_57, x_56);
x_59 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_31, x_60);
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_63 = lean_array_push(x_61, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_44);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_31, x_45);
x_66 = lean_array_push(x_65, x_64);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_40);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_38, x_67);
x_69 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_38, x_70);
x_72 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_19);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_77 = lean_array_push(x_76, x_23);
x_78 = lean_array_push(x_77, x_73);
x_79 = lean_array_push(x_78, x_75);
x_80 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_17, 0, x_81);
return x_17;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_82 = lean_ctor_get(x_17, 0);
x_83 = lean_ctor_get(x_17, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_17);
x_84 = lean_ctor_get(x_2, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
lean_dec(x_2);
x_86 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_82);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_82);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_82);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_82);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
x_91 = l_Lean_addMacroScope(x_85, x_90, x_84);
x_92 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3;
x_93 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7;
lean_inc(x_82);
x_94 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_94, 0, x_82);
lean_ctor_set(x_94, 1, x_92);
lean_ctor_set(x_94, 2, x_91);
lean_ctor_set(x_94, 3, x_93);
x_95 = l_elabVariables___closed__15;
x_96 = lean_array_push(x_95, x_89);
x_97 = lean_array_push(x_96, x_94);
x_98 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_82);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_82);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_103 = lean_array_push(x_102, x_101);
x_104 = l_elabVariables___closed__13;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_array_push(x_95, x_99);
x_107 = lean_array_push(x_106, x_105);
x_108 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = l_evalIntrov___closed__1;
lean_inc(x_82);
x_111 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_111, 0, x_82);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_16);
x_112 = lean_array_push(x_102, x_16);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_104);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_95, x_111);
lean_inc(x_114);
x_115 = lean_array_push(x_114, x_113);
x_116 = l_evalIntrov___closed__2;
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = lean_array_push(x_114, x_16);
x_119 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
x_121 = lean_array_push(x_95, x_117);
x_122 = lean_array_push(x_121, x_120);
x_123 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
x_125 = lean_array_push(x_95, x_124);
x_126 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_127 = lean_array_push(x_125, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_108);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_array_push(x_95, x_109);
x_130 = lean_array_push(x_129, x_128);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_104);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_102, x_131);
x_133 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = lean_array_push(x_102, x_134);
x_136 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_138 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_139 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_139, 0, x_82);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_141 = lean_array_push(x_140, x_87);
x_142 = lean_array_push(x_141, x_137);
x_143 = lean_array_push(x_142, x_139);
x_144 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_83);
return x_146;
}
}
}
else
{
lean_object* x_147; uint8_t x_148; 
lean_dec(x_9);
lean_inc(x_2);
x_147 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_149 = lean_ctor_get(x_147, 0);
x_150 = lean_ctor_get(x_2, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_2, 1);
lean_inc(x_151);
lean_dec(x_2);
x_152 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_149);
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_149);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_149);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_149);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
x_157 = l_Lean_addMacroScope(x_151, x_156, x_150);
x_158 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3;
x_159 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7;
lean_inc(x_149);
x_160 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_160, 0, x_149);
lean_ctor_set(x_160, 1, x_158);
lean_ctor_set(x_160, 2, x_157);
lean_ctor_set(x_160, 3, x_159);
x_161 = l_elabVariables___closed__15;
x_162 = lean_array_push(x_161, x_155);
x_163 = lean_array_push(x_162, x_160);
x_164 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_149);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_149);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_169 = lean_array_push(x_168, x_167);
x_170 = l_elabVariables___closed__13;
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
x_172 = lean_array_push(x_161, x_165);
x_173 = lean_array_push(x_172, x_171);
x_174 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
x_176 = l_evalIntrov___closed__1;
lean_inc(x_149);
x_177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_177, 0, x_149);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_array_push(x_161, x_177);
x_179 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_180 = lean_array_push(x_178, x_179);
x_181 = l_evalIntrov___closed__2;
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_180);
x_183 = lean_array_push(x_161, x_182);
x_184 = lean_array_push(x_183, x_179);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_174);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_array_push(x_161, x_175);
x_187 = lean_array_push(x_186, x_185);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_170);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_array_push(x_168, x_188);
x_190 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_189);
x_192 = lean_array_push(x_168, x_191);
x_193 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_192);
x_195 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_196, 0, x_149);
lean_ctor_set(x_196, 1, x_195);
x_197 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_198 = lean_array_push(x_197, x_153);
x_199 = lean_array_push(x_198, x_194);
x_200 = lean_array_push(x_199, x_196);
x_201 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
lean_ctor_set(x_147, 0, x_202);
return x_147;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_203 = lean_ctor_get(x_147, 0);
x_204 = lean_ctor_get(x_147, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_147);
x_205 = lean_ctor_get(x_2, 2);
lean_inc(x_205);
x_206 = lean_ctor_get(x_2, 1);
lean_inc(x_206);
lean_dec(x_2);
x_207 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_203);
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_203);
lean_ctor_set(x_208, 1, x_207);
x_209 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_203);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_203);
lean_ctor_set(x_210, 1, x_209);
x_211 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5;
x_212 = l_Lean_addMacroScope(x_206, x_211, x_205);
x_213 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3;
x_214 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7;
lean_inc(x_203);
x_215 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_215, 0, x_203);
lean_ctor_set(x_215, 1, x_213);
lean_ctor_set(x_215, 2, x_212);
lean_ctor_set(x_215, 3, x_214);
x_216 = l_elabVariables___closed__15;
x_217 = lean_array_push(x_216, x_210);
x_218 = lean_array_push(x_217, x_215);
x_219 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
x_221 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_203);
x_222 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_222, 0, x_203);
lean_ctor_set(x_222, 1, x_221);
x_223 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_224 = lean_array_push(x_223, x_222);
x_225 = l_elabVariables___closed__13;
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_224);
x_227 = lean_array_push(x_216, x_220);
x_228 = lean_array_push(x_227, x_226);
x_229 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_228);
x_231 = l_evalIntrov___closed__1;
lean_inc(x_203);
x_232 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_232, 0, x_203);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_array_push(x_216, x_232);
x_234 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_235 = lean_array_push(x_233, x_234);
x_236 = l_evalIntrov___closed__2;
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_235);
x_238 = lean_array_push(x_216, x_237);
x_239 = lean_array_push(x_238, x_234);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_229);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_216, x_230);
x_242 = lean_array_push(x_241, x_240);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_225);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_array_push(x_223, x_243);
x_245 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
x_247 = lean_array_push(x_223, x_246);
x_248 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_251, 0, x_203);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_253 = lean_array_push(x_252, x_208);
x_254 = lean_array_push(x_253, x_249);
x_255 = lean_array_push(x_254, x_251);
x_256 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_204);
return x_258;
}
}
}
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Classical.byContradiction");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1;
x_2 = lean_string_utf8_byte_size(x_1);
return x_2;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1;
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2;
x_4 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("Classical");
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5;
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_byContra___closed__2;
lean_inc(x_1);
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
lean_dec(x_1);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = l_Lean_Syntax_getArg(x_1, x_8);
lean_dec(x_1);
x_10 = l_Lean_nullKind;
x_11 = lean_unsigned_to_nat(0u);
lean_inc(x_9);
x_12 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_11);
if (x_12 == 0)
{
uint8_t x_13; 
lean_inc(x_9);
x_13 = l_Lean_Syntax_isNodeOf(x_9, x_10, x_8);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_9);
lean_dec(x_2);
x_14 = lean_box(1);
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_3);
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = l_Lean_Syntax_getArg(x_9, x_11);
lean_dec(x_9);
lean_inc(x_2);
x_17 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_18 = !lean_is_exclusive(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_19 = lean_ctor_get(x_17, 0);
x_20 = lean_ctor_get(x_2, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_2, 1);
lean_inc(x_21);
lean_dec(x_2);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_19);
x_23 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_23, 0, x_19);
lean_ctor_set(x_23, 1, x_22);
x_24 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_19);
x_25 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_25, 0, x_19);
lean_ctor_set(x_25, 1, x_24);
x_26 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
x_27 = l_Lean_addMacroScope(x_21, x_26, x_20);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3;
x_29 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8;
lean_inc(x_19);
x_30 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_30, 0, x_19);
lean_ctor_set(x_30, 1, x_28);
lean_ctor_set(x_30, 2, x_27);
lean_ctor_set(x_30, 3, x_29);
x_31 = l_elabVariables___closed__15;
x_32 = lean_array_push(x_31, x_25);
x_33 = lean_array_push(x_32, x_30);
x_34 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_35 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set(x_35, 1, x_33);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_19);
x_37 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_37, 0, x_19);
lean_ctor_set(x_37, 1, x_36);
x_38 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_39 = lean_array_push(x_38, x_37);
x_40 = l_elabVariables___closed__13;
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_39);
x_42 = lean_array_push(x_31, x_35);
x_43 = lean_array_push(x_42, x_41);
x_44 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_45 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_45, 0, x_44);
lean_ctor_set(x_45, 1, x_43);
x_46 = l_evalIntrov___closed__1;
lean_inc(x_19);
x_47 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_47, 0, x_19);
lean_ctor_set(x_47, 1, x_46);
lean_inc(x_16);
x_48 = lean_array_push(x_38, x_16);
x_49 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_49, 0, x_40);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_array_push(x_31, x_47);
lean_inc(x_50);
x_51 = lean_array_push(x_50, x_49);
x_52 = l_evalIntrov___closed__2;
x_53 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_51);
x_54 = lean_array_push(x_50, x_16);
x_55 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_56 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set(x_56, 1, x_54);
x_57 = lean_array_push(x_31, x_53);
x_58 = lean_array_push(x_57, x_56);
x_59 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_60 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_58);
x_61 = lean_array_push(x_31, x_60);
x_62 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_63 = lean_array_push(x_61, x_62);
x_64 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_64, 0, x_44);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_array_push(x_31, x_45);
x_66 = lean_array_push(x_65, x_64);
x_67 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_67, 0, x_40);
lean_ctor_set(x_67, 1, x_66);
x_68 = lean_array_push(x_38, x_67);
x_69 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_70 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_70, 0, x_69);
lean_ctor_set(x_70, 1, x_68);
x_71 = lean_array_push(x_38, x_70);
x_72 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_73 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_73, 0, x_72);
lean_ctor_set(x_73, 1, x_71);
x_74 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_75 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_75, 0, x_19);
lean_ctor_set(x_75, 1, x_74);
x_76 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_77 = lean_array_push(x_76, x_23);
x_78 = lean_array_push(x_77, x_73);
x_79 = lean_array_push(x_78, x_75);
x_80 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_81 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_81, 0, x_80);
lean_ctor_set(x_81, 1, x_79);
lean_ctor_set(x_17, 0, x_81);
return x_17;
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; 
x_82 = lean_ctor_get(x_17, 0);
x_83 = lean_ctor_get(x_17, 1);
lean_inc(x_83);
lean_inc(x_82);
lean_dec(x_17);
x_84 = lean_ctor_get(x_2, 2);
lean_inc(x_84);
x_85 = lean_ctor_get(x_2, 1);
lean_inc(x_85);
lean_dec(x_2);
x_86 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_82);
x_87 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_87, 0, x_82);
lean_ctor_set(x_87, 1, x_86);
x_88 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_82);
x_89 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_89, 0, x_82);
lean_ctor_set(x_89, 1, x_88);
x_90 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
x_91 = l_Lean_addMacroScope(x_85, x_90, x_84);
x_92 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3;
x_93 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8;
lean_inc(x_82);
x_94 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_94, 0, x_82);
lean_ctor_set(x_94, 1, x_92);
lean_ctor_set(x_94, 2, x_91);
lean_ctor_set(x_94, 3, x_93);
x_95 = l_elabVariables___closed__15;
x_96 = lean_array_push(x_95, x_89);
x_97 = lean_array_push(x_96, x_94);
x_98 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_99 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_99, 0, x_98);
lean_ctor_set(x_99, 1, x_97);
x_100 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_82);
x_101 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_101, 0, x_82);
lean_ctor_set(x_101, 1, x_100);
x_102 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_103 = lean_array_push(x_102, x_101);
x_104 = l_elabVariables___closed__13;
x_105 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_105, 0, x_104);
lean_ctor_set(x_105, 1, x_103);
x_106 = lean_array_push(x_95, x_99);
x_107 = lean_array_push(x_106, x_105);
x_108 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_109 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_109, 0, x_108);
lean_ctor_set(x_109, 1, x_107);
x_110 = l_evalIntrov___closed__1;
lean_inc(x_82);
x_111 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_111, 0, x_82);
lean_ctor_set(x_111, 1, x_110);
lean_inc(x_16);
x_112 = lean_array_push(x_102, x_16);
x_113 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_113, 0, x_104);
lean_ctor_set(x_113, 1, x_112);
x_114 = lean_array_push(x_95, x_111);
lean_inc(x_114);
x_115 = lean_array_push(x_114, x_113);
x_116 = l_evalIntrov___closed__2;
x_117 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_117, 0, x_116);
lean_ctor_set(x_117, 1, x_115);
x_118 = lean_array_push(x_114, x_16);
x_119 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14;
x_120 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_120, 0, x_119);
lean_ctor_set(x_120, 1, x_118);
x_121 = lean_array_push(x_95, x_117);
x_122 = lean_array_push(x_121, x_120);
x_123 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12;
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
x_125 = lean_array_push(x_95, x_124);
x_126 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_127 = lean_array_push(x_125, x_126);
x_128 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_128, 0, x_108);
lean_ctor_set(x_128, 1, x_127);
x_129 = lean_array_push(x_95, x_109);
x_130 = lean_array_push(x_129, x_128);
x_131 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_131, 0, x_104);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_array_push(x_102, x_131);
x_133 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_134 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_134, 0, x_133);
lean_ctor_set(x_134, 1, x_132);
x_135 = lean_array_push(x_102, x_134);
x_136 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_137 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_137, 0, x_136);
lean_ctor_set(x_137, 1, x_135);
x_138 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_139 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_139, 0, x_82);
lean_ctor_set(x_139, 1, x_138);
x_140 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_141 = lean_array_push(x_140, x_87);
x_142 = lean_array_push(x_141, x_137);
x_143 = lean_array_push(x_142, x_139);
x_144 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_145 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_145, 0, x_144);
lean_ctor_set(x_145, 1, x_143);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_145);
lean_ctor_set(x_146, 1, x_83);
return x_146;
}
}
}
else
{
lean_object* x_147; uint8_t x_148; 
lean_dec(x_9);
lean_inc(x_2);
x_147 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_148 = !lean_is_exclusive(x_147);
if (x_148 == 0)
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; 
x_149 = lean_ctor_get(x_147, 0);
x_150 = lean_ctor_get(x_2, 2);
lean_inc(x_150);
x_151 = lean_ctor_get(x_2, 1);
lean_inc(x_151);
lean_dec(x_2);
x_152 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_149);
x_153 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_153, 0, x_149);
lean_ctor_set(x_153, 1, x_152);
x_154 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_149);
x_155 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_155, 0, x_149);
lean_ctor_set(x_155, 1, x_154);
x_156 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
x_157 = l_Lean_addMacroScope(x_151, x_156, x_150);
x_158 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3;
x_159 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8;
lean_inc(x_149);
x_160 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_160, 0, x_149);
lean_ctor_set(x_160, 1, x_158);
lean_ctor_set(x_160, 2, x_157);
lean_ctor_set(x_160, 3, x_159);
x_161 = l_elabVariables___closed__15;
x_162 = lean_array_push(x_161, x_155);
x_163 = lean_array_push(x_162, x_160);
x_164 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_165 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_165, 0, x_164);
lean_ctor_set(x_165, 1, x_163);
x_166 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_149);
x_167 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_167, 0, x_149);
lean_ctor_set(x_167, 1, x_166);
x_168 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_169 = lean_array_push(x_168, x_167);
x_170 = l_elabVariables___closed__13;
x_171 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_169);
x_172 = lean_array_push(x_161, x_165);
x_173 = lean_array_push(x_172, x_171);
x_174 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_175 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_173);
x_176 = l_evalIntrov___closed__1;
lean_inc(x_149);
x_177 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_177, 0, x_149);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_array_push(x_161, x_177);
x_179 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_180 = lean_array_push(x_178, x_179);
x_181 = l_evalIntrov___closed__2;
x_182 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_182, 0, x_181);
lean_ctor_set(x_182, 1, x_180);
x_183 = lean_array_push(x_161, x_182);
x_184 = lean_array_push(x_183, x_179);
x_185 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_185, 0, x_174);
lean_ctor_set(x_185, 1, x_184);
x_186 = lean_array_push(x_161, x_175);
x_187 = lean_array_push(x_186, x_185);
x_188 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_188, 0, x_170);
lean_ctor_set(x_188, 1, x_187);
x_189 = lean_array_push(x_168, x_188);
x_190 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_191 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_191, 0, x_190);
lean_ctor_set(x_191, 1, x_189);
x_192 = lean_array_push(x_168, x_191);
x_193 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_194 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_194, 0, x_193);
lean_ctor_set(x_194, 1, x_192);
x_195 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_196 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_196, 0, x_149);
lean_ctor_set(x_196, 1, x_195);
x_197 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_198 = lean_array_push(x_197, x_153);
x_199 = lean_array_push(x_198, x_194);
x_200 = lean_array_push(x_199, x_196);
x_201 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_202 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_202, 0, x_201);
lean_ctor_set(x_202, 1, x_200);
lean_ctor_set(x_147, 0, x_202);
return x_147;
}
else
{
lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
x_203 = lean_ctor_get(x_147, 0);
x_204 = lean_ctor_get(x_147, 1);
lean_inc(x_204);
lean_inc(x_203);
lean_dec(x_147);
x_205 = lean_ctor_get(x_2, 2);
lean_inc(x_205);
x_206 = lean_ctor_get(x_2, 1);
lean_inc(x_206);
lean_dec(x_2);
x_207 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10;
lean_inc(x_203);
x_208 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_208, 0, x_203);
lean_ctor_set(x_208, 1, x_207);
x_209 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5;
lean_inc(x_203);
x_210 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_210, 0, x_203);
lean_ctor_set(x_210, 1, x_209);
x_211 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6;
x_212 = l_Lean_addMacroScope(x_206, x_211, x_205);
x_213 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3;
x_214 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8;
lean_inc(x_203);
x_215 = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(x_215, 0, x_203);
lean_ctor_set(x_215, 1, x_213);
lean_ctor_set(x_215, 2, x_212);
lean_ctor_set(x_215, 3, x_214);
x_216 = l_elabVariables___closed__15;
x_217 = lean_array_push(x_216, x_210);
x_218 = lean_array_push(x_217, x_215);
x_219 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6;
x_220 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_220, 0, x_219);
lean_ctor_set(x_220, 1, x_218);
x_221 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3;
lean_inc(x_203);
x_222 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_222, 0, x_203);
lean_ctor_set(x_222, 1, x_221);
x_223 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_224 = lean_array_push(x_223, x_222);
x_225 = l_elabVariables___closed__13;
x_226 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_226, 0, x_225);
lean_ctor_set(x_226, 1, x_224);
x_227 = lean_array_push(x_216, x_220);
x_228 = lean_array_push(x_227, x_226);
x_229 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26;
x_230 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_230, 0, x_229);
lean_ctor_set(x_230, 1, x_228);
x_231 = l_evalIntrov___closed__1;
lean_inc(x_203);
x_232 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_232, 0, x_203);
lean_ctor_set(x_232, 1, x_231);
x_233 = lean_array_push(x_216, x_232);
x_234 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4;
x_235 = lean_array_push(x_233, x_234);
x_236 = l_evalIntrov___closed__2;
x_237 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_237, 0, x_236);
lean_ctor_set(x_237, 1, x_235);
x_238 = lean_array_push(x_216, x_237);
x_239 = lean_array_push(x_238, x_234);
x_240 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_240, 0, x_229);
lean_ctor_set(x_240, 1, x_239);
x_241 = lean_array_push(x_216, x_230);
x_242 = lean_array_push(x_241, x_240);
x_243 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_243, 0, x_225);
lean_ctor_set(x_243, 1, x_242);
x_244 = lean_array_push(x_223, x_243);
x_245 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6;
x_246 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_246, 0, x_245);
lean_ctor_set(x_246, 1, x_244);
x_247 = lean_array_push(x_223, x_246);
x_248 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_249 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_249, 0, x_248);
lean_ctor_set(x_249, 1, x_247);
x_250 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16;
x_251 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_251, 0, x_203);
lean_ctor_set(x_251, 1, x_250);
x_252 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6;
x_253 = lean_array_push(x_252, x_208);
x_254 = lean_array_push(x_253, x_249);
x_255 = lean_array_push(x_254, x_251);
x_256 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2;
x_257 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_257, 0, x_256);
lean_ctor_set(x_257, 1, x_255);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_257);
lean_ctor_set(x_258, 1, x_204);
return x_258;
}
}
}
}
}
static lean_object* _init_l_tacticSorry__1___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticSorry_1");
return x_1;
}
}
static lean_object* _init_l_tacticSorry__1___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticSorry__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticSorry__1___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticSorry__1___closed__2;
x_2 = lean_unsigned_to_nat(1024u);
x_3 = l_tacticSorry___closed__4;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticSorry__1() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticSorry__1___closed__3;
return x_1;
}
}
static lean_object* _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6;
x_2 = l_tacticSorry___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
lean_object* l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795_(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = l_tacticSorry__1___closed__2;
x_5 = l_Lean_Syntax_isOfKind(x_1, x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_2);
x_6 = lean_box(1);
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_6);
lean_ctor_set(x_7, 1, x_3);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = l_Lean_MonadRef_mkInfoFromRefPos___at_myMacro____x40_Init_Notation___hyg_72____spec__1(x_2, x_3);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
lean_inc(x_10);
x_12 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = l_tacticSorry___closed__3;
x_14 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_14, 0, x_10);
lean_ctor_set(x_14, 1, x_13);
x_15 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_16 = lean_array_push(x_15, x_14);
x_17 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1;
x_18 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_18, 0, x_17);
lean_ctor_set(x_18, 1, x_16);
x_19 = l_elabVariables___closed__15;
x_20 = lean_array_push(x_19, x_12);
x_21 = lean_array_push(x_20, x_18);
x_22 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
x_24 = lean_array_push(x_15, x_23);
x_25 = l_elabVariables___closed__13;
x_26 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_24);
x_27 = lean_array_push(x_15, x_26);
x_28 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_29 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_27);
lean_ctor_set(x_8, 0, x_29);
return x_8;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
x_30 = lean_ctor_get(x_8, 0);
x_31 = lean_ctor_get(x_8, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_8);
x_32 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3;
lean_inc(x_30);
x_33 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = l_tacticSorry___closed__3;
x_35 = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(x_35, 0, x_30);
lean_ctor_set(x_35, 1, x_34);
x_36 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16;
x_37 = lean_array_push(x_36, x_35);
x_38 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1;
x_39 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_37);
x_40 = l_elabVariables___closed__15;
x_41 = lean_array_push(x_40, x_33);
x_42 = lean_array_push(x_41, x_39);
x_43 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4;
x_44 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_44, 0, x_43);
lean_ctor_set(x_44, 1, x_42);
x_45 = lean_array_push(x_36, x_44);
x_46 = l_elabVariables___closed__13;
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_array_push(x_36, x_47);
x_49 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4;
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_51, 0, x_50);
lean_ctor_set(x_51, 1, x_31);
return x_51;
}
}
}
}
static lean_object* _init_l_tacticIterate_______closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticIterate__");
return x_1;
}
}
static lean_object* _init_l_tacticIterate_______closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticIterate_______closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticIterate_______closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("iterate ");
return x_1;
}
}
static lean_object* _init_l_tacticIterate_______closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticIterate_______closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticIterate_______closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("num");
return x_1;
}
}
static lean_object* _init_l_tacticIterate_______closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticIterate_______closed__5;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticIterate_______closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_tacticIterate_______closed__6;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticIterate_______closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticIterate_______closed__4;
x_3 = l_tacticIterate_______closed__7;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticIterate_______closed__9() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4;
x_2 = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_tacticIterate_______closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticIterate_______closed__8;
x_3 = l_tacticIterate_______closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticIterate_______closed__11() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticIterate_______closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticIterate_______closed__10;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticIterate____() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticIterate_______closed__11;
return x_1;
}
}
lean_object* l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_ctor_get(x_2, 1);
x_16 = lean_nat_dec_le(x_15, x_4);
if (x_16 == 0)
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(0u);
x_18 = lean_nat_dec_eq(x_3, x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_nat_sub(x_3, x_19);
lean_dec(x_3);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_1);
x_21 = l_Lean_Elab_Tactic_evalTacticAux(x_1, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_21, 1);
lean_inc(x_22);
lean_dec(x_21);
x_23 = lean_ctor_get(x_2, 2);
x_24 = lean_nat_add(x_4, x_23);
lean_dec(x_4);
x_25 = lean_box(0);
x_3 = x_20;
x_4 = x_24;
x_5 = x_25;
x_14 = x_22;
goto _start;
}
else
{
uint8_t x_27; 
lean_dec(x_20);
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_1);
x_27 = !lean_is_exclusive(x_21);
if (x_27 == 0)
{
return x_21;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = lean_ctor_get(x_21, 0);
x_29 = lean_ctor_get(x_21, 1);
lean_inc(x_29);
lean_inc(x_28);
lean_dec(x_21);
x_30 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
else
{
lean_object* x_31; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_5);
lean_ctor_set(x_31, 1, x_14);
return x_31;
}
}
else
{
lean_object* x_32; 
lean_dec(x_13);
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_14);
return x_32;
}
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticIterate_______closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
x_16 = lean_unsigned_to_nat(2u);
x_17 = l_Lean_Syntax_getArg(x_1, x_16);
lean_dec(x_1);
x_18 = l_Lean_Syntax_toNat(x_15);
lean_dec(x_15);
x_19 = lean_unsigned_to_nat(0u);
lean_inc(x_18);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_18);
lean_ctor_set(x_20, 2, x_14);
x_21 = lean_box(0);
x_22 = l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1(x_17, x_20, x_18, x_19, x_21, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec(x_20);
if (lean_obj_tag(x_22) == 0)
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_22, 0);
lean_dec(x_24);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
else
{
lean_object* x_25; lean_object* x_26; 
x_25 = lean_ctor_get(x_22, 1);
lean_inc(x_25);
lean_dec(x_22);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_21);
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
}
}
lean_object* l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13, lean_object* x_14) {
_start:
{
lean_object* x_15; 
x_15 = l_Std_Range_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_4895____spec__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_13, x_14);
lean_dec(x_2);
return x_15;
}
}
lean_object* l_repeat_x27Aux_match__1___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
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
lean_object* l_repeat_x27Aux_match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_repeat_x27Aux_match__1___rarg), 3, 0);
return x_2;
}
}
lean_object* l_repeat_x27Aux(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_1);
x_12 = lean_box(0);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_ctor_get(x_2, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_2, 1);
lean_inc(x_15);
lean_dec(x_2);
x_16 = l_Lean_Elab_Tactic_saveState___rarg(x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_1);
x_19 = l_Lean_Elab_Tactic_evalTacticAt(x_1, x_14, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_18);
if (lean_obj_tag(x_19) == 0)
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec(x_17);
x_20 = lean_ctor_get(x_19, 0);
lean_inc(x_20);
x_21 = lean_ctor_get(x_19, 1);
lean_inc(x_21);
lean_dec(x_19);
lean_inc(x_20);
x_22 = l_Lean_Elab_Tactic_appendGoals(x_20, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_21);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
lean_dec(x_22);
x_24 = l_List_appendTR___rarg(x_20, x_15);
x_2 = x_24;
x_11 = x_23;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_26 = lean_ctor_get(x_19, 1);
lean_inc(x_26);
lean_dec(x_19);
x_27 = l_Lean_Elab_Tactic_SavedState_restore(x_17, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_26);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
lean_dec(x_27);
x_2 = x_15;
x_11 = x_28;
goto _start;
}
}
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticRepeat'_");
return x_1;
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticRepeat_x27_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("repeat' ");
return x_1;
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticRepeat_x27_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticRepeat_x27_____closed__4;
x_3 = l_tacticIterate_______closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticRepeat_x27_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticRepeat_x27_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticRepeat_x27_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticRepeat_x27__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticRepeat_x27_____closed__6;
return x_1;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5138_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticRepeat_x27_____closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Elab_Tactic_getGoals___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = l_repeat_x27Aux(x_15, x_17, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
return x_19;
}
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("tacticAnyGoals_");
return x_1;
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_tacticAnyGoals_____closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("anyGoals ");
return x_1;
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__4() {
_start:
{
lean_object* x_1; uint8_t x_2; lean_object* x_3; 
x_1 = l_tacticAnyGoals_____closed__3;
x_2 = 0;
x_3 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, sizeof(void*)*1, x_2);
return x_3;
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_variables___closed__4;
x_2 = l_tacticAnyGoals_____closed__4;
x_3 = l_tacticIterate_______closed__9;
x_4 = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticAnyGoals_____closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = l_tacticAnyGoals_____closed__2;
x_2 = lean_unsigned_to_nat(1022u);
x_3 = l_tacticAnyGoals_____closed__5;
x_4 = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_2);
lean_ctor_set(x_4, 2, x_3);
return x_4;
}
}
static lean_object* _init_l_tacticAnyGoals__() {
_start:
{
lean_object* x_1; 
x_1 = l_tacticAnyGoals_____closed__6;
return x_1;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331__match__1___rarg(lean_object* x_1, lean_object* x_2) {
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
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331__match__1(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331__match__1___rarg), 2, 0);
return x_2;
}
}
lean_object* l_List_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11, lean_object* x_12, lean_object* x_13) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_14; 
lean_dec(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
uint8_t x_15; 
x_15 = !lean_is_exclusive(x_3);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_28; 
x_16 = lean_ctor_get(x_3, 0);
x_17 = lean_ctor_get(x_3, 1);
x_28 = !lean_is_exclusive(x_4);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_29 = lean_ctor_get(x_4, 0);
x_30 = lean_ctor_get(x_4, 1);
lean_inc(x_16);
x_31 = l_Lean_Meta_isExprMVarAssigned(x_16, x_9, x_10, x_11, x_12, x_13);
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
x_33 = lean_unbox(x_32);
lean_dec(x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_34 = lean_ctor_get(x_31, 1);
lean_inc(x_34);
lean_dec(x_31);
lean_inc(x_2);
lean_inc(x_16);
lean_ctor_set(x_3, 1, x_2);
x_35 = l_Lean_Elab_Tactic_setGoals(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_34);
x_36 = lean_ctor_get(x_35, 1);
lean_inc(x_36);
lean_dec(x_35);
x_37 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_36);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
x_39 = lean_ctor_get(x_37, 1);
lean_inc(x_39);
lean_dec(x_37);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_40 = l_Lean_Elab_Tactic_evalTacticAux(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_39);
if (lean_obj_tag(x_40) == 0)
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
lean_dec(x_38);
lean_dec(x_29);
lean_dec(x_16);
x_41 = lean_ctor_get(x_40, 1);
lean_inc(x_41);
lean_dec(x_40);
x_42 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_41);
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
x_44 = lean_ctor_get(x_42, 1);
lean_inc(x_44);
lean_dec(x_42);
x_45 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_30, x_43);
x_46 = 1;
x_47 = lean_box(x_46);
lean_ctor_set(x_4, 1, x_45);
lean_ctor_set(x_4, 0, x_47);
x_48 = lean_box(0);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_4);
x_18 = x_49;
x_19 = x_44;
goto block_27;
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
x_50 = lean_ctor_get(x_40, 1);
lean_inc(x_50);
lean_dec(x_40);
x_51 = l_Lean_Elab_Tactic_SavedState_restore(x_38, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_50);
x_52 = lean_ctor_get(x_51, 1);
lean_inc(x_52);
lean_dec(x_51);
x_53 = lean_array_push(x_30, x_16);
lean_ctor_set(x_4, 1, x_53);
x_54 = lean_box(0);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_54);
lean_ctor_set(x_55, 1, x_4);
x_18 = x_55;
x_19 = x_52;
goto block_27;
}
}
else
{
lean_object* x_56; 
lean_free_object(x_3);
lean_dec(x_16);
x_56 = lean_ctor_get(x_31, 1);
lean_inc(x_56);
lean_dec(x_31);
x_3 = x_17;
x_13 = x_56;
goto _start;
}
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_4, 0);
x_59 = lean_ctor_get(x_4, 1);
lean_inc(x_59);
lean_inc(x_58);
lean_dec(x_4);
lean_inc(x_16);
x_60 = l_Lean_Meta_isExprMVarAssigned(x_16, x_9, x_10, x_11, x_12, x_13);
x_61 = lean_ctor_get(x_60, 0);
lean_inc(x_61);
x_62 = lean_unbox(x_61);
lean_dec(x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_63 = lean_ctor_get(x_60, 1);
lean_inc(x_63);
lean_dec(x_60);
lean_inc(x_2);
lean_inc(x_16);
lean_ctor_set(x_3, 1, x_2);
x_64 = l_Lean_Elab_Tactic_setGoals(x_3, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_63);
x_65 = lean_ctor_get(x_64, 1);
lean_inc(x_65);
lean_dec(x_64);
x_66 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_65);
x_67 = lean_ctor_get(x_66, 0);
lean_inc(x_67);
x_68 = lean_ctor_get(x_66, 1);
lean_inc(x_68);
lean_dec(x_66);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_69 = l_Lean_Elab_Tactic_evalTacticAux(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_68);
if (lean_obj_tag(x_69) == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec(x_67);
lean_dec(x_58);
lean_dec(x_16);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
lean_dec(x_69);
x_71 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_70);
x_72 = lean_ctor_get(x_71, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_71, 1);
lean_inc(x_73);
lean_dec(x_71);
x_74 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_59, x_72);
x_75 = 1;
x_76 = lean_box(x_75);
x_77 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_77, 0, x_76);
lean_ctor_set(x_77, 1, x_74);
x_78 = lean_box(0);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_78);
lean_ctor_set(x_79, 1, x_77);
x_18 = x_79;
x_19 = x_73;
goto block_27;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = lean_ctor_get(x_69, 1);
lean_inc(x_80);
lean_dec(x_69);
x_81 = l_Lean_Elab_Tactic_SavedState_restore(x_67, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_80);
x_82 = lean_ctor_get(x_81, 1);
lean_inc(x_82);
lean_dec(x_81);
x_83 = lean_array_push(x_59, x_16);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_58);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_box(0);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_85);
lean_ctor_set(x_86, 1, x_84);
x_18 = x_86;
x_19 = x_82;
goto block_27;
}
}
else
{
lean_object* x_87; lean_object* x_88; 
lean_free_object(x_3);
lean_dec(x_16);
x_87 = lean_ctor_get(x_60, 1);
lean_inc(x_87);
lean_dec(x_60);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_58);
lean_ctor_set(x_88, 1, x_59);
x_3 = x_17;
x_4 = x_88;
x_13 = x_87;
goto _start;
}
}
block_27:
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
x_3 = x_17;
x_4 = x_20;
x_13 = x_19;
goto _start;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = lean_ctor_get(x_20, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_20);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
x_3 = x_17;
x_4 = x_25;
x_13 = x_19;
goto _start;
}
}
}
else
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_90 = lean_ctor_get(x_3, 0);
x_91 = lean_ctor_get(x_3, 1);
lean_inc(x_91);
lean_inc(x_90);
lean_dec(x_3);
x_101 = lean_ctor_get(x_4, 0);
lean_inc(x_101);
x_102 = lean_ctor_get(x_4, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_103 = x_4;
} else {
 lean_dec_ref(x_4);
 x_103 = lean_box(0);
}
lean_inc(x_90);
x_104 = l_Lean_Meta_isExprMVarAssigned(x_90, x_9, x_10, x_11, x_12, x_13);
x_105 = lean_ctor_get(x_104, 0);
lean_inc(x_105);
x_106 = lean_unbox(x_105);
lean_dec(x_105);
if (x_106 == 0)
{
lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_107 = lean_ctor_get(x_104, 1);
lean_inc(x_107);
lean_dec(x_104);
lean_inc(x_2);
lean_inc(x_90);
x_108 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_108, 0, x_90);
lean_ctor_set(x_108, 1, x_2);
x_109 = l_Lean_Elab_Tactic_setGoals(x_108, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_107);
x_110 = lean_ctor_get(x_109, 1);
lean_inc(x_110);
lean_dec(x_109);
x_111 = l_Lean_Elab_Tactic_saveState___rarg(x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_110);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
lean_inc(x_12);
lean_inc(x_11);
lean_inc(x_10);
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_1);
x_114 = l_Lean_Elab_Tactic_evalTacticAux(x_1, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_113);
if (lean_obj_tag(x_114) == 0)
{
lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; uint8_t x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_112);
lean_dec(x_101);
lean_dec(x_90);
x_115 = lean_ctor_get(x_114, 1);
lean_inc(x_115);
lean_dec(x_114);
x_116 = l_Lean_Elab_Tactic_getUnsolvedGoals(x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_115);
x_117 = lean_ctor_get(x_116, 0);
lean_inc(x_117);
x_118 = lean_ctor_get(x_116, 1);
lean_inc(x_118);
lean_dec(x_116);
x_119 = l_List_foldl___at_Array_appendList___spec__1___rarg(x_102, x_117);
x_120 = 1;
x_121 = lean_box(x_120);
if (lean_is_scalar(x_103)) {
 x_122 = lean_alloc_ctor(0, 2, 0);
} else {
 x_122 = x_103;
}
lean_ctor_set(x_122, 0, x_121);
lean_ctor_set(x_122, 1, x_119);
x_123 = lean_box(0);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_123);
lean_ctor_set(x_124, 1, x_122);
x_92 = x_124;
x_93 = x_118;
goto block_100;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
x_125 = lean_ctor_get(x_114, 1);
lean_inc(x_125);
lean_dec(x_114);
x_126 = l_Lean_Elab_Tactic_SavedState_restore(x_112, x_5, x_6, x_7, x_8, x_9, x_10, x_11, x_12, x_125);
x_127 = lean_ctor_get(x_126, 1);
lean_inc(x_127);
lean_dec(x_126);
x_128 = lean_array_push(x_102, x_90);
if (lean_is_scalar(x_103)) {
 x_129 = lean_alloc_ctor(0, 2, 0);
} else {
 x_129 = x_103;
}
lean_ctor_set(x_129, 0, x_101);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_box(0);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_130);
lean_ctor_set(x_131, 1, x_129);
x_92 = x_131;
x_93 = x_127;
goto block_100;
}
}
else
{
lean_object* x_132; lean_object* x_133; 
lean_dec(x_90);
x_132 = lean_ctor_get(x_104, 1);
lean_inc(x_132);
lean_dec(x_104);
if (lean_is_scalar(x_103)) {
 x_133 = lean_alloc_ctor(0, 2, 0);
} else {
 x_133 = x_103;
}
lean_ctor_set(x_133, 0, x_101);
lean_ctor_set(x_133, 1, x_102);
x_3 = x_91;
x_4 = x_133;
x_13 = x_132;
goto _start;
}
block_100:
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_94 = lean_ctor_get(x_92, 1);
lean_inc(x_94);
lean_dec(x_92);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_97 = x_94;
} else {
 lean_dec_ref(x_94);
 x_97 = lean_box(0);
}
if (lean_is_scalar(x_97)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_97;
}
lean_ctor_set(x_98, 0, x_95);
lean_ctor_set(x_98, 1, x_96);
x_3 = x_91;
x_4 = x_98;
x_13 = x_93;
goto _start;
}
}
}
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_array_to_list(lean_box(0), x_1);
x_13 = l_Lean_Elab_Tactic_setGoals(x_12, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
return x_13;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1() {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = l_elabVariables___closed__14;
x_3 = lean_box(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_3);
lean_ctor_set(x_4, 1, x_2);
return x_4;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string("failed on all goals");
return x_1;
}
}
static lean_object* _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2;
x_2 = l_Lean_stringToMessageData(x_1);
return x_2;
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331_(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = l_tacticAnyGoals_____closed__2;
lean_inc(x_1);
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
lean_dec(x_1);
x_13 = l_Lean_Elab_throwUnsupportedSyntax___at_Lean_Elab_Tactic_evalChoiceAux___spec__1___rarg(x_10);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = l_Lean_Syntax_getArg(x_1, x_14);
lean_dec(x_1);
x_16 = l_Lean_Elab_Tactic_getGoals___rarg(x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
lean_dec(x_16);
x_19 = lean_box(0);
x_20 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1;
lean_inc(x_9);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
lean_inc(x_2);
x_21 = l_List_forIn_loop___at_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____spec__1(x_15, x_19, x_17, x_20, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_18);
x_22 = lean_ctor_get(x_21, 0);
lean_inc(x_22);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
lean_dec(x_22);
x_25 = lean_ctor_get(x_21, 1);
lean_inc(x_25);
lean_dec(x_21);
x_26 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3;
x_27 = l_Lean_throwError___at_Lean_Elab_Tactic_evalTacticAux___spec__2(x_26, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_25);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
return x_27;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
lean_inc(x_29);
lean_dec(x_27);
x_31 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_32 = lean_ctor_get(x_21, 1);
lean_inc(x_32);
lean_dec(x_21);
x_33 = lean_ctor_get(x_22, 1);
lean_inc(x_33);
lean_dec(x_22);
x_34 = lean_box(0);
x_35 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1(x_33, x_34, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_32);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_35;
}
}
}
}
lean_object* l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10, lean_object* x_11) {
_start:
{
lean_object* x_12; 
x_12 = l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____lambda__1(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10, x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_12;
}
}
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Tactic_Split(lean_object*);
lean_object* initialize_Mathlib_Tactic_NoMatch(lean_object*);
lean_object* initialize_Mathlib_Tactic_Block(lean_object*);
lean_object* initialize_Lean_Elab_Command(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib_Tactic_Basic(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Split(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NoMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Block(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_variables___closed__1 = _init_l_variables___closed__1();
lean_mark_persistent(l_variables___closed__1);
l_variables___closed__2 = _init_l_variables___closed__2();
lean_mark_persistent(l_variables___closed__2);
l_variables___closed__3 = _init_l_variables___closed__3();
lean_mark_persistent(l_variables___closed__3);
l_variables___closed__4 = _init_l_variables___closed__4();
lean_mark_persistent(l_variables___closed__4);
l_variables___closed__5 = _init_l_variables___closed__5();
lean_mark_persistent(l_variables___closed__5);
l_variables___closed__6 = _init_l_variables___closed__6();
lean_mark_persistent(l_variables___closed__6);
l_variables___closed__7 = _init_l_variables___closed__7();
lean_mark_persistent(l_variables___closed__7);
l_variables___closed__8 = _init_l_variables___closed__8();
lean_mark_persistent(l_variables___closed__8);
l_variables___closed__9 = _init_l_variables___closed__9();
lean_mark_persistent(l_variables___closed__9);
l_variables___closed__10 = _init_l_variables___closed__10();
lean_mark_persistent(l_variables___closed__10);
l_variables___closed__11 = _init_l_variables___closed__11();
lean_mark_persistent(l_variables___closed__11);
l_variables___closed__12 = _init_l_variables___closed__12();
lean_mark_persistent(l_variables___closed__12);
l_variables___closed__13 = _init_l_variables___closed__13();
lean_mark_persistent(l_variables___closed__13);
l_variables = _init_l_variables();
lean_mark_persistent(l_variables);
l_elabVariables___closed__1 = _init_l_elabVariables___closed__1();
lean_mark_persistent(l_elabVariables___closed__1);
l_elabVariables___closed__2 = _init_l_elabVariables___closed__2();
lean_mark_persistent(l_elabVariables___closed__2);
l_elabVariables___closed__3 = _init_l_elabVariables___closed__3();
lean_mark_persistent(l_elabVariables___closed__3);
l_elabVariables___closed__4 = _init_l_elabVariables___closed__4();
lean_mark_persistent(l_elabVariables___closed__4);
l_elabVariables___closed__5 = _init_l_elabVariables___closed__5();
lean_mark_persistent(l_elabVariables___closed__5);
l_elabVariables___closed__6 = _init_l_elabVariables___closed__6();
lean_mark_persistent(l_elabVariables___closed__6);
l_elabVariables___closed__7 = _init_l_elabVariables___closed__7();
lean_mark_persistent(l_elabVariables___closed__7);
l_elabVariables___closed__8 = _init_l_elabVariables___closed__8();
lean_mark_persistent(l_elabVariables___closed__8);
l_elabVariables___closed__9 = _init_l_elabVariables___closed__9();
lean_mark_persistent(l_elabVariables___closed__9);
l_elabVariables___closed__10 = _init_l_elabVariables___closed__10();
lean_mark_persistent(l_elabVariables___closed__10);
l_elabVariables___closed__11 = _init_l_elabVariables___closed__11();
lean_mark_persistent(l_elabVariables___closed__11);
l_elabVariables___closed__12 = _init_l_elabVariables___closed__12();
lean_mark_persistent(l_elabVariables___closed__12);
l_elabVariables___closed__13 = _init_l_elabVariables___closed__13();
lean_mark_persistent(l_elabVariables___closed__13);
l_elabVariables___closed__14 = _init_l_elabVariables___closed__14();
lean_mark_persistent(l_elabVariables___closed__14);
l_elabVariables___closed__15 = _init_l_elabVariables___closed__15();
lean_mark_persistent(l_elabVariables___closed__15);
l_command__Lemma_________closed__1 = _init_l_command__Lemma_________closed__1();
lean_mark_persistent(l_command__Lemma_________closed__1);
l_command__Lemma_________closed__2 = _init_l_command__Lemma_________closed__2();
lean_mark_persistent(l_command__Lemma_________closed__2);
l_command__Lemma_________closed__3 = _init_l_command__Lemma_________closed__3();
lean_mark_persistent(l_command__Lemma_________closed__3);
l_command__Lemma_________closed__4 = _init_l_command__Lemma_________closed__4();
lean_mark_persistent(l_command__Lemma_________closed__4);
l_command__Lemma_________closed__5 = _init_l_command__Lemma_________closed__5();
lean_mark_persistent(l_command__Lemma_________closed__5);
l_command__Lemma_________closed__6 = _init_l_command__Lemma_________closed__6();
lean_mark_persistent(l_command__Lemma_________closed__6);
l_command__Lemma_________closed__7 = _init_l_command__Lemma_________closed__7();
lean_mark_persistent(l_command__Lemma_________closed__7);
l_command__Lemma_________closed__8 = _init_l_command__Lemma_________closed__8();
lean_mark_persistent(l_command__Lemma_________closed__8);
l_command__Lemma_________closed__9 = _init_l_command__Lemma_________closed__9();
lean_mark_persistent(l_command__Lemma_________closed__9);
l_command__Lemma_________closed__10 = _init_l_command__Lemma_________closed__10();
lean_mark_persistent(l_command__Lemma_________closed__10);
l_command__Lemma_________closed__11 = _init_l_command__Lemma_________closed__11();
lean_mark_persistent(l_command__Lemma_________closed__11);
l_command__Lemma_________closed__12 = _init_l_command__Lemma_________closed__12();
lean_mark_persistent(l_command__Lemma_________closed__12);
l_command__Lemma_________closed__13 = _init_l_command__Lemma_________closed__13();
lean_mark_persistent(l_command__Lemma_________closed__13);
l_command__Lemma_________closed__14 = _init_l_command__Lemma_________closed__14();
lean_mark_persistent(l_command__Lemma_________closed__14);
l_command__Lemma_________closed__15 = _init_l_command__Lemma_________closed__15();
lean_mark_persistent(l_command__Lemma_________closed__15);
l_command__Lemma_________closed__16 = _init_l_command__Lemma_________closed__16();
lean_mark_persistent(l_command__Lemma_________closed__16);
l_command__Lemma_________closed__17 = _init_l_command__Lemma_________closed__17();
lean_mark_persistent(l_command__Lemma_________closed__17);
l_command__Lemma_________closed__18 = _init_l_command__Lemma_________closed__18();
lean_mark_persistent(l_command__Lemma_________closed__18);
l_command__Lemma_________closed__19 = _init_l_command__Lemma_________closed__19();
lean_mark_persistent(l_command__Lemma_________closed__19);
l_command__Lemma_________closed__20 = _init_l_command__Lemma_________closed__20();
lean_mark_persistent(l_command__Lemma_________closed__20);
l_command__Lemma_________closed__21 = _init_l_command__Lemma_________closed__21();
lean_mark_persistent(l_command__Lemma_________closed__21);
l_command__Lemma______ = _init_l_command__Lemma______();
lean_mark_persistent(l_command__Lemma______);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_154____closed__5);
l_tacticExfalso___closed__1 = _init_l_tacticExfalso___closed__1();
lean_mark_persistent(l_tacticExfalso___closed__1);
l_tacticExfalso___closed__2 = _init_l_tacticExfalso___closed__2();
lean_mark_persistent(l_tacticExfalso___closed__2);
l_tacticExfalso___closed__3 = _init_l_tacticExfalso___closed__3();
lean_mark_persistent(l_tacticExfalso___closed__3);
l_tacticExfalso___closed__4 = _init_l_tacticExfalso___closed__4();
lean_mark_persistent(l_tacticExfalso___closed__4);
l_tacticExfalso___closed__5 = _init_l_tacticExfalso___closed__5();
lean_mark_persistent(l_tacticExfalso___closed__5);
l_tacticExfalso = _init_l_tacticExfalso();
lean_mark_persistent(l_tacticExfalso);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__8);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__9);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__10);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__11);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__12);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__13);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__14);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__15);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_276____closed__16);
l_tactic_____closed__1 = _init_l_tactic_____closed__1();
lean_mark_persistent(l_tactic_____closed__1);
l_tactic_____closed__2 = _init_l_tactic_____closed__2();
lean_mark_persistent(l_tactic_____closed__2);
l_tactic_____closed__3 = _init_l_tactic_____closed__3();
lean_mark_persistent(l_tactic_____closed__3);
l_tactic_____closed__4 = _init_l_tactic_____closed__4();
lean_mark_persistent(l_tactic_____closed__4);
l_tactic_____closed__5 = _init_l_tactic_____closed__5();
lean_mark_persistent(l_tactic_____closed__5);
l_tactic__ = _init_l_tactic__();
lean_mark_persistent(l_tactic__);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_374____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__8);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__9);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__10);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__11);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__12);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_455____closed__13);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_529____closed__5);
l_tacticSorry___closed__1 = _init_l_tacticSorry___closed__1();
lean_mark_persistent(l_tacticSorry___closed__1);
l_tacticSorry___closed__2 = _init_l_tacticSorry___closed__2();
lean_mark_persistent(l_tacticSorry___closed__2);
l_tacticSorry___closed__3 = _init_l_tacticSorry___closed__3();
lean_mark_persistent(l_tacticSorry___closed__3);
l_tacticSorry___closed__4 = _init_l_tacticSorry___closed__4();
lean_mark_persistent(l_tacticSorry___closed__4);
l_tacticSorry___closed__5 = _init_l_tacticSorry___closed__5();
lean_mark_persistent(l_tacticSorry___closed__5);
l_tacticSorry = _init_l_tacticSorry();
lean_mark_persistent(l_tacticSorry);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_632____closed__3);
l_tacticRwa_______closed__1 = _init_l_tacticRwa_______closed__1();
lean_mark_persistent(l_tacticRwa_______closed__1);
l_tacticRwa_______closed__2 = _init_l_tacticRwa_______closed__2();
lean_mark_persistent(l_tacticRwa_______closed__2);
l_tacticRwa_______closed__3 = _init_l_tacticRwa_______closed__3();
lean_mark_persistent(l_tacticRwa_______closed__3);
l_tacticRwa_______closed__4 = _init_l_tacticRwa_______closed__4();
lean_mark_persistent(l_tacticRwa_______closed__4);
l_tacticRwa_______closed__5 = _init_l_tacticRwa_______closed__5();
lean_mark_persistent(l_tacticRwa_______closed__5);
l_tacticRwa_______closed__6 = _init_l_tacticRwa_______closed__6();
lean_mark_persistent(l_tacticRwa_______closed__6);
l_tacticRwa_______closed__7 = _init_l_tacticRwa_______closed__7();
lean_mark_persistent(l_tacticRwa_______closed__7);
l_tacticRwa_______closed__8 = _init_l_tacticRwa_______closed__8();
lean_mark_persistent(l_tacticRwa_______closed__8);
l_tacticRwa_______closed__9 = _init_l_tacticRwa_______closed__9();
lean_mark_persistent(l_tacticRwa_______closed__9);
l_tacticRwa_______closed__10 = _init_l_tacticRwa_______closed__10();
lean_mark_persistent(l_tacticRwa_______closed__10);
l_tacticRwa____ = _init_l_tacticRwa____();
lean_mark_persistent(l_tacticRwa____);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____lambda__1___closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_711____closed__4);
l_tacticBy__cases_____x3a_____closed__1 = _init_l_tacticBy__cases_____x3a_____closed__1();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__1);
l_tacticBy__cases_____x3a_____closed__2 = _init_l_tacticBy__cases_____x3a_____closed__2();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__2);
l_tacticBy__cases_____x3a_____closed__3 = _init_l_tacticBy__cases_____x3a_____closed__3();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__3);
l_tacticBy__cases_____x3a_____closed__4 = _init_l_tacticBy__cases_____x3a_____closed__4();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__4);
l_tacticBy__cases_____x3a_____closed__5 = _init_l_tacticBy__cases_____x3a_____closed__5();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__5);
l_tacticBy__cases_____x3a_____closed__6 = _init_l_tacticBy__cases_____x3a_____closed__6();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__6);
l_tacticBy__cases_____x3a_____closed__7 = _init_l_tacticBy__cases_____x3a_____closed__7();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__7);
l_tacticBy__cases_____x3a_____closed__8 = _init_l_tacticBy__cases_____x3a_____closed__8();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__8);
l_tacticBy__cases_____x3a_____closed__9 = _init_l_tacticBy__cases_____x3a_____closed__9();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__9);
l_tacticBy__cases_____x3a_____closed__10 = _init_l_tacticBy__cases_____x3a_____closed__10();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__10);
l_tacticBy__cases_____x3a_____closed__11 = _init_l_tacticBy__cases_____x3a_____closed__11();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__11);
l_tacticBy__cases_____x3a_____closed__12 = _init_l_tacticBy__cases_____x3a_____closed__12();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__12);
l_tacticBy__cases_____x3a_____closed__13 = _init_l_tacticBy__cases_____x3a_____closed__13();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__13);
l_tacticBy__cases_____x3a_____closed__14 = _init_l_tacticBy__cases_____x3a_____closed__14();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__14);
l_tacticBy__cases_____x3a_____closed__15 = _init_l_tacticBy__cases_____x3a_____closed__15();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__15);
l_tacticBy__cases_____x3a_____closed__16 = _init_l_tacticBy__cases_____x3a_____closed__16();
lean_mark_persistent(l_tacticBy__cases_____x3a_____closed__16);
l_tacticBy__cases_____x3a__ = _init_l_tacticBy__cases_____x3a__();
lean_mark_persistent(l_tacticBy__cases_____x3a__);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__8);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__9);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__10);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__11);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__12);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__13);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__14);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__15);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__16);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__17);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__18);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__19);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__20);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__21);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__22);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__23);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__24);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__25);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__26);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__27);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__28);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__29);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__30);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__31);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__32);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__33);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__34);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__35);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__36);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__37);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__38);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__39);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__40);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__41);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__42);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__43);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__44);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__45);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__46);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_948____closed__47);
l_tacticBy__cases_____closed__1 = _init_l_tacticBy__cases_____closed__1();
lean_mark_persistent(l_tacticBy__cases_____closed__1);
l_tacticBy__cases_____closed__2 = _init_l_tacticBy__cases_____closed__2();
lean_mark_persistent(l_tacticBy__cases_____closed__2);
l_tacticBy__cases_____closed__3 = _init_l_tacticBy__cases_____closed__3();
lean_mark_persistent(l_tacticBy__cases_____closed__3);
l_tacticBy__cases_____closed__4 = _init_l_tacticBy__cases_____closed__4();
lean_mark_persistent(l_tacticBy__cases_____closed__4);
l_tacticBy__cases__ = _init_l_tacticBy__cases__();
lean_mark_persistent(l_tacticBy__cases__);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1260____closed__4);
l_tacticTransitivity_______closed__1 = _init_l_tacticTransitivity_______closed__1();
lean_mark_persistent(l_tacticTransitivity_______closed__1);
l_tacticTransitivity_______closed__2 = _init_l_tacticTransitivity_______closed__2();
lean_mark_persistent(l_tacticTransitivity_______closed__2);
l_tacticTransitivity_______closed__3 = _init_l_tacticTransitivity_______closed__3();
lean_mark_persistent(l_tacticTransitivity_______closed__3);
l_tacticTransitivity_______closed__4 = _init_l_tacticTransitivity_______closed__4();
lean_mark_persistent(l_tacticTransitivity_______closed__4);
l_tacticTransitivity_______closed__5 = _init_l_tacticTransitivity_______closed__5();
lean_mark_persistent(l_tacticTransitivity_______closed__5);
l_tacticTransitivity_______closed__6 = _init_l_tacticTransitivity_______closed__6();
lean_mark_persistent(l_tacticTransitivity_______closed__6);
l_tacticTransitivity_______closed__7 = _init_l_tacticTransitivity_______closed__7();
lean_mark_persistent(l_tacticTransitivity_______closed__7);
l_tacticTransitivity_______closed__8 = _init_l_tacticTransitivity_______closed__8();
lean_mark_persistent(l_tacticTransitivity_______closed__8);
l_tacticTransitivity_______closed__9 = _init_l_tacticTransitivity_______closed__9();
lean_mark_persistent(l_tacticTransitivity_______closed__9);
l_tacticTransitivity_______closed__10 = _init_l_tacticTransitivity_______closed__10();
lean_mark_persistent(l_tacticTransitivity_______closed__10);
l_tacticTransitivity_______closed__11 = _init_l_tacticTransitivity_______closed__11();
lean_mark_persistent(l_tacticTransitivity_______closed__11);
l_tacticTransitivity____ = _init_l_tacticTransitivity____();
lean_mark_persistent(l_tacticTransitivity____);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__8);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__9);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__10);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__11);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__12);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__13);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__14);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__15);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1545____closed__16);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_1729____closed__5);
l_introv___closed__1 = _init_l_introv___closed__1();
lean_mark_persistent(l_introv___closed__1);
l_introv___closed__2 = _init_l_introv___closed__2();
lean_mark_persistent(l_introv___closed__2);
l_introv___closed__3 = _init_l_introv___closed__3();
lean_mark_persistent(l_introv___closed__3);
l_introv___closed__4 = _init_l_introv___closed__4();
lean_mark_persistent(l_introv___closed__4);
l_introv___closed__5 = _init_l_introv___closed__5();
lean_mark_persistent(l_introv___closed__5);
l_introv___closed__6 = _init_l_introv___closed__6();
lean_mark_persistent(l_introv___closed__6);
l_introv___closed__7 = _init_l_introv___closed__7();
lean_mark_persistent(l_introv___closed__7);
l_introv___closed__8 = _init_l_introv___closed__8();
lean_mark_persistent(l_introv___closed__8);
l_introv = _init_l_introv();
lean_mark_persistent(l_introv);
l_evalIntrov_intro1PStep___closed__1 = _init_l_evalIntrov_intro1PStep___closed__1();
lean_mark_persistent(l_evalIntrov_intro1PStep___closed__1);
l_evalIntrov___closed__1 = _init_l_evalIntrov___closed__1();
lean_mark_persistent(l_evalIntrov___closed__1);
l_evalIntrov___closed__2 = _init_l_evalIntrov___closed__2();
lean_mark_persistent(l_evalIntrov___closed__2);
l_tacticAssumption_x27___closed__1 = _init_l_tacticAssumption_x27___closed__1();
lean_mark_persistent(l_tacticAssumption_x27___closed__1);
l_tacticAssumption_x27___closed__2 = _init_l_tacticAssumption_x27___closed__2();
lean_mark_persistent(l_tacticAssumption_x27___closed__2);
l_tacticAssumption_x27___closed__3 = _init_l_tacticAssumption_x27___closed__3();
lean_mark_persistent(l_tacticAssumption_x27___closed__3);
l_tacticAssumption_x27___closed__4 = _init_l_tacticAssumption_x27___closed__4();
lean_mark_persistent(l_tacticAssumption_x27___closed__4);
l_tacticAssumption_x27___closed__5 = _init_l_tacticAssumption_x27___closed__5();
lean_mark_persistent(l_tacticAssumption_x27___closed__5);
l_tacticAssumption_x27 = _init_l_tacticAssumption_x27();
lean_mark_persistent(l_tacticAssumption_x27);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_2318____closed__7);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__1 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__1();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__1);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__2 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__2();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__2);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__3 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__3();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__3);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__4 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__4();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__4);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__5 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__5();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__5);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__6 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__6();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__6);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__7 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__7();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__7);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__8 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__8();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__8);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__9 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__9();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__9);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__10 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__10();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__10);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__11 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__11();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__11);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__12 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__12();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__12);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__13 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__13();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__13);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__14 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__14();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__14);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__15 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__15();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__15);
l_tacticExacts_x5b___x2c_x2c_x5d___closed__16 = _init_l_tacticExacts_x5b___x2c_x2c_x5d___closed__16();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d___closed__16);
l_tacticExacts_x5b___x2c_x2c_x5d = _init_l_tacticExacts_x5b___x2c_x2c_x5d();
lean_mark_persistent(l_tacticExacts_x5b___x2c_x2c_x5d);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__1);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2453____closed__2);
l_tacticGuardExprEq___x3a_x3d_____closed__1 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__1();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__1);
l_tacticGuardExprEq___x3a_x3d_____closed__2 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__2();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__2);
l_tacticGuardExprEq___x3a_x3d_____closed__3 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__3();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__3);
l_tacticGuardExprEq___x3a_x3d_____closed__4 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__4();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__4);
l_tacticGuardExprEq___x3a_x3d_____closed__5 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__5();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__5);
l_tacticGuardExprEq___x3a_x3d_____closed__6 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__6();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__6);
l_tacticGuardExprEq___x3a_x3d_____closed__7 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__7();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__7);
l_tacticGuardExprEq___x3a_x3d_____closed__8 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__8();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__8);
l_tacticGuardExprEq___x3a_x3d_____closed__9 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__9();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__9);
l_tacticGuardExprEq___x3a_x3d_____closed__10 = _init_l_tacticGuardExprEq___x3a_x3d_____closed__10();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d_____closed__10);
l_tacticGuardExprEq___x3a_x3d__ = _init_l_tacticGuardExprEq___x3a_x3d__();
lean_mark_persistent(l_tacticGuardExprEq___x3a_x3d__);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__1);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__2);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__3);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__4);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__5);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2699____closed__6);
l_tacticGuardTarget_____closed__1 = _init_l_tacticGuardTarget_____closed__1();
lean_mark_persistent(l_tacticGuardTarget_____closed__1);
l_tacticGuardTarget_____closed__2 = _init_l_tacticGuardTarget_____closed__2();
lean_mark_persistent(l_tacticGuardTarget_____closed__2);
l_tacticGuardTarget_____closed__3 = _init_l_tacticGuardTarget_____closed__3();
lean_mark_persistent(l_tacticGuardTarget_____closed__3);
l_tacticGuardTarget_____closed__4 = _init_l_tacticGuardTarget_____closed__4();
lean_mark_persistent(l_tacticGuardTarget_____closed__4);
l_tacticGuardTarget_____closed__5 = _init_l_tacticGuardTarget_____closed__5();
lean_mark_persistent(l_tacticGuardTarget_____closed__5);
l_tacticGuardTarget_____closed__6 = _init_l_tacticGuardTarget_____closed__6();
lean_mark_persistent(l_tacticGuardTarget_____closed__6);
l_tacticGuardTarget__ = _init_l_tacticGuardTarget__();
lean_mark_persistent(l_tacticGuardTarget__);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__1);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_2833____closed__2);
l_guardHyp___closed__1 = _init_l_guardHyp___closed__1();
lean_mark_persistent(l_guardHyp___closed__1);
l_guardHyp___closed__2 = _init_l_guardHyp___closed__2();
lean_mark_persistent(l_guardHyp___closed__2);
l_guardHyp___closed__3 = _init_l_guardHyp___closed__3();
lean_mark_persistent(l_guardHyp___closed__3);
l_guardHyp___closed__4 = _init_l_guardHyp___closed__4();
lean_mark_persistent(l_guardHyp___closed__4);
l_guardHyp___closed__5 = _init_l_guardHyp___closed__5();
lean_mark_persistent(l_guardHyp___closed__5);
l_guardHyp___closed__6 = _init_l_guardHyp___closed__6();
lean_mark_persistent(l_guardHyp___closed__6);
l_guardHyp___closed__7 = _init_l_guardHyp___closed__7();
lean_mark_persistent(l_guardHyp___closed__7);
l_guardHyp___closed__8 = _init_l_guardHyp___closed__8();
lean_mark_persistent(l_guardHyp___closed__8);
l_guardHyp___closed__9 = _init_l_guardHyp___closed__9();
lean_mark_persistent(l_guardHyp___closed__9);
l_guardHyp___closed__10 = _init_l_guardHyp___closed__10();
lean_mark_persistent(l_guardHyp___closed__10);
l_guardHyp___closed__11 = _init_l_guardHyp___closed__11();
lean_mark_persistent(l_guardHyp___closed__11);
l_guardHyp___closed__12 = _init_l_guardHyp___closed__12();
lean_mark_persistent(l_guardHyp___closed__12);
l_guardHyp___closed__13 = _init_l_guardHyp___closed__13();
lean_mark_persistent(l_guardHyp___closed__13);
l_guardHyp___closed__14 = _init_l_guardHyp___closed__14();
lean_mark_persistent(l_guardHyp___closed__14);
l_guardHyp = _init_l_guardHyp();
lean_mark_persistent(l_guardHyp);
l_evalGuardHyp___lambda__1___closed__1 = _init_l_evalGuardHyp___lambda__1___closed__1();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__1);
l_evalGuardHyp___lambda__1___closed__2 = _init_l_evalGuardHyp___lambda__1___closed__2();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__2);
l_evalGuardHyp___lambda__1___closed__3 = _init_l_evalGuardHyp___lambda__1___closed__3();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__3);
l_evalGuardHyp___lambda__1___closed__4 = _init_l_evalGuardHyp___lambda__1___closed__4();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__4);
l_evalGuardHyp___lambda__1___closed__5 = _init_l_evalGuardHyp___lambda__1___closed__5();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__5);
l_evalGuardHyp___lambda__1___closed__6 = _init_l_evalGuardHyp___lambda__1___closed__6();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__6);
l_evalGuardHyp___lambda__1___closed__7 = _init_l_evalGuardHyp___lambda__1___closed__7();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__7);
l_evalGuardHyp___lambda__1___closed__8 = _init_l_evalGuardHyp___lambda__1___closed__8();
lean_mark_persistent(l_evalGuardHyp___lambda__1___closed__8);
l_evalGuardHyp___lambda__2___closed__1 = _init_l_evalGuardHyp___lambda__2___closed__1();
lean_mark_persistent(l_evalGuardHyp___lambda__2___closed__1);
l_evalGuardHyp___lambda__2___closed__2 = _init_l_evalGuardHyp___lambda__2___closed__2();
lean_mark_persistent(l_evalGuardHyp___lambda__2___closed__2);
l_evalGuardHyp___lambda__3___closed__1 = _init_l_evalGuardHyp___lambda__3___closed__1();
lean_mark_persistent(l_evalGuardHyp___lambda__3___closed__1);
l_evalGuardHyp___lambda__3___closed__2 = _init_l_evalGuardHyp___lambda__3___closed__2();
lean_mark_persistent(l_evalGuardHyp___lambda__3___closed__2);
l_tacticMatchTarget_____closed__1 = _init_l_tacticMatchTarget_____closed__1();
lean_mark_persistent(l_tacticMatchTarget_____closed__1);
l_tacticMatchTarget_____closed__2 = _init_l_tacticMatchTarget_____closed__2();
lean_mark_persistent(l_tacticMatchTarget_____closed__2);
l_tacticMatchTarget_____closed__3 = _init_l_tacticMatchTarget_____closed__3();
lean_mark_persistent(l_tacticMatchTarget_____closed__3);
l_tacticMatchTarget_____closed__4 = _init_l_tacticMatchTarget_____closed__4();
lean_mark_persistent(l_tacticMatchTarget_____closed__4);
l_tacticMatchTarget_____closed__5 = _init_l_tacticMatchTarget_____closed__5();
lean_mark_persistent(l_tacticMatchTarget_____closed__5);
l_tacticMatchTarget_____closed__6 = _init_l_tacticMatchTarget_____closed__6();
lean_mark_persistent(l_tacticMatchTarget_____closed__6);
l_tacticMatchTarget__ = _init_l_tacticMatchTarget__();
lean_mark_persistent(l_tacticMatchTarget__);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__1);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_3571____lambda__1___closed__2);
l_byContra___closed__1 = _init_l_byContra___closed__1();
lean_mark_persistent(l_byContra___closed__1);
l_byContra___closed__2 = _init_l_byContra___closed__2();
lean_mark_persistent(l_byContra___closed__2);
l_byContra___closed__3 = _init_l_byContra___closed__3();
lean_mark_persistent(l_byContra___closed__3);
l_byContra___closed__4 = _init_l_byContra___closed__4();
lean_mark_persistent(l_byContra___closed__4);
l_byContra___closed__5 = _init_l_byContra___closed__5();
lean_mark_persistent(l_byContra___closed__5);
l_byContra___closed__6 = _init_l_byContra___closed__6();
lean_mark_persistent(l_byContra___closed__6);
l_byContra___closed__7 = _init_l_byContra___closed__7();
lean_mark_persistent(l_byContra___closed__7);
l_byContra = _init_l_byContra();
lean_mark_persistent(l_byContra);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__8);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__9);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__10);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__11);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__12);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__13);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_3730____closed__14);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4077____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__2);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__3);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__4);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__5);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__6);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__7);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4386____closed__8);
l_tacticSorry__1___closed__1 = _init_l_tacticSorry__1___closed__1();
lean_mark_persistent(l_tacticSorry__1___closed__1);
l_tacticSorry__1___closed__2 = _init_l_tacticSorry__1___closed__2();
lean_mark_persistent(l_tacticSorry__1___closed__2);
l_tacticSorry__1___closed__3 = _init_l_tacticSorry__1___closed__3();
lean_mark_persistent(l_tacticSorry__1___closed__3);
l_tacticSorry__1 = _init_l_tacticSorry__1();
lean_mark_persistent(l_tacticSorry__1);
l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1 = _init_l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1();
lean_mark_persistent(l_myMacro____x40_Mathlib_Tactic_Basic___hyg_4795____closed__1);
l_tacticIterate_______closed__1 = _init_l_tacticIterate_______closed__1();
lean_mark_persistent(l_tacticIterate_______closed__1);
l_tacticIterate_______closed__2 = _init_l_tacticIterate_______closed__2();
lean_mark_persistent(l_tacticIterate_______closed__2);
l_tacticIterate_______closed__3 = _init_l_tacticIterate_______closed__3();
lean_mark_persistent(l_tacticIterate_______closed__3);
l_tacticIterate_______closed__4 = _init_l_tacticIterate_______closed__4();
lean_mark_persistent(l_tacticIterate_______closed__4);
l_tacticIterate_______closed__5 = _init_l_tacticIterate_______closed__5();
lean_mark_persistent(l_tacticIterate_______closed__5);
l_tacticIterate_______closed__6 = _init_l_tacticIterate_______closed__6();
lean_mark_persistent(l_tacticIterate_______closed__6);
l_tacticIterate_______closed__7 = _init_l_tacticIterate_______closed__7();
lean_mark_persistent(l_tacticIterate_______closed__7);
l_tacticIterate_______closed__8 = _init_l_tacticIterate_______closed__8();
lean_mark_persistent(l_tacticIterate_______closed__8);
l_tacticIterate_______closed__9 = _init_l_tacticIterate_______closed__9();
lean_mark_persistent(l_tacticIterate_______closed__9);
l_tacticIterate_______closed__10 = _init_l_tacticIterate_______closed__10();
lean_mark_persistent(l_tacticIterate_______closed__10);
l_tacticIterate_______closed__11 = _init_l_tacticIterate_______closed__11();
lean_mark_persistent(l_tacticIterate_______closed__11);
l_tacticIterate____ = _init_l_tacticIterate____();
lean_mark_persistent(l_tacticIterate____);
l_tacticRepeat_x27_____closed__1 = _init_l_tacticRepeat_x27_____closed__1();
lean_mark_persistent(l_tacticRepeat_x27_____closed__1);
l_tacticRepeat_x27_____closed__2 = _init_l_tacticRepeat_x27_____closed__2();
lean_mark_persistent(l_tacticRepeat_x27_____closed__2);
l_tacticRepeat_x27_____closed__3 = _init_l_tacticRepeat_x27_____closed__3();
lean_mark_persistent(l_tacticRepeat_x27_____closed__3);
l_tacticRepeat_x27_____closed__4 = _init_l_tacticRepeat_x27_____closed__4();
lean_mark_persistent(l_tacticRepeat_x27_____closed__4);
l_tacticRepeat_x27_____closed__5 = _init_l_tacticRepeat_x27_____closed__5();
lean_mark_persistent(l_tacticRepeat_x27_____closed__5);
l_tacticRepeat_x27_____closed__6 = _init_l_tacticRepeat_x27_____closed__6();
lean_mark_persistent(l_tacticRepeat_x27_____closed__6);
l_tacticRepeat_x27__ = _init_l_tacticRepeat_x27__();
lean_mark_persistent(l_tacticRepeat_x27__);
l_tacticAnyGoals_____closed__1 = _init_l_tacticAnyGoals_____closed__1();
lean_mark_persistent(l_tacticAnyGoals_____closed__1);
l_tacticAnyGoals_____closed__2 = _init_l_tacticAnyGoals_____closed__2();
lean_mark_persistent(l_tacticAnyGoals_____closed__2);
l_tacticAnyGoals_____closed__3 = _init_l_tacticAnyGoals_____closed__3();
lean_mark_persistent(l_tacticAnyGoals_____closed__3);
l_tacticAnyGoals_____closed__4 = _init_l_tacticAnyGoals_____closed__4();
lean_mark_persistent(l_tacticAnyGoals_____closed__4);
l_tacticAnyGoals_____closed__5 = _init_l_tacticAnyGoals_____closed__5();
lean_mark_persistent(l_tacticAnyGoals_____closed__5);
l_tacticAnyGoals_____closed__6 = _init_l_tacticAnyGoals_____closed__6();
lean_mark_persistent(l_tacticAnyGoals_____closed__6);
l_tacticAnyGoals__ = _init_l_tacticAnyGoals__();
lean_mark_persistent(l_tacticAnyGoals__);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__1);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__2);
l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3 = _init_l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3();
lean_mark_persistent(l_elabFn____x40_Mathlib_Tactic_Basic___hyg_5331____closed__3);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
