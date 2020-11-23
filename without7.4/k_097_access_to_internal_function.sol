contract c {
    function f() internal {}
}
contract d {
    function g() public { c(0).f(); }
}
