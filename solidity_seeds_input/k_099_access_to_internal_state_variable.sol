contract c {
    uint public a;
}
contract d {
    function g() public { c(0).a(); }
}
