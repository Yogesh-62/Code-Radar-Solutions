#include <stdio.h>

int main() {
    char str[100]; // Assuming a maximum string length of 100

    // Read the input string
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Print the length of the string
    printf("%d\n", length);

    return 0;
}