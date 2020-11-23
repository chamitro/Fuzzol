contract C {
  function f() public {}
  struct S {f x;}
  function g(function(S memory) external) public {}
}
