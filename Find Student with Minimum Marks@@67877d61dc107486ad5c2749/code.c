\#include <stdio.h>
struct Student {
 int roll_number;
 char name[50];
 float marks;
};
int main() {
 int n;
 scanf("%d", &n);
 struct Student students[n], min_scorer;
 scanf("%d %s %f", &students[0].roll_number, students[0].name, &students[0].marks);
 min_scorer = students[0];
 for (int i = 1; i < n; i++) {
 scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
 if (students[i].marks < min_scorer.marks) {
 min_scorer = students[i];
 }
 }
 printf("Student with Minimum Marks: Roll Number: %d, Name: %s, Marks: %.2f\n",
 min_scorer.roll_number, min_scorer.name, min_scorer.marks);
 return 0;
}