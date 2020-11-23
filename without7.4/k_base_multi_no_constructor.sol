contract C { constructor(uint) {} }
contract A is C(2) {}
contract B is C(2) {}
contract D is A, B {}
