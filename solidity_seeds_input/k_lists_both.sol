interface ParentA {}
interface ParentB {}
interface Sub is ParentA, ParentB {}

contract ListsBoth is Sub, ParentA, ParentB {}

