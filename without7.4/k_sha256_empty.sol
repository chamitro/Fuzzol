contract C {
    function f() public returns (bytes32) {
        return sha256("");
    }
}
// ====
// compileViaYul: also
