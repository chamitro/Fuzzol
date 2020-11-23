contract C {
    function k() pure public returns (bytes memory) {
        return abi.encodePacked(1);
    }
}

