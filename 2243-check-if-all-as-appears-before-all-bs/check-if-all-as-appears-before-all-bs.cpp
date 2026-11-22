class Solution {
public:
    bool checkString(string s) {
        //starting  me sareee a and ending b 
        int aend=-1;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='a')
            {
                aend=i;
                break;
            }
        }
        int bstart=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='b')
            {
                bstart=i;
                break;
            }
        }
    if(aend==-1||bstart==-1)return true;
        if(bstart<aend)return false;
        return true;
    }
};