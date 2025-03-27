#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    char *wordStart = str;
    char *wordEnd = str;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    while (*wordEnd) {
        if (*wordEnd == ' ' || *(wordEnd + 1) == '\0') {
            if (*(wordEnd + 1) == '\0') {
                wordEnd++; // Include the last character
            }
            reverseWord(wordStart, wordEnd - 1);
            wordStart = wordEnd + 1; // Start of the next word
        }
        wordEnd++;
    }

    // Print the reversed words
    printf("%s\n", str);

    return 0;
}