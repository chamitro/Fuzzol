contract A {
    function f(uint[] calldata) external pure {}
    function f(uint[] memory) internal pure {}
}
