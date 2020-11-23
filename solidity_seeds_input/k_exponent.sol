contract C {
    function g() public pure {
        int a;
        a ** 1E1233;
        a ** (1/2);
    }
}
// ----
