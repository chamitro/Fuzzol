contract C {
	int[] x;
	function f() public {
		int[] storage a = x;
		int[] memory b;
		a = b;
		a = int[](b);
	}
}
// ----
