FUZZOL: SYNTAX-AWARE MUTATION 
for systematically testing the security and reliability of solc, the standard Solidity compiler.

We introduce a syntax-aware mutation that aims to reveal complex bugs in
solc. Our mutation consists of three strategies operating on the AST of a smart
contract written in Solidity.

To further boost the effectiveness of
fuzz testing, we present a prioritization algorithm that identifies and applies
the strategies that are most effective in exploring new interesting paths for a
specific seed program
