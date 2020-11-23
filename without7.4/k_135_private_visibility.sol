contract base {
    function f() private {}
}
contract derived is base {
    function g() public { f(); }
}
