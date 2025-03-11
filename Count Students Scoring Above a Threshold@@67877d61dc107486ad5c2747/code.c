#include <stdio.h>

struct Student {
    int roll;
    char name[50]; // Assuming a maximum name length of 50 characters
    float marks;
};

int main() {
    int N;
    scanf("%d", &N);

    struct Student students[N]; // Array to store student data

    for (int i = 0; i < N; i++) {
        scanf("%d %s %f", &students[i].roll, students[i].name, &students[i].marks);
    }

    float threshold;
    scanf("%f", &threshold);

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (students[i].marks > threshold) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}