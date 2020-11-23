// Used to cause ICE
contract C {
    function f(uint[] calldata x) external pure {
        x[1:2].a;
    }
}
