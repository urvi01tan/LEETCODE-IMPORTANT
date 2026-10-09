class Solution {
public:
bool ways(vector<vector<int>>matrix,int n,int m,int row,int col)
{
    int k=1e8;
    for(int i=0;i<m;i++)
    {
        k=min(k,matrix[row][i]);
    }
    int l=-1e8;
    for(int j=0;j<n;j++)
    {
        l=max(l,matrix[j][col]);
    }
    if(l==matrix[row][col] && k==matrix[row][col])return true;
    return false;
}
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
      vector<int>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(ways(matrix,n,m,i,j))
                ans.push_back(matrix[i][j]);
            }
        }
        return ans;
    }
};