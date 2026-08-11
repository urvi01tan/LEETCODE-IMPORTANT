class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>k;
        k.push_back(words[0]);
      
        for(int i=1;i<words.size();i++)
        { string back=k[k.size()-1];
             sort(back.begin(),back.end());
             
              string hello=words[i];
sort(hello.begin(),hello.end());
if(hello==back)
{
    //noconitnh
    continue;
}
else
{
    k.push_back(words[i]);
}
        }
        return k;
    }
};