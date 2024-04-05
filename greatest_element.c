#include <stdio.h>

int main()
{
    int arr[] = {12, 5, 8, 9, 3, 15, 1, 20, 13, 17};
    int i, max;

    // Initialize the maximum element to the first element of the array
    max = arr[0];

    // Loop through the array and update the maximum element if a greater element is found
    for(i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Print the maximum element
    printf("The greatest element in the array is: %d\n", max);

    return 0;
}