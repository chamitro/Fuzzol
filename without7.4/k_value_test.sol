contract C {
	function f() public payable returns (uint) {
		return msg.value;
	}
}
// ====
// compileViaYul: also
// ----
