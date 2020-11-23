contract C {
    bytes x;
    function f() public view {
        x[1:2];
    }
}
