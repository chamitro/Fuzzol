contract C {
    uint constant a = 2;
    uint constant aa = a;
    uint constant aaa = aa;
    bytes2 constant b = 0xabcd;
    bytes2 constant bb = b;
    bytes3 constant c = "abc";
    bytes3 constant cc = c;
    bytes3 constant ccc = cc;
    bytes3 constant cccc = ccc;
    bool constant d = true;
    bool constant dd = d;
    address payable constant e = 0x1212121212121212121212121212121212121212;
    address payable constant ee = e;
    function f() public pure returns (uint w, bytes2 x, bytes3 y, bool z, address t) {
        assembly {
            w := aaa
            x := bb
            y := cccc
            z := dd
            t := ee
        }
    }
}
