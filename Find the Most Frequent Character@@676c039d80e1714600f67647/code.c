#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int freq[256] = {0}; // Array to store frequency of each character (ASCII)

    // Read the input string
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character, if present
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--; // Adjust length after removing newline
    }

    // Calculate frequency of each character
    for (int i = 0; i < len; i++) {
        freq[(unsigned char)str[i]]++; // Use unsigned char for correct indexing
    }

    char mostFrequentChar = '\0';
    int maxFrequency = 0;

    // Find the most frequent character
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFrequency) {
            maxFrequency = freq[i];
            mostFrequentChar = (char)i;
        } else if (freq[i] == maxFrequency && freq[i] > 0 && (char)i < mostFrequentChar) {
            // If frequencies are equal, choose the smaller ASCII value (first alphabetically)
            mostFrequentChar = (char)i;
        }
    }

    // Print the most frequent character
    printf("%c\n", mostFrequentChar);

    return 0;
}