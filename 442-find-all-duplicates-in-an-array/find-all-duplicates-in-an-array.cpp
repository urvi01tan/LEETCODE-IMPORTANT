class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // vector ko hi visited array ki tarah sort use karleee
        // negative kardengeeee jo dhek liyaaa
        vector<int>ans;
        for (int i = 0; i < nums.size(); i++) {
            int index = abs(nums[i])-1;
            if (nums[index] < 0) {
                ans.push_back(abs(nums[i]));
            }
            if(nums[index]>0)
            nums[index] = -1 * nums[index];
        }
        return ans;
    }
};