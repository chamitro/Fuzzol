library L { function l() public {} }
contract test {
    function f() public {
        L.l{value: 1}();
    }
}
