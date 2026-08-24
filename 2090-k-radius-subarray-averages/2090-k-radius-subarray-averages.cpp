class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {

        int n = nums.size();

        vector<long long> ps(n);
        ps[0] = nums[0];

        for(int i = 1; i < n; i++) {
            ps[i] = ps[i-1] + nums[i];
        }

        vector<int> ans;

        for(int i = 0; i < n; i++) {

            int l = i - k;
            int r = i + k;

            if(l < 0 || r >= n) {
                ans.push_back(-1);
            }
            else {

                long long sum;

                if(l == 0)
                    sum = ps[r];
                else
                    sum = ps[r] - ps[l-1];

                ans.push_back(sum / (r-l+1));
            }
        }

        return ans;
    }
};