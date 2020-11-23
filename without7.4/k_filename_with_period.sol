==== Source: a/.b.sol ====
contract B {}
==== Source: a/a.sol ====
import ".b.sol"; contract A is B {}
