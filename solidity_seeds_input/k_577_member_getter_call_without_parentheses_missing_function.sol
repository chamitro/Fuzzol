contract A{

}
contract B{
    A public a;
}
contract C{
    B b;
    function f() public view{
        b.a.f();
    }
}

