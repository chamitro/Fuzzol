contract C {
    struct S { bool f; }
    S s;
    function f() internal pure returns (S storage c) {
        // this could be allowed, but currently control flow for functions is not analysed
        assembly {
            function f() { revert(0, 0) }
            f()
        }
    }
}
