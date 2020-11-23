contract C {
    function f() public {
        try this.f() returns () {

        } catch {

        }
    }
}
