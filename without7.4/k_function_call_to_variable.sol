contract C {
  function f() public pure {
    assembly {
      let x := 1

      x()
    }
  }
}
