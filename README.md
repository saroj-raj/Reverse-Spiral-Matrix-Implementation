# Reverse-Spiral-Matrix-Implementation

## Description
This C++ project implements a Reverse Spiral Matrix, which is used to generate a matrix filled with random integers and find a specific element based on a reverse spiral traversal. The matrix dimensions and the target element's position (denoted as K) are read from an input file. The result for each matrix is written to an output file, indicating the value of the K-th element found during the reverse spiral traversal.

## Getting Started

### Dependencies
- C++ Compiler (e.g., GCC, Clang)
- C++ Standard Library

### Installing
- Ensure a C++ compiler is installed on your system.
- Compile the source files using a command similar to:
```bash
g++ -o ReverseSpiralMatrix ReverseSpiralMatrix.cpp ReverseSpiralMatrixTest.cpp
```

### Executing Program
- Place an `input.txt` file in the same directory as the executable with matrix sizes and K values.
- Run the compiled executable. It reads the input, processes the matrices, and writes the results to `output.txt`.

```bash
./ReverseSpiralMatrix
```

## Files Description
- `ReverseSpiralMatrix.h`: Header file declaring the ReverseSpiralMatrix class and its members.
- `ReverseSpiralMatrix.cpp`: Implementation file for the ReverseSpiralMatrix class. It includes methods for matrix generation and element finding based on a reverse spiral order.
- `ReverseSpiralMatrixTest.cpp`: Main driver program that reads input, invokes the ReverseSpiralMatrix methods, and writes output.

## Output
The program outputs to `output.txt` the size of each processed matrix and the value of the K-th element as specified in the input.

## Authors
- Saroj Raj
- [LinkedIn Profile](https://www.linkedin.com/in/saroj-raj-22831198/)

## Version History
- 0.1
    - Initial Release
