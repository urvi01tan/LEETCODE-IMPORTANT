class Solution {
public:
//generate permutation through backtractikkng
void fun(int index,vector<int>&v,vector<int>&ans,vector<int>&nums,vector<vector<int>>&re)
{
    if(ans.size()==nums.size())
    {re.push_back(ans);
    return;}
    if(index==nums.size())return;
    for(int i=0;i<nums.size();i++)
    {
        if(v[i]==0 && i!=index)
        {
            v[i]=1;
            ans.push_back(nums[i]);
            fun(i,v,ans,nums,re);
            ans.pop_back();
            v[i]=0;
        }
    }
    return ;
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        vector<int>v(n,0);
        vector<vector<int>>re;
        fun(-1,v,ans,nums,re);
        return re;
    }
};