contract C {
    struct Y {
        uint b;
    }
    struct X {
        Y a;
    }
    mapping(uint256 => X) public m;
}
