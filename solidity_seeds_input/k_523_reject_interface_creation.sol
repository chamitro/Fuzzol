interface I {}
contract C {
    function f() public {
        new I();
    }
}
