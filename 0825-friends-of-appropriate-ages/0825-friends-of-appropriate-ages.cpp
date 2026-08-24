class Solution {
public:
    int numFriendRequests(vector<int>& ages) {

        int cnt[121] = {};
        for (int age : ages) {
            cnt[age]++;
        }

        int ans = 0;

        for (int A = 1; A <= 120; A++) {

            for (int B = 1; B <= 120; B++) {

                if (B <= 0.5 * A + 7)
                    continue;

                if (B > A)
                    continue;

                if (B > 100 && A < 100)
                    continue;
                if (A == B) {
                    ans += cnt[A] * (cnt[A] - 1);
                }
                else {
                    ans += cnt[A] * cnt[B];
                }
            }
        }

        return ans;
    }
};