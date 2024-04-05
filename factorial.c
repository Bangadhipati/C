#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int num;
    
    // Prompt the user to enter a number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    // Check if the number is negative
    if (num < 0) {
        printf("Factorial of a negative number is not defined.\n");
    } else {
        // Call the factorial function and print the result
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    
    return 0;
}

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    } else {
        // Recursive call to factorial function
        return n * factorial(n - 1);
    }
}
