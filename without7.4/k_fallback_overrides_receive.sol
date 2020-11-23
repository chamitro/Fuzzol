contract C {
	receive() external payable {}
}
contract D is C {
	fallback() override external {}
}
