contract C {
    function (uint) internal payable returns (uint) x;

    function g() public {
        x = g;
    }
}
