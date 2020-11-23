struct S { mapping(uint => uint)[2] a; }
contract C {
    function f(S storage s) public {}
}
