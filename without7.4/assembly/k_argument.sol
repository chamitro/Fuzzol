contract C {
    function f(uint a) public pure {
        assembly {
            let a := 1
        }
    }
}
