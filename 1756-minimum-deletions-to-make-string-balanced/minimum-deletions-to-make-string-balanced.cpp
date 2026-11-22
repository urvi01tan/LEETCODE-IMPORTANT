class Solution {
public:
    int minimumDeletions(string s) {
        //STACKK APPROACHHHHH
        stack<int>st;
        int c=0;
        for(auto it:s)
        {
            if(st.empty() || st.top()==it)
            {
            st.push(it);
            }
            else if(st.top()=='a' && it=='b')
            {
                st.push(it);
            }
            else if(st.top()=='b'&& it=='a')
            {
                st.pop();
                c++;
            }
        }
        return c;
    }
};