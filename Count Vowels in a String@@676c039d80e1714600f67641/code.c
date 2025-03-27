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
    }

    int vowelCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // Convert to lowercase for case-insensitivity
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Print the number of vowels
    printf("%d\n", vowelCount);

    return 0;
}