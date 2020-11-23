contract Test {
    function f(uint[][] calldata) external { }
    function g(uint[][1] calldata) external { }
}
// ----
