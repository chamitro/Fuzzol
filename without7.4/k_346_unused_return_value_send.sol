contract test {
    function f() public {
        address(0x12).send(1);
    }
}
