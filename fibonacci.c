#include <stdio.h>

// Function to generate Fibonacci series
void fibonacci(int n) {
    int first = 0, second = 1, next, i;
    
    printf("Fibonacci Series: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int num_terms;
    
    // Take user input for the number of terms
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num_terms);
    
    // Check if the number of terms is valid
    if (num_terms <= 0)
        printf("Please enter a positive integer greater than 0.\n");
    else {
        // Generate and print the Fibonacci series
        fibonacci(num_terms);
        printf("\n");
    }
    
    return 0;
}
