contract C {
  function f() public pure {
    assembly {
      pop(linkersymbol("contract/library.sol:L"))
    }
  }
}
// ----
