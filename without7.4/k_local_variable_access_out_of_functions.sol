contract test {
    function f() public {
        uint a;
        assembly {
            function g() -> x { x := a }
        }
    }
}
