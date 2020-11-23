contract C
{
    function f(uint x) public {
        assembly {
            x := callvalue()
        }
    }
}
