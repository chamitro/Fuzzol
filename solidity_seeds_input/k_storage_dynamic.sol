contract C {
    uint256[] x;
    function f() public view {
        x[1:2];
    }
}
