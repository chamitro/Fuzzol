contract C {
    struct S { uint a; uint b; mapping(uint=>uint) c; }

    function f() public {
        S({a: 1});
    }
}
