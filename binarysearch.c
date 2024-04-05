#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // Check if key is present at mid
        if (arr[mid] == key)
            return mid;

        // If key greater, ignore left half
        if (arr[mid] < key)
            left = mid + 1;

        // If key is smaller, ignore right half
        else
            right = mid - 1;
    }

    // If key is not found, return -1
    return -1;
}

int main() {
    int arr[100], n, key, index;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d integers in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to be searched
    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Perform binary search
    index = binarySearch(arr, 0, n - 1, key);

    // Print result
    if (index != -1)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);

    return 0;
}
