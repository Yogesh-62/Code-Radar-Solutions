#include <stdio.h>

int main() {
    int num;

    // Reading the integer
    scanf("%d", &num);

    // Checking if the number is not greater than zero
    if (!(num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
