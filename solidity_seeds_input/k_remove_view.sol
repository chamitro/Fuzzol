contract B { function f() virtual public view {} }
contract C is B { function f() public {} }
// ----
