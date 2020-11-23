contract C {
    function f() public pure {
        abi.encodePacked([new uint[](5), new uint[](7)]);
    }
}
