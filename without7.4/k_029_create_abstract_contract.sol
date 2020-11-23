contract base { function foo() public virtual; }
contract derived {
    base b;
    function foo() public { b = new base(); }
}
