contract A {
    function f() public {
        uint x = 3 < 0 ? 2 > 1 ? 2 : 1 : 7 > 2 ? 7 : 6;
    }
}
// ----
