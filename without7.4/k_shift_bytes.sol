// This tests the optimizer rule
// byte(A, shl(B, X))
// ->
// byte(A + B / 8, X)
// given A <= 32 && B % 8 == 0 && B <= 256
//
// and the respective rule about shr
contract C {
  function f(uint a) public returns (uint, uint, uint) {
    uint x = a << (256 - 8);
    assembly {
      x := byte(0, x)
    }
    uint y = a << 8;
    assembly {
      y := byte(30, y)
    }
    uint z = a << 16;
    assembly {
      z := byte(1, z)
    }
    return (x, y, z);
  }
  function g(uint a) public returns (uint, uint, uint) {
    uint x = a >> (256 - 16);
    assembly {
      x := byte(31, x)
    }
    uint y = a >> 8;
    assembly {
      y := byte(4, y)
    }
    uint z = a >> 16;
    assembly {
      z := byte(7, z)
    }
    return (x, y, z);
  }
}
// ====
// compileViaYul: also
// ----
