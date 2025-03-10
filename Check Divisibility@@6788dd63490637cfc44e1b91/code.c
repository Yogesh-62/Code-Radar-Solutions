// Your code here...
#include <stdio.h>

int main(){
    int number;
    scanf("%d\n", &number);
    (number%5==0 && number%11==0) ? printf("Divisible\n") : printf("Not Divisible\n");
    return 0;
}