contract c {
    function f() public { c[10] storage a = 7; uint8[10 * 2] storage x; }
}
