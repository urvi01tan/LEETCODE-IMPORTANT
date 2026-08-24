class Solution {
public:
int fun(int r,int c,vector<vector<int>>&g,vector<vector<int>>&v)
{     v[r][c]=1;
if(r>=g.size()||c>=g[0].size())return 0;
int dr[]={-1,0,1,0};
int dc[]={0,-1,0,1};
int ans=g[r][c];
for(int i=0;i<4;i++)
{
    int nr=dr[i]+r;
    int nc=dc[i]+c;
    if(nr>=0 && nc>=0 && nr<g.size() && nc<g[0].size() && v[nr][nc]!=1 && g[nr][nc]!=0)
    {
ans=ans+fun(nr,nc,g,v);
//v[nr][nc]=0;
    }
}
//v[r][c]=0;
return ans;

}
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0 && v[i][j]==0)
                {    // cout<<"yesss:"<<endl;
                int l=fun(i,j,grid,v);
             //   cout<<l<<endl;
                    maxi=max(maxi,l);
                }
            }
        }
        return maxi;

    }
};