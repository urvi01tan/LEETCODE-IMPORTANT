class Solution {
public:
    int maxDistinct(string s) {
        //greeedyyyyyyyyyyyyyyyyyyyy
        int c=0;
    //char prev=' ';
    unordered_map<char,int>mp;
    for(auto it:s)
    {
       if(mp.find(it)==mp.end())
        {
            //prev=it;
            mp[it]=1;
            c++;
        }
        else
        {
            continue;
        }
    }
    return c;
    }
};