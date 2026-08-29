class Solution {
public:
    int MOD = 1e9 + 7;

    int fun(int n, int x, long long sum, int i, vector<vector<long long>>& dp) {

        if (sum == n)
            return 1;

        if (sum > n)
            return 0;

        if (dp[i][sum] != -1)
            return dp[i][sum];

        long long counter = 0;

        for (int j = i + 1; j <= n; j++) {

            long long val = 1;

            for (int k = 0; k < x; k++) {
                val *= j;

                // j^x is already greater than n
                if (val > n)
                    break;
            }

            if (val > n)
                break;

            counter = (counter + fun(n, x, sum + val, j, dp)) % MOD;
        }

        return dp[i][sum] = counter;
    }

    int numberOfWays(int n, int x) {

        vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));

        return fun(n, x, 0, 0, dp);
    }
};