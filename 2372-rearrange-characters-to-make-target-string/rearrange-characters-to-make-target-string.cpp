class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,int>mp;
        for(auto it:s)
        mp[it]++;
        int mini=1e8;
        unordered_map<char,int>done;
        for(auto it:target)
        done[it]++;


        for(auto it:done)
        {
            int k=it.second;
            int l=mp[it.first]/k;
            mini=min({mini,l});
        }
        return mini;
    }
};