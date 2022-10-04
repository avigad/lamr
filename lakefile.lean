import Lake
open Lake DSL

package LAMR

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git"@"7da24c4024a2cb547d9d6e85943027daa77d850f"

@[defaultTarget]
lean_lib LAMR

lean_exe dpll where
  root := `LAMR.Examples.using_sat_solvers.dpll

lean_exe colorEncode where
  root := `LAMR.Examples.using_sat_solvers.colorEncode

