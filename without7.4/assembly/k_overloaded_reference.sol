contract C {
    function f() pure public {}
    function f(address) pure public {}
    function g() pure public {
        assembly {
            let x := f
        }
    }
}
