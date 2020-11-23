library L {
    // Used to cause internal error
    function f(function(uint) internal returns (uint)[] memory x) public { }
}
