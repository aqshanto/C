#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int longestCommonSubstring(char* str1, char* str2) {
    int m = strlen(str1);
    int n = strlen(str2);

    int dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp));
    
    int maxLength = 0;

    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                maxLength = max(maxLength, dp[i][j]);
            }
        }
    }

    return maxLength;
}

int main() {
    char str1[51], str2[51];

    while (fgets(str1, sizeof(str1), stdin) != NULL) {
        fgets(str2, sizeof(str2), stdin);
        str1[strcspn(str1, "\n")] = '\0';
        str2[strcspn(str2, "\n")] = '\0';
        int length = longestCommonSubstring(str1, str2);
        printf("%d\n", length);
    }

    return 0;
}
