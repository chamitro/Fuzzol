contract A { function mod(uint a) public { } }
contract B is A { modifier mod(uint a) { _; } }
// ----
