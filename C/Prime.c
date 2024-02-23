#include <stdio.h>

int main() 
{
    int n, c = 0;
    printf("Input a Number: ");
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) 
    {
        if(n % i == 0)
            c++;
    }
    if(c == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");
    return 0;
}
