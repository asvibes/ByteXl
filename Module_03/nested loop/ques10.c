#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main(void) {
    int rows;

    // Step 1: Read input
    scanf("%d", &rows);

    // Step 2: Validate input
    if (rows < 1 || rows > 20) {
        printf("Invalid input.");
        return 0;
    }

    // Step 3: Print Pascal's Triangle
    for (int i = 0; i < rows; i++) {
        // Step 3.1: Print leading spaces for alignment
        for (int space = 1; space <= rows - i - 1; space++) {
            printf(" ");
        }

        // Step 3.2: Print binomial coefficients (nCr)
        for (int j = 0; j <= i; j++) {
            long long value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%lld ", value);
        }

        printf("\n"); // Move to next row
    }

    return 0; // End program
}