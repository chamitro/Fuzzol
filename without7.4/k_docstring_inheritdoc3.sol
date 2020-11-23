contract D {
    struct S { uint a; }
}

contract C is D {
    /// @inheritdoc D.S
    function f() internal {
    }
}
