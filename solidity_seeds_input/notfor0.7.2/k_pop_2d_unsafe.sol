pragma experimental SMTChecker;

contract C {
	uint[][] a;
	function f() public {
		a.push();
		a[0].push();
		a[1].pop();
	}
}
