contract C { constructor(uint a) {} }
contract B is C {
    constructor() C(2) C(2) {}
}
// ----
