contract a { function func() public {} }
contract c is a {
    function g() public {
        uint var1 = fun();
    }
}