contract C {
	struct S { uint a; uint b; }
	S x; S y;
	function f() public {
		(x, y) = (y, x);
	}
}
