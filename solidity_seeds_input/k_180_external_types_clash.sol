contract base {
    enum a { X }
    function f(a) public { }
}
contract test is base {
    function f(uint8 a) public { }
}
