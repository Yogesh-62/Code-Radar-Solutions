#include <stdio.h>



int main() {
    char str[100];
    int num;
    char s[100];
    scanf("%s %d %s",&str,&num,&s);
    printf("Name: %s\n",str);
    printf("Age: %d\n",num);
    printf("Hobby: %s\n",s);
    return 0;
}