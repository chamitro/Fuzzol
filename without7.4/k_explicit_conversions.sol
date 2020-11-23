contract test {
    function f() public {
        uint(1, 1);
        uint({arg:1});
    }
}
// ----
