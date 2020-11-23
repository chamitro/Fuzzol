contract C {
  function f() public view {
    address payable a = address(this);
    a;
  }
  fallback() external payable {
  }
}
