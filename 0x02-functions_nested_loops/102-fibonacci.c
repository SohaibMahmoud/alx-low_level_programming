#include <stdio.h>

int main() {
    int n = 50; // Number of Fibonacci numbers to generate
    long long fib[n]; // Array to store Fibonacci numbers
    
    // Initialize the first two Fibonacci numbers
    fib[0] = 1;
    fib[1] = 2;

    // Generate and store the remaining Fibonacci numbers
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the Fibonacci numbers separated by commas and spaces
    for (int i = 0; i < n - 1; i++) {
        printf("%lld, ", fib[i]);
    }

    // Print the last Fibonacci number followed by a new line
    printf("%lld\n", fib[n - 1]);

    return 0;
}
