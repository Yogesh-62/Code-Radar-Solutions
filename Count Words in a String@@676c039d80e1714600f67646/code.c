#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character, if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust length after removing newline
    }

    int wordCount = 0;
    int inWord = 0; // Flag to track if we're inside a word

    for (int i = 0; i < len; i++) {
        if (isspace(str[i])) {
            // If we encounter a space and were inside a word, it means a word has ended
            if (inWord) {
                wordCount++;
                inWord = 0; // Reset the flag
            }
        } else {
            // If we encounter a non-space character, we're inside a word
            inWord = 1;
        }
    }

    // Check if the last word wasn't followed by a space
    if (inWord) {
        wordCount++;
    }

    // Print the number of words
    printf("%d\n", wordCount);

    return 0;
}