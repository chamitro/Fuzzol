contract C {
  function f() public pure {
    assembly "failasm" {}
  }
}
