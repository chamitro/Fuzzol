contract C {
  function f() public pure {
    assembly {
      function f(a, b, c) {}
      f(1,,1)
    }
  }
}
