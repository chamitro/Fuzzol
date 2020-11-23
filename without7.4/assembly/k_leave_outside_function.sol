contract C {
    function f() public pure {
        assembly {
            // Make sure this doesn't trigger the unimplemented assertion in the control flow builder.
            leave
        }
    }
}
