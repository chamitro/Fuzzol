contract C {
  bytes s;
  function f(bytes calldata data) external returns (byte) {
    s = data;
    return s[0];
  }
}
