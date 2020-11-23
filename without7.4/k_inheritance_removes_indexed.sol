contract A {
    event X(uint, uint indexed);
}
contract B is A {
    event X(uint, uint);
}
