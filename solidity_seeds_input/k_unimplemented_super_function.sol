abstract contract a {
    function f() virtual public;
}
contract b is a {
    function f() public override { super.f(); }
}
