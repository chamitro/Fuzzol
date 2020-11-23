contract C {
    function foo() pure internal {
        address(10).delegatecall{value: 7, gas: 3}("");
    }
}
// ----
