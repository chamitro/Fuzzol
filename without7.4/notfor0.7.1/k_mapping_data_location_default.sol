contract c {
    mapping(uint => uint) y;
    function f() view public {
        mapping(uint => uint) x = y;
        x;
    }
}
