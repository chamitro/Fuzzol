contract C {
    function f(uint x) public {}
    uint constant LEN = f();
    uint[LEN] ids;
}
