contract test {
    uint constant x = 2;
    function f() pure public {
        assembly {
            let r := x.offset
        }
    }
}
