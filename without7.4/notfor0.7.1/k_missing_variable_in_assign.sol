contract C {
  function f() public pure {
    assembly {
      let x := mload(0)
      := 1
    }
  }
}
