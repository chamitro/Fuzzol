contract C {
    function () pure returns (uint) x;
    uint constant y = x();
}
