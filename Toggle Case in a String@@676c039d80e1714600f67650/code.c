#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int i;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    // Toggle the case of each character
    for (i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }

    // Print the modified string
    printf("%s\n", str);

    return 0;
}