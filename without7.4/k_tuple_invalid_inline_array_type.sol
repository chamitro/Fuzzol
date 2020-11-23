contract C {
    function f() pure public {
        uint x;
        (x, ) = ([100e100]);
    }
}
