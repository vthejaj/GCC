#include <iostream>

double iterativePow(double base, int exponent) {
    double result = 1.0;
    int positiveExponent = abs(exponent);

    while (positiveExponent > 0) {
        if (positiveExponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        positiveExponent /= 2;
    }

    return (exponent < 0) ? 1.0 / result : result;
}

int main() {
    double base;
    int exponent;

    std::cout << "Enter base: ";
    std::cin >> base;

    std::cout << "Enter exponent: ";
    std::cin >> exponent;

    double result = iterativePow(base, exponent);

    std::cout << base << " raised to the power of " << exponent << " is " << result << std::endl;

    return 0;
}
