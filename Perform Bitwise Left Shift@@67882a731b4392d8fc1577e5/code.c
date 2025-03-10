#include <stdio.h>

int main() {
    int number, shift, result;
    
    // Taking input
    printf("Enter the number and the number of positions to shift: ");
    scanf("%d %d", &number, &shift);
    
    // Performing the left shift operation
    result = number << shift;
    
    // Printing the result
    printf("The result of %d << %d = %d\n", number, shift, result);
    
    return 0;
}
