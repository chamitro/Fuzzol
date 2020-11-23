contract C {
    function f() public view returns (bytes4) {
        function () g;
        return g.selector;
    }
}
