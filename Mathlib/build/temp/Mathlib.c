// Lean compiler output
// Module: Mathlib
// Imports: Init Mathlib.Algebra.Group.Basic Mathlib.Algebra.Group.Defs Mathlib.Algebra.GroupWithZero.Defs Mathlib.Algebra.Ring.Basic Mathlib.Data.Array.Basic Mathlib.Data.ByteArray Mathlib.Data.Char Mathlib.Data.Equiv.Basic Mathlib.Data.Equiv.Functor Mathlib.Data.Int.Basic Mathlib.Data.List.Basic Mathlib.Data.List.Card Mathlib.Data.Nat.Basic Mathlib.Data.Nat.Gcd Mathlib.Data.Prod Mathlib.Data.Subtype Mathlib.Data.UInt Mathlib.Dvd Mathlib.Function Mathlib.Init.Algebra.Functions Mathlib.Init.Algebra.Order Mathlib.Init.Logic Mathlib.Logic.Basic Mathlib.Logic.Function.Basic Mathlib.Set Mathlib.SetNotation Mathlib.Tactic.Basic Mathlib.Tactic.Block Mathlib.Tactic.Coe Mathlib.Tactic.Core Mathlib.Tactic.NoMatch Mathlib.Tactic.NormNum Mathlib.Tactic.OpenPrivate Mathlib.Tactic.PrintPrefix Mathlib.Tactic.Ring Mathlib.Tactic.RunTac Mathlib.Tactic.Split Mathlib.Tactic.Spread Mathlib.Tactic.SudoSetOption Mathlib.Test.Split Mathlib.Util.Export Mathlib.Util.Time
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
lean_object* initialize_Init(lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Basic(lean_object*);
lean_object* initialize_Mathlib_Algebra_Group_Defs(lean_object*);
lean_object* initialize_Mathlib_Algebra_GroupWithZero_Defs(lean_object*);
lean_object* initialize_Mathlib_Algebra_Ring_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_Array_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_ByteArray(lean_object*);
lean_object* initialize_Mathlib_Data_Char(lean_object*);
lean_object* initialize_Mathlib_Data_Equiv_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_Equiv_Functor(lean_object*);
lean_object* initialize_Mathlib_Data_Int_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_List_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_List_Card(lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Basic(lean_object*);
lean_object* initialize_Mathlib_Data_Nat_Gcd(lean_object*);
lean_object* initialize_Mathlib_Data_Prod(lean_object*);
lean_object* initialize_Mathlib_Data_Subtype(lean_object*);
lean_object* initialize_Mathlib_Data_UInt(lean_object*);
lean_object* initialize_Mathlib_Dvd(lean_object*);
lean_object* initialize_Mathlib_Function(lean_object*);
lean_object* initialize_Mathlib_Init_Algebra_Functions(lean_object*);
lean_object* initialize_Mathlib_Init_Algebra_Order(lean_object*);
lean_object* initialize_Mathlib_Init_Logic(lean_object*);
lean_object* initialize_Mathlib_Logic_Basic(lean_object*);
lean_object* initialize_Mathlib_Logic_Function_Basic(lean_object*);
lean_object* initialize_Mathlib_Set(lean_object*);
lean_object* initialize_Mathlib_SetNotation(lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(lean_object*);
lean_object* initialize_Mathlib_Tactic_Block(lean_object*);
lean_object* initialize_Mathlib_Tactic_Coe(lean_object*);
lean_object* initialize_Mathlib_Tactic_Core(lean_object*);
lean_object* initialize_Mathlib_Tactic_NoMatch(lean_object*);
lean_object* initialize_Mathlib_Tactic_NormNum(lean_object*);
lean_object* initialize_Mathlib_Tactic_OpenPrivate(lean_object*);
lean_object* initialize_Mathlib_Tactic_PrintPrefix(lean_object*);
lean_object* initialize_Mathlib_Tactic_Ring(lean_object*);
lean_object* initialize_Mathlib_Tactic_RunTac(lean_object*);
lean_object* initialize_Mathlib_Tactic_Split(lean_object*);
lean_object* initialize_Mathlib_Tactic_Spread(lean_object*);
lean_object* initialize_Mathlib_Tactic_SudoSetOption(lean_object*);
lean_object* initialize_Mathlib_Test_Split(lean_object*);
lean_object* initialize_Mathlib_Util_Export(lean_object*);
lean_object* initialize_Mathlib_Util_Time(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Mathlib(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Group_Defs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_GroupWithZero_Defs(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Algebra_Ring_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Array_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_ByteArray(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Char(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Equiv_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Equiv_Functor(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Int_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_List_Card(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Nat_Gcd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Prod(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_Subtype(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Data_UInt(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Dvd(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Function(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init_Algebra_Functions(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init_Algebra_Order(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Init_Logic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Logic_Function_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Set(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_SetNotation(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Block(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Coe(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Core(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NoMatch(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_NormNum(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_OpenPrivate(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_PrintPrefix(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Ring(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_RunTac(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Split(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Spread(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_SudoSetOption(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Test_Split(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_Export(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Util_Time(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
