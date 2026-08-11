class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
       vector<vector<int>>vec(n,vector<int>(m,-1));
       vector<vector<int>> hello(n,vector<int>(m,-1));
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
          //  if(i==j)hello[i][j]=matrix[i][j];
            int newrow=j;
            int newcol=abs(i-(n-1));
            hello[newrow][newcol]=matrix[i][j];
            
        }
       }
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        matrix[i][j]=hello[i][j];
       }
       return;
    }
};