contract C {
    struct S { uint a; uint b; }

    function f() public {
        S memory s = S({a: 1});
    }
}
