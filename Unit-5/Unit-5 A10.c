#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50], temp[50];
    int i, j;

    // Input 5 strings
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    // Sorting in descending order
    for (i = 0; i < 5 - 1; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) < 0) {
                // Swap strings
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Output sorted strings
    printf("Strings in descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
