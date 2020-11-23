contract C {
    uint x;
    receive() external pure { x = 2; }
}
