contract C {
  function f(uint, uint) public {}
  function f(uint) public {}
  function g() public { f(1, 2, 3); }
}
