#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    printf("Enter the number of students: ");
    scanf("%d", &N);

    struct Student students[N];
    float totalMarks = 0;

    for (int i = 0; i < N; i++);
    {
        printf("Enter roll number, name, and marks for student %d: ", i + 1);
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / N;
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
