contract c {
    uint8 x;
    function f() public {
        assembly { pop(x) }
    }
}
