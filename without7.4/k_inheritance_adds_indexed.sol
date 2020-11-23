contract A {
    event X(uint);
}
contract B is A {
    event X(uint indexed);
}
