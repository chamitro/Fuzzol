contract C {
    function f() public view returns (bytes32) {
        return block.blockhash(3);
    }
}
