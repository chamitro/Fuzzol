contract C1 {
  function f() external pure returns(int) { return 42; }
}

contract C is C1 {
   int override f;
}
