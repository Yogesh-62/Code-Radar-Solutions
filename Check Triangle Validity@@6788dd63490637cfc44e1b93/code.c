// Your code here...
#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    if(x+y>z && y+z>x && z+x>y){
        printf("Valid\n");
    }
    else{
        printf("Invalid\n");
    }
    return 0;
}