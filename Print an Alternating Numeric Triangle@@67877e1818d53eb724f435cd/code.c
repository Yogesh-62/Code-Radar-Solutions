// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Read the input
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}