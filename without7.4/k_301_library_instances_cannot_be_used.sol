library L { function l() public {} }
contract test {
    function f() public {
        L x;
        x.l();
    }
}
