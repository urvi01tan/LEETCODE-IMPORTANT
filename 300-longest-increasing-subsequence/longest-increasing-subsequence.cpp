class Solution {
public:
int fun(int index,int prev,vector<int>&nums,vector<vector<int>>&dp)
{
    if(index==nums.size())return dp[index][prev+1]=0;
    if(dp[index][prev+1]!=-1)return dp[index][prev+1];
    int take=-1e8;
    if(prev==-1||nums[index]>nums[prev])
    {
        take=1+fun(index+1,index,nums,dp);
    }
    int nottake=0+fun(index+1,prev,nums,dp);
    return dp[index][prev+1]=max(take,nottake);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+2,-1));
        return fun(0,-1,nums,dp);
    }
};