contract C {
    struct Data {
        uint256 contents;
    }
    uint256 public separator;
    Data public a;
    uint256 public separator2;

    function f() public returns (bool) {
        Data storage x = a;
        uint256 off;
        assembly {
            sstore(x.slot, 7)
            off := x.offset
        }
        assert(off == 0);
        return true;
    }
}

// ====
// compileViaYul: also
// ----
// f() -> true
// a() -> 7
