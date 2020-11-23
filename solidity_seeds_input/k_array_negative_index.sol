contract C {
  function f() public {
    bytes[32] memory a;
    a[-1];
  }
}
