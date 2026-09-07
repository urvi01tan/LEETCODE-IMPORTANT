class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int latest = nums[0];
        int moves = 0;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > latest) {
                latest = nums[i];
            }
            else {
                moves += latest + 1 - nums[i];
                latest++;
            }
        }

        return moves;
    }
};