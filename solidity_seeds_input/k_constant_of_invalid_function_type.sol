contract C {
	// Used to cause internal compiler error.
	function() returns (x) constant x = x;

}
