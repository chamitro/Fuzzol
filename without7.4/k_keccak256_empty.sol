contract C {
    function f() public returns (bytes32) {
        return keccak256("");
    }
}

// ====
// compileViaYul: also
