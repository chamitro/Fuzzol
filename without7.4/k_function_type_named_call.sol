contract C {
    function f() pure public {
        function(uint a) returns (uint) x;
        x({a:2});
    }
}
// ----
