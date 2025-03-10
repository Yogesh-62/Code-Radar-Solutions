#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Checking if the two numbers are equal
    if (num1 == num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
