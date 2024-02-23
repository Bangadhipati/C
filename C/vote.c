#include <stdio.h>
int main() {
    int n;
    printf("Input a number: ");
    scanf("%d", &n);
    if (n >= 18)
        printf("You are Eligible for Vote\n");
    else
        printf("You are not Eligible for Vote\n");
    return 0;
}
