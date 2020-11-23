interface A {
    function foo() external returns (uint);
}
interface B {}
contract X is A {
	uint public override(A, B) foo;
}
