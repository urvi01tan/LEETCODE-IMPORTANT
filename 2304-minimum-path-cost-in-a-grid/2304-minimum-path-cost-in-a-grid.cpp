class Solution {
public:
int dfs(vector<vector<int>>&g,vector<vector<int>>&move,int r,int c,int n,int m,vector<vector<int>>&dp)
{
    if(r==n-1)return dp[r][c]=g[r][c];
    if(r>=n || c>=m)return 1e8;
    ///consider row ke next rowww me hum ja sakte haii
    int mini=1e8;
    if(dp[r][c]!=-1)return dp[r][c];
    for(int i=0;i<m;i++)
    {
mini=min(mini,g[r][c]+move[g[r][c]][i]+dfs(g,move,r+1,i,n,m,dp));
    }
    return dp[r][c]=mini;
}
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
            //start from any of first and any of last 
            ////0th row ke har element se chalu karkeeee last tak jau 
            /////this gives tle toh hame isse dp ke saath memoise karna padega 
            int n=grid.size();
            int m=grid[0].size();
            vector<vector<int>>dp(n,vector<int>(m,-1));
            int mini=1e8;
            for(int i=0;i<m;i++)
            {
mini=min(mini,dfs(grid,moveCost,0,i,n,m,dp));

            }
            return mini;
    }
};