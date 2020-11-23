contract C {
    modifier costs(uint _amount) { require(msg.value >= _amount); _; }
