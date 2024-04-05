#include <stdio.h>

// Function to perform linear search on an array
int linear_search(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i; // Return the index of the found element
    }
  }
  return -1; // Return -1 if the element is not found
}

int main() {
  int size, target;

  // Get the size of the array
  printf("Enter the size of the array: ");
  scanf("%d", &size);

  // Create an array of the given size
  int arr[size];

  // Get the elements of the array
  printf("Enter the elements of the array: ");
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  // Get the target element
  printf("Enter the target element: ");
  scanf("%d", &target);

  // Perform linear search
  int result = linear_search(arr, size, target);

  // Print the result
  if (result != -1) {
    printf("The element is present at index %d.\n", result);
  } else {
    printf("The element is not present in the array.\n");
  }

  return 0;
}