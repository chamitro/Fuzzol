contract A {
    function f() private {}
}

contract B {
    function g() external {
        A.f;
    }
}
