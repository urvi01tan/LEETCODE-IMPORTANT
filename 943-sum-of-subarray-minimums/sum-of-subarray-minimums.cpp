class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        const int MOD = 1e9 + 7;
        int n = arr.size();

        vector<int> pse(n);
        vector<int> nse(n);

        // Previous Smaller Element
        stack<int> st;

        for(int i = 0; i < n; i++)
        {
            while(!st.empty() && arr[st.top()] >= arr[i])
                st.pop();

            if(st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();

            st.push(i);
        }

        // Next Smaller Element
        stack<int> next;

        for(int i = n - 1; i >= 0; i--)
        {
            while(!next.empty() && arr[next.top()] > arr[i])
                next.pop();

            if(next.empty())
                nse[i] = n;
            else
                nse[i] = next.top();

            next.push(i);
        }

        long long sum = 0;

        for(int i = 0; i < n; i++)
        {
            long long k = 1LL * arr[i]
                        * (i - pse[i])
                        * (nse[i] - i);

            k %= MOD;

            sum = (sum + k) % MOD;
        }

        return sum;
    }
};