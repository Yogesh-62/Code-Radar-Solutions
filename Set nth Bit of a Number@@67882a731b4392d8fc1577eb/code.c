#include <stdio.h>

int main() {
    int number, n;
    printf("Enter number and bit position (0-based):\n");
    scanf("%d %d", &number, &n);

    // Set the nth bit of the number to 1
    int updated_number = number | (1 << n);

    // Output the updated number
    printf("Updated number: %d\n", updated_number);

    return 0;
}
