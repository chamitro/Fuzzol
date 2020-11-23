pragma experimental SMTChecker;

contract C {
	uint[] a;
	constructor() {
		a.pop();
	}
}
