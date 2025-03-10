#include <stdio.h>

void printAlternatingTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 1) {  // Odd rows
                if (j % 2 == 1) {
                    printf("1");
                } else {
                    printf("0");
                }
            } else {  // Even rows
                if (j % 2 == 1) {
                    printf("0");
                } else {
                    printf("1");
                }
            }
        }
        printf("\n");  // Move to the next row
    }
}

int main() {
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);
    printAlternatingTriangle(n);
    return 0;
}
