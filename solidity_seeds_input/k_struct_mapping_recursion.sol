// Used to segfault.
contract C {
	struct S {
		mapping(S => uint) a;
	}
	function g (S calldata) external view {}
 }
