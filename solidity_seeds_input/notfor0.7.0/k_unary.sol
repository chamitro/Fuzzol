contract A {
  int immutable a;
  constructor() { a = 5; }
  function f() public { --a; }
}

