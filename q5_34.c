#include <stdio.h>

double power(double base, int exponent);

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);

    printf("%.2lf ^ %d = %.2lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent) {
    // Base case: when exponent is 0, any number raised to 0 is 1
    if (exponent == 0) {
        return 1.0;
    }
    // Recursive case: calculate power using recursion
    else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        // For negative exponents, calculate the reciprocal of the base
        return 1.0 / (base * power(base, -exponent - 1));
    }
}
