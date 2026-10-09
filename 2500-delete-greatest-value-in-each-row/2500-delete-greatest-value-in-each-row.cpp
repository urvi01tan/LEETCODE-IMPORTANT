class Solution {
public:
int ways(vector<vector<int>>&grid,int n ,int m)
{ int ans=-1e8;
    for(int i=0;i<n;i++)
    {
        int number=-1e8;
        int index=-1e8;
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]>number)
            {
                number=grid[i][j];
                index=j;
            }
        }
          ans=max(ans,grid[i][index]);
        grid[i][index]=-1e8;
      
    }
    return ans;
}
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int ans=0;
        int m=grid[0].size();
        int sum=0;
        for(int i=0;i<m;i++)
        {
            int ans=ways(grid,n,m);
            if(ans==-1e8)break;
            sum=sum+ans;
        }
        return sum;
    }
};