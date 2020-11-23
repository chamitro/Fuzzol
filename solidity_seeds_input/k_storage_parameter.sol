contract C {
    struct S { uint256[2**255] x; }
    function f(S storage) internal {}
}
// ----
