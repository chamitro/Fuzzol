struct S {
    uint x;
}

contract C {
    function f() public pure {
        abi.decode("1234", (S));
    }
}
