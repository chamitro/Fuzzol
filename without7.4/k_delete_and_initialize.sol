contract C {
    uint immutable x = 3;
    constructor() {
        delete x;
    }
}
// ----
