pragma experimental SMTChecker;

contract C {
	uint[] a;
	function f() public {
		a.length;
		a.pop();
	}
}
