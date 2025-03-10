// Your code here...
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Read the input
    scanf("%d", &n);

    // Loop from 1 to N
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}