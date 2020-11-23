contract D {}
contract C {
    function foo(int a) pure external {
      this.foo{random:5+5};
    }
}
