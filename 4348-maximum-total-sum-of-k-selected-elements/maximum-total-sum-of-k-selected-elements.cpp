class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        long long ans=0;
        while(k--)
        {
            ans=max(ans+nums[i],ans+1LL*nums[i]*mul);
            i--;
            mul--;
        }
        return ans;
    }
};