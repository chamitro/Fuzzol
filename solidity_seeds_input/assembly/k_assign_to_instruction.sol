contract C {
  function f() public pure {
    assembly {
      let mod := 2
    }
  }
}
