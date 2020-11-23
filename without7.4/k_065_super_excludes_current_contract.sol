contract A {
    function b() public {}
}

contract B is A {
    function f() public {
        super.f();
    }
}
