#include <stdio.h>

int main() {
    int num = 10;
    int *ptr;

    // Assigning the address of num to ptr
    ptr = &num;

    // Displaying the value of num using the pointer
    printf("Value of num: %d\n", *ptr);

    // Modifying the value of num using the pointer
    *ptr = 20;
    printf("New value of num: %d\n", num);

    return 0;
}
