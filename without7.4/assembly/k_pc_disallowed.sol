contract C {
	function f() pure public {
		assembly {
			pop(pc())
		}
	}
}
