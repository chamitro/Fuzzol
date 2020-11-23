contract test {
    uint[] r;
    function f() public {
        uint[] storage a = r;
        assembly {
            function g() -> x { x := a.offset }
        }
    }
}
