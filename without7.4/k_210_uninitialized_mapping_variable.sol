contract C {
    function f() public {
        mapping(uint => uint) storage x;
        x;
    }
}
