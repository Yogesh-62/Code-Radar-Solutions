#include <stdio.h>
#include <string.h>

int main() {
    char mainStr[1000];
    char subStr[1000];

    // Read the main string
    fgets(mainStr, sizeof(mainStr), stdin);
    mainStr[strcspn(mainStr, "\n")] = 0; // Remove trailing newline

    // Read the substring
    fgets(subStr, sizeof(subStr), stdin);
    subStr[strcspn(subStr, "\n")] = 0; // Remove trailing newline

    if (strstr(mainStr, subStr) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}