contract C {
    function f() pure public {
        abi.encodeWithSelector({selector:"abc"});
    }
}
