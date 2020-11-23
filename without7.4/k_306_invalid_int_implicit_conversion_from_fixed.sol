contract test {
    function f() public {
        fixed a = 4.5;
        int b = a;
        a; b;
    }
}
