contract C {
    bytes data;
    bytes otherData;
    function fromMemory() public returns (byte) {
        bytes memory t;
        uint[2] memory x;
        x[0] = type(uint).max;
        data = t;
        data.push();
        return data[0];
    }
    function fromCalldata(bytes calldata x) public returns (byte) {
        data = x;
        data.push();
        return data[0];
    }
    function fromStorage() public returns (byte) {
        // zero-length but dirty higher order bits
        assembly  { sstore(otherData.slot, 0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff00) }
        data = otherData;
        data.push();
        return data[0];
    }
}
// ----
// fromMemory() -> 0x00
