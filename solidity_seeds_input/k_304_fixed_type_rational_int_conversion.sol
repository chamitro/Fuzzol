contract test {
    function f() public {
        fixed c = 3;
        ufixed d = 4;
        c; d;
    }
}
// ----
