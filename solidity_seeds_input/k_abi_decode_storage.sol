// This restriction might be lifted in the future
contract C {
  function f() {
    abi.decode("abc", (bytes storage));
  }
}
