contract C {
    uint constant x;
    function f() public pure {
        assembly {
            let c1 := x
        }
    }
}
// ----
