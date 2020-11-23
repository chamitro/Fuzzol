contract A {
    uint[] x;
    function f() public view returns (uint) {
        return x.push();
    }
}
