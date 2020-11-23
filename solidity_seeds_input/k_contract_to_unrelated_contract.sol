contract A {}
contract B {}
contract C {
  function f() public pure {
    B b = B(new A());
  }
}
