contract C {
   function f1() public pure returns (bytes memory) {
       return abi.encode(0.1, 1);
   }
}
