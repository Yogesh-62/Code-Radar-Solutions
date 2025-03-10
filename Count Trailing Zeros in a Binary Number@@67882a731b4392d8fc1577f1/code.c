// Your code here...
#include <stdio.h>

int countTrailingZeros(int n) {
    int count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Count and print the trailing zeros
    int zeros = countTrailingZeros(number);
    printf("%d\n", zeros);

    return 0;
}