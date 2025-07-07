#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    scanf("%d", &n);

    int dp[10000][3] = {0};

    dp[0][0] = 1;

    for (int i = 1; i <= n; i++) {
        dp[i][0] = (dp[i-1][0] + dp[i-1][1] + dp[i-1][2]) % MOD;
        dp[i][1] = dp[i-1][0];
        dp[i][2] = dp[i-1][1];
    }

    int result = (dp[n][0] + dp[n][1] + dp[n][2]) % MOD;
    printf("%d\n", result);

    return 0;
}
