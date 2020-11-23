contract C {
    function f() pure public { abi.encode(2**500); }
}
