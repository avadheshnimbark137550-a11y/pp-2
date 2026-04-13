#include <stdio.h>

int main() {
    int n, i, search_val, low, high, mid, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted integers (in ascending order):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &search_val);

    // Binary Search Logic
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = low + (high - low) / 2; // Avoids potential overflow

        if (arr[mid] == search_val) {
            printf("Value %d found at index %d.\n", search_val, mid);
            found = 1;
            break;
        }

        // If search_val is greater, ignore the left half
        if (arr[mid] < search_val) {
            low = mid + 1;
        }
        // If search_val is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Value %d is not present in the list.\n", search_val);
    }

    return 0;
}
