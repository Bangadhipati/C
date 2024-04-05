#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];

    // Ask the user for input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Convert each character to lowercase
    for (int i = 0; input[i] != '\0'; i++) {
        input[i] = tolower(input[i]);
    }

    // Print the result
    printf("Lowercase string: %s\n", input);

    return 0;
}
