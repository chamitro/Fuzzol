contract C {
    function f() public returns (uint) {
        uint8[4] memory z = [1,2,3,5];
        return (z[0]);
    }
}
