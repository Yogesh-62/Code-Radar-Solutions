#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    char longestWord[100]; // Assuming a maximum word length of 100
    char currentWord[100];
    int longestLength = 0;
    int currentLength = 0;
    int i, j;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            currentWord[j++] = str[i];
            currentLength++;
        } else {
            currentWord[j] = '\0'; // Null-terminate the current word
            if (currentLength > longestLength) {
                longestLength = currentLength;
                strcpy(longestWord, currentWord);
            }
            currentLength = 0; // Reset length for the next word
            j = 0; // Reset index for the next word
        }
    }

    // Check the last word (if it's not followed by a space)
    currentWord[j] = '\0';
    if (currentLength > longestLength) {
        strcpy(longestWord, currentWord);
    }

    // Print the longest word
    printf("%s\n", longestWord);

    return 0;
}