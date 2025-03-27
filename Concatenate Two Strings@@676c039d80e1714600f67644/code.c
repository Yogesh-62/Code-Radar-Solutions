#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Read the first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    // Read the second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Concatenate str2 to str1
    for (int i = 0; i < len2; i++) {
        str1[len1 + i] = str2[i];
    }

    str1[len1 + len2] = '\0'; // Add null terminator

    printf("%s\n", str1);

    return 0;
}