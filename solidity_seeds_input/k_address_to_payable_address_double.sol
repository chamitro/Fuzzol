contract C {
    function f(address a) public pure returns (address payable) {
        return address(address(a));
    }
}
