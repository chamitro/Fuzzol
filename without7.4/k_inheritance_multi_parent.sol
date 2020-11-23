contract A {
    event X(uint, uint indexed);
}
contract B {
    event X(uint, uint);
}
contract C is A, B {
}
