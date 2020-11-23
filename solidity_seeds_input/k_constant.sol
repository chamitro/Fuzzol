contract C {
    uint constant a;
    function f() public pure {
        assembly {
            let a := 1
        }
    }
}
