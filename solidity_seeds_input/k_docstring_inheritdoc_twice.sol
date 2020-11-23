contract B {}

contract C {
    /// @inheritdoc B
    /// @inheritdoc B
    function f() internal {}
}
