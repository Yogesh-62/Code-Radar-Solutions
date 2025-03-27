#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    char temp[2000];

    // Read the first string
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    // Read the second string
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        printf("No\n");
        return 0;
    }

    // Concatenate str1 with itself to create a doubled string
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the doubled string
    if (strstr(temp, str2) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}