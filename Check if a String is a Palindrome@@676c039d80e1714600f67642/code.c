#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100]; // Assuming a maximum string length of 100

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character, if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust length after removing newline
    }

    int isPalindrome = 1; // Assume it's a palindrome initially

    // Compare characters from both ends
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}