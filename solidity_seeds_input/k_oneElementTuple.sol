contract C {
    function f() public {
        (uint a,) = (1,);
        a;
    }
}
