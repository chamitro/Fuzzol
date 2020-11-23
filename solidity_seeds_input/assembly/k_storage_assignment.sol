contract test {
    uint x = 1;
    function f() public {
        assembly {
            x := 2
        }
    }
}
