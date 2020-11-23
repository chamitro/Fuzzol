contract C {
    function f() public returns (bool ret) {
        return this.f > this.f;
    }
}
