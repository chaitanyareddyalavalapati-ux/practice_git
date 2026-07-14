# Claude AI Calculator

This project implements a simple C++ calculator application under the `cluade ai` workspace.

## Project Structure

- `calculator.h` - Calculator class declaration.
- `calculator.cpp` - Calculator class implementation with add, subtract, multiply, and divide operations.
- `main.cpp` - CLI entry point for the calculator application.
- `test/test_calculator.cpp` - Simple unit tests for calculator operations.
- `CMakeLists.txt` - CMake build configuration for the application and test runner.
- `run_tests.sh` - Build and run the tests, then save output to `test_output.txt`.
- `cluade_ai.code-workspace` - VS Code workspace file for opening the project.
- `test_output.txt` - Captured output from the most recent test run.

## Features

- Addition, subtraction, multiplication, and division.
- Division-by-zero detection with a runtime exception.
- Basic unit tests covering all operations.

## Build Instructions

From the `cluade ai` project folder:

```bash
./run_tests.sh
```

This script will:

1. Create the `build` directory.
2. Run `cmake ..`.
3. Build the application and tests.
4. Run the unit tests and write results to `test_output.txt`.

## Running the Calculator

After building, run the calculator executable from the `build` folder:

```bash
./build/calculator
```

Then type the operation and two operands, for example:

```text
add 5 3
```

Supported operators:

- `add`
- `sub`
- `mul`
- `div`

## Running Tests

From the `cluade ai` folder:

```bash
cd "cluade ai"
./run_tests.sh
```

The script runs the test executable and stores the output in `test_output.txt`.
