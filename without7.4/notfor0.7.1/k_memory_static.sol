contract C {
    function f(uint256[42] memory x) public pure {
        x[1:2];
    }
}
