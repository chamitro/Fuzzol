contract C {
    function f(bytes calldata x) external {
        bytes memory y = x[1:2];
    }
}
