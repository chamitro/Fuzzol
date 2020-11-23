contract base {
    function f() external {}
}
contract derived is base {
    function g() public { base.f(); }
}
