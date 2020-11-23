==== Source: a ====
contract C { D d; }
==== Source: b ====
import "a"; contract D is C {}
