// Your code here...
#include <stdio.h>

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Create the MSB mask
    int msbMask = 1 << 31;

    // Perform bitwise AND
    if (number & msbMask) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}