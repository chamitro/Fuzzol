contract Test {
    function f() public pure {
        type(type(type(Test)));
    }
}
// ----
