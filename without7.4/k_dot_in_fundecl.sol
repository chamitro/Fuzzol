contract C {
  function f() public pure {
    assembly {
      function f.() {}
      function g.f() {}
    }
  }
}
// ----
