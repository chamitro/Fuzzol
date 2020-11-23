interface I {
  function f() external m pure returns (uint);
  modifier m() { _; }
}
