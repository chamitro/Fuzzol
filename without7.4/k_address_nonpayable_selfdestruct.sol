contract C {
    function f(address a) public {
        selfdestruct(a);
    }
}
