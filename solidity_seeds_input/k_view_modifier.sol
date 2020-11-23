contract C {
    uint x;
    receive() external view { x = 2; }
}
