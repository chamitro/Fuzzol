contract C {
    uint immutable x = 0;

    function f() readX internal { }

    modifier readX() {
        _; x = 1;
    }
}
