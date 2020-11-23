contract A { modifier mod(uint a) { _; } }
contract B is A { uint public mod; }
// ----
