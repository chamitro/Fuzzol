contract C {
	fallback() external {}
}
contract D is C {
	receive() override external payable {}
}
