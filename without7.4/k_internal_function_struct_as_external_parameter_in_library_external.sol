library L {
    struct S
    {
        function(uint) internal returns (uint)[] x;
    }
    function f(S storage s) public { }
}
