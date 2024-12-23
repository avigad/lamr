import Lake
open Lake DSL

package LAMR

require "leanprover-community" / "mathlib"

@[default_target]
lean_lib LAMR

lean_exe dpll where
  root := `LAMR.Examples.using_sat_solvers.dpll

lean_exe colorEncode where
  root := `LAMR.Examples.using_sat_solvers.colorEncode
