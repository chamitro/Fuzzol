contract C {
  function f() public pure {
    assembly {
      function f(a) {}

      f()
      f(1)
      f(1, 2)
    }
  }
}
// ----
