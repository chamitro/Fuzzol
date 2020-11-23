contract test {
    uint x = 1;
    modifier m {
        assembly {
            x := 2
        }
        _;
    }
    function f() public m {
    }
}
