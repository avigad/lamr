
-- textbook: expressions
#check 2 + 2
#check -5
#check [1, 2, 3]
#check #[1, 2, 3]
#check (1, 2, 3)
#check "hello world"
#check true
#check fun x => x + 1
#check fun x => if x = 1 then "yes" else "no"
-- end: expressions


-- textbook: types
#check Nat
#check Int
#check List Nat
#check Array Nat
#check Nat × Nat × Nat
#check String
#check Bool
#check Nat → Nat
#check Nat → String
-- end: types


-- textbook: asserting types
#check (2 + 2 : Nat)
#check ([1, 2, 3] : List Nat)
-- end: asserting types


-- textbook: some definitions
def four : Nat := 2 + 2

def isOne (x : Nat) : String := if x = 1 then "yes" else "no"

#check four
#print four

#check isOne
#print isOne
-- end: some definitions


-- textbook: definitions without type ascriptions
def four' := 2 + 2

def isOne' x := if x = 1 then "yes" else "no"
-- end: definitions without type ascriptions


-- textbook: evaluating expressions
#eval four
#eval isOne 3
#eval isOne 1
-- end: evaluating expressions


-- textbook: using IO
#eval IO.println "Hello, world!"
-- end: using IO



-- textbook: some propositions
#check 2 + 2 = 4
#check 2 + 2 < 5
#check isOne 3 = "no"
#check 2 + 2 < 5 ∧ isOne 3 = "no"
-- end: some propositions


-- textbook: Fermat's last theorem
def Fermat_statement : Prop :=
∀ a b c n : Nat, a * b * c ≠ 0 ∧ n > 2 → a^n + b^n ≠ c^n
-- end: Fermat's last theorem

-- textbook: an easy proof
theorem two_plus_two_is_four : 2 + 2 = 4 := rfl
-- end: an easy proof

-- textbook: harder to prove
theorem Fermat_last_theorem : Fermat_statement := sorry
-- end: harder to prove


