contract c {
    function f1(mapping(uint => uint) calldata) pure external returns (mapping(uint => uint) memory) {}
}
// ----
