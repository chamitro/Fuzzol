contract C {
    function f() public returns (uint, uint) {
        try f() {
        } catch {
        }
    }
}
