library L {
    function f(mapping(uint=>uint) storage x, mapping(uint=>uint) storage y) external {
        x = y;
    }
}
