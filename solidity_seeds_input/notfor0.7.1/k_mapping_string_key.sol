contract C {
	mapping (string => uint) map;
	function set(string memory s) public {
		map[s];
	}
}
// ====
// compileViaYul: true
