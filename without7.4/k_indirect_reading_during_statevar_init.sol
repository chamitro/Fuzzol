contract C {
    uint immutable x = 0;
    uint y = f();

    function f() internal returns(uint) { return x; }
}
