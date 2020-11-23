contract C {
    function f() pure public {
        uint x; uint y;
        assembly { x, y := 7 }
    }
}
