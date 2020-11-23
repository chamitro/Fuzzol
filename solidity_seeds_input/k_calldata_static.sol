contract C {
    function f(uint256[42] calldata x) external pure {
        x[1:2];
    }
}
