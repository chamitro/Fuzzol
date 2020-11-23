contract C {
    function f() public {
        address(this).transfer(10);
    }
}

