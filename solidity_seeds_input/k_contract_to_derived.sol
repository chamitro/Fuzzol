contract B {}
contract A is B {}
contract C {
  function f() public pure {
    A a = A(new B());
  }
}
