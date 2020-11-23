contract C {
    function f(int16[] calldata a) external returns (bool correct) {
        uint32 x = uint32(a[1]);
        uint r;
        assembly {
            r := x
        }
        correct = r == 0x7fff;
    }
}
// ====
// compileViaYul: also
