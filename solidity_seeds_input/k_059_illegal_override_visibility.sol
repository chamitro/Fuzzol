contract B { function f() virtual internal {} }
contract C is B { function f() public {} }
// ----
