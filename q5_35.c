#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main() {
    unsigned int n;

    printf("Enter the value of n: ");
    scanf("%u", &n);

    unsigned long long int result = fibonacci(n);

    printf("Fibonacci number at position %u is %llu\n", n, result);

    return 0;
}

unsigned long long int fibonacci(unsigned int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
