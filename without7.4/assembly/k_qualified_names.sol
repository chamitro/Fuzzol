contract D {
    uint constant a;
}
contract C {
    function f() public pure {
        assembly {
            let D.a := 1
            let D.b := 1 // shadowing the prefix only is also an error
        }
    }
}
// ----
