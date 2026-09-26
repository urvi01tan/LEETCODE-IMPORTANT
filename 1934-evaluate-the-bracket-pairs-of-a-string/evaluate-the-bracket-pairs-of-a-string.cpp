class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        for (auto &i : knowledge)
            mp[i[0]] = i[1];

        string result = "";
        string k = "";

        int start = -1;

        for (char it : s) {

            if (it == '(') {
                start = 1;
            }
            else if (it == ')') {

                auto pos = mp.find(k);

                if (pos != mp.end())
                    result += pos->second;
                else
                    result += '?';

                k.clear();
                start = -1;
            }
            else if (start == 1) {
                k += it;
            }
            else {
                result += it;
            }
        }

        return result;
    }
};