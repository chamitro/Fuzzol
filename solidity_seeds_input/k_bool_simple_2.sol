pragma experimental SMTChecker;
contract C {
    function f(bool x, bool y) public pure {
        assert(x == y);
    }
}
