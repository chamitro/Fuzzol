contract C {
    function f() public returns (uint) {
        return ([4,5,6][1]);
    }
}
