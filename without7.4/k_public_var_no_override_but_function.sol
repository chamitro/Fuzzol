contract A {
	function foo() internal virtual view returns(uint) { return 5; }
}
contract X is A {
	uint public foo;
}
// ----
