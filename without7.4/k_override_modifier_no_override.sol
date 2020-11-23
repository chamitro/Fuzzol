abstract contract A {
}
abstract contract X is A {
	modifier f() override { _; }
}
