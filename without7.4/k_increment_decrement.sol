contract C {
  uint immutable x;
  uint immutable y;
  constructor() {
    ++x;
    --y;
  }
}
// ----
