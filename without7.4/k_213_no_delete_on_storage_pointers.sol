contract C {
    uint[] data;
    function f() public {
        uint[] storage x = data;
        delete x;
    }
}
