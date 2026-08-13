class Solution {
public:
    void pattern(string s, int index, string curr, vector<string>& ans)
    {
        if(index == s.size())
        {
            ans.push_back(curr);
            return;
        }
        if(isdigit(s[index]))
        {
            pattern(s, index + 1, curr, ans);
            return;
        }

        curr[index] = tolower(s[index]);
        pattern(s, index + 1, curr, ans);

        curr[index] = toupper(s[index]);
        pattern(s, index + 1, curr, ans);
    }

    vector<string> letterCasePermutation(string s)
    {
        vector<string> ans;
        pattern(s, 0, s, ans);
        return ans;
    }
};