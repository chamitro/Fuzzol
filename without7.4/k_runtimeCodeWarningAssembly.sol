contract Test {
    function f() public pure returns (uint) {
        return type(C).runtimeCode.length +
            type(D).runtimeCode.length +
            type(C).creationCode.length +
            type(D).creationCode.length;
    }
}
contract C {
    constructor() { assembly {} }
}
contract D is C {
    constructor() {}
}
// ----
