class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       unordered_map<string,int>st;
        string k="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                st[k]++;
                k="";
            }
            else
            {
                k=k+s1[i];
            }
        }
        st[k]++;
        string p="";
        for(int i=0;i<s2.size();i++)
        {
            if(s2[i]==' ')
            {st[p]++;
            p="";
            }
            else
            {
                p=p+s2[i];
            }
        }
        st[p]++;
        vector<string>re;
        for(auto it:st)
        {
            if(it.second==1)
            re.push_back(it.first);
        }
        return re;
    }
};