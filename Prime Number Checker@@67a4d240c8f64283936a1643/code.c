#include<stdio.h>
int isprime(int num){
    int i ,count=0;
    for(i=1;i<=num;i++){
        if(num%i==0)
        count++;
    }
    if(count==2)
        return 1;
    else
        return 0;
}
