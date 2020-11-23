contract A is B { }
contract B { function f() public { new C(); } }
contract C { function f() public { new A(); } }
