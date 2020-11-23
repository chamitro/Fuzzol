contract C {
	fallback() virtual external {}
}
contract D is C {
	fallback() external {}
}
