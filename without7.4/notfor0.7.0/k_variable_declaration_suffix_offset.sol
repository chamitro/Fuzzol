contract C {
    function f() public pure {
        assembly {
            let x.offset := 1
            let x.slot := 1
        }
    }
}
// ----
