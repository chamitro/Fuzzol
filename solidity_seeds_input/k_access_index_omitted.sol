contract C {
    mapping(uint => uint) m;
    function f() public {
        m[] = 3;
    }
}
