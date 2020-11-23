contract C {
    uint immutable x = 0;

    function f() internal {
        x = 1;
    }
}
