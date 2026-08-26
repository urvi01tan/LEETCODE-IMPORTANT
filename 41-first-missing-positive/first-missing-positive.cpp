class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;

        // Skip negative numbers and zero
        while (i < nums.size() && nums[i] <= 0)
            i++;

        // No positive number exists
        if (i == nums.size())
            return 1;

        if (nums[i] > 1)
            return 1;

        int k = nums[i];

        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == k)
                continue;

            if (nums[j] > k + 1)
                return k + 1;

            k = nums[j];
        }

        return k + 1;
    }
};