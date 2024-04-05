#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input from user
    
    // Remove trailing newline character if present
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    int length = strlen(str);
    
    // Reverse the string
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    
    printf("\n");
    
    return 0;
}
