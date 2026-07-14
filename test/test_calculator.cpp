#include <iostream>
#include <cmath>
#include "../calculator.h"

static bool nearlyEqual(double a, double b, double epsilon = 1e-9) {
    return std::fabs(a - b) <= epsilon;
}

#define EXPECT_EQ(actual, expected) \
    do { \
        if (!nearlyEqual((actual), (expected))) { \
            std::cout << "FAIL: " << #actual << " expected " << (expected) << " but got " << (actual) << "\n"; \
            return 1; \
        } \
    } while (0)

#define EXPECT_THROW(expression) \
    do { \
        bool thrown = false; \
        try { \
            (expression); \
        } catch (...) { \
            thrown = true; \
        } \
        if (!thrown) { \
            std::cout << "FAIL: expected exception from " << #expression << "\n"; \
            return 1; \
        } \
    } while (0)

int main() {
    std::cout << "Running calculator unit tests...\n";

    EXPECT_EQ(Calculator::add(1.5, 2.5), 4.0);
    EXPECT_EQ(Calculator::subtract(10.0, 4.5), 5.5);
    EXPECT_EQ(Calculator::multiply(3.0, 4.0), 12.0);
    EXPECT_EQ(Calculator::divide(8.0, 2.0), 4.0);
    EXPECT_THROW(Calculator::divide(1.0, 0.0));

    std::cout << "All calculator tests passed.\n";
    return 0;
}
