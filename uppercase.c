#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    printf("Uppercase string: ");
    for (int i = 0; input[i] != '\0'; i++) {
        putchar(toupper(input[i]));
    }

    return 0;
}
