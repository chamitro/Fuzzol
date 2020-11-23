contract C {
    uint x;
    fallback(uint a) external { x = 2; }
}
