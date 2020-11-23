contract C {
    function f() pure public {
        assembly {
            let x := f.slot
        }
    }
}
