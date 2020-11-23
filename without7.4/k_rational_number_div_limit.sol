contract c {
    function f() public pure {
        int a;
        a = 1/(2<<4094)/(2<<4094);
    }
}
// ----
