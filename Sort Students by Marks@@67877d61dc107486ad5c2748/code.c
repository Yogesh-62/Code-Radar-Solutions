#include <stdio.h>
#include <string.h>
struct Student {
 int roll_number;
 char name[50];
 float marks;
};
void swap(struct Student *a, struct Student *b) {
 struct Student temp = *a;
 *a = *b;
 *b = temp;
}
int main() {
 int n;
 scanf("%d", &n);
 struct Student students[n];
 for (int i = 0; i < n; i++) {
 scanf("%d %s %f", &students[i].roll_number, students[i].name, &students[i].marks);
 }
 for (int i = 0; i < n - 1; i++) {
 for (int j = 0; j < n - i - 1; j++) {
 if (students[j].marks < students[j + 1].marks) {
 swap(&students[j], &students[j + 1]);
 }
 }
 }
 for (int i = 0; i < n; i++) {
 printf("Roll Number: %d, Name: %s, Marks: %.2f\n",
 students[i].roll_number, students[i].name, students[i].marks);
 }
 return 0;
}