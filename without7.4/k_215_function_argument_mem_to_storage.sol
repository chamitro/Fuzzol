contract C {
    function f(uint[] storage x) private {
    }
    function g(uint[] memory x) public {
        f(x);
    }
}
