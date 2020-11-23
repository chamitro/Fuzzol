contract test {
	function f() pure public {
		uint256 x;
		x = 1;
		if (true) { uint256 x; x = 2; }
	}
}
