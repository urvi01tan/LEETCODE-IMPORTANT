class Solution {
public:
    int countCollisions(string directions) {
        stack<char> st;
        int ans = 0;

        for (auto it : directions) {

            if (it == 'R') {
                st.push('R');
            }

            else if (it == 'L') {

                if (!st.empty() && st.top() == 'R') {
                    ans += 2;
                    st.pop();

                    // All R behind also collide
                    while (!st.empty() && st.top() == 'R') {
                        ans++;
                        st.pop();
                    }

                    st.push('S');
                }

                else if (!st.empty() && st.top() == 'S') {
                    ans++;
                }
            }

            else { // S

                // All R before S collide
                while (!st.empty() && st.top() == 'R') {
                    ans++;
                    st.pop();
                }

                st.push('S');
            }
        }

        return ans;
    }
};