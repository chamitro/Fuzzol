contract test {
    function f() public {
        address(0x12).call("abc");
    }
}
