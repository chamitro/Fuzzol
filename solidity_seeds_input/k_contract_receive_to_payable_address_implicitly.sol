contract C {
  function f() public view {
    address payable a = this;
    a;
  }
  receive() external payable {
  }
}
