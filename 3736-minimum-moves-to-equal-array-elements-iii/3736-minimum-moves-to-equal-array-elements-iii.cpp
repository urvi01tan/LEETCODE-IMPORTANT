class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums[nums.size()-1];
        int ans=0;
        for(auto it:nums)
        { ans=ans+abs(it-n);

        }
        return ans;
    }
};