#include <stdio.h>
struct Employee {
 int id;
 char name[50];
 float salary;
 float bonus;
};
int main() {
 int n;
 scanf("%d", &n);
 struct Employee emp[n];
 for (int i = 0; i < n; i++) {
 scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
 if (emp[i].salary >= 50000) // >= 50000 gets 5%
 emp[i].bonus = 0.05 * emp[i].salary;
 else
 emp[i].bonus = 0.10 * emp[i].salary;
 }
 for (int i = 0; i < n; i++) {
 printf("Employee ID: %d, Name: %s, Bonus: %.2f\n", emp[i].id, emp[i].name, emp[i].bonus);
 }
 return 0;
}