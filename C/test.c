#include <stdio.h>

int uniquePaths(int m, int n) {
    // Create a 2D array to store the number of unique paths to each point
    int dp[m][n];

    // Initialize the number of paths for the starting point (0, 0) to 1
    dp[0][0] = 1;

    // Initialize the number of paths for the first row (can only move right)
    for (int i = 1; i < m; i++) {
        dp[i][0] = 1;
    }

    // Initialize the number of paths for the first column (can only move down)
    for (int j = 1; j < n; j++) {
        dp[0][j] = 1;
    }

    // Calculate the number of unique paths for each point based on the sum of paths from above and left
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    // Return the number of unique paths to the ending point (m, n)
    return dp[m - 1][n - 1];
}

int main() {
    int m, n;
    printf("Enter the values of m and n: ");
    scanf("%d %d", &m, &n);

    int paths = uniquePaths(m, n);
    printf("Total number of unique paths from (0, 0) to (%d, %d) is %d.\n", m, n, paths);

    return 0;
}

