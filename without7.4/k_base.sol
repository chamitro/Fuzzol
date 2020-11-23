contract A { constructor(uint) { } }
contract B is A(2) { constructor() A(3) {  } }
