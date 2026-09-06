class Solution {
public:
//MEMOISE
bool fun(string s,string t,int i ,int j,int n,int m,vector<vector<int>>&dp)
{
    if(i==n)return dp[i][j]=true;
    if(i>n||j>m)return false;
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==t[j])return dp[i][j]=fun(s,t,i+1,j+1,n,m,dp);
    return dp[i][j]=fun(s,t,i,j+1,n,m,dp);
}
    bool isSubsequence(string s, string t) {
        //s is a subse
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return fun(s,t,0,0,n,m,dp); 

    }
};