contract C {
    function f() pure public {
        assembly {
            mload(0)
        }
    }
}
