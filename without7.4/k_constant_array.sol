contract C {
    string constant x = "abc";
    function f() public pure {
        assembly {
            let a := x
        }
    }
}
