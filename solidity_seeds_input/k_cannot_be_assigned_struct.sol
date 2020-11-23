contract C {
    struct S {
        uint[] a;
    }
    S s;
    function f() public {
        s.a.length = 4;
    }
}
