contract C {
    function f() public pure {
        abi.decode("abc", ());
    }
}
