function f() returns (uint) { C.S storage t; t.x; }

contract C {
    struct S { uint x; }
}
// ----
