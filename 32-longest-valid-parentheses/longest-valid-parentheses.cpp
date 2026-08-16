class Solution {
public:


void fun(int index, string &s, int &maxi)
{
    if(index == s.size())
        return;

    if(s[index] == ')')
    {
        fun(index+1, s, maxi);
        return;
    }

    int counter = 0;

    for(int i=index; i<s.size(); i++)
    {
        if(s[i]=='(')
            counter++;
        else
            counter--;

        if(counter < 0)
            break;

        if(counter == 0)
        {
            maxi = max(maxi, i-index+1);
        }
    }

    fun(index+1, s, maxi);
}
    int longestValidParentheses(string s) {
        ///counter
        int maxi=0;
        fun(0,s,maxi);
        cout<<maxi;
        return maxi;
    }
};