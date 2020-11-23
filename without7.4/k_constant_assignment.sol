contract test {
    uint constant x = 1;
    function f() public {
        assembly {
            x := 2
        }
    }
}
