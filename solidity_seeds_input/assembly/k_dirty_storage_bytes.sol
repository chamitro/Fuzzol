contract C {
    bytes b;
    function f() public returns (bool correct) {
        assembly {
            sstore(b.slot, or("deadbeef", 0x08))
        }
        byte s = b[3];
        uint r;
        assembly {
            r := s
        }
        correct = r == (0x64 << 248);
    }
}
// ====
// compileViaYul: also
