contract C {
    mapping(uint=>uint) m;
    function f() internal view returns (mapping(uint=>uint) storage r) { r = m; }
