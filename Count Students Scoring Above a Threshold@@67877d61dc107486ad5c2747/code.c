#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N];
    float threshold;
    int count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);
    }

    printf("Enter the threshold: ");
    scanf("%f", &threshold);

    for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    printf("Number of students scoring above the threshold: %d\n", count);

    return 0;
}

