#include <stdio.h>

// Function to calculate the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    int result = lcm(num1, num2);

    printf("The Least Common Multiple of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
