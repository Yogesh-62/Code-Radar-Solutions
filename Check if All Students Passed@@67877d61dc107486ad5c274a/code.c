#include <stdio.h>
#include <string.h>
struct Student {
 int roll_number;
 char name[50];
 float marks;
};
int main() {
 int n;
 scanf("%d", &n);
 struct Student students[n];
 int all_passed = 1;
 for (int i = 0; i < n; i++) {
 scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
 if (students[i].marks <= 50) {
 all_passed = 0;
 }
 }
 if (all_passed) {
 printf("All Passed\n");
 } else {
 printf("Not All Passed\n");
 }
 return 0; }