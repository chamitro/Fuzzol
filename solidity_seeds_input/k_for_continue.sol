contract C {
    function f() public pure {
        assembly {
            for { let a := 0} lt(a,1) { a := add(a, 1) } {
                continue
                let b := 42
            }
        }
    }
}
