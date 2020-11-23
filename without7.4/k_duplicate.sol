contract C
{
	function foo() virtual public virtual {}
	modifier modi() virtual virtual {_;}
}
// ----
