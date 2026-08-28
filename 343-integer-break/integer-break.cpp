class Solution {
public:
int fun(int n,int k,int sum,vector<vector<int>>&dp)
{ 
    if(sum==n)return dp[sum][k]=1;
    if(k<=0)return 0;
    if(sum>n)return 0;
    if(dp[sum][k]!=-1)return dp[sum][k];
    int pro=-1;
    for(int i=1;i<n;i++)
    {
pro=max(pro,i*fun(n,k-1,sum+i,dp));
    }
    return dp[sum][k]=pro;
}
    int integerBreak(int n) {
        vector<vector<int>>dp(n+1,vector<int>(58+1,-1));
        int loop=0;
        int k=2;
        while(k<=58)
        {
            loop=max(loop,fun(n,k,0,dp));
            k++;
        }
        return loop;
    }
};