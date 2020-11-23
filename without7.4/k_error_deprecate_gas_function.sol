contract C {
    function (uint) external payable returns (uint) x;
    function f() public {
        x.gas(2)(1);
    }
}
