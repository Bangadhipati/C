#include <stdio.h>

int main() 
{
  int num, i, range;

  // Prompt user to enter a number
  printf("Enter a number to print its multiplication table: ");
  scanf("%d", &num);

  // Prompt user to enter the range
  printf("Enter the range up to which you want to print the table: ");
  scanf("%d", &range);

  // Print the multiplication table
  for(i = 1; i <= range; i++) {
    printf("%d * %d = %d\n", num, i, num * i);
  }

  return 0;
}