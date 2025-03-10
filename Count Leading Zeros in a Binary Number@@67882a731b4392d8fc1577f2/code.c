#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) { // Check if the i-th bit is 1
            break; // Stop when the first '1' is found
        }
        count++;
    }
    return count;
}

int main() {
    unsigned int number;

    // Read the input
    scanf("%u", &number); // Use %u for unsigned int

    // Count and print the leading zeros
    int zeros = countLeadingZeros(number);
    printf("%d\n", zeros);

    return 0;
}