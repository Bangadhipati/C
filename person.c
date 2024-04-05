#include <stdio.h>

// Define a structure to hold person's information
struct Person {
    char name[50];
    char phone[15];
    char birthplace[50];
    char nationality[50];
};

int main() {
    struct Person person;

    // Prompt the user to enter information
    printf("Enter person's name: ");
    scanf("%s", person.name);

    printf("Enter person's phone number: ");
    scanf("%s", person.phone);

    printf("Enter person's place of birth: ");
    scanf("%s", person.birthplace);

    printf("Enter person's nationality: ");
    scanf("%s", person.nationality);

    // Display the information entered
    printf("\nInformation entered:\n");
    printf("Name: %s\n", person.name);
    printf("Phone Number: %s\n", person.phone);
    printf("Place of Birth: %s\n", person.birthplace);
    printf("Nationality: %s\n", person.nationality);

    return 0;
}
