contract test {
    function f(uint x) pure public {
        uint y = +x;
        y;
    }
}
// ----
