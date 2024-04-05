#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Removing the newline character from fgets
    if (strchr(str1, '\n') != NULL)
        *strchr(str1, '\n') = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Removing the newline character from fgets
    if (strchr(str2, '\n') != NULL)
        *strchr(str2, '\n') = '\0';

    // Comparing the strings
    int result = strcmp(str1, str2);

    if (result == 0)
        printf("The strings are equal.\n");
    else if (result < 0)
        printf("The first string is lexicographically less than the second string.\n");
    else
        printf("The first string is lexicographically greater than the second string.\n");

    return 0;
}
