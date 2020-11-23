contract C {
    function f() public pure {
        bytes memory y;
        y[1:2];
    }
}
