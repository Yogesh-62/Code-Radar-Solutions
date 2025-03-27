#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    char charToReplace, replacementChar;

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character from the string
    str[strcspn(str, "\n")] = 0;

    // Read the character to be replaced
    scanf(" %c", &charToReplace); // Note the space before %c to skip whitespace

    // Read the replacement character
    scanf(" %c", &replacementChar); // Note the space before %c to skip whitespace

    // Replace characters in the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == charToReplace) {
            str[i] = replacementChar;
        }
    }

    // Print the modified string
    printf("%s\n", str);

    return 0;
}