contract C {
        function f() public pure {
                C(bytes20(uint160(0x1234)));
        }
}
