// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Read the input
    scanf("%d", &n);

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {
        // Inner loop for columns (reverse order)
        for (int j = i; j >= 1; j--) {
            printf("%c", 65 + j - 1); // 65 is the ASCII value of 'A'
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}