contract A {
    function x() public {}
}

contract B is A {
    function f() public view {
        A.x();
    }
}
