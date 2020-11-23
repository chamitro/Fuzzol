interface A {
    function foo() external returns (uint);
}
contract B {
    uint public foo;
}
contract X is A, B {
}
