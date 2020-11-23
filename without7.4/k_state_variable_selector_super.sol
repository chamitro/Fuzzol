contract B {
    function() external public g;
}

contract C is B {
    bytes4 constant s4 = super.g.selector;
}
