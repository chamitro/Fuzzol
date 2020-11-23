library L {
    // Used to cause internal error
    function g(function(uint) internal returns (uint)[] storage x) public { }
}
