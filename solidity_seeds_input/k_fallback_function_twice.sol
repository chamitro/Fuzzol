contract C {
    uint x;
    fallback() external { x = 2; }
    fallback() external { x = 3; }
}
