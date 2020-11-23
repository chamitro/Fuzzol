contract C {
    uint[] x;
    fallback() external {
        uint[] storage y = x;
        assembly {
            y.slot := 1
            y.offset := 2
        }
    }
}
