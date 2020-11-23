contract C {
  function f() public pure {
    assembly {
      function f() -> x, y, z {}
      let a., aa.b := f()
    }
  }
}
// ----
