contract C {
    uint gasleft;
    function f() public { gasleft = 42; }
}
