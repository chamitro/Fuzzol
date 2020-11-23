contract C {
    uint[] x;
    fallback() external {
        assembly {
            x.slot := 1
            x.offset := 2
        }
    }
}
// ----
