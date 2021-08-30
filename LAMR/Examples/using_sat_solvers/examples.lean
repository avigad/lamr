import LAMR.Util.Propositional

def exCnf0 := cnf!{
  p,
  -p q -r,
  -p q
}

def exCnf1 := cnf!{
  p -q,
  p q,
  -p -r,
  -p r
}

def exCnf2 := cnf!{
  p q,
  -p,
  -q
}

/-
Examples of use of Cadical.
-/

-- textbook: SAT example
def cadicalExample : IO Unit := do
  let (s, result) ← callCadical exCnf0
  IO.println "Output from CaDiCaL :\n"
  --IO.println s
  --IO.println "\n\n"
  IO.println (formatResult result)
  pure ()

#eval cadicalExample
-- end textbook: SAT example
