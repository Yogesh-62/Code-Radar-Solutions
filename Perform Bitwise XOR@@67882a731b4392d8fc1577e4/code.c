#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two space-separated integers: ");
    scanf("%d %d", &a, &b);
    
    int result = a ^ b;
    printf("Result of %d XOR %d is %d\n", a, b, result);
    
    return 0;
}


