contract C {
    function f() pure public {
        C c;
        c.delegatecall;
    }
}
