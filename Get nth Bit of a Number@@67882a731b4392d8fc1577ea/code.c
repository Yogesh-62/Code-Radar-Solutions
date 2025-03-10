// Your code here...
#include <stdio.h>

int main() {
    int number, n;

    // Read the input
    scanf("%d %d", &number, &n);

    // Right shift the number by n positions
    int shiftedNumber = number >> n;

    // Perform bitwise AND with 1 to get the nth bit value
    int nthBit = shiftedNumber & 1;

    // Print the result
    printf("%d\n", nthBit);

    return 0;
}