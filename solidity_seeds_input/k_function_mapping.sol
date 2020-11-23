pragma experimental ABIEncoderV2;

contract Test {
    function f(mapping(uint => uint)[] memory x) public pure {}
}
// ----
