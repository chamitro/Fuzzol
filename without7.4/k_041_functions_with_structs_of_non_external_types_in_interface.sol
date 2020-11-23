pragma experimental ABIEncoderV2;

contract C {
    struct S { function() internal a; }
    function f(S memory) public {}
}
