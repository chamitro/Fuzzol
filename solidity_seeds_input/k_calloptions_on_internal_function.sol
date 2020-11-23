contract D {}
contract C {
    function foo(int a) pure internal {
        foo{gas: 5};
    }
}
