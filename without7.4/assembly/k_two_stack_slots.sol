contract C {
    function f() pure external {
        function() external two_stack_slots;
        assembly {
            let x :=  two_stack_slots
        }
    }
}
