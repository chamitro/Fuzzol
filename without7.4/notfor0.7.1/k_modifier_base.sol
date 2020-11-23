contract A {
    modifier mod() { _; }
}
contract B is A {
    function f() public {
        A.mod;
    }
}
