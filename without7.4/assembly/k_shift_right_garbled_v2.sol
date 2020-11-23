pragma experimental ABIEncoderV2;


contract C {
    function f(uint8 a, uint8 b) public returns (uint256) {
        assembly {
            a := 0xffffffff
        }
        // Higher bits should be cleared before the shift
        return a >> b;
    }
}
// ====
// compileViaYul: also
// ----
