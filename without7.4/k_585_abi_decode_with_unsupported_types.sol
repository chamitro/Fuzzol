contract C {
	struct s { uint a; uint b; }
    function f() pure public {
        abi.decode("", (s));
    }
}
