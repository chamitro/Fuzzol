contract C {
    uint[] x;
    fallback() external {
        uint[] memory y = x;
        assembly {
            pop(y.slot)
            pop(y.offset)
        }
    }
}
// ----
