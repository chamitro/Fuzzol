contract C {
    function f() pure public {
        for (uint x = 0; x < 10; true)
            x++;
    }
}
