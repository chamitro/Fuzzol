# FUZZOL

**A Syntax-Aware Mutation Fuzzer for Testing the Solidity Compiler**

FUZZOL is an AFL-based greybox fuzzer designed specifically for testing `solc`, the standard Solidity compiler. It introduces novel syntax-aware mutation strategies that generate syntactically valid test cases, enabling deeper exploration of the compiler's codebase.

## Overview

FUZZOL addresses a key challenge in compiler fuzzing: generating inputs that pass parser checks while still exercising deep compiler functionality. Unlike grammar-blind fuzzers that often produce syntactically invalid inputs, FUZZOL operates directly on Abstract Syntax Trees (ASTs) to ensure all mutations conform to Solidity's grammar rules.

### Key Features

- **Syntax-Aware Mutation**: Three specialized mutation strategies that respect Solidity's grammar
- **Mutation Strategy Prioritization**: An algorithm that dynamically identifies and applies only the most effective strategies for each seed
- **Comprehensive Coverage**: Combines syntax-aware strategies with traditional grammar-blind mutations
- **Bug Detection**: Proven effectiveness in finding real bugs in production Solidity compiler releases

## Mutation Strategies

### 1. Operator, Statement, and Data Type Change
Modifies control flow by substituting operators, statements, or data types with alternatives of the same syntactic category. Supports four substitution types:
- **Generate**: Insert new valid tokens
- **Swap**: Exchange tokens of the same type
- **Delete**: Remove tokens (where syntactically valid)
- **Duplicate**: Copy existing tokens

### 2. AST Leaf Node Change
Combines characteristics from multiple contracts by replacing leaf nodes in one contract's AST with leaf nodes from another. This creates test cases with unexpected combinations that can trigger edge-case bugs.

### 3. Inline Assembly Node Change
Targets Solidity's inline assembly features by modifying opcode depths and arguments. This strategy stresses the compiler's inline optimizer and can reveal optimization-related bugs.

## Installation

FUZZOL follows the same installation process as AFL.

### Prerequisites

- GCC or Clang compiler
- Make
- ANTLR 4 (for grammar parsing)

### Build Instructions

```bash
# Clone the repository
git clone https://github.com/[repository]/fuzzol.git
cd fuzzol

# Build FUZZOL (same as AFL)
make

# Optional: Install system-wide
sudo make install
```

### Instrumenting the Solidity Compiler

```bash
# Clone and build solc with FUZZOL instrumentation
git clone https://github.com/ethereum/solidity.git
cd solidity

# Configure with FUZZOL's compiler wrappers
mkdir build && cd build
CC=afl-gcc CXX=afl-g++ cmake ..
make solc
```

## Usage

### Basic Fuzzing

```bash
# Create input/output directories
mkdir -p seeds crashes

# Populate seeds directory with initial Solidity test cases
# (Recommended: use test cases from solc's test suite)
cp /path/to/solidity/test/libsolidity/syntaxTests/*.sol seeds/

# Run FUZZOL
./afl-fuzz -i seeds -o crashes -- /path/to/instrumented/solc @@
```

## Seed Selection

For best results, use small, targeted test cases (< 1 kB) from solc's test suites:

```
solidity/test/libsolidity/syntaxTests/
solidity/test/libsolidity/semanticTests/
solidity/test/libsolidity/smtCheckerTests/
```

These test cases exercise various compiler features including:
- SMTChecker/formal verification
- ABI encoding/decoding
- Inline assembly
- Various data structures and optimization paths

## Evaluation Results

FUZZOL has been evaluated on 33 solc releases (v0.5.11 to v0.8.17).

### Bug Detection

| Category | Total Found | Fixed | Confirmed (Unfixed) |
|----------|-------------|-------|---------------------|
| Verification | 5 | 5 | 0 |
| ABI Encoding | 2 | 2 | 0 |
| Inline Assembly | 3 | 3 | 0 |
| Data Structures & Functions | 8 | 7 | 1 |
| Optimization | 1 | 0 | 1 |
| **Total** | **19** | **17** | **2** |

*7 bugs were previously unknown to Solidity developers*

### Coverage Comparison

Compared to state-of-the-art fuzzers (48-hour campaigns):

| Metric | vs Superion | vs AFL-compiler-fuzzer | vs AFLFast | vs MOpt-AFL |
|--------|-------------|------------------------|------------|-------------|
| Line Coverage | +5.4% | +8.5% | +230.6% | +408.8% |
| Function Coverage | +4% | +8% | +140% | +140% |
| Branch Coverage | +3% | +7% | +156% | +220% |

### Prioritization Algorithm Impact

The mutation strategy prioritization algorithm enables FUZZOL to generate unique test cases approximately **24 hours faster** than baseline approaches.

## Project Structure

```
fuzzol/
├── afl-fuzz.c          # Main fuzzer with prioritization algorithm
├── afl-gcc.c           # Compiler wrapper
├── mutations/
│   ├── syntax_aware.c  # Syntax-aware mutation strategies
│   ├── ast_leaf.c      # AST leaf node change
│   └── inline_asm.c    # Inline assembly mutations
├── grammar/
│   └── Solidity.g4     # ANTLR4 grammar for Solidity
├── seeds/              # Example seed files
└── docs/
    └── paper.pdf       # Research paper
```

## Citation

If you use FUZZOL in your research, please cite:

```bibtex
@inproceedings{mitropoulos2023fuzzol,
  title={Syntax-Aware Mutation for Testing the Solidity Compiler},
  author={Mitropoulos, Charalambos and Sotiropoulos, Thodoris and 
          Ioannidis, Sotiris and Mitropoulos, Dimitris},
  booktitle={Proceedings of the 28th European Symposium on Research 
             in Computer Security (ESORICS)},
  year={2023}
}
```

## Authors

- **Charalambos Mitropoulos** - Technical University of Crete
- **Thodoris Sotiropoulos** - ETH Zurich
- **Sotiris Ioannidis** - Technical University of Crete
- **Dimitris Mitropoulos** - University of Athens

## License

[Add appropriate license]

## Acknowledgments

FUZZOL builds upon the [American Fuzzy Lop (AFL)](https://lcamtuf.coredump.cx/afl/) fuzzer by Michal Zalewski.
