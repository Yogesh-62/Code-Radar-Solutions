#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    char charToCount;
    int count = 0;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    // Read the character to count
    scanf(" %c", &charToCount); // Note the space before %c to skip whitespace

    // Count the occurrences of the character
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToCount) {
            count++;
        }
    }

    // Print the count
    printf("%d\n", count);

    return 0;
}