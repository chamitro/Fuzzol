contract C {
    function f() public pure returns(uint32) {
        return uint32(bytes32(''));
    }
}
