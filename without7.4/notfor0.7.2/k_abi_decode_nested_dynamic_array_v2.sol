pragma experimental ABIEncoderV2;

contract C {
    function f() public pure {
        abi.decode("1234", (uint[][3]));
    }
}
