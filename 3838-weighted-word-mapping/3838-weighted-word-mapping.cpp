class Solution {
public:
int sum(string &it,vector<int>weights)
{
    int s=0;
    for(auto x:it)
    {
        s=s+weights[x-'a'];
    }
    return s;
}
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
       // (words[i]-'a'+25)%26 
       string ans="";
       for(auto it:words)
       {
        int s=sum(it,weights)%26;
        ans=ans+char('z'-s);
       }
       return ans;
    }
};