contract C {
    uint256[42] x;
    function f() public view {
        x[1:2];
    }
}
