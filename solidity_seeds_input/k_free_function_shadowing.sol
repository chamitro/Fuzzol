function f() {}
contract C {
  function f() public {}
  function g() public {
    f();
  }
}
