contract C {
    function f(bytes memory x) public pure {
        x[1:2];
    }
}
