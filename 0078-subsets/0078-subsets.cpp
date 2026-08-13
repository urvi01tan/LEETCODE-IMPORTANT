class Solution {
public:
void printsub(int index,vector<int>&sol,vector<vector<int>>&result,vector<int>&nums)

{
    if(index>=nums.size())
    {
        result.push_back(sol);
        return;
    }
    sol.push_back(nums[index]);
    printsub(index+1,sol,result,nums);
    sol.pop_back();
    printsub(index+1,sol,result,nums);
    return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>sol;
        printsub(0,sol,result,nums);
        return result;
    }
};