contract A {
    function f() external pure {}
}
contract C is A {
    fallback() external payable { }
}
