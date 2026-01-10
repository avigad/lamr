import Lean

inductive SystemType where
  | windows | windowsArm | osx | osxArm | linux
deriving Inhabited, Repr

def getSystem : IO SystemType := do
  if System.Platform.isWindows then
    pure SystemType.windows
  else
    let arch ← (·.stdout.trimAscii) <$> IO.Process.output { cmd := "uname", args := #["-m"] }
    match arch.toString with
    | "arm64" => if System.Platform.isOSX then pure SystemType.osxArm else pure SystemType.linux
    | "x86_64" => if System.Platform.isOSX then pure SystemType.osx else pure SystemType.linux
    | _ => throw <| IO.userError s!"unsupported architecture {arch}"
