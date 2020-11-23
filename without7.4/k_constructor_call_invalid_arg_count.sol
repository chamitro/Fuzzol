// This caused a segfault in an earlier version
contract C {
    constructor() {}
}
contract D is C {
    constructor() C(5) {}
}
