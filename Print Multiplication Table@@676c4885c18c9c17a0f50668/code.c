#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        int d = n*i;
        printf("%d x %d = %d\n",n,i,d);
    }return 0;
}