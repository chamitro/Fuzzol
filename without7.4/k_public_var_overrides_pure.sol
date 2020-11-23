abstract contract C {
    function foo() external pure virtual returns (uint);
}
contract X is C {
	uint public override foo;
}
