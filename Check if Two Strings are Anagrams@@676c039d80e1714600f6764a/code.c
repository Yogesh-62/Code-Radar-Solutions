#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[256] = {0}, freq2[256] = {0};

    // Read the first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    // Read the second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    // Calculate frequency of each character in str1
    for (int i = 0; str1[i] != '\0'; i++) {
        freq1[(unsigned char)tolower(str1[i])]++; // Case-insensitive comparison
    }

    // Calculate frequency of each character in str2
    for (int i = 0; str2[i] != '\0'; i++) {
        freq2[(unsigned char)tolower(str2[i])]++; // Case-insensitive comparison
    }

    // Compare frequencies
    int areAnagrams = 1; // Assume they are anagrams initially
    for (int i = 0; i < 256; i++) {
        if (freq1[i] != freq2[i]) {
            areAnagrams = 0; // Not anagrams
            break;
        }
    }

    // Print the result
    if (areAnagrams) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}