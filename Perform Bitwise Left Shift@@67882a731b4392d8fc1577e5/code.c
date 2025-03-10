#include <stdio.h>

int main() {
    int number, shift;
    printf("Enter the number and the number of positions to shift: ");
    scanf("%d %d", &number, &shift);
    
    int result = number << shift;
    printf("Result of %d left-shifted by %d positions is %d\n", number, shift, result);
    
    return 0;
}

