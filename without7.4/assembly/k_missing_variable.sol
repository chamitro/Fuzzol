contract C {
  function f() public pure {
    assembly {
      x := 1
    }
  }
}
