contract C {
    struct S { uint x; }
}
function f() returns (uint) { S storage t; }
