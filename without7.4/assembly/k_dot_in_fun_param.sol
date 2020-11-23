contract C {
  function f() public pure {
    assembly {
      function f(a., x.b) -> t.b, b.. {}
    }
  }
}
// ----
// DeclarationError 3927: (74-76): User-defined identifiers in inline assembly cannot contain '.'.
// DeclarationError 3927: (78-81): User-defined identifiers in inline assembly cannot contain '.'.
