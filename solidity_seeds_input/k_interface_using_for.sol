library L {
    function f() public {}
}

interface I {
    using L for int;
    function g() external;
}
