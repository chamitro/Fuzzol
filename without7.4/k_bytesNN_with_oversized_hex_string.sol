contract C {
    function f() public pure returns (bytes2) {
        return bytes2(hex"123456");
    }
}
