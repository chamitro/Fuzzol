contract C {
    function f(uint storage a) public {
        a = f;
    }
}
