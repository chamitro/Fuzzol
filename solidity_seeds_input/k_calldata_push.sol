contract C {
    function f(uint[] calldata x) external {
        x.push();
    }
}
