contract C {
    struct S { uint t; }
    function r() public {
        S memory x;
        x.d;
    }
    using S for S;
}
