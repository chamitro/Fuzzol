contract C {
    function f() pure public {
        assembly {
            jump(2)
        }
    }
}
