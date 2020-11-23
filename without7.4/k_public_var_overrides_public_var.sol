contract A {
    uint public foo;
}
contract X is A {
	uint public override foo;
}
// ----
