contract B { function f() virtual public {} }
contract C is B { function f() payable public {} }
// ----
