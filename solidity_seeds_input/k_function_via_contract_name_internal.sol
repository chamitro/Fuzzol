contract A {
    function f() internal {}
}

contract B {
    function g() external {
        A.f;
    }
}
