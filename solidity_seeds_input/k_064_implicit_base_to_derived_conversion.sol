contract A { }
contract B is A {
    function f() public { B b = A(1); }
}
