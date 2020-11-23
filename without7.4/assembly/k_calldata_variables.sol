contract C {
    function f(bytes calldata bytesAsCalldata) external {
        assembly {
            let x := bytesAsCalldata
        }
    }
}
