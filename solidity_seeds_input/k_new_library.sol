library L {}
contract C {
  function f() public pure {
    new L();
  }
}
