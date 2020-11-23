contract C {
  function f() public pure {
    assembly {
      function f(a, b) {}
      f()
      f(1,)
    }
  }
}
