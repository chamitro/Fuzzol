contract C {
    function f() public returns (uint a, uint b) {
        (a, b) += (1, 1);
    }
}
