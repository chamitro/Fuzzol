contract C {
    function f(bytes10 x) public pure returns (address payable) {
        return address(x);
    }
}
// ----
