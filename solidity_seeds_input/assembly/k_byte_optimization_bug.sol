contract C {
    function f(uint256 x) public returns (uint256 a) {
        assembly {
            a := byte(x, 31)
        }
    }

    function g(uint256 x) public returns (uint256 a) {
        assembly {
            a := byte(31, x)
        }
    }
}

// ====
// compileViaYul: also
// ----
