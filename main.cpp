#include <iostream>
#include <string>
#include <sstream>
#include "calculator.h"

int main() {
    std::cout << "Claude AI Calculator\n";
    std::cout << "Usage: calculator <operator> <number1> <number2>\n";
    std::cout << "Operators: add, sub, mul, div\n";

    std::string op;
    double a, b;

    if (!(std::cin >> op >> a >> b)) {
        std::cerr << "Error: Failed to read operation and operands.\n";
        return 1;
    }

    try {
        double result = 0.0;
        if (op == "add") {
            result = Calculator::add(a, b);
        } else if (op == "sub") {
            result = Calculator::subtract(a, b);
        } else if (op == "mul") {
            result = Calculator::multiply(a, b);
        } else if (op == "div") {
            result = Calculator::divide(a, b);
        } else {
            std::cerr << "Error: Unknown operator '" << op << "'\n";
            return 1;
        }

        std::cout << "Result: " << result << "\n";
        return 0;
    } catch (const std::exception& ex) {
        std::cerr << "Error: " << ex.what() << "\n";
        return 1;
    }
}
