pragma experimental SMTChecker;

contract C
{
	function f(bool x) public pure { x = true; require(x); }
}
