contract C {
    uint[3] data;
    function test() public {
      data.pop();
    }
}
