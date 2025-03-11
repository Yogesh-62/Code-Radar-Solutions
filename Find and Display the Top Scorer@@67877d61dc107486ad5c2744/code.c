#include<stdio.h>
struct student{
    int rollNumber;
    char name[50];
    float marks;
};
int main(){
    int n;
    scanf("%d",&n);
    struct student students[n];
    int max=0;
    int a=0;
    for(int i=0;i<n;i++){
        scanf("%d %s %f",&students[i].rollNumber,&students[i].name,&students[i].marks);
    }
    for(int i=0;i<n;i++){
        if(students[i].marks>max){
            max=students[i].marks;
            a=i;
            
        }
        
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",students[a].rollNumber,students[a].name,students[a].marks);
}