contract A {
    function() external public f;
}

contract C {
    bytes4 constant s4 = A.f.selector;
}
