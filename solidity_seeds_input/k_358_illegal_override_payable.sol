contract B { function f() payable virtual public {} }
contract C is B { function f() public {} }
// ----
