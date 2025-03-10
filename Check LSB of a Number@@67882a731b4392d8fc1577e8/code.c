// Your code here...
#include <stdio.h>

int main() {
    int number;

    // Read the input
    scanf("%d", &number);

    // Check if the LSB is set
    if (number & 1) {
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}