contract C {
  function f() public {
    assembly {
      super := 1
      this := 1
      msg := 1
      block := 1
      f := 1
      C := 1
    }
  }
}
// ----
// DeclarationError 4634: (58-63): Variable not found or variable not lvalue.
// DeclarationError 4634: (75-79): Variable not found or variable not lvalue.
// DeclarationError 4634: (91-94): Variable not found or variable not lvalue.
// DeclarationError 4634: (106-111): Variable not found or variable not lvalue.
