contract C {
    function f(uint256[] memory x) public pure {
        x[1:2];
    }
}
