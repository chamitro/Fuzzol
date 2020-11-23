contract C {
   function f1() public pure returns (bytes memory) {
       return abi.encodePacked(0.1, 1);
   }
}
// ----
