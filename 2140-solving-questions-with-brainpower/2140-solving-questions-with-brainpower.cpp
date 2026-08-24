class Solution {
public:
long long fun(int index,vector<vector<int>>&questions,vector<long long >&dp)
{
    if(index>=questions.size())return 0;
    if(dp[index]!=-1)return dp[index];
long long skip=0+fun(index+1,questions,dp);
    long long  solve=questions[index][0]+fun(index+questions[index][1]+1,questions,dp);
    return dp[index]=max(skip,solve);
}
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long >dp(questions.size()+1,-1);
    long long l=fun(0,questions,dp);
   // cout<<l;
    return l;
    }
};