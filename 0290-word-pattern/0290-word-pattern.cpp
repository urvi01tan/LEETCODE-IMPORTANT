class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word;

        for (char c : s) {
            if (c == ' ') {
                words.push_back(word);
                word = "";
            } else {
                word += c;
            }
        }
        words.push_back(word);

        if (pattern.size() != words.size())
            return false;

        unordered_map<char, string> mp;
        unordered_map<string, char> mp2;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];

            // Existing mapping must be consistent
            if (mp.count(c) && mp[c] != words[i])
                return false;

            // Existing word must map to the same character
            if (mp2.count(words[i]) && mp2[words[i]] != c)
                return false;

            mp[c] = words[i];
            mp2[words[i]] = c;
        }

        return true;
    }
};