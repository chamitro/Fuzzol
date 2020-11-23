contract C {
  bool constant c = this;
  function f() public {
    assembly {
        let t := c
    }
  }
}
// ----
// TypeError 7407: (33-37): Type contract C is not implicitly convertible to expected type bool.
