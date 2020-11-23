pragma experimental SMTChecker;

contract C  {
	function f(int x, int y) public pure returns (int) {
		return x % y;
	}
}
