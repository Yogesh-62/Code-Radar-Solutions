// Your code here...
#include <stdio.h>

int main() {
    int number, n;

    // Read the input
    scanf("%d %d", &number, &n);

    // Create the mask
    int mask = 1 << n;

    // Toggle the nth bit using bitwise XOR
    int result = number ^ mask;

    // Print the result
    printf("%d\n", result);

    return 0;
}
