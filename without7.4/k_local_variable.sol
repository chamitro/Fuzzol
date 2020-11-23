contract C {
    function f() public pure {
        uint a;
        assembly {
            let a := 1
        }
    }
}
