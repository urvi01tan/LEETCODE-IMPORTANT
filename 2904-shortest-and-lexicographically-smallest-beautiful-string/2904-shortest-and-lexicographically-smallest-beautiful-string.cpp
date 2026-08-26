class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int counter=0;
        int l=0;
        string re="11111111111111111111111111111111";
        int maxi=1e8;
        for(int r=0;r<s.size();r++)
        {
            if(s[r]=='1')
            {
                counter++;
            }
            while(counter>k || s[l]=='0')
            {
                if(s[l]=='1')counter--;
                l++;
            }
            if(counter==k)
            {
                int len=r-l+1;
                 string open=s.substr(l,len);
                 cout<<open<<endl;
                if(maxi>len)
                {
                    maxi=len;
               
                
                    re=open;
                }
                else if(maxi==len)
                {
                    re=min(re,open);
                }
            }
        }
        if(re=="11111111111111111111111111111111")return "";
        return re;
    }
};