contract Foo {
    function f(uint[] storage memory constant x, uint[] memory calldata y) internal { }
}
// ----
