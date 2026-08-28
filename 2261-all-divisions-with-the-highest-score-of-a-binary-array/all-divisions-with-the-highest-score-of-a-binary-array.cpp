class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> z(nums.size() + 1, 0);
        vector<int> o(nums.size() + 1, 0);
        int zc = 0, oc = 0;
        for (int i = 0; i < nums.size(); i++) {
            z[i] = zc;

            if (nums[i] == 0) {
                zc++;
            }
        }
        z[nums.size()] = zc;
        for (int i = nums.size() - 1; i >= 0; i--) {

            if (nums[i] == 1)
                oc++;
            o[i] = oc;
        }

        o[0] = oc;
        int maxi = -1e8;
        int counter = 0;
        vector<int> ans(nums.size() + 1, 0);
        vector<int> re;
        for (int i = 0; i < nums.size(); i++) {
            int zero = z[i];
            int one = o[i];
            int to = zero + one;

            if (to > maxi) {
                maxi = to;
            }
            ans[i] = to;
        }
        ans[nums.size()] = z[nums.size()];
        maxi = max(maxi, ans[nums.size()]);
        for (int it = 0; it < ans.size(); it++) {
            if (ans[it] == maxi)
                re.push_back(it);
        }
        return re;
    }
};