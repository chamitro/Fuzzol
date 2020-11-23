pragma experimental SMTChecker;

contract C
{
	function f(C c, C d) public pure {
		assert(c == d);
	}
}
