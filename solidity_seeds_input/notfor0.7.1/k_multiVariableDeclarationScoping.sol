contract C {
  function f() internal {
    {
      (uint a, uint b, uint c) = (1, 2, 3);
    }
    a;
  }
}
