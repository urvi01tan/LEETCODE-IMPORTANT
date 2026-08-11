class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {

        unordered_map<int, long long> mp;

        for (int x : arr)
            mp[x]++;

        long long ans = 0;

        for (auto a : mp) {

            for (auto b : mp) {

                int x = a.first;
                int y = b.first;
                int z = target - x - y;

                if (!mp.count(z))
                    continue;

                if (x > y || y > z)
                    continue;

                long long cx = mp[x];
                long long cy = mp[y];
                long long cz = mp[z];

                if (x < y && y < z) {
                    ans += cx * cy * cz;
                }

                else if (x == y && y < z) {
                    ans += (cx * (cx - 1) / 2) * cz;
                }

                else if (x < y && y == z) {
                    ans += cx * (cy * (cy - 1) / 2);
                }

                else {
                    ans += cx * (cx - 1) * (cx - 2) / 6;
                }
            }
        }

        return ans % 1000000007;
    }
};