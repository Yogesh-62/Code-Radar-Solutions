#include <stdio.h>
#include <string.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int i, j;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    // Remove spaces
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; // Add null terminator at the end

    // Print the modified string
    printf("%s\n", str);

    return 0;
}