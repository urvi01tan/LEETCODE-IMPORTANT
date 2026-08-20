class Solution {
public:

    vector<int> dp;

    int fun(int index, vector<int>& nums, int k)
    {
        int n = nums.size();

        if(index == n)
            return 0;

        if(dp[index] != -1)
            return dp[index];

        int ans = INT_MAX;

        unordered_map<int, int> mp;

        int trim = 0;

        for(int j = index; j < n; j++)
        {
            mp[nums[j]]++;

            if(mp[nums[j]] == 2)
                trim += 2;
            else if(mp[nums[j]] > 2)
                trim++;

            int currentCost = k + trim;

            int remaining = fun(j + 1, nums, k);

            ans = min(ans, currentCost + remaining);
        }

        return dp[index] = ans;
    }

    int minCost(vector<int>& nums, int k)
    {
        int n = nums.size();

        dp.assign(n, -1);

        return fun(0, nums, k);
    }
};