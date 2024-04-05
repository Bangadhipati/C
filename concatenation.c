#include <stdio.h>
#include <string.h>

int main() {
    char firstString[50], secondString[50], concatenatedString[100];

    printf("Enter the first string: ");
    fgets(firstString, sizeof(firstString), stdin);
    // Remove the newline character at the end of the input
    firstString[strcspn(firstString, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(secondString, sizeof(secondString), stdin);
    // Remove the newline character at the end of the input
    secondString[strcspn(secondString, "\n")] = '\0';

    // Concatenate the strings
    strcpy(concatenatedString, firstString);
    strcat(concatenatedString, secondString);

    printf("Concatenated string: %s\n", concatenatedString);

    return 0;
}
