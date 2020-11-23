contract A {
    modifier mod() { _; }
}
contract B {
    function f() public {
        A.mod;
    }
}
