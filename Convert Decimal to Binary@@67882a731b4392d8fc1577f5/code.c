#include <stdio.h>

void decimalToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    char binary[32]; // Assuming 32-bit integers
    int i = 0;

    while (n > 0) {
        binary[i++] = (n & 1) + '0'; // Get LSB and convert to char '0' or '1'
        n >>= 1; // Right shift
    }

    // Reverse the binary string
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", binary[j]);
    }
}

int main() {
    int decimal;

    // Read the input
    scanf("%d", &decimal);

    // Convert and print the binary representation
    decimalToBinary(decimal);

    printf("\n"); // Add a newline for formatting

    return 0;
}