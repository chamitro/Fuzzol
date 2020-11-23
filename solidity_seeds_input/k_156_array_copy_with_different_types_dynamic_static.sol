contract c {
    uint[] a;
    uint[80] b;
    function f() public { b = a; }
}
