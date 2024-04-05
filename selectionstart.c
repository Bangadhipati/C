#include <stdio.h>

#define ARRAY_SIZE 5

int main() {
    int array[ARRAY_SIZE];
    int startValue;

    // Prompt the user to input the start value for the array
    printf("Enter the start value for the array: ");
    scanf("%d", &startValue);

    // Initialize the array starting from the provided start value
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = startValue + i;
    }

    // Display the initialized array
    printf("Array initialized with selection start:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
