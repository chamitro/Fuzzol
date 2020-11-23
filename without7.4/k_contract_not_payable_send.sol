contract C {
    function f() public {
        address(this).send(10);
    }
}

