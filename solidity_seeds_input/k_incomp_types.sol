contract C {
    function f() public returns (uint a, uint b) {
        a += (1, 1);
    }
}
