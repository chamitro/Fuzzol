contract C {
    struct S { uint a; bool x; }
    function f() public {
        S memory s = S({a: 1, x: true});
    }
}
// ----
