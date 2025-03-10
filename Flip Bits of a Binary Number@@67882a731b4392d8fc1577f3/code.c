// Your code here...
#include <stdio.h>

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Apply bitwise NOT
    int flippedNumber = ~number;

    // Print the result
    printf("%d\n", flippedNumber);

    return 0;
}