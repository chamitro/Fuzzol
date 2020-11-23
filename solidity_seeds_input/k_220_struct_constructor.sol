contract C {
    struct S { uint a; bool x; }
    function f() public {
        S memory s = S(1, true);
    }
}
// ----
