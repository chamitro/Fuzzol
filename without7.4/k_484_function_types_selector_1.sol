contract C {
    function f() public view returns (bytes4) {
        return f.selector;
    }
}
