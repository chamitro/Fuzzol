contract C {
    struct S { uint[2**30] x; uint[2**50] y; }
    S[2**20] x;
}
