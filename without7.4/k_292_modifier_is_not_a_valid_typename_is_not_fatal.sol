contract test {
    modifier mod() { _; }

    function f() public {
        mod g;
        g = f;
    }
}
