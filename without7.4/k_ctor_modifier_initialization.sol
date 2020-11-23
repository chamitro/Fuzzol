contract C {
    uint immutable x;
    constructor() initX {
    }

    modifier initX() {
        _; x = 23;
    }
}
