#include <stdio.h>

int main() {
    int num1, num2, result;
    
    // Taking input
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    // Performing bitwise XOR operation
    result = num1 ^ num2;
    
    // Printing the result
    printf("The result of %d ^ %d = %d\n", num1, num2, result);
    
    return 0;
}
