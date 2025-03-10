#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char str1[100],str2[100];
   scanf("%s %s",&str1,&str2);
   printf("You entered: %s and %s\n", str1,str2);
}