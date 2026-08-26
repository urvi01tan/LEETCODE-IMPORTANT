class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//TRACING PATHHHHHHH USING ARRAY AS VISITED ARRAYS ALSO 
        for (int i = 0; i < nums.size(); i++) {

            int ind = abs(nums[i]);

            if (nums[ind] < 0) {
                return ind;
            }

            nums[ind] = -nums[ind];
        }

        return -1;
    }
};