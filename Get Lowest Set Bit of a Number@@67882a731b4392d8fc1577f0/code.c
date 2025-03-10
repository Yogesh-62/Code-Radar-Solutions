#include <stdio.h>

int findLowestSetBit(int n) {
    if (n == 0) {
        return -1; // No set bit in 0
    }

    int position = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        position++;
    }
    return position;
}

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Find and print the position of the lowest set bit
    int pos = findLowestSetBit(number);
    printf("%d\n", pos);

    return 0;
}