class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // if(pattern.size()!=s.size())return false;
        vector<string> vec;
        string k = "";
        for (auto it : s) {
            if (it == ' ') {
                vec.push_back(k);
                k = "";
            } else {
                k = k + it;
            }
        }
        vec.push_back(k);
        if (pattern.size() != vec.size())
            return false;
        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;
        for (int i = 0; i < pattern.size(); i++) {
            if (mp.find(pattern[i]) == mp.end()) {
                /////daallllldddooooooooo
                mp[pattern[i]] = vec[i];
            } else {
                if (mp[pattern[i]] == vec[i])
                    continue;
                else
                    return false;
            }
            if (mp2.find(vec[i]) == mp2.end()) {
                /////daallllldddooooooooo
                mp2[vec[i]] = pattern[i];

            } else {
                if (mp2[vec[i]] == pattern[i])
                    continue;
                else
                    return false;
            }
        }

        return true;
    }
};