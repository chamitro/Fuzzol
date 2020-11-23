contract C {
    function (uint) external returns (uint) x;
    function g() public {
        x{value: 2}(1);
    }
}
