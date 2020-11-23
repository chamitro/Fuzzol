contract C {
  modifier someModifier() { _; }
}

function fun() C.someModifier {

}
