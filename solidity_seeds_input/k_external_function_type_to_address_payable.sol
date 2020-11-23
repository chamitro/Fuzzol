contract C {
    function f() public view returns (address payable) {
        return this.f.address;
    }
}
