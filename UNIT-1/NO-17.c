
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (right > left) {
        if (str[left++] != str[right--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("TRUE\n", str);
  else
    printf("NOT TRUE\n",str);

    return 0;
}
