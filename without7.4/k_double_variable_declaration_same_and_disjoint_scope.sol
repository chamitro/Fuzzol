contract test {
    function f() pure public {
        uint x;
        { uint x; }
        uint x;
    }
}
// ----
