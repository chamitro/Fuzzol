contract A {
	int public testvar;
	function foo() internal override(N, Z) returns (uint256);
}
