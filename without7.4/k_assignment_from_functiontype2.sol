contract C {
    function f() public pure {}
    constructor() {
        assembly {
            let x := f
        }
    }
}
