contract C {
    // Fool parser into parsing a constructor as a function type.
    constructor() x;
}
// ----
