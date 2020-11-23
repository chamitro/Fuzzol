contract C {
  bool nc = false;
  bool constant c = nc;
  function f() public {
    assembly {
        let t := c
    }
  }
}
// ----
