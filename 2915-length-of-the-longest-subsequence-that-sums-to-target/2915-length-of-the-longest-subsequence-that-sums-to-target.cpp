class Solution {
public:
int fun(int index,vector<int>&nums,int sum,int target,vector<vector<int>>&dp)
{
    if(sum==target)return dp[index][sum]=0;
    if(sum>target)return dp[index][sum]=-1e8;
    if(index==nums.size())return -1e8;
    if(dp[index][sum]!=-1)return dp[index][sum];
    //takeeee 
    int take=-1e8;
    if(sum+nums[index]<=target)
    {
        take=1+fun(index+1,nums,sum+nums[index],target,dp);
    }
    int nottake=0+fun(index+1,nums,sum,target,dp);
 //   cout<<index<<":take:"<<take<<":nottake:"<<nottake<<endl;
    return dp[index][sum]=max(take,nottake);
}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));
        int l=fun(0,nums,0,target,dp);
        cout<<l<<endl;
        if(l<0)return -1;
        return l;
    }
};