#include <stdio.h>
struct Student {
 int rollNumber;
 char name[100];
 float marks;
};
char getGrade(float marks) {
 if (marks >= 85) return 'A';
 if (marks >= 70) return 'B';
 return 'C';
}
int main() {
 int n;
 scanf("%d", &n);
 struct Student students[n];
 for (int i = 0; i < n; i++) {
 scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
 }
 for (int i = 0; i < n; i++) {
 char grade = getGrade(students[i].marks);
 printf("Roll Number: %d, Name: %s, Grade: %c\n", students[i].rollNumber, students[i].name, grade);
 }
 return 0;
}