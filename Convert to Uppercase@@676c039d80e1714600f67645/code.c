#include <stdio.h>

int main() {
    char str[1000]; // Assuming a maximum string length of 1000
    int i;

    // Read the input string
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline

    // Convert lowercase to uppercase
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase by subtracting 32 from ASCII value
        }
    }

    // Print the modified string
    printf("%s\n", str);

    return 0;
}