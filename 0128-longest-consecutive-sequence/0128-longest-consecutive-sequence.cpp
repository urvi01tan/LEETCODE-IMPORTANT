class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int it : nums)
            mp[it] = 1;
       ;
        int maxi = 0;
        for (auto it : mp) {
            if (mp.find(it.first - 1) == mp.end()) {

               // mp[it.first] = 0;
              //  ans.push_back(it);

                int len = 0;
                int x = it.first;
                while (mp.find(x) != mp.end()) {
                    x++;
                    len++;
                }
                maxi = max(len, maxi);
            }
        }

        return maxi;
    }
};