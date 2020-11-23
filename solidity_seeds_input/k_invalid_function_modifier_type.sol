contract B {
    function f() mod1(true) public { }
    modifier mod1(uint a) { if (a > 0) _; }
}
