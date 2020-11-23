contract C {
    function test() public pure {
        abi.encode([new uint[](5), new uint[](7)]);
    }
}
