contract C {
    function f() public pure {
        bytes32 x;
        x[0] = 0x42;
    }
}
