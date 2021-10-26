import Lake

open System Lake DSL

package LAMR where
  defaultFacet := PackageFacet.oleans
  dependencies := #[
    { name := `mathlib, src := Source.path (FilePath.mk "Mathlib") }
  ] 
