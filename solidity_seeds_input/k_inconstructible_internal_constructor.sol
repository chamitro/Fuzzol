contract C {
	constructor() internal {}
}
contract D {
	function f() public { C c = new C(); c; }
}
