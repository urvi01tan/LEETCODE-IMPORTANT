class Solution {
public:
    int MOD = 1e9 + 7;
    int fun(int r, int c, vector<vector<int>>& g, int k, int rem,
            vector<vector<vector<int>>>& dp) {

        if (r >= g.size() || c >= g[0].size())
            return 0;

        rem = (rem + g[r][c]) % k;

        if (r == g.size() - 1 && c == g[0].size() - 1) {

            return rem == 0;
        }
        if (dp[r][c][rem] != -1)
            return dp[r][c][rem];

        int down = fun(r + 1, c, g, k, rem, dp);
        int right = fun(r, c + 1, g, k, rem, dp);
        dp[r][c][rem] = (down + right) % MOD; 
        return dp[r][c][rem];              
    }

    int numberOfPaths(vector<vector<int>>& grid, int k) {

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(k, -1)));

        return fun(0, 0, grid, k, 0, dp);
    }
};