contract C {
    function f(uint size) public {
        mapping(uint => uint) storage x = new mapping(uint => uint)[](4);
    }
}
