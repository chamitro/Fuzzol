contract C {
	function f() public payable {
		function() external payable x = this.f{value: 7};
	}
}
