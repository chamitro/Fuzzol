contract D {
}

contract C is D {
    /// @inheritdoc D
    function f() internal {
    }
}
