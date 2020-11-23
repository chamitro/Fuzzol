contract C {
	uint[] r;
    function f() internal view returns (uint[] storage s) {
        assembly { pop(s.slot) }
        s = r;
    }
}
