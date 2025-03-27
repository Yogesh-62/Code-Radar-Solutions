#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int freq[256] = {0}; // Array to store frequency of each character (ASCII)
    int i;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    // Calculate frequency of each character
    for (i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++; // Use unsigned char for correct indexing
    }

    // Find the first non-repeated character
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0; // Found the first non-repeated character
        }
    }

    // No non-repeated character found
    printf("-\n");

    return 0;
}