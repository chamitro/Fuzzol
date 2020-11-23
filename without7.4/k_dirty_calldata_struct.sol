pragma experimental ABIEncoderV2;
contract C {
    struct S {
        uint16[] m;
    }
    function f(S calldata s) public pure returns (bool correct) {
        int8 x = int8(s.m[0]);
        uint r;
        assembly {
            r := x
        }
        correct = r == 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff80;
    }
}
// ====
// compileViaYul: true
