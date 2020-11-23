contract C {
    struct S { bool f; }
    S s;
    function f(bool flag) internal pure {
        S storage c;
        assembly {
            if flag { c.slot := s.slot }
        }
        c;
    }
}
