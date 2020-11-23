contract C {
  function f() public pure {
    assembly {
      pop(add(add(1, 2), c))
    }
  }
