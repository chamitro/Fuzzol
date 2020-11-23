contract C {
    function f() pure public {
        mapping(uint => uint)[] storage x;
        x;
    }
}
