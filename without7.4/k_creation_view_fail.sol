contract D {}
contract C {
    function f() public view { new D(); }
}
