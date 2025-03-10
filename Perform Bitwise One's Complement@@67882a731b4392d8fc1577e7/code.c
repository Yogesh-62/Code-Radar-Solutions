// Your code here...
#include <stdio.h>

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Perform one's complement
    int onesComplement = ~number;

    // Print the result
    printf("%d\n", onesComplement);

    return 0;
}