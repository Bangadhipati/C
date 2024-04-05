#include <stdio.h>

int main() {
    FILE *file_pointer;
    char text[100];

    // Open file for writing
    file_pointer = fopen("example.txt", "w");

    // Check if file opened successfully
    if (file_pointer == NULL) {
        printf("Error opening file for writing!\n");
        return 1; // Exit program with error
    }

    // Write to file
    fprintf(file_pointer, "Hello, this is a sample text.");

    // Close file
    fclose(file_pointer);

    // Open file for reading
    file_pointer = fopen("example.txt", "r");

    // Check if file opened successfully
    if (file_pointer == NULL) {
        printf("Error opening file for reading!\n");
        return 1; // Exit program with error
    }

    // Read from file and print to console
    printf("Contents of the file:\n");
    while (fgets(text, sizeof(text), file_pointer) != NULL) {
        printf("%s", text);
    }

    // Close file
    fclose(file_pointer);

    return 0; // Exit program successfully
}
