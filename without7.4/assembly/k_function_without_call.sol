contract C {
  function f() public pure {
    assembly {
      function k() {}

      k
    }
  }
}
