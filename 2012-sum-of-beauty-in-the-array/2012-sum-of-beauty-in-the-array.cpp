class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n = nums.size();
        vector<int> mini(n);
        vector<int> maxi(n);

        int m = -1e8;
        for (int i = 0; i < n; i++) {
            maxi[i] = m;
            m = max(m, nums[i]);
        }
        int ma = 1e8;
        for (int i = n - 1; i >= 0; i--) {
            mini[i] = ma;
            ma = min(ma, nums[i]);
        }

        int ans = 0;
        for (int i = 1; i <= n - 2; i++) {
            int left = i;
            int right = i;
            if (maxi[left] < nums[i] && mini[right] > nums[i]) {
                ans = ans + 2;
            } else if (nums[i - 1] < nums[i] && nums[i] < nums[i + 1]) {
                ans = ans + 1;
            }
        }
        return ans;
    }
};