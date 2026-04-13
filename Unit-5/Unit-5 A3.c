#include <stdio.h>

// Recursive Binary Search Function
int binarySearch(int arr[], int left, int right, int key) {
    if (left <= right) {
        int mid = (left + right) / 2;

        // If element is present at mid
        if (arr[mid] == key)
            return mid;

        // If element is smaller, search left subarray
        if (key < arr[mid])
            return binarySearch(arr, left, mid - 1, key);

        // Else, search right subarray
        return binarySearch(arr, mid + 1, right, key);
    }

    // Element not found
    return -1;
}

int main() {
    int n, i, key, result;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements (must be sorted)
    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input value to search
    printf("Enter value to search: ");
    scanf("%d", &key);

    // Function call
    result = binarySearch(arr, 0, n - 1, key);

    // Output result
    if (result != -1)
        printf("Element found at position %d\n", result + 1);
    else
        printf("Element not found\n");

    return 0;
}
