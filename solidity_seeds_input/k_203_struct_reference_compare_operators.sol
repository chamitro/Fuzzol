contract test {
  struct s {uint a;}
  s x;
  s y;
  fallback() external {
    x == y;
  }
}
