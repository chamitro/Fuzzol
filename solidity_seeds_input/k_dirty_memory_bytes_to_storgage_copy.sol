contract C {
    bytes x;
    function f() public returns (uint r) {
        bytes memory m = "tmp";
        assembly {
            mstore(m, 8)
            mstore(add(m, 32), "deadbeef15dead")
        }
        x = m;
        assembly {
            r := sload(x.slot)
        }
    }
}
