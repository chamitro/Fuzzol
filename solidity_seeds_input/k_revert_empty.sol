contract C {
    function f() public pure {
        revert();
        for(int i = 0; i < 3; i++) { f(); }
    }
}
