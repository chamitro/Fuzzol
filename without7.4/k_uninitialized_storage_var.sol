contract C {
	function f() public {
		uint[] storage x;
		uint[10] storage y;
		x;
		y;
	}
}
// ----
