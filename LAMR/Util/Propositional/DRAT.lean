import LAMR.Util.Propositional.Syntax

namespace DRAT

inductive Step where
  | add : List Int → Step
  | delete : List Int → Step

def Proof := List Step

/-- Decode a single unsigned int using the variable-byte encoding.
Returns the int and the offset just past it. -/
private partial def decodeUIntVarByte (bs : ByteArray) (off : Nat) : Nat × Nat :=
  go off 0 0
where
  go (off : Nat) (acc : Nat) (i : Nat) : Nat × Nat :=
    let b := bs.get! off
    if b < 128 then -- last byte
      (acc + 2^(7*i)*b.toNat, off+1)
    else
      let b := b &&& 0b01111111
      go (off+1) (acc + 2^(7*i)*b.toNat) (i+1)

/-- Decodes an int literal from an unsigned int representation. -/
private def UIntToLit (v : Nat) : Int :=
  if v % 2 == 0 then
    v / 2
  else if let v' + 1 := v then
    - (v' / 2)
  else unreachable!

partial def decodeDrat (bs : ByteArray) : Except String Proof :=
  go 0 [] |>.map List.reverse
where
  go (off : Nat) (acc : List Step) : Except String (List Step) :=
    if off == bs.size then .ok acc
    else
      let b := bs.get! off
      if b == 0x61 then do -- 'a', add clause
        let (acc', off') ← goAdd (off + 1) acc []
        go off' acc'
      else if b == 0x64 then do -- 'd', delete clause
        let (acc', off') ← goDel (off + 1) acc []
        go off' acc'
      else
        throw s!"expected 'a' or 'd', got {b}"
  goAdd (off : Nat) (acc : List Step) (accC : List Int) : Except String (List Step × Nat) :=
    let b := bs.get! off
    if b == 0 then -- last byte in clause
      .ok (Step.add accC.reverse :: acc, off + 1)
    else
      let (v, off') := decodeUIntVarByte bs (off + 1)
      let v := UIntToLit v
      goAdd off' acc (v :: accC)
  goDel (off : Nat) (acc : List Step) (accC : List Int) : Except String (List Step × Nat) :=
    let b := bs.get! off
    if b == 0 then
      .ok (Step.delete accC.reverse :: acc, off + 1)
    else
      let (v, off') := decodeUIntVarByte bs (off + 1)
      let v := UIntToLit v
      goDel off' acc (v :: accC)

end DRAT