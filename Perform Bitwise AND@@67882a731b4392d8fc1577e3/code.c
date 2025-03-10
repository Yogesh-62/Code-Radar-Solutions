#include <stdio.h>

int main() {
    int num1, num2;

    // Reading two space-separated integers
    scanf("%d %d", &num1, &num2);

    // Performing bitwise AND operation and printing the result
    int result = num1 & num2;
    printf("%d\n", result);

    return 0;
}
