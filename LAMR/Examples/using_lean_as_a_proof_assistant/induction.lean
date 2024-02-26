import Mathlib.Data.Real.Basic
import LAMR

-- textbook: induction on Nat
def sum_up_to : Nat → Nat
  | 0 => 0
  | (n + 1) => (n + 1) + sum_up_to n

example (n : Nat) : 2 * sum_up_to n = n * (n + 1) := by
  induction n with
  | zero =>
      rw [Nat.zero_eq, sum_up_to]
  | succ n ih =>
      rw [Nat.succ_eq_add_one, sum_up_to, mul_add, ih]
      ring
-- end textbook

-- textbook: more induction on Nat
def sum_odds : Nat → Nat
  | 0 => 0
  | (n + 1) => (2 * n + 1) + sum_odds n

theorem sum_odds_eq_square (n : Nat) : sum_odds n = n^2 := by
  induction n with
  | zero =>
      rw [sum_odds, Nat.zero_eq, pow_two, zero_mul]
  | succ n ih =>
      rw [sum_odds, ih, Nat.succ_eq_add_one]
      ring
-- end textbook

-- textbook: definition of addition
open Nat

def add' : Nat → Nat → Nat
  | m, 0 => m
  | m, (n + 1) => (add' m n) + 1

theorem zero_add' (n : Nat) : add' 0 n = n := by
  induction n with
  | zero => rw [add']
  | succ n ih => rw [add', ih]

theorem succ_add' (m n : Nat) : add' (succ m) n = succ (add' m n) := by
  induction n with
  | zero => rw [add', add']
  | succ n ih => rw [add', ih, add']

theorem add'_comm (m n : Nat) : add' m n = add' n m := by
  induction m with
  | zero =>
    rw [zero_eq, zero_add', add']
  | succ m ih =>
    rw [add', succ_add', ih]
-- end textbook

-- textbook: List
open List

variable {α : Type}
variable (as bs cs : List α)
variable (a b c : α)

example : [] ++ as = as := nil_append as
example : (a :: as) ++ bs = a :: (as ++ bs) := cons_append a as bs

example : [] ++ as = as := rfl
example : (a :: as) ++ bs = a :: (as ++ bs) := rfl
-- end textbook

-- textbook: append_nil'
theorem append_nil' : as ++ [] = as := by
  induction as with
  | nil => rw [nil_append]
  | cons a as ih => rw [cons_append, ih]
-- end textbook

-- textbook: append_assoc'
theorem append_assoc' : as ++ bs ++ cs = as ++ (bs ++ cs) := by
  induction as with
  | nil => rw [nil_append, nil_append]
  | cons a as ih => rw [cons_append, cons_append, ih, cons_append]
-- end textbook

-- textbook: reverse
example : reverse as = reverseAux as [] := rfl
example : reverseAux [] bs = bs := rfl
example : reverseAux (a :: as) bs = reverseAux as (a :: bs) := rfl
-- end textbook

-- textbook: reverse identities
theorem reverseAux_append : reverseAux (as ++ bs) cs = reverseAux bs (reverseAux as cs) := by
  induction as generalizing cs with
  | nil => rw [nil_append, reverseAux]
  | cons a as ih => rw [cons_append, reverseAux, reverseAux, ih]

theorem reverseAux_append' : reverseAux as (bs ++ cs) = reverseAux as bs ++ cs := by
  induction as generalizing bs with
  | nil => rw [reverseAux, reverseAux]
  | cons a as ih => rw [reverseAux, reverseAux, ←cons_append, ih]
-- end textbook

-- textbook: reverse_append
theorem reverse_append : reverse (as ++ bs) = reverse bs ++ reverse as := by
  rw [reverse, reverseAux_append, reverse, ←reverseAux_append', nil_append,
      reverse]
-- end textbook

-- textbook: occurs
namespace PropForm

def Occurs (v : String) : PropForm → Prop
  | tr => False
  | fls => False
  | var w => v = w
  | neg A => Occurs v A
  | conj A B => Occurs v A ∨ Occurs v B
  | disj A B => Occurs v A ∨ Occurs v B
  | impl A B => Occurs v A ∨ Occurs v B
  | biImpl A B => Occurs v A ∨ Occurs v B
-- end textbook

-- textbook: eval
def eval (v : String → Bool) : PropForm → Bool
  | var s => v s
  | tr => true
  | fls => false
  | neg A => !(eval v A)
  | conj A B => (eval v A) && (eval v B)
  | disj A B => (eval v A) || (eval v B)
  | impl A B => !(eval v A) || (eval v B)
  | biImpl A B => (!(eval v A) || (eval v B)) && (!(eval v B) || (eval v A))
-- end textbook

-- textbook: eval_of_not_occurs
variable (A B : PropForm) (τ : String → Bool) (v : String)

theorem eval_of_not_occurs (h : ¬ Occurs v A) (b : Bool) :
    A.eval (fun w => if v = w then b else τ w) = A.eval τ := by
  induction A with
  | var s =>
    rw [eval]
    rw [Occurs] at h
    rw [if_neg h, eval]
  | tr =>
    rw [eval, eval]
  | fls =>
    rw [eval, eval]
  | neg A ihA =>
    rw [eval, eval]
    rw [Occurs] at h
    rw [ihA h]
  | conj A B ihA ihB =>
    rw [Occurs, not_or] at h
    rcases h with ⟨hA, hB⟩
    rw [eval, eval, ihA hA, ihB hB]
  | disj A B ihA ihB =>
    rw [Occurs, not_or] at h
    rcases h with ⟨hA, hB⟩
    rw [eval, eval, ihA hA, ihB hB]
  | impl A B ihA ihB =>
    rw [Occurs, not_or] at h
    rcases h with ⟨hA, hB⟩
    rw [eval, eval, ihA hA, ihB hB]
  | biImpl A B ihA ihB =>
    rw [Occurs, not_or] at h
    rcases h with ⟨hA, hB⟩
    rw [eval, eval, ihA hA, ihB hB]
-- end textbook

-- textbook: eval_of_not_occurs with automation
example (h : ¬ Occurs v A) (b : Bool) :
    A.eval (fun w => if v = w then b else τ w) = A.eval τ := by
  induction A <;> simp [*, Occurs, eval, not_or] at * <;> simp [*] at *
-- end textbook

end PropForm
