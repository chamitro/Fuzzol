contract C {
    function x(bool) public {}
    function y() public {}

    function f() public {
        true ? x : y;
    }
}
