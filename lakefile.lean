import Lake
open Lake DSL

package LAMR

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git"

@[default_target]
lean_lib LAMR

lean_exe dpll where
  root := `LAMR.Examples.using_sat_solvers.dpll

lean_exe colorEncode where
  root := `LAMR.Examples.using_sat_solvers.colorEncode
