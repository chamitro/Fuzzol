contract A { }
contract B is A {
    function f() public { A a = B(1); }
}
// ----
