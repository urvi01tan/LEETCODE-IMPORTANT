class Solution {
public:
    int fun(int r, int sum, vector<vector<int>>& mat, int target,
            vector<vector<int>>& dp) {

        // All rows selected
        if (r == mat.size()) {
            return abs(sum - target);
        }

        if (dp[r][sum] != -1)
            return dp[r][sum];

        int ans = 1e9;

        // Choose one element from current row
        for (int c = 0; c < mat[0].size(); c++) {

            ans = min(ans, fun(r + 1, sum + mat[r][c], mat, target, dp));
        }

        return dp[r][sum] = ans;
    }

    int minimizeTheDifference(vector<vector<int>>& mat, int target) {

        int n = mat.size();

        // Maximum possible sum
        int maxSum = 0;

        for (auto row : mat) {
            maxSum += *max_element(row.begin(), row.end());
        }

        vector<vector<int>> dp(n, vector<int>(maxSum + 1, -1));

        return fun(0, 0, mat, target, dp);
    }
};