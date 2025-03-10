#include <stdio.h>

int main() {
    int a, b;

    // Read the input
    scanf("%d %d", &a, &b);

    // Swap using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Print the swapped values
    printf("%d %d\n", a, b);

    return 0;
}