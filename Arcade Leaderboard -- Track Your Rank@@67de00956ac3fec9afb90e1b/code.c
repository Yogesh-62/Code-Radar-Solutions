#include <stdio.h>
#include <stdlib.h>

// Function to remove duplicates from leaderboard
void removeDuplicates(int *leaderboard, int *n) {
    int i, j = 0;
    int temp[*n];
    for (i = 0; i < *n; i++) {
        if (i == 0 || leaderboard[i] != leaderboard[i - 1]) {
            temp[j++] = leaderboard[i];
        }
    }
    for (i = 0; i < j; i++) {
        leaderboard[i] = temp[i];
    }
    *n = j;
}

// Function to determine ranks
void denseRankings(int *leaderboard, int leaderboardSize, int *scores, int scoresSize) {
    int pointer = leaderboardSize - 1;
    for (int i = 0; i < scoresSize; i++) {
        while (pointer >= 0 && scores[i] >= leaderboard[pointer]) {
            pointer--;
        }
        printf("Rank of score %d: %d\n", scores[i], pointer + 2);
    }
}

// Main function
int main() {
    int leaderboard[] = {100, 100, 50, 40, 40, 20, 10};
    int scores[] = {5, 25, 50, 120};
    int leaderboardSize = sizeof(leaderboard) / sizeof(leaderboard[0]);
    int scoresSize = sizeof(scores) / sizeof(scores[0]);

    // Sort leaderboard in descending order and remove duplicates
    qsort(leaderboard, leaderboardSize, sizeof(int), (int (*)(const void *, const void *))cmp);
    removeDuplicates(leaderboard, &leaderboardSize);

    // Calculate ranks
    denseRankings(leaderboard, leaderboardSize, scores, scoresSize);

    return 0;
}

// Helper function for qsort to sort in descending order
int cmp(const int *a, const int *b) {
    return *b - *a;
}
