contract c {
    uint a;
}
contract d {
    function g() public { c(0).a(); }
}
