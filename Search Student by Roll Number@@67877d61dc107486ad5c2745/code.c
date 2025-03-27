#include <stdio.h>
#include <string.h>
struct Student {
 int roll_number;
 char name[50];
 float marks;
};
int main() {
 int n, search_roll;
 scanf("%d", &n);
 struct Student students[n];
 for (int i = 0; i < n; i++) {
 scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
 }
 scanf("%d", &search_roll);
 int found = 0;
 for (int i = 0; i < n; i++) {
 if (students[i].roll_number == search_roll) {
 printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
 students[i].roll_number, students[i].name, students[i].marks);
 found = 1;
 break;
 }
 }
 if (!found) {
 printf("Student not found\n");
 }
 return 0;
}