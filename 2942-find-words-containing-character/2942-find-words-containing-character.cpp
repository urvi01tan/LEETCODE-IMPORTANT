class Solution {
public:
bool find(string &a,char x)
{
    for(auto it:a)
    if(it==x)
    return true;
    return false;
}
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>k;
        for(int i=0;i<words.size();i++)
        {
            if(find(words[i],x))
            k.push_back(i);
        }
        return k;
    }
};