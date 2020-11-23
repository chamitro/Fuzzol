contract C {
    function f() public pure {
        address payable a = address payable(this);
    }
}
