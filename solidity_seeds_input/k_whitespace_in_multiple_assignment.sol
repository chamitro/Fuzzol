contract C {
  function f() public pure {
    assembly {
      function g() -> a,b, c {}
      let x, y ,z : = g()
    }
  }
}
