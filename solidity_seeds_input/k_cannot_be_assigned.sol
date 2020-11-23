contract c {
    uint[] storageArray;
    function f() public {
        storageArray.length = 3;
    }
}
