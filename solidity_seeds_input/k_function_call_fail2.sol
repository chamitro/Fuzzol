contract C {
    function f(uint y) public pure returns (uint) {
        (f(y)) = 2;
    }
}
