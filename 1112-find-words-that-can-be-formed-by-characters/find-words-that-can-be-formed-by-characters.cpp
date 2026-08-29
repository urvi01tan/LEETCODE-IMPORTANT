class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        int counter=0;
        for(auto it:chars)
        mp[it]++;
        for(auto it:words)
        {
            string k=it;
            unordered_map<char,int>tu=mp;
            bool found=true;
            for(auto li:k)
            {
                if(!(tu.find(li)!=tu.end() && tu[li]>0))
                {
                    found=false;
break;
                }
                if(tu.find(li)!=tu.end())
                tu[li]--;
            }
            if(found)
            {
                counter=counter+k.size();
            };
        }
        return counter;
    }
};