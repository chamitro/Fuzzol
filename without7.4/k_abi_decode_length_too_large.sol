// Used to cause ICE
contract C {
	function f() public {
		abi.decode("", (byte[999999999]));
	}
}
