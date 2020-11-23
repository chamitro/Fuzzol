contract C {
    function f() public pure {
        var a;
        a.NeverReachedByParser();
    }
}
