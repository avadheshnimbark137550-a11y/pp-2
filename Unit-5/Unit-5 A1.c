#include <stdio.h>

int main() {
    int n, i, search_val, found = 0;

    // 1. Ask for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // 2. Input elements into the array
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Get the value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &search_val);

    // 4. Linear Search Logic
    for (i = 0; i < n; i++) {
        if (arr[i] == search_val) {
            printf("Value %d found at index %d (Position %d).\n", search_val, i, i + 1);
            found = 1;
            break; // Exit loop once found
        }
    }

    // 5. If the loop completes without finding the value
    if (!found) {
        printf("Value %d is not present in the list.\n", search_val);
    }

    return 0;
}
