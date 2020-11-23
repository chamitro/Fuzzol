function f() {
    uint x = 2;
    x;
}
function g(uint[] storage x) pure { x[0] = 1; }
// ----
