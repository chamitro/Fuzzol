contract C {
    mapping(uint => uint[]) map;
    function f() public {
        map[0].length = 4;
    }
}
