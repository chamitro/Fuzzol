contract C {
  function f() public pure {
    assembly {
      function (a, b) {}
    }
  }
}
