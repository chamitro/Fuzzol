contract B {
    function f() mod1(2, true) mod2("0123456") pure public { }
    modifier mod1(uint a, bool b) { if (b) _; }
