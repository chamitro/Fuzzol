contract C {
    event SomeEvent();
    function a() public {
        (emit SomeEvent(), 7);
    }
}
