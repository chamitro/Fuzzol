contract C {
    function f() public pure returns(uint256) {
        return uint256(bytes1(''));
    }
}
