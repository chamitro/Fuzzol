contract C {
    function f(uint256 y) public pure returns (uint256 x) {
        assembly {
            return(0, 0)
            x := y
        }
    }
    function g(uint256 y) public pure returns (uint256 x) {
        assembly {
            return(0, 0)
        }
        x = y;
    }
}
// ----
