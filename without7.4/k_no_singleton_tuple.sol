contract C {
	function f() public pure {
		uint a;
		(a,) = (uint(1),);
	}
}
