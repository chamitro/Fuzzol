contract C {
    function f() public {
        uint x;
        uint y;
        (true ? x : y) = 1;
    }
}
// ----
