// Your code here...
#include <stdio.h>

int main() {
    int n;

    // Read the input
    scanf("%d", &n);

    // Loop from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}