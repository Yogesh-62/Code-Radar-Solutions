// Your code here...
#include <stdio.h>

int main() {
    int number, n;

    // Read the input
    scanf("%d %d", &number, &n);

    // Create the mask
    int mask = 1 << n;

    // Invert the mask
    int invertedMask = ~mask;

    // Clear the nth bit using bitwise AND
    int result = number & invertedMask;

    // Print the result
    printf("%d\n", result);

    return 0;
}