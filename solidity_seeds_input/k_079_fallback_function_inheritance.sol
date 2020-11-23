contract A {
    uint x;
    fallback() virtual external { x = 1; }
}
contract C is A {
