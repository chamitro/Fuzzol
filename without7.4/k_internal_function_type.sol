contract C {
    function () internal returns (uint) x;
    constructor() {
        C.x = g;
    }
