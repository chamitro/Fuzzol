contract A
{
	function foo() virtual internal {}
}
contract B
{
	function foo() internal {}
}
contract C is A, B
{
}
