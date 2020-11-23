contract C {
    function f() pure public {
        assembly {
            jumpi(2, 1)
        }
    }
}
